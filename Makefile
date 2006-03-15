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

PROJ := libz80ex
VERSION := 0.13
API_V := 0

c_files:= z80ex.c

%.o : %.c
	${CC} -D$(ENDIANNESS) -c -o $@ $<	

.PHONY : all
all:: static shared

z80ex.o: include/z80ex.h daa_table.c typedefs.h macros.h opcodes/opcodes_base.c\
opcodes/opcodes_dd.c opcodes/opcodes_fd.c opcodes/opcodes_cb.c\
opcodes/opcodes_ed.c opcodes/opcodes_ddcb.c opcodes/opcodes_fdcb.c

clean:
	rm -f *.o
	rm -f ./lib/*
	rm -rf ./libz80ex-${VERSION}.tar.gz

static: z80ex.o
	ar rs ./lib/${PROJ}.a $^
	
shared: z80ex.o
	${LINKER} --shared -Wl,-soname,${PROJ}.so.${API_V} -o ./lib/${PROJ}.so.${API_V}.${VERSION} $^	

install:
	install -d $(INSTALL_PREFIX)/lib
	install ./lib/* $(INSTALL_PREFIX)/lib
	install -d $(INSTALL_PREFIX)/include
	install -m 0664 ./include/* $(INSTALL_PREFIX)/include
	ln -sf ${PROJ}.so.${API_V}.${VERSION} $(INSTALL_PREFIX)/lib/${PROJ}.so
	/sbin/ldconfig

dist: clean
	rm -rf ./libz80ex-${VERSION}
	ln -s ./ ./libz80ex-${VERSION}
	tar --exclude libz80ex-${VERSION}/libz80ex-${VERSION} --exclude libz80ex-${VERSION}/libz80ex-${VERSION}.tar.gz -hcf - ./libz80ex-${VERSION}/ | gzip -f9 > libz80ex-${VERSION}.tar.gz
	rm -rf ./libz80ex-${VERSION}

#EOF