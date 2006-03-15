/* autogenerated from ./opcodes_ed.dat, do not edit */

/*IN B,(C)*/
static void op_ED_0x40(Z80EX_CONTEXT *cpu)
{
	IN(B,BC, /*rd*/9);
	T_WAIT_UNTIL(12);
	return;
}

/*OUT (C),B*/
static void op_ED_0x41(Z80EX_CONTEXT *cpu)
{
	OUT(BC,B, /*wr*/9);
	T_WAIT_UNTIL(12);
	return;
}

/*SBC HL,BC*/
static void op_ED_0x42(Z80EX_CONTEXT *cpu)
{
	SBC16(HL,BC);
	T_WAIT_UNTIL(15);
	return;
}

/*LD (@),BC*/
static void op_ED_0x43(Z80EX_CONTEXT *cpu)
{
	temp_addr.b.l=READ_OP();
	temp_addr.b.h=READ_OP();
	LD_RP_TO_ADDR_MPTR_16(temp_word.w,BC, temp_addr.w);
	WRITE_MEM(temp_addr.w,temp_word.b.l,14);
	WRITE_MEM(temp_addr.w+1,temp_word.b.h,17);
	T_WAIT_UNTIL(20);
	return;
}

/*NEG*/
static void op_ED_0x44(Z80EX_CONTEXT *cpu)
{
	NEG();
	T_WAIT_UNTIL(8);
	return;
}

/*RETN*/
static void op_ED_0x45(Z80EX_CONTEXT *cpu)
{
	RETN(/*rd*/8,11);
	T_WAIT_UNTIL(14);
	return;
}

/*IM 0*/
static void op_ED_0x46(Z80EX_CONTEXT *cpu)
{
	IM_(IM0);
	T_WAIT_UNTIL(8);
	return;
}

/*LD I,A*/
static void op_ED_0x47(Z80EX_CONTEXT *cpu)
{
	LD(I,A);
	T_WAIT_UNTIL(9);
	return;
}

/*IN C,(C)*/
static void op_ED_0x48(Z80EX_CONTEXT *cpu)
{
	IN(C,BC, /*rd*/9);
	T_WAIT_UNTIL(12);
	return;
}

/*OUT (C),C*/
static void op_ED_0x49(Z80EX_CONTEXT *cpu)
{
	OUT(BC,C, /*wr*/9);
	T_WAIT_UNTIL(12);
	return;
}

/*ADC HL,BC*/
static void op_ED_0x4a(Z80EX_CONTEXT *cpu)
{
	ADC16(HL,BC);
	T_WAIT_UNTIL(15);
	return;
}

/*LD BC,(@)*/
static void op_ED_0x4b(Z80EX_CONTEXT *cpu)
{
	temp_addr.b.l=READ_OP();
	temp_addr.b.h=READ_OP();
	READ_MEM(temp_word.b.l,temp_addr.w,14);
	READ_MEM(temp_word.b.h,temp_addr.w+1,17);
	LD_RP_FROM_ADDR_MPTR_16(BC,temp_word.w, temp_addr.w);
	T_WAIT_UNTIL(20);
	return;
}

/*NEG*/
static void op_ED_0x4c(Z80EX_CONTEXT *cpu)
{
	NEG();
	T_WAIT_UNTIL(8);
	return;
}

/*RETI*/
static void op_ED_0x4d(Z80EX_CONTEXT *cpu)
{
	RETI(/*rd*/8,11);
	T_WAIT_UNTIL(14);
	return;
}

/*IM 0*/
static void op_ED_0x4e(Z80EX_CONTEXT *cpu)
{
	IM_(IM0);
	T_WAIT_UNTIL(8);
	return;
}

/*LD R,A*/
static void op_ED_0x4f(Z80EX_CONTEXT *cpu)
{
	LD_R_A();
	T_WAIT_UNTIL(9);
	return;
}

/*IN D,(C)*/
static void op_ED_0x50(Z80EX_CONTEXT *cpu)
{
	IN(D,BC, /*rd*/9);
	T_WAIT_UNTIL(12);
	return;
}

/*OUT (C),D*/
static void op_ED_0x51(Z80EX_CONTEXT *cpu)
{
	OUT(BC,D, /*wr*/9);
	T_WAIT_UNTIL(12);
	return;
}

/*SBC HL,DE*/
static void op_ED_0x52(Z80EX_CONTEXT *cpu)
{
	SBC16(HL,DE);
	T_WAIT_UNTIL(15);
	return;
}

/*LD (@),DE*/
static void op_ED_0x53(Z80EX_CONTEXT *cpu)
{
	temp_addr.b.l=READ_OP();
	temp_addr.b.h=READ_OP();
	LD_RP_TO_ADDR_MPTR_16(temp_word.w,DE, temp_addr.w);
	WRITE_MEM(temp_addr.w,temp_word.b.l,14);
	WRITE_MEM(temp_addr.w+1,temp_word.b.h,17);
	T_WAIT_UNTIL(20);
	return;
}

/*NEG*/
static void op_ED_0x54(Z80EX_CONTEXT *cpu)
{
	NEG();
	T_WAIT_UNTIL(8);
	return;
}

/*RETN*/
static void op_ED_0x55(Z80EX_CONTEXT *cpu)
{
	RETN(/*rd*/8,11);
	T_WAIT_UNTIL(14);
	return;
}

/*IM 1*/
static void op_ED_0x56(Z80EX_CONTEXT *cpu)
{
	IM_(IM1);
	T_WAIT_UNTIL(8);
	return;
}

/*LD A,I*/
static void op_ED_0x57(Z80EX_CONTEXT *cpu)
{
	LD_A_I();
	T_WAIT_UNTIL(9);
	return;
}

/*IN E,(C)*/
static void op_ED_0x58(Z80EX_CONTEXT *cpu)
{
	IN(E,BC, /*rd*/9);
	T_WAIT_UNTIL(12);
	return;
}

/*OUT (C),E*/
static void op_ED_0x59(Z80EX_CONTEXT *cpu)
{
	OUT(BC,E, /*wr*/9);
	T_WAIT_UNTIL(12);
	return;
}

/*ADC HL,DE*/
static void op_ED_0x5a(Z80EX_CONTEXT *cpu)
{
	ADC16(HL,DE);
	T_WAIT_UNTIL(15);
	return;
}

/*LD DE,(@)*/
static void op_ED_0x5b(Z80EX_CONTEXT *cpu)
{
	temp_addr.b.l=READ_OP();
	temp_addr.b.h=READ_OP();
	READ_MEM(temp_word.b.l,temp_addr.w,14);
	READ_MEM(temp_word.b.h,temp_addr.w+1,17);
	LD_RP_FROM_ADDR_MPTR_16(DE,temp_word.w, temp_addr.w);
	T_WAIT_UNTIL(20);
	return;
}

/*NEG*/
static void op_ED_0x5c(Z80EX_CONTEXT *cpu)
{
	NEG();
	T_WAIT_UNTIL(8);
	return;
}

/*RETI*/
static void op_ED_0x5d(Z80EX_CONTEXT *cpu)
{
	RETI(/*rd*/8,11);
	T_WAIT_UNTIL(14);
	return;
}

/*IM 2*/
static void op_ED_0x5e(Z80EX_CONTEXT *cpu)
{
	IM_(IM2);
	T_WAIT_UNTIL(8);
	return;
}

/*LD A,R*/
static void op_ED_0x5f(Z80EX_CONTEXT *cpu)
{
	LD_A_R();
	T_WAIT_UNTIL(9);
	return;
}

/*IN H,(C)*/
static void op_ED_0x60(Z80EX_CONTEXT *cpu)
{
	IN(H,BC, /*rd*/9);
	T_WAIT_UNTIL(12);
	return;
}

/*OUT (C),H*/
static void op_ED_0x61(Z80EX_CONTEXT *cpu)
{
	OUT(BC,H, /*wr*/9);
	T_WAIT_UNTIL(12);
	return;
}

/*SBC HL,HL*/
static void op_ED_0x62(Z80EX_CONTEXT *cpu)
{
	SBC16(HL,HL);
	T_WAIT_UNTIL(15);
	return;
}

/*LD (@),HL*/
static void op_ED_0x63(Z80EX_CONTEXT *cpu)
{
	temp_addr.b.l=READ_OP();
	temp_addr.b.h=READ_OP();
	LD_RP_TO_ADDR_MPTR_16(temp_word.w,HL, temp_addr.w);
	WRITE_MEM(temp_addr.w,temp_word.b.l,14);
	WRITE_MEM(temp_addr.w+1,temp_word.b.h,17);
	T_WAIT_UNTIL(20);
	return;
}

/*NEG*/
static void op_ED_0x64(Z80EX_CONTEXT *cpu)
{
	NEG();
	T_WAIT_UNTIL(8);
	return;
}

/*RETN*/
static void op_ED_0x65(Z80EX_CONTEXT *cpu)
{
	RETN(/*rd*/8,11);
	T_WAIT_UNTIL(14);
	return;
}

/*IM 0*/
static void op_ED_0x66(Z80EX_CONTEXT *cpu)
{
	IM_(IM0);
	T_WAIT_UNTIL(8);
	return;
}

/*RRD*/
static void op_ED_0x67(Z80EX_CONTEXT *cpu)
{
	RRD(/*rd*/8, /*wr*/15);
	T_WAIT_UNTIL(18);
	return;
}

/*IN L,(C)*/
static void op_ED_0x68(Z80EX_CONTEXT *cpu)
{
	IN(L,BC, /*rd*/9);
	T_WAIT_UNTIL(12);
	return;
}

/*OUT (C),L*/
static void op_ED_0x69(Z80EX_CONTEXT *cpu)
{
	OUT(BC,L, /*wr*/9);
	T_WAIT_UNTIL(12);
	return;
}

/*ADC HL,HL*/
static void op_ED_0x6a(Z80EX_CONTEXT *cpu)
{
	ADC16(HL,HL);
	T_WAIT_UNTIL(15);
	return;
}

/*LD HL,(@)*/
static void op_ED_0x6b(Z80EX_CONTEXT *cpu)
{
	temp_addr.b.l=READ_OP();
	temp_addr.b.h=READ_OP();
	READ_MEM(temp_word.b.l,temp_addr.w,14);
	READ_MEM(temp_word.b.h,temp_addr.w+1,17);
	LD_RP_FROM_ADDR_MPTR_16(HL,temp_word.w, temp_addr.w);
	T_WAIT_UNTIL(20);
	return;
}

/*NEG*/
static void op_ED_0x6c(Z80EX_CONTEXT *cpu)
{
	NEG();
	T_WAIT_UNTIL(8);
	return;
}

/*RETI*/
static void op_ED_0x6d(Z80EX_CONTEXT *cpu)
{
	RETI(/*rd*/8,11);
	T_WAIT_UNTIL(14);
	return;
}

/*IM 0*/
static void op_ED_0x6e(Z80EX_CONTEXT *cpu)
{
	IM_(IM0);
	T_WAIT_UNTIL(8);
	return;
}

/*RLD*/
static void op_ED_0x6f(Z80EX_CONTEXT *cpu)
{
	RLD(/*rd*/8, /*wr*/15);
	T_WAIT_UNTIL(18);
	return;
}

/*IN_F (C)*/
static void op_ED_0x70(Z80EX_CONTEXT *cpu)
{
	IN_F(BC, /*rd*/9);
	T_WAIT_UNTIL(12);
	return;
}

/*OUT (C),0*/
static void op_ED_0x71(Z80EX_CONTEXT *cpu)
{
	OUT(BC,0, /*wr*/9);
	T_WAIT_UNTIL(12);
	return;
}

/*SBC HL,SP*/
static void op_ED_0x72(Z80EX_CONTEXT *cpu)
{
	SBC16(HL,SP);
	T_WAIT_UNTIL(15);
	return;
}

/*LD (@),SP*/
static void op_ED_0x73(Z80EX_CONTEXT *cpu)
{
	temp_addr.b.l=READ_OP();
	temp_addr.b.h=READ_OP();
	LD_RP_TO_ADDR_MPTR_16(temp_word.w,SP, temp_addr.w);
	WRITE_MEM(temp_addr.w,temp_word.b.l,14);
	WRITE_MEM(temp_addr.w+1,temp_word.b.h,17);
	T_WAIT_UNTIL(20);
	return;
}

/*NEG*/
static void op_ED_0x74(Z80EX_CONTEXT *cpu)
{
	NEG();
	T_WAIT_UNTIL(8);
	return;
}

/*RETN*/
static void op_ED_0x75(Z80EX_CONTEXT *cpu)
{
	RETN(/*rd*/8,11);
	T_WAIT_UNTIL(14);
	return;
}

/*IM 1*/
static void op_ED_0x76(Z80EX_CONTEXT *cpu)
{
	IM_(IM1);
	T_WAIT_UNTIL(8);
	return;
}

/*IN A,(C)*/
static void op_ED_0x78(Z80EX_CONTEXT *cpu)
{
	IN(A,BC, /*rd*/9);
	T_WAIT_UNTIL(12);
	return;
}

/*OUT (C),A*/
static void op_ED_0x79(Z80EX_CONTEXT *cpu)
{
	OUT(BC,A, /*wr*/9);
	T_WAIT_UNTIL(12);
	return;
}

/*ADC HL,SP*/
static void op_ED_0x7a(Z80EX_CONTEXT *cpu)
{
	ADC16(HL,SP);
	T_WAIT_UNTIL(15);
	return;
}

/*LD SP,(@)*/
static void op_ED_0x7b(Z80EX_CONTEXT *cpu)
{
	temp_addr.b.l=READ_OP();
	temp_addr.b.h=READ_OP();
	READ_MEM(temp_word.b.l,temp_addr.w,14);
	READ_MEM(temp_word.b.h,temp_addr.w+1,17);
	LD_RP_FROM_ADDR_MPTR_16(SP,temp_word.w, temp_addr.w);
	T_WAIT_UNTIL(20);
	return;
}

/*NEG*/
static void op_ED_0x7c(Z80EX_CONTEXT *cpu)
{
	NEG();
	T_WAIT_UNTIL(8);
	return;
}

/*RETI*/
static void op_ED_0x7d(Z80EX_CONTEXT *cpu)
{
	RETI(/*rd*/8,11);
	T_WAIT_UNTIL(14);
	return;
}

/*IM 2*/
static void op_ED_0x7e(Z80EX_CONTEXT *cpu)
{
	IM_(IM2);
	T_WAIT_UNTIL(8);
	return;
}

/*LDI*/
static void op_ED_0xa0(Z80EX_CONTEXT *cpu)
{
	LDI(/*rd*/8, /*wr*/11);
	T_WAIT_UNTIL(16);
	return;
}

/*CPI*/
static void op_ED_0xa1(Z80EX_CONTEXT *cpu)
{
	CPI(/*rd*/8);
	T_WAIT_UNTIL(16);
	return;
}

/*INI*/
static void op_ED_0xa2(Z80EX_CONTEXT *cpu)
{
	INI(/*rd*/10, /*wr*/13);
	T_WAIT_UNTIL(16);
	return;
}

/*OUTI*/
static void op_ED_0xa3(Z80EX_CONTEXT *cpu)
{
	OUTI(/*rd*/9, /*wr*/13);
	T_WAIT_UNTIL(16);
	return;
}

/*LDD*/
static void op_ED_0xa8(Z80EX_CONTEXT *cpu)
{
	LDD(/*rd*/8, /*wr*/11);
	T_WAIT_UNTIL(16);
	return;
}

/*CPD*/
static void op_ED_0xa9(Z80EX_CONTEXT *cpu)
{
	CPD(/*rd*/8);
	T_WAIT_UNTIL(16);
	return;
}

/*IND*/
static void op_ED_0xaa(Z80EX_CONTEXT *cpu)
{
	IND(/*rd*/10, /*wr*/13);
	T_WAIT_UNTIL(16);
	return;
}

/*OUTD*/
static void op_ED_0xab(Z80EX_CONTEXT *cpu)
{
	OUTD(/*rd*/9, /*wr*/13);
	T_WAIT_UNTIL(16);
	return;
}

/*LDIR*/
static void op_ED_0xb0(Z80EX_CONTEXT *cpu)
{
	LDIR(/*t:*/ /*t1*/16,/*t2*/21, /*rd*/8, /*wr*/11);
	return;
}

/*CPIR*/
static void op_ED_0xb1(Z80EX_CONTEXT *cpu)
{
	CPIR(/*t:*/ /*t1*/16,/*t2*/21, /*rd*/8);
	return;
}

/*INIR*/
static void op_ED_0xb2(Z80EX_CONTEXT *cpu)
{
	INIR(/*t:*/ /*t1*/16,/*t2*/21, /*rd*/10, /*wr*/13);
	return;
}

/*OTIR*/
static void op_ED_0xb3(Z80EX_CONTEXT *cpu)
{
	OTIR(/*t:*/ /*t1*/16,/*t2*/21, /*rd*/9, /*wr*/13);
	return;
}

/*LDDR*/
static void op_ED_0xb8(Z80EX_CONTEXT *cpu)
{
	LDDR(/*t:*/ /*t1*/16,/*t2*/21, /*rd*/8, /*wr*/11);
	return;
}

/*CPDR*/
static void op_ED_0xb9(Z80EX_CONTEXT *cpu)
{
	CPDR(/*t:*/ /*t1*/16,/*t2*/21, /*rd*/8);
	return;
}

/*INDR*/
static void op_ED_0xba(Z80EX_CONTEXT *cpu)
{
	INDR(/*t:*/ /*t1*/16,/*t2*/21, /*rd*/10, /*wr*/13);
	return;
}

/*OTDR*/
static void op_ED_0xbb(Z80EX_CONTEXT *cpu)
{
	OTDR(/*t:*/ /*t1*/16,/*t2*/21, /*rd*/9, /*wr*/13);
	return;
}



/**/
static z80ex_opcode_fn opcodes_ed[0x100] = {
 NULL          , NULL          , NULL          , NULL          ,
 NULL          , NULL          , NULL          , NULL          ,
 NULL          , NULL          , NULL          , NULL          ,
 NULL          , NULL          , NULL          , NULL          ,
 NULL          , NULL          , NULL          , NULL          ,
 NULL          , NULL          , NULL          , NULL          ,
 NULL          , NULL          , NULL          , NULL          ,
 NULL          , NULL          , NULL          , NULL          ,
 NULL          , NULL          , NULL          , NULL          ,
 NULL          , NULL          , NULL          , NULL          ,
 NULL          , NULL          , NULL          , NULL          ,
 NULL          , NULL          , NULL          , NULL          ,
 NULL          , NULL          , NULL          , NULL          ,
 NULL          , NULL          , NULL          , NULL          ,
 NULL          , NULL          , NULL          , NULL          ,
 NULL          , NULL          , NULL          , NULL          ,
 op_ED_0x40    , op_ED_0x41    , op_ED_0x42    , op_ED_0x43    ,
 op_ED_0x44    , op_ED_0x45    , op_ED_0x46    , op_ED_0x47    ,
 op_ED_0x48    , op_ED_0x49    , op_ED_0x4a    , op_ED_0x4b    ,
 op_ED_0x4c    , op_ED_0x4d    , op_ED_0x4e    , op_ED_0x4f    ,
 op_ED_0x50    , op_ED_0x51    , op_ED_0x52    , op_ED_0x53    ,
 op_ED_0x54    , op_ED_0x55    , op_ED_0x56    , op_ED_0x57    ,
 op_ED_0x58    , op_ED_0x59    , op_ED_0x5a    , op_ED_0x5b    ,
 op_ED_0x5c    , op_ED_0x5d    , op_ED_0x5e    , op_ED_0x5f    ,
 op_ED_0x60    , op_ED_0x61    , op_ED_0x62    , op_ED_0x63    ,
 op_ED_0x64    , op_ED_0x65    , op_ED_0x66    , op_ED_0x67    ,
 op_ED_0x68    , op_ED_0x69    , op_ED_0x6a    , op_ED_0x6b    ,
 op_ED_0x6c    , op_ED_0x6d    , op_ED_0x6e    , op_ED_0x6f    ,
 op_ED_0x70    , op_ED_0x71    , op_ED_0x72    , op_ED_0x73    ,
 op_ED_0x74    , op_ED_0x75    , op_ED_0x76    , NULL          ,
 op_ED_0x78    , op_ED_0x79    , op_ED_0x7a    , op_ED_0x7b    ,
 op_ED_0x7c    , op_ED_0x7d    , op_ED_0x7e    , NULL          ,
 NULL          , NULL          , NULL          , NULL          ,
 NULL          , NULL          , NULL          , NULL          ,
 NULL          , NULL          , NULL          , NULL          ,
 NULL          , NULL          , NULL          , NULL          ,
 NULL          , NULL          , NULL          , NULL          ,
 NULL          , NULL          , NULL          , NULL          ,
 NULL          , NULL          , NULL          , NULL          ,
 NULL          , NULL          , NULL          , NULL          ,
 op_ED_0xa0    , op_ED_0xa1    , op_ED_0xa2    , op_ED_0xa3    ,
 NULL          , NULL          , NULL          , NULL          ,
 op_ED_0xa8    , op_ED_0xa9    , op_ED_0xaa    , op_ED_0xab    ,
 NULL          , NULL          , NULL          , NULL          ,
 op_ED_0xb0    , op_ED_0xb1    , op_ED_0xb2    , op_ED_0xb3    ,
 NULL          , NULL          , NULL          , NULL          ,
 op_ED_0xb8    , op_ED_0xb9    , op_ED_0xba    , op_ED_0xbb    ,
 NULL          , NULL          , NULL          , NULL          ,
 NULL          , NULL          , NULL          , NULL          ,
 NULL          , NULL          , NULL          , NULL          ,
 NULL          , NULL          , NULL          , NULL          ,
 NULL          , NULL          , NULL          , NULL          ,
 NULL          , NULL          , NULL          , NULL          ,
 NULL          , NULL          , NULL          , NULL          ,
 NULL          , NULL          , NULL          , NULL          ,
 NULL          , NULL          , NULL          , NULL          ,
 NULL          , NULL          , NULL          , NULL          ,
 NULL          , NULL          , NULL          , NULL          ,
 NULL          , NULL          , NULL          , NULL          ,
 NULL          , NULL          , NULL          , NULL          ,
 NULL          , NULL          , NULL          , NULL          ,
 NULL          , NULL          , NULL          , NULL          ,
 NULL          , NULL          , NULL          , NULL          ,
 NULL          , NULL          , NULL          , NULL          
};
