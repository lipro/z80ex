/* autogenerated from ./opcodes_ddfd.dat, do not edit */

/*ADD IY,BC*/
static void op_FD_0x09(Z80EX_CONTEXT *cpu)
{
	ADD16(IY,BC);
	T_WAIT_UNTIL(15);
	return;
}

/*ADD IY,DE*/
static void op_FD_0x19(Z80EX_CONTEXT *cpu)
{
	ADD16(IY,DE);
	T_WAIT_UNTIL(15);
	return;
}

/*LD IY,@*/
static void op_FD_0x21(Z80EX_CONTEXT *cpu)
{
	temp_word.b.l=READ_OP();
	temp_word.b.h=READ_OP();
	LD16(IY,temp_word.w);
	T_WAIT_UNTIL(14);
	return;
}

/*LD (@),IY*/
static void op_FD_0x22(Z80EX_CONTEXT *cpu)
{
	temp_addr.b.l=READ_OP();
	temp_addr.b.h=READ_OP();
	LD_RP_TO_ADDR_MPTR_16(temp_word.w,IY, temp_addr.w);
	WRITE_MEM(temp_addr.w,temp_word.b.l,14);
	WRITE_MEM(temp_addr.w+1,temp_word.b.h,17);
	T_WAIT_UNTIL(20);
	return;
}

/*INC IY*/
static void op_FD_0x23(Z80EX_CONTEXT *cpu)
{
	INC16(IY);
	T_WAIT_UNTIL(10);
	return;
}

/*INC IYH*/
static void op_FD_0x24(Z80EX_CONTEXT *cpu)
{
	INC(IYH);
	T_WAIT_UNTIL(8);
	return;
}

/*DEC IYH*/
static void op_FD_0x25(Z80EX_CONTEXT *cpu)
{
	DEC(IYH);
	T_WAIT_UNTIL(8);
	return;
}

/*LD IYH,#*/
static void op_FD_0x26(Z80EX_CONTEXT *cpu)
{
	temp_byte=READ_OP();
	LD(IYH,temp_byte);
	T_WAIT_UNTIL(11);
	return;
}

/*ADD IY,IY*/
static void op_FD_0x29(Z80EX_CONTEXT *cpu)
{
	ADD16(IY,IY);
	T_WAIT_UNTIL(15);
	return;
}

/*LD IY,(@)*/
static void op_FD_0x2a(Z80EX_CONTEXT *cpu)
{
	temp_addr.b.l=READ_OP();
	temp_addr.b.h=READ_OP();
	READ_MEM(temp_word.b.l,temp_addr.w,14);
	READ_MEM(temp_word.b.h,temp_addr.w+1,17);
	LD_RP_FROM_ADDR_MPTR_16(IY,temp_word.w, temp_addr.w);
	T_WAIT_UNTIL(20);
	return;
}

/*DEC IY*/
static void op_FD_0x2b(Z80EX_CONTEXT *cpu)
{
	DEC16(IY);
	T_WAIT_UNTIL(10);
	return;
}

/*INC IYL*/
static void op_FD_0x2c(Z80EX_CONTEXT *cpu)
{
	INC(IYL);
	T_WAIT_UNTIL(8);
	return;
}

/*DEC IYL*/
static void op_FD_0x2d(Z80EX_CONTEXT *cpu)
{
	DEC(IYL);
	T_WAIT_UNTIL(8);
	return;
}

/*LD IYL,#*/
static void op_FD_0x2e(Z80EX_CONTEXT *cpu)
{
	temp_byte=READ_OP();
	LD(IYL,temp_byte);
	T_WAIT_UNTIL(11);
	return;
}

/*INC (IY+$)*/
static void op_FD_0x34(Z80EX_CONTEXT *cpu)
{
	temp_byte=READ_OP();
	temp_byte_s=(temp_byte & 0x80)? -(((~temp_byte) & 0x7f)+1): temp_byte;
	MEMPTR=(IY+temp_byte_s);
	READ_MEM(temp_byte,(IY+temp_byte_s),16);
	INC(temp_byte);
	WRITE_MEM((IY+temp_byte_s),temp_byte,20);
	T_WAIT_UNTIL(23);
	return;
}

/*DEC (IY+$)*/
static void op_FD_0x35(Z80EX_CONTEXT *cpu)
{
	temp_byte=READ_OP();
	temp_byte_s=(temp_byte & 0x80)? -(((~temp_byte) & 0x7f)+1): temp_byte;
	MEMPTR=(IY+temp_byte_s);
	READ_MEM(temp_byte,(IY+temp_byte_s),16);
	DEC(temp_byte);
	WRITE_MEM((IY+temp_byte_s),temp_byte,20);
	T_WAIT_UNTIL(23);
	return;
}

/*LD (IY+$),#*/
static void op_FD_0x36(Z80EX_CONTEXT *cpu)
{
	temp_byte=READ_OP();
	temp_byte_s=(temp_byte & 0x80)? -(((~temp_byte) & 0x7f)+1): temp_byte;
	MEMPTR=(IY+temp_byte_s);
	temp_byte=READ_OP();
	LD(temp_byte,temp_byte);
	WRITE_MEM((IY+temp_byte_s),temp_byte,16);
	T_WAIT_UNTIL(19);
	return;
}

/*ADD IY,SP*/
static void op_FD_0x39(Z80EX_CONTEXT *cpu)
{
	ADD16(IY,SP);
	T_WAIT_UNTIL(15);
	return;
}

/*LD B,IYH*/
static void op_FD_0x44(Z80EX_CONTEXT *cpu)
{
	LD(B,IYH);
	T_WAIT_UNTIL(8);
	return;
}

/*LD B,IYL*/
static void op_FD_0x45(Z80EX_CONTEXT *cpu)
{
	LD(B,IYL);
	T_WAIT_UNTIL(8);
	return;
}

/*LD B,(IY+$)*/
static void op_FD_0x46(Z80EX_CONTEXT *cpu)
{
	temp_byte=READ_OP();
	temp_byte_s=(temp_byte & 0x80)? -(((~temp_byte) & 0x7f)+1): temp_byte;
	MEMPTR=(IY+temp_byte_s);
	READ_MEM(temp_byte,(IY+temp_byte_s),16);
	LD(B,temp_byte);
	T_WAIT_UNTIL(19);
	return;
}

/*LD C,IYH*/
static void op_FD_0x4c(Z80EX_CONTEXT *cpu)
{
	LD(C,IYH);
	T_WAIT_UNTIL(8);
	return;
}

/*LD C,IYL*/
static void op_FD_0x4d(Z80EX_CONTEXT *cpu)
{
	LD(C,IYL);
	T_WAIT_UNTIL(8);
	return;
}

/*LD C,(IY+$)*/
static void op_FD_0x4e(Z80EX_CONTEXT *cpu)
{
	temp_byte=READ_OP();
	temp_byte_s=(temp_byte & 0x80)? -(((~temp_byte) & 0x7f)+1): temp_byte;
	MEMPTR=(IY+temp_byte_s);
	READ_MEM(temp_byte,(IY+temp_byte_s),16);
	LD(C,temp_byte);
	T_WAIT_UNTIL(19);
	return;
}

/*LD D,IYH*/
static void op_FD_0x54(Z80EX_CONTEXT *cpu)
{
	LD(D,IYH);
	T_WAIT_UNTIL(8);
	return;
}

/*LD D,IYL*/
static void op_FD_0x55(Z80EX_CONTEXT *cpu)
{
	LD(D,IYL);
	T_WAIT_UNTIL(8);
	return;
}

/*LD D,(IY+$)*/
static void op_FD_0x56(Z80EX_CONTEXT *cpu)
{
	temp_byte=READ_OP();
	temp_byte_s=(temp_byte & 0x80)? -(((~temp_byte) & 0x7f)+1): temp_byte;
	MEMPTR=(IY+temp_byte_s);
	READ_MEM(temp_byte,(IY+temp_byte_s),16);
	LD(D,temp_byte);
	T_WAIT_UNTIL(19);
	return;
}

/*LD E,IYH*/
static void op_FD_0x5c(Z80EX_CONTEXT *cpu)
{
	LD(E,IYH);
	T_WAIT_UNTIL(8);
	return;
}

/*LD E,IYL*/
static void op_FD_0x5d(Z80EX_CONTEXT *cpu)
{
	LD(E,IYL);
	T_WAIT_UNTIL(8);
	return;
}

/*LD E,(IY+$)*/
static void op_FD_0x5e(Z80EX_CONTEXT *cpu)
{
	temp_byte=READ_OP();
	temp_byte_s=(temp_byte & 0x80)? -(((~temp_byte) & 0x7f)+1): temp_byte;
	MEMPTR=(IY+temp_byte_s);
	READ_MEM(temp_byte,(IY+temp_byte_s),16);
	LD(E,temp_byte);
	T_WAIT_UNTIL(19);
	return;
}

/*LD IYH,B*/
static void op_FD_0x60(Z80EX_CONTEXT *cpu)
{
	LD(IYH,B);
	T_WAIT_UNTIL(8);
	return;
}

/*LD IYH,C*/
static void op_FD_0x61(Z80EX_CONTEXT *cpu)
{
	LD(IYH,C);
	T_WAIT_UNTIL(8);
	return;
}

/*LD IYH,D*/
static void op_FD_0x62(Z80EX_CONTEXT *cpu)
{
	LD(IYH,D);
	T_WAIT_UNTIL(8);
	return;
}

/*LD IYH,E*/
static void op_FD_0x63(Z80EX_CONTEXT *cpu)
{
	LD(IYH,E);
	T_WAIT_UNTIL(8);
	return;
}

/*LD IYH,IYH*/
static void op_FD_0x64(Z80EX_CONTEXT *cpu)
{
	LD(IYH,IYH);
	T_WAIT_UNTIL(8);
	return;
}

/*LD IYH,IYL*/
static void op_FD_0x65(Z80EX_CONTEXT *cpu)
{
	LD(IYH,IYL);
	T_WAIT_UNTIL(8);
	return;
}

/*LD H,(IY+$)*/
static void op_FD_0x66(Z80EX_CONTEXT *cpu)
{
	temp_byte=READ_OP();
	temp_byte_s=(temp_byte & 0x80)? -(((~temp_byte) & 0x7f)+1): temp_byte;
	MEMPTR=(IY+temp_byte_s);
	READ_MEM(temp_byte,(IY+temp_byte_s),16);
	LD(H,temp_byte);
	T_WAIT_UNTIL(19);
	return;
}

/*LD IYH,A*/
static void op_FD_0x67(Z80EX_CONTEXT *cpu)
{
	LD(IYH,A);
	T_WAIT_UNTIL(8);
	return;
}

/*LD IYL,B*/
static void op_FD_0x68(Z80EX_CONTEXT *cpu)
{
	LD(IYL,B);
	T_WAIT_UNTIL(8);
	return;
}

/*LD IYL,C*/
static void op_FD_0x69(Z80EX_CONTEXT *cpu)
{
	LD(IYL,C);
	T_WAIT_UNTIL(8);
	return;
}

/*LD IYL,D*/
static void op_FD_0x6a(Z80EX_CONTEXT *cpu)
{
	LD(IYL,D);
	T_WAIT_UNTIL(8);
	return;
}

/*LD IYL,E*/
static void op_FD_0x6b(Z80EX_CONTEXT *cpu)
{
	LD(IYL,E);
	T_WAIT_UNTIL(8);
	return;
}

/*LD IYL,IYH*/
static void op_FD_0x6c(Z80EX_CONTEXT *cpu)
{
	LD(IYL,IYH);
	T_WAIT_UNTIL(8);
	return;
}

/*LD IYL,IYL*/
static void op_FD_0x6d(Z80EX_CONTEXT *cpu)
{
	LD(IYL,IYL);
	T_WAIT_UNTIL(8);
	return;
}

/*LD L,(IY+$)*/
static void op_FD_0x6e(Z80EX_CONTEXT *cpu)
{
	temp_byte=READ_OP();
	temp_byte_s=(temp_byte & 0x80)? -(((~temp_byte) & 0x7f)+1): temp_byte;
	MEMPTR=(IY+temp_byte_s);
	READ_MEM(temp_byte,(IY+temp_byte_s),16);
	LD(L,temp_byte);
	T_WAIT_UNTIL(19);
	return;
}

/*LD IYL,A*/
static void op_FD_0x6f(Z80EX_CONTEXT *cpu)
{
	LD(IYL,A);
	T_WAIT_UNTIL(8);
	return;
}

/*LD (IY+$),B*/
static void op_FD_0x70(Z80EX_CONTEXT *cpu)
{
	temp_byte=READ_OP();
	temp_byte_s=(temp_byte & 0x80)? -(((~temp_byte) & 0x7f)+1): temp_byte;
	MEMPTR=(IY+temp_byte_s);
	LD(temp_byte,B);
	WRITE_MEM((IY+temp_byte_s),temp_byte,16);
	T_WAIT_UNTIL(19);
	return;
}

/*LD (IY+$),C*/
static void op_FD_0x71(Z80EX_CONTEXT *cpu)
{
	temp_byte=READ_OP();
	temp_byte_s=(temp_byte & 0x80)? -(((~temp_byte) & 0x7f)+1): temp_byte;
	MEMPTR=(IY+temp_byte_s);
	LD(temp_byte,C);
	WRITE_MEM((IY+temp_byte_s),temp_byte,16);
	T_WAIT_UNTIL(19);
	return;
}

/*LD (IY+$),D*/
static void op_FD_0x72(Z80EX_CONTEXT *cpu)
{
	temp_byte=READ_OP();
	temp_byte_s=(temp_byte & 0x80)? -(((~temp_byte) & 0x7f)+1): temp_byte;
	MEMPTR=(IY+temp_byte_s);
	LD(temp_byte,D);
	WRITE_MEM((IY+temp_byte_s),temp_byte,16);
	T_WAIT_UNTIL(19);
	return;
}

/*LD (IY+$),E*/
static void op_FD_0x73(Z80EX_CONTEXT *cpu)
{
	temp_byte=READ_OP();
	temp_byte_s=(temp_byte & 0x80)? -(((~temp_byte) & 0x7f)+1): temp_byte;
	MEMPTR=(IY+temp_byte_s);
	LD(temp_byte,E);
	WRITE_MEM((IY+temp_byte_s),temp_byte,16);
	T_WAIT_UNTIL(19);
	return;
}

/*LD (IY+$),H*/
static void op_FD_0x74(Z80EX_CONTEXT *cpu)
{
	temp_byte=READ_OP();
	temp_byte_s=(temp_byte & 0x80)? -(((~temp_byte) & 0x7f)+1): temp_byte;
	MEMPTR=(IY+temp_byte_s);
	LD(temp_byte,H);
	WRITE_MEM((IY+temp_byte_s),temp_byte,16);
	T_WAIT_UNTIL(19);
	return;
}

/*LD (IY+$),L*/
static void op_FD_0x75(Z80EX_CONTEXT *cpu)
{
	temp_byte=READ_OP();
	temp_byte_s=(temp_byte & 0x80)? -(((~temp_byte) & 0x7f)+1): temp_byte;
	MEMPTR=(IY+temp_byte_s);
	LD(temp_byte,L);
	WRITE_MEM((IY+temp_byte_s),temp_byte,16);
	T_WAIT_UNTIL(19);
	return;
}

/*LD (IY+$),A*/
static void op_FD_0x77(Z80EX_CONTEXT *cpu)
{
	temp_byte=READ_OP();
	temp_byte_s=(temp_byte & 0x80)? -(((~temp_byte) & 0x7f)+1): temp_byte;
	MEMPTR=(IY+temp_byte_s);
	LD(temp_byte,A);
	WRITE_MEM((IY+temp_byte_s),temp_byte,16);
	T_WAIT_UNTIL(19);
	return;
}

/*LD A,IYH*/
static void op_FD_0x7c(Z80EX_CONTEXT *cpu)
{
	LD(A,IYH);
	T_WAIT_UNTIL(8);
	return;
}

/*LD A,IYL*/
static void op_FD_0x7d(Z80EX_CONTEXT *cpu)
{
	LD(A,IYL);
	T_WAIT_UNTIL(8);
	return;
}

/*LD A,(IY+$)*/
static void op_FD_0x7e(Z80EX_CONTEXT *cpu)
{
	temp_byte=READ_OP();
	temp_byte_s=(temp_byte & 0x80)? -(((~temp_byte) & 0x7f)+1): temp_byte;
	MEMPTR=(IY+temp_byte_s);
	READ_MEM(temp_byte,(IY+temp_byte_s),16);
	LD(A,temp_byte);
	T_WAIT_UNTIL(19);
	return;
}

/*ADD A,IYH*/
static void op_FD_0x84(Z80EX_CONTEXT *cpu)
{
	ADD(A,IYH);
	T_WAIT_UNTIL(8);
	return;
}

/*ADD A,IYL*/
static void op_FD_0x85(Z80EX_CONTEXT *cpu)
{
	ADD(A,IYL);
	T_WAIT_UNTIL(8);
	return;
}

/*ADD A,(IY+$)*/
static void op_FD_0x86(Z80EX_CONTEXT *cpu)
{
	temp_byte=READ_OP();
	temp_byte_s=(temp_byte & 0x80)? -(((~temp_byte) & 0x7f)+1): temp_byte;
	MEMPTR=(IY+temp_byte_s);
	READ_MEM(temp_byte,(IY+temp_byte_s),16);
	ADD(A,temp_byte);
	T_WAIT_UNTIL(19);
	return;
}

/*ADC A,IYH*/
static void op_FD_0x8c(Z80EX_CONTEXT *cpu)
{
	ADC(A,IYH);
	T_WAIT_UNTIL(8);
	return;
}

/*ADC A,IYL*/
static void op_FD_0x8d(Z80EX_CONTEXT *cpu)
{
	ADC(A,IYL);
	T_WAIT_UNTIL(8);
	return;
}

/*ADC A,(IY+$)*/
static void op_FD_0x8e(Z80EX_CONTEXT *cpu)
{
	temp_byte=READ_OP();
	temp_byte_s=(temp_byte & 0x80)? -(((~temp_byte) & 0x7f)+1): temp_byte;
	MEMPTR=(IY+temp_byte_s);
	READ_MEM(temp_byte,(IY+temp_byte_s),16);
	ADC(A,temp_byte);
	T_WAIT_UNTIL(19);
	return;
}

/*SUB IYH*/
static void op_FD_0x94(Z80EX_CONTEXT *cpu)
{
	SUB(IYH);
	T_WAIT_UNTIL(8);
	return;
}

/*SUB IYL*/
static void op_FD_0x95(Z80EX_CONTEXT *cpu)
{
	SUB(IYL);
	T_WAIT_UNTIL(8);
	return;
}

/*SUB (IY+$)*/
static void op_FD_0x96(Z80EX_CONTEXT *cpu)
{
	temp_byte=READ_OP();
	temp_byte_s=(temp_byte & 0x80)? -(((~temp_byte) & 0x7f)+1): temp_byte;
	MEMPTR=(IY+temp_byte_s);
	READ_MEM(temp_byte,(IY+temp_byte_s),16);
	SUB(temp_byte);
	T_WAIT_UNTIL(19);
	return;
}

/*SBC A,IYH*/
static void op_FD_0x9c(Z80EX_CONTEXT *cpu)
{
	SBC(A,IYH);
	T_WAIT_UNTIL(8);
	return;
}

/*SBC A,IYL*/
static void op_FD_0x9d(Z80EX_CONTEXT *cpu)
{
	SBC(A,IYL);
	T_WAIT_UNTIL(8);
	return;
}

/*SBC A,(IY+$)*/
static void op_FD_0x9e(Z80EX_CONTEXT *cpu)
{
	temp_byte=READ_OP();
	temp_byte_s=(temp_byte & 0x80)? -(((~temp_byte) & 0x7f)+1): temp_byte;
	MEMPTR=(IY+temp_byte_s);
	READ_MEM(temp_byte,(IY+temp_byte_s),16);
	SBC(A,temp_byte);
	T_WAIT_UNTIL(19);
	return;
}

/*AND IYH*/
static void op_FD_0xa4(Z80EX_CONTEXT *cpu)
{
	AND(IYH);
	T_WAIT_UNTIL(8);
	return;
}

/*AND IYL*/
static void op_FD_0xa5(Z80EX_CONTEXT *cpu)
{
	AND(IYL);
	T_WAIT_UNTIL(8);
	return;
}

/*AND (IY+$)*/
static void op_FD_0xa6(Z80EX_CONTEXT *cpu)
{
	temp_byte=READ_OP();
	temp_byte_s=(temp_byte & 0x80)? -(((~temp_byte) & 0x7f)+1): temp_byte;
	MEMPTR=(IY+temp_byte_s);
	READ_MEM(temp_byte,(IY+temp_byte_s),16);
	AND(temp_byte);
	T_WAIT_UNTIL(19);
	return;
}

/*XOR IYH*/
static void op_FD_0xac(Z80EX_CONTEXT *cpu)
{
	XOR(IYH);
	T_WAIT_UNTIL(8);
	return;
}

/*XOR IYL*/
static void op_FD_0xad(Z80EX_CONTEXT *cpu)
{
	XOR(IYL);
	T_WAIT_UNTIL(8);
	return;
}

/*XOR (IY+$)*/
static void op_FD_0xae(Z80EX_CONTEXT *cpu)
{
	temp_byte=READ_OP();
	temp_byte_s=(temp_byte & 0x80)? -(((~temp_byte) & 0x7f)+1): temp_byte;
	MEMPTR=(IY+temp_byte_s);
	READ_MEM(temp_byte,(IY+temp_byte_s),16);
	XOR(temp_byte);
	T_WAIT_UNTIL(19);
	return;
}

/*OR IYH*/
static void op_FD_0xb4(Z80EX_CONTEXT *cpu)
{
	OR(IYH);
	T_WAIT_UNTIL(8);
	return;
}

/*OR IYL*/
static void op_FD_0xb5(Z80EX_CONTEXT *cpu)
{
	OR(IYL);
	T_WAIT_UNTIL(8);
	return;
}

/*OR (IY+$)*/
static void op_FD_0xb6(Z80EX_CONTEXT *cpu)
{
	temp_byte=READ_OP();
	temp_byte_s=(temp_byte & 0x80)? -(((~temp_byte) & 0x7f)+1): temp_byte;
	MEMPTR=(IY+temp_byte_s);
	READ_MEM(temp_byte,(IY+temp_byte_s),16);
	OR(temp_byte);
	T_WAIT_UNTIL(19);
	return;
}

/*CP IYH*/
static void op_FD_0xbc(Z80EX_CONTEXT *cpu)
{
	CP(IYH);
	T_WAIT_UNTIL(8);
	return;
}

/*CP IYL*/
static void op_FD_0xbd(Z80EX_CONTEXT *cpu)
{
	CP(IYL);
	T_WAIT_UNTIL(8);
	return;
}

/*CP (IY+$)*/
static void op_FD_0xbe(Z80EX_CONTEXT *cpu)
{
	temp_byte=READ_OP();
	temp_byte_s=(temp_byte & 0x80)? -(((~temp_byte) & 0x7f)+1): temp_byte;
	MEMPTR=(IY+temp_byte_s);
	READ_MEM(temp_byte,(IY+temp_byte_s),16);
	CP(temp_byte);
	T_WAIT_UNTIL(19);
	return;
}



/*POP IY*/
static void op_FD_0xe1(Z80EX_CONTEXT *cpu)
{
	POP(IY, /*rd*/8,11);
	T_WAIT_UNTIL(14);
	return;
}

/*EX (SP),IY*/
static void op_FD_0xe3(Z80EX_CONTEXT *cpu)
{
	READ_MEM(temp_word.b.l,(SP),8);
	READ_MEM(temp_word.b.h,(SP+1),11);
	EX_MPTR(temp_word.w,IY);
	WRITE_MEM((SP),temp_word.b.l,15);
	WRITE_MEM((SP+1),temp_word.b.h,18);
	T_WAIT_UNTIL(23);
	return;
}

/*PUSH IY*/
static void op_FD_0xe5(Z80EX_CONTEXT *cpu)
{
	PUSH(IY, /*wr*/9,12);
	T_WAIT_UNTIL(15);
	return;
}

/*JP IY*/
static void op_FD_0xe9(Z80EX_CONTEXT *cpu)
{
	JP_NO_MPTR(IY);
	T_WAIT_UNTIL(8);
	return;
}

/*LD SP,IY*/
static void op_FD_0xf9(Z80EX_CONTEXT *cpu)
{
	LD16(SP,IY);
	T_WAIT_UNTIL(10);
	return;
}



/**/
static z80ex_opcode_fn opcodes_fd[0x100] = {
 NULL          , NULL          , NULL          , NULL          ,
 NULL          , NULL          , NULL          , NULL          ,
 NULL          , op_FD_0x09    , NULL          , NULL          ,
 NULL          , NULL          , NULL          , NULL          ,
 NULL          , NULL          , NULL          , NULL          ,
 NULL          , NULL          , NULL          , NULL          ,
 NULL          , op_FD_0x19    , NULL          , NULL          ,
 NULL          , NULL          , NULL          , NULL          ,
 NULL          , op_FD_0x21    , op_FD_0x22    , op_FD_0x23    ,
 op_FD_0x24    , op_FD_0x25    , op_FD_0x26    , NULL          ,
 NULL          , op_FD_0x29    , op_FD_0x2a    , op_FD_0x2b    ,
 op_FD_0x2c    , op_FD_0x2d    , op_FD_0x2e    , NULL          ,
 NULL          , NULL          , NULL          , NULL          ,
 op_FD_0x34    , op_FD_0x35    , op_FD_0x36    , NULL          ,
 NULL          , op_FD_0x39    , NULL          , NULL          ,
 NULL          , NULL          , NULL          , NULL          ,
 NULL          , NULL          , NULL          , NULL          ,
 op_FD_0x44    , op_FD_0x45    , op_FD_0x46    , NULL          ,
 NULL          , NULL          , NULL          , NULL          ,
 op_FD_0x4c    , op_FD_0x4d    , op_FD_0x4e    , NULL          ,
 NULL          , NULL          , NULL          , NULL          ,
 op_FD_0x54    , op_FD_0x55    , op_FD_0x56    , NULL          ,
 NULL          , NULL          , NULL          , NULL          ,
 op_FD_0x5c    , op_FD_0x5d    , op_FD_0x5e    , NULL          ,
 op_FD_0x60    , op_FD_0x61    , op_FD_0x62    , op_FD_0x63    ,
 op_FD_0x64    , op_FD_0x65    , op_FD_0x66    , op_FD_0x67    ,
 op_FD_0x68    , op_FD_0x69    , op_FD_0x6a    , op_FD_0x6b    ,
 op_FD_0x6c    , op_FD_0x6d    , op_FD_0x6e    , op_FD_0x6f    ,
 op_FD_0x70    , op_FD_0x71    , op_FD_0x72    , op_FD_0x73    ,
 op_FD_0x74    , op_FD_0x75    , NULL          , op_FD_0x77    ,
 NULL          , NULL          , NULL          , NULL          ,
 op_FD_0x7c    , op_FD_0x7d    , op_FD_0x7e    , NULL          ,
 NULL          , NULL          , NULL          , NULL          ,
 op_FD_0x84    , op_FD_0x85    , op_FD_0x86    , NULL          ,
 NULL          , NULL          , NULL          , NULL          ,
 op_FD_0x8c    , op_FD_0x8d    , op_FD_0x8e    , NULL          ,
 NULL          , NULL          , NULL          , NULL          ,
 op_FD_0x94    , op_FD_0x95    , op_FD_0x96    , NULL          ,
 NULL          , NULL          , NULL          , NULL          ,
 op_FD_0x9c    , op_FD_0x9d    , op_FD_0x9e    , NULL          ,
 NULL          , NULL          , NULL          , NULL          ,
 op_FD_0xa4    , op_FD_0xa5    , op_FD_0xa6    , NULL          ,
 NULL          , NULL          , NULL          , NULL          ,
 op_FD_0xac    , op_FD_0xad    , op_FD_0xae    , NULL          ,
 NULL          , NULL          , NULL          , NULL          ,
 op_FD_0xb4    , op_FD_0xb5    , op_FD_0xb6    , NULL          ,
 NULL          , NULL          , NULL          , NULL          ,
 op_FD_0xbc    , op_FD_0xbd    , op_FD_0xbe    , NULL          ,
 NULL          , NULL          , NULL          , NULL          ,
 NULL          , NULL          , NULL          , NULL          ,
 NULL          , NULL          , NULL          , opc_FDCB      ,
 NULL          , NULL          , NULL          , NULL          ,
 NULL          , NULL          , NULL          , NULL          ,
 NULL          , NULL          , NULL          , NULL          ,
 NULL          , NULL          , NULL          , NULL          ,
 NULL          , NULL          , NULL          , NULL          ,
 NULL          , op_FD_0xe1    , NULL          , op_FD_0xe3    ,
 NULL          , op_FD_0xe5    , NULL          , NULL          ,
 NULL          , op_FD_0xe9    , NULL          , NULL          ,
 NULL          , NULL          , NULL          , NULL          ,
 NULL          , NULL          , NULL          , NULL          ,
 NULL          , NULL          , NULL          , NULL          ,
 NULL          , op_FD_0xf9    , NULL          , NULL          ,
 NULL          , NULL          , NULL          , NULL          
};
