# Z80ex Makefile
# (for GNU make)
#
#################################################################

INSTALL_PREFIX := /usr/local
CC := gcc -ansi -pedantic -Wall -pipe -O2 -I. -I./include
LINKER := gcc

#little/big endian, choose one:
ENDIANNESS := WORDS_LITTLE_ENDIAN
#ENDIANNESS := WORDS_BIG_ENDIAN


#################################################################

PROJ := z80ex
EMU := libz80ex
DASM := libz80ex_dasm
VERSION := 0.15
VER_STR :=
API_V := 0

c_files:= z80ex.c z80ex_dasm.c

%.o : %.c
	${CC} -D$(ENDIANNESS) -c -o $@ $<	

.PHONY : all
all:: static shared

z80ex.o: include/z80ex.h include/z80ex_common.h daa_table.c typedefs.h macros.h opcodes/opcodes_base.c\
opcodes/opcodes_dd.c opcodes/opcodes_fd.c opcodes/opcodes_cb.c\
opcodes/opcodes_ed.c opcodes/opcodes_ddcb.c opcodes/opcodes_fdcb.c

z80ex_dasm.o: include/z80ex_dasm.h include/z80ex_common.h opcodes/opcodes_dasm.c

clean:
	rm -f *.o
	rm -f ./lib/*
	rm -rf ./z80ex-${VERSION}.tar.gz

static: z80ex.o z80ex_dasm.o
	ar rs ./lib/${EMU}.a z80ex.o
	ar rs ./lib/${DASM}.a z80ex_dasm.o
	
shared: z80ex.o z80ex_dasm.o
	${LINKER} --shared -Wl,-soname,${EMU}.so.${API_V} -o ./lib/${EMU}.so.${API_V}.${VERSION} z80ex.o	
	${LINKER} --shared -Wl,-soname,${DASM}.so.${API_V} -o ./lib/${DASM}.so.${API_V}.${VERSION} z80ex_dasm.o
	
install:
	install -d $(INSTALL_PREFIX)/lib
	install ./lib/* $(INSTALL_PREFIX)/lib
	install -d $(INSTALL_PREFIX)/include/z80ex
	install -m 0664 ./include/* $(INSTALL_PREFIX)/include/z80ex
	ln -sf ${EMU}.so.${API_V}.${VERSION} $(INSTALL_PREFIX)/lib/${EMU}.so
	ln -sf ${DASM}.so.${API_V}.${VERSION} $(INSTALL_PREFIX)/lib/${DASM}.so	
	/sbin/ldconfig

dist: clean
	rm -rf ./${PROJ}-${VERSION}${VER_STR}
	ln -s ./ ./${PROJ}-${VERSION}${VER_STR}
	tar --exclude ${PROJ}-${VERSION}${VER_STR}/${PROJ}-${VERSION}${VER_STR} --exclude ${PROJ}-${VERSION}${VER_STR}/${PROJ}-${VERSION}${VER_STR}.tar.gz -hcf - ./${PROJ}-${VERSION}${VER_STR}/ | gzip -f9 > ${PROJ}-${VERSION}${VER_STR}.tar.gz
	rm -rf ./${PROJ}-${VERSION}${VER_STR}

#EOF