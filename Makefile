# Z80ex Makefile
# (for GNU make)
#
#################################################################

VERSION := 0.1
INSTALL_PREFIX := /usr/local
CC := gcc -ansi -Wall -pipe -O2 -I. -I./include
LINKER := gcc

#################################################################

PROJ := libz80ex
API_V := 0

c_files:= z80ex.c

%.o : %.c
	${CC} -c -o $@ $<	

.PHONY : all
all:: static shared

z80ex.o: include/z80ex.h typedefs.h macros.h opcodes/opcodes_base.c\
opcodes/opcodes_dd.c opcodes/opcodes_fd.c opcodes/opcodes_cb.c\
opcodes/opcodes_ed.c opcodes/opcodes_ddcb.c opcodes/opcodes_fdcb.c

clean:
	rm -f *.o
	rm -f ./lib/*

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
	rm -rf ./libz80ex-${VERSION}.tar.gz
	rm -rf ./libz80ex-${VERSION}
	ln -s ./ ./libz80ex-${VERSION}
	tar --exclude libz80ex-${VERSION}/libz80ex-${VERSION} -hcf - ./libz80ex-${VERSION}/ | gzip -f9 > libz80ex-${VERSION}.tar.gz
	rm -rf ./libz80ex-${VERSION}

#EOF