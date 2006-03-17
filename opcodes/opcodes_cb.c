/* autogenerated from ./opcodes_cb.dat, do not edit */

/*RLC B*/
static void op_CB_0x00(Z80EX_CONTEXT *cpu)
{
	RLC(B);
	T_WAIT_UNTIL(4);
	return;
}

/*RLC C*/
static void op_CB_0x01(Z80EX_CONTEXT *cpu)
{
	RLC(C);
	T_WAIT_UNTIL(4);
	return;
}

/*RLC D*/
static void op_CB_0x02(Z80EX_CONTEXT *cpu)
{
	RLC(D);
	T_WAIT_UNTIL(4);
	return;
}

/*RLC E*/
static void op_CB_0x03(Z80EX_CONTEXT *cpu)
{
	RLC(E);
	T_WAIT_UNTIL(4);
	return;
}

/*RLC H*/
static void op_CB_0x04(Z80EX_CONTEXT *cpu)
{
	RLC(H);
	T_WAIT_UNTIL(4);
	return;
}

/*RLC L*/
static void op_CB_0x05(Z80EX_CONTEXT *cpu)
{
	RLC(L);
	T_WAIT_UNTIL(4);
	return;
}

/*RLC (HL)*/
static void op_CB_0x06(Z80EX_CONTEXT *cpu)
{
	READ_MEM(temp_byte,(HL),4);
	RLC(temp_byte);
	WRITE_MEM((HL),temp_byte,8);
	T_WAIT_UNTIL(11);
	return;
}

/*RLC A*/
static void op_CB_0x07(Z80EX_CONTEXT *cpu)
{
	RLC(A);
	T_WAIT_UNTIL(4);
	return;
}

/*RRC B*/
static void op_CB_0x08(Z80EX_CONTEXT *cpu)
{
	RRC(B);
	T_WAIT_UNTIL(4);
	return;
}

/*RRC C*/
static void op_CB_0x09(Z80EX_CONTEXT *cpu)
{
	RRC(C);
	T_WAIT_UNTIL(4);
	return;
}

/*RRC D*/
static void op_CB_0x0a(Z80EX_CONTEXT *cpu)
{
	RRC(D);
	T_WAIT_UNTIL(4);
	return;
}

/*RRC E*/
static void op_CB_0x0b(Z80EX_CONTEXT *cpu)
{
	RRC(E);
	T_WAIT_UNTIL(4);
	return;
}

/*RRC H*/
static void op_CB_0x0c(Z80EX_CONTEXT *cpu)
{
	RRC(H);
	T_WAIT_UNTIL(4);
	return;
}

/*RRC L*/
static void op_CB_0x0d(Z80EX_CONTEXT *cpu)
{
	RRC(L);
	T_WAIT_UNTIL(4);
	return;
}

/*RRC (HL)*/
static void op_CB_0x0e(Z80EX_CONTEXT *cpu)
{
	READ_MEM(temp_byte,(HL),4);
	RRC(temp_byte);
	WRITE_MEM((HL),temp_byte,8);
	T_WAIT_UNTIL(11);
	return;
}

/*RRC A*/
static void op_CB_0x0f(Z80EX_CONTEXT *cpu)
{
	RRC(A);
	T_WAIT_UNTIL(4);
	return;
}

/*RL B*/
static void op_CB_0x10(Z80EX_CONTEXT *cpu)
{
	RL(B);
	T_WAIT_UNTIL(4);
	return;
}

/*RL C*/
static void op_CB_0x11(Z80EX_CONTEXT *cpu)
{
	RL(C);
	T_WAIT_UNTIL(4);
	return;
}

/*RL D*/
static void op_CB_0x12(Z80EX_CONTEXT *cpu)
{
	RL(D);
	T_WAIT_UNTIL(4);
	return;
}

/*RL E*/
static void op_CB_0x13(Z80EX_CONTEXT *cpu)
{
	RL(E);
	T_WAIT_UNTIL(4);
	return;
}

/*RL H*/
static void op_CB_0x14(Z80EX_CONTEXT *cpu)
{
	RL(H);
	T_WAIT_UNTIL(4);
	return;
}

/*RL L*/
static void op_CB_0x15(Z80EX_CONTEXT *cpu)
{
	RL(L);
	T_WAIT_UNTIL(4);
	return;
}

/*RL (HL)*/
static void op_CB_0x16(Z80EX_CONTEXT *cpu)
{
	READ_MEM(temp_byte,(HL),4);
	RL(temp_byte);
	WRITE_MEM((HL),temp_byte,8);
	T_WAIT_UNTIL(11);
	return;
}

/*RL A*/
static void op_CB_0x17(Z80EX_CONTEXT *cpu)
{
	RL(A);
	T_WAIT_UNTIL(4);
	return;
}

/*RR B*/
static void op_CB_0x18(Z80EX_CONTEXT *cpu)
{
	RR(B);
	T_WAIT_UNTIL(4);
	return;
}

/*RR C*/
static void op_CB_0x19(Z80EX_CONTEXT *cpu)
{
	RR(C);
	T_WAIT_UNTIL(4);
	return;
}

/*RR D*/
static void op_CB_0x1a(Z80EX_CONTEXT *cpu)
{
	RR(D);
	T_WAIT_UNTIL(4);
	return;
}

/*RR E*/
static void op_CB_0x1b(Z80EX_CONTEXT *cpu)
{
	RR(E);
	T_WAIT_UNTIL(4);
	return;
}

/*RR H*/
static void op_CB_0x1c(Z80EX_CONTEXT *cpu)
{
	RR(H);
	T_WAIT_UNTIL(4);
	return;
}

/*RR L*/
static void op_CB_0x1d(Z80EX_CONTEXT *cpu)
{
	RR(L);
	T_WAIT_UNTIL(4);
	return;
}

/*RR (HL)*/
static void op_CB_0x1e(Z80EX_CONTEXT *cpu)
{
	READ_MEM(temp_byte,(HL),4);
	RR(temp_byte);
	WRITE_MEM((HL),temp_byte,8);
	T_WAIT_UNTIL(11);
	return;
}

/*RR A*/
static void op_CB_0x1f(Z80EX_CONTEXT *cpu)
{
	RR(A);
	T_WAIT_UNTIL(4);
	return;
}

/*SLA B*/
static void op_CB_0x20(Z80EX_CONTEXT *cpu)
{
	SLA(B);
	T_WAIT_UNTIL(4);
	return;
}

/*SLA C*/
static void op_CB_0x21(Z80EX_CONTEXT *cpu)
{
	SLA(C);
	T_WAIT_UNTIL(4);
	return;
}

/*SLA D*/
static void op_CB_0x22(Z80EX_CONTEXT *cpu)
{
	SLA(D);
	T_WAIT_UNTIL(4);
	return;
}

/*SLA E*/
static void op_CB_0x23(Z80EX_CONTEXT *cpu)
{
	SLA(E);
	T_WAIT_UNTIL(4);
	return;
}

/*SLA H*/
static void op_CB_0x24(Z80EX_CONTEXT *cpu)
{
	SLA(H);
	T_WAIT_UNTIL(4);
	return;
}

/*SLA L*/
static void op_CB_0x25(Z80EX_CONTEXT *cpu)
{
	SLA(L);
	T_WAIT_UNTIL(4);
	return;
}

/*SLA (HL)*/
static void op_CB_0x26(Z80EX_CONTEXT *cpu)
{
	READ_MEM(temp_byte,(HL),4);
	SLA(temp_byte);
	WRITE_MEM((HL),temp_byte,8);
	T_WAIT_UNTIL(11);
	return;
}

/*SLA A*/
static void op_CB_0x27(Z80EX_CONTEXT *cpu)
{
	SLA(A);
	T_WAIT_UNTIL(4);
	return;
}

/*SRA B*/
static void op_CB_0x28(Z80EX_CONTEXT *cpu)
{
	SRA(B);
	T_WAIT_UNTIL(4);
	return;
}

/*SRA C*/
static void op_CB_0x29(Z80EX_CONTEXT *cpu)
{
	SRA(C);
	T_WAIT_UNTIL(4);
	return;
}

/*SRA D*/
static void op_CB_0x2a(Z80EX_CONTEXT *cpu)
{
	SRA(D);
	T_WAIT_UNTIL(4);
	return;
}

/*SRA E*/
static void op_CB_0x2b(Z80EX_CONTEXT *cpu)
{
	SRA(E);
	T_WAIT_UNTIL(4);
	return;
}

/*SRA H*/
static void op_CB_0x2c(Z80EX_CONTEXT *cpu)
{
	SRA(H);
	T_WAIT_UNTIL(4);
	return;
}

/*SRA L*/
static void op_CB_0x2d(Z80EX_CONTEXT *cpu)
{
	SRA(L);
	T_WAIT_UNTIL(4);
	return;
}

/*SRA (HL)*/
static void op_CB_0x2e(Z80EX_CONTEXT *cpu)
{
	READ_MEM(temp_byte,(HL),4);
	SRA(temp_byte);
	WRITE_MEM((HL),temp_byte,8);
	T_WAIT_UNTIL(11);
	return;
}

/*SRA A*/
static void op_CB_0x2f(Z80EX_CONTEXT *cpu)
{
	SRA(A);
	T_WAIT_UNTIL(4);
	return;
}

/*SLL B*/
static void op_CB_0x30(Z80EX_CONTEXT *cpu)
{
	SLL(B);
	T_WAIT_UNTIL(4);
	return;
}

/*SLL C*/
static void op_CB_0x31(Z80EX_CONTEXT *cpu)
{
	SLL(C);
	T_WAIT_UNTIL(4);
	return;
}

/*SLL D*/
static void op_CB_0x32(Z80EX_CONTEXT *cpu)
{
	SLL(D);
	T_WAIT_UNTIL(4);
	return;
}

/*SLL E*/
static void op_CB_0x33(Z80EX_CONTEXT *cpu)
{
	SLL(E);
	T_WAIT_UNTIL(4);
	return;
}

/*SLL H*/
static void op_CB_0x34(Z80EX_CONTEXT *cpu)
{
	SLL(H);
	T_WAIT_UNTIL(4);
	return;
}

/*SLL L*/
static void op_CB_0x35(Z80EX_CONTEXT *cpu)
{
	SLL(L);
	T_WAIT_UNTIL(4);
	return;
}

/*SLL (HL)*/
static void op_CB_0x36(Z80EX_CONTEXT *cpu)
{
	READ_MEM(temp_byte,(HL),4);
	SLL(temp_byte);
	WRITE_MEM((HL),temp_byte,8);
	T_WAIT_UNTIL(11);
	return;
}

/*SLL A*/
static void op_CB_0x37(Z80EX_CONTEXT *cpu)
{
	SLL(A);
	T_WAIT_UNTIL(4);
	return;
}

/*SRL B*/
static void op_CB_0x38(Z80EX_CONTEXT *cpu)
{
	SRL(B);
	T_WAIT_UNTIL(4);
	return;
}

/*SRL C*/
static void op_CB_0x39(Z80EX_CONTEXT *cpu)
{
	SRL(C);
	T_WAIT_UNTIL(4);
	return;
}

/*SRL D*/
static void op_CB_0x3a(Z80EX_CONTEXT *cpu)
{
	SRL(D);
	T_WAIT_UNTIL(4);
	return;
}

/*SRL E*/
static void op_CB_0x3b(Z80EX_CONTEXT *cpu)
{
	SRL(E);
	T_WAIT_UNTIL(4);
	return;
}

/*SRL H*/
static void op_CB_0x3c(Z80EX_CONTEXT *cpu)
{
	SRL(H);
	T_WAIT_UNTIL(4);
	return;
}

/*SRL L*/
static void op_CB_0x3d(Z80EX_CONTEXT *cpu)
{
	SRL(L);
	T_WAIT_UNTIL(4);
	return;
}

/*SRL (HL)*/
static void op_CB_0x3e(Z80EX_CONTEXT *cpu)
{
	READ_MEM(temp_byte,(HL),4);
	SRL(temp_byte);
	WRITE_MEM((HL),temp_byte,8);
	T_WAIT_UNTIL(11);
	return;
}

/*SRL A*/
static void op_CB_0x3f(Z80EX_CONTEXT *cpu)
{
	SRL(A);
	T_WAIT_UNTIL(4);
	return;
}

/*BIT 0,B*/
static void op_CB_0x40(Z80EX_CONTEXT *cpu)
{
	BIT(0,B);
	T_WAIT_UNTIL(4);
	return;
}

/*BIT 0,C*/
static void op_CB_0x41(Z80EX_CONTEXT *cpu)
{
	BIT(0,C);
	T_WAIT_UNTIL(4);
	return;
}

/*BIT 0,D*/
static void op_CB_0x42(Z80EX_CONTEXT *cpu)
{
	BIT(0,D);
	T_WAIT_UNTIL(4);
	return;
}

/*BIT 0,E*/
static void op_CB_0x43(Z80EX_CONTEXT *cpu)
{
	BIT(0,E);
	T_WAIT_UNTIL(4);
	return;
}

/*BIT 0,H*/
static void op_CB_0x44(Z80EX_CONTEXT *cpu)
{
	BIT(0,H);
	T_WAIT_UNTIL(4);
	return;
}

/*BIT 0,L*/
static void op_CB_0x45(Z80EX_CONTEXT *cpu)
{
	BIT(0,L);
	T_WAIT_UNTIL(4);
	return;
}

/*BIT 0,(HL)*/
static void op_CB_0x46(Z80EX_CONTEXT *cpu)
{
	READ_MEM(temp_byte,(HL),4);
	BIT_MPTR(0,temp_byte);
	T_WAIT_UNTIL(8);
	return;
}

/*BIT 0,A*/
static void op_CB_0x47(Z80EX_CONTEXT *cpu)
{
	BIT(0,A);
	T_WAIT_UNTIL(4);
	return;
}

/*BIT 1,B*/
static void op_CB_0x48(Z80EX_CONTEXT *cpu)
{
	BIT(1,B);
	T_WAIT_UNTIL(4);
	return;
}

/*BIT 1,C*/
static void op_CB_0x49(Z80EX_CONTEXT *cpu)
{
	BIT(1,C);
	T_WAIT_UNTIL(4);
	return;
}

/*BIT 1,D*/
static void op_CB_0x4a(Z80EX_CONTEXT *cpu)
{
	BIT(1,D);
	T_WAIT_UNTIL(4);
	return;
}

/*BIT 1,E*/
static void op_CB_0x4b(Z80EX_CONTEXT *cpu)
{
	BIT(1,E);
	T_WAIT_UNTIL(4);
	return;
}

/*BIT 1,H*/
static void op_CB_0x4c(Z80EX_CONTEXT *cpu)
{
	BIT(1,H);
	T_WAIT_UNTIL(4);
	return;
}

/*BIT 1,L*/
static void op_CB_0x4d(Z80EX_CONTEXT *cpu)
{
	BIT(1,L);
	T_WAIT_UNTIL(4);
	return;
}

/*BIT 1,(HL)*/
static void op_CB_0x4e(Z80EX_CONTEXT *cpu)
{
	READ_MEM(temp_byte,(HL),4);
	BIT_MPTR(1,temp_byte);
	T_WAIT_UNTIL(8);
	return;
}

/*BIT 1,A*/
static void op_CB_0x4f(Z80EX_CONTEXT *cpu)
{
	BIT(1,A);
	T_WAIT_UNTIL(4);
	return;
}

/*BIT 2,B*/
static void op_CB_0x50(Z80EX_CONTEXT *cpu)
{
	BIT(2,B);
	T_WAIT_UNTIL(4);
	return;
}

/*BIT 2,C*/
static void op_CB_0x51(Z80EX_CONTEXT *cpu)
{
	BIT(2,C);
	T_WAIT_UNTIL(4);
	return;
}

/*BIT 2,D*/
static void op_CB_0x52(Z80EX_CONTEXT *cpu)
{
	BIT(2,D);
	T_WAIT_UNTIL(4);
	return;
}

/*BIT 2,E*/
static void op_CB_0x53(Z80EX_CONTEXT *cpu)
{
	BIT(2,E);
	T_WAIT_UNTIL(4);
	return;
}

/*BIT 2,H*/
static void op_CB_0x54(Z80EX_CONTEXT *cpu)
{
	BIT(2,H);
	T_WAIT_UNTIL(4);
	return;
}

/*BIT 2,L*/
static void op_CB_0x55(Z80EX_CONTEXT *cpu)
{
	BIT(2,L);
	T_WAIT_UNTIL(4);
	return;
}

/*BIT 2,(HL)*/
static void op_CB_0x56(Z80EX_CONTEXT *cpu)
{
	READ_MEM(temp_byte,(HL),4);
	BIT_MPTR(2,temp_byte);
	T_WAIT_UNTIL(8);
	return;
}

/*BIT 2,A*/
static void op_CB_0x57(Z80EX_CONTEXT *cpu)
{
	BIT(2,A);
	T_WAIT_UNTIL(4);
	return;
}

/*BIT 3,B*/
static void op_CB_0x58(Z80EX_CONTEXT *cpu)
{
	BIT(3,B);
	T_WAIT_UNTIL(4);
	return;
}

/*BIT 3,C*/
static void op_CB_0x59(Z80EX_CONTEXT *cpu)
{
	BIT(3,C);
	T_WAIT_UNTIL(4);
	return;
}

/*BIT 3,D*/
static void op_CB_0x5a(Z80EX_CONTEXT *cpu)
{
	BIT(3,D);
	T_WAIT_UNTIL(4);
	return;
}

/*BIT 3,E*/
static void op_CB_0x5b(Z80EX_CONTEXT *cpu)
{
	BIT(3,E);
	T_WAIT_UNTIL(4);
	return;
}

/*BIT 3,H*/
static void op_CB_0x5c(Z80EX_CONTEXT *cpu)
{
	BIT(3,H);
	T_WAIT_UNTIL(4);
	return;
}

/*BIT 3,L*/
static void op_CB_0x5d(Z80EX_CONTEXT *cpu)
{
	BIT(3,L);
	T_WAIT_UNTIL(4);
	return;
}

/*BIT 3,(HL)*/
static void op_CB_0x5e(Z80EX_CONTEXT *cpu)
{
	READ_MEM(temp_byte,(HL),4);
	BIT_MPTR(3,temp_byte);
	T_WAIT_UNTIL(8);
	return;
}

/*BIT 3,A*/
static void op_CB_0x5f(Z80EX_CONTEXT *cpu)
{
	BIT(3,A);
	T_WAIT_UNTIL(4);
	return;
}

/*BIT 4,B*/
static void op_CB_0x60(Z80EX_CONTEXT *cpu)
{
	BIT(4,B);
	T_WAIT_UNTIL(4);
	return;
}

/*BIT 4,C*/
static void op_CB_0x61(Z80EX_CONTEXT *cpu)
{
	BIT(4,C);
	T_WAIT_UNTIL(4);
	return;
}

/*BIT 4,D*/
static void op_CB_0x62(Z80EX_CONTEXT *cpu)
{
	BIT(4,D);
	T_WAIT_UNTIL(4);
	return;
}

/*BIT 4,E*/
static void op_CB_0x63(Z80EX_CONTEXT *cpu)
{
	BIT(4,E);
	T_WAIT_UNTIL(4);
	return;
}

/*BIT 4,H*/
static void op_CB_0x64(Z80EX_CONTEXT *cpu)
{
	BIT(4,H);
	T_WAIT_UNTIL(4);
	return;
}

/*BIT 4,L*/
static void op_CB_0x65(Z80EX_CONTEXT *cpu)
{
	BIT(4,L);
	T_WAIT_UNTIL(4);
	return;
}

/*BIT 4,(HL)*/
static void op_CB_0x66(Z80EX_CONTEXT *cpu)
{
	READ_MEM(temp_byte,(HL),4);
	BIT_MPTR(4,temp_byte);
	T_WAIT_UNTIL(8);
	return;
}

/*BIT 4,A*/
static void op_CB_0x67(Z80EX_CONTEXT *cpu)
{
	BIT(4,A);
	T_WAIT_UNTIL(4);
	return;
}

/*BIT 5,B*/
static void op_CB_0x68(Z80EX_CONTEXT *cpu)
{
	BIT(5,B);
	T_WAIT_UNTIL(4);
	return;
}

/*BIT 5,C*/
static void op_CB_0x69(Z80EX_CONTEXT *cpu)
{
	BIT(5,C);
	T_WAIT_UNTIL(4);
	return;
}

/*BIT 5,D*/
static void op_CB_0x6a(Z80EX_CONTEXT *cpu)
{
	BIT(5,D);
	T_WAIT_UNTIL(4);
	return;
}

/*BIT 5,E*/
static void op_CB_0x6b(Z80EX_CONTEXT *cpu)
{
	BIT(5,E);
	T_WAIT_UNTIL(4);
	return;
}

/*BIT 5,H*/
static void op_CB_0x6c(Z80EX_CONTEXT *cpu)
{
	BIT(5,H);
	T_WAIT_UNTIL(4);
	return;
}

/*BIT 5,L*/
static void op_CB_0x6d(Z80EX_CONTEXT *cpu)
{
	BIT(5,L);
	T_WAIT_UNTIL(4);
	return;
}

/*BIT 5,(HL)*/
static void op_CB_0x6e(Z80EX_CONTEXT *cpu)
{
	READ_MEM(temp_byte,(HL),4);
	BIT_MPTR(5,temp_byte);
	T_WAIT_UNTIL(8);
	return;
}

/*BIT 5,A*/
static void op_CB_0x6f(Z80EX_CONTEXT *cpu)
{
	BIT(5,A);
	T_WAIT_UNTIL(4);
	return;
}

/*BIT 6,B*/
static void op_CB_0x70(Z80EX_CONTEXT *cpu)
{
	BIT(6,B);
	T_WAIT_UNTIL(4);
	return;
}

/*BIT 6,C*/
static void op_CB_0x71(Z80EX_CONTEXT *cpu)
{
	BIT(6,C);
	T_WAIT_UNTIL(4);
	return;
}

/*BIT 6,D*/
static void op_CB_0x72(Z80EX_CONTEXT *cpu)
{
	BIT(6,D);
	T_WAIT_UNTIL(4);
	return;
}

/*BIT 6,E*/
static void op_CB_0x73(Z80EX_CONTEXT *cpu)
{
	BIT(6,E);
	T_WAIT_UNTIL(4);
	return;
}

/*BIT 6,H*/
static void op_CB_0x74(Z80EX_CONTEXT *cpu)
{
	BIT(6,H);
	T_WAIT_UNTIL(4);
	return;
}

/*BIT 6,L*/
static void op_CB_0x75(Z80EX_CONTEXT *cpu)
{
	BIT(6,L);
	T_WAIT_UNTIL(4);
	return;
}

/*BIT 6,(HL)*/
static void op_CB_0x76(Z80EX_CONTEXT *cpu)
{
	READ_MEM(temp_byte,(HL),4);
	BIT_MPTR(6,temp_byte);
	T_WAIT_UNTIL(8);
	return;
}

/*BIT 6,A*/
static void op_CB_0x77(Z80EX_CONTEXT *cpu)
{
	BIT(6,A);
	T_WAIT_UNTIL(4);
	return;
}

/*BIT 7,B*/
static void op_CB_0x78(Z80EX_CONTEXT *cpu)
{
	BIT(7,B);
	T_WAIT_UNTIL(4);
	return;
}

/*BIT 7,C*/
static void op_CB_0x79(Z80EX_CONTEXT *cpu)
{
	BIT(7,C);
	T_WAIT_UNTIL(4);
	return;
}

/*BIT 7,D*/
static void op_CB_0x7a(Z80EX_CONTEXT *cpu)
{
	BIT(7,D);
	T_WAIT_UNTIL(4);
	return;
}

/*BIT 7,E*/
static void op_CB_0x7b(Z80EX_CONTEXT *cpu)
{
	BIT(7,E);
	T_WAIT_UNTIL(4);
	return;
}

/*BIT 7,H*/
static void op_CB_0x7c(Z80EX_CONTEXT *cpu)
{
	BIT(7,H);
	T_WAIT_UNTIL(4);
	return;
}

/*BIT 7,L*/
static void op_CB_0x7d(Z80EX_CONTEXT *cpu)
{
	BIT(7,L);
	T_WAIT_UNTIL(4);
	return;
}

/*BIT 7,(HL)*/
static void op_CB_0x7e(Z80EX_CONTEXT *cpu)
{
	READ_MEM(temp_byte,(HL),4);
	BIT_MPTR(7,temp_byte);
	T_WAIT_UNTIL(8);
	return;
}

/*BIT 7,A*/
static void op_CB_0x7f(Z80EX_CONTEXT *cpu)
{
	BIT(7,A);
	T_WAIT_UNTIL(4);
	return;
}

/*RES 0,B*/
static void op_CB_0x80(Z80EX_CONTEXT *cpu)
{
	RES(0,B);
	T_WAIT_UNTIL(4);
	return;
}

/*RES 0,C*/
static void op_CB_0x81(Z80EX_CONTEXT *cpu)
{
	RES(0,C);
	T_WAIT_UNTIL(4);
	return;
}

/*RES 0,D*/
static void op_CB_0x82(Z80EX_CONTEXT *cpu)
{
	RES(0,D);
	T_WAIT_UNTIL(4);
	return;
}

/*RES 0,E*/
static void op_CB_0x83(Z80EX_CONTEXT *cpu)
{
	RES(0,E);
	T_WAIT_UNTIL(4);
	return;
}

/*RES 0,H*/
static void op_CB_0x84(Z80EX_CONTEXT *cpu)
{
	RES(0,H);
	T_WAIT_UNTIL(4);
	return;
}

/*RES 0,L*/
static void op_CB_0x85(Z80EX_CONTEXT *cpu)
{
	RES(0,L);
	T_WAIT_UNTIL(4);
	return;
}

/*RES 0,(HL)*/
static void op_CB_0x86(Z80EX_CONTEXT *cpu)
{
	READ_MEM(temp_byte,(HL),4);
	RES(0,temp_byte);
	WRITE_MEM((HL),temp_byte,8);
	T_WAIT_UNTIL(11);
	return;
}

/*RES 0,A*/
static void op_CB_0x87(Z80EX_CONTEXT *cpu)
{
	RES(0,A);
	T_WAIT_UNTIL(4);
	return;
}

/*RES 1,B*/
static void op_CB_0x88(Z80EX_CONTEXT *cpu)
{
	RES(1,B);
	T_WAIT_UNTIL(4);
	return;
}

/*RES 1,C*/
static void op_CB_0x89(Z80EX_CONTEXT *cpu)
{
	RES(1,C);
	T_WAIT_UNTIL(4);
	return;
}

/*RES 1,D*/
static void op_CB_0x8a(Z80EX_CONTEXT *cpu)
{
	RES(1,D);
	T_WAIT_UNTIL(4);
	return;
}

/*RES 1,E*/
static void op_CB_0x8b(Z80EX_CONTEXT *cpu)
{
	RES(1,E);
	T_WAIT_UNTIL(4);
	return;
}

/*RES 1,H*/
static void op_CB_0x8c(Z80EX_CONTEXT *cpu)
{
	RES(1,H);
	T_WAIT_UNTIL(4);
	return;
}

/*RES 1,L*/
static void op_CB_0x8d(Z80EX_CONTEXT *cpu)
{
	RES(1,L);
	T_WAIT_UNTIL(4);
	return;
}

/*RES 1,(HL)*/
static void op_CB_0x8e(Z80EX_CONTEXT *cpu)
{
	READ_MEM(temp_byte,(HL),4);
	RES(1,temp_byte);
	WRITE_MEM((HL),temp_byte,8);
	T_WAIT_UNTIL(11);
	return;
}

/*RES 1,A*/
static void op_CB_0x8f(Z80EX_CONTEXT *cpu)
{
	RES(1,A);
	T_WAIT_UNTIL(4);
	return;
}

/*RES 2,B*/
static void op_CB_0x90(Z80EX_CONTEXT *cpu)
{
	RES(2,B);
	T_WAIT_UNTIL(4);
	return;
}

/*RES 2,C*/
static void op_CB_0x91(Z80EX_CONTEXT *cpu)
{
	RES(2,C);
	T_WAIT_UNTIL(4);
	return;
}

/*RES 2,D*/
static void op_CB_0x92(Z80EX_CONTEXT *cpu)
{
	RES(2,D);
	T_WAIT_UNTIL(4);
	return;
}

/*RES 2,E*/
static void op_CB_0x93(Z80EX_CONTEXT *cpu)
{
	RES(2,E);
	T_WAIT_UNTIL(4);
	return;
}

/*RES 2,H*/
static void op_CB_0x94(Z80EX_CONTEXT *cpu)
{
	RES(2,H);
	T_WAIT_UNTIL(4);
	return;
}

/*RES 2,L*/
static void op_CB_0x95(Z80EX_CONTEXT *cpu)
{
	RES(2,L);
	T_WAIT_UNTIL(4);
	return;
}

/*RES 2,(HL)*/
static void op_CB_0x96(Z80EX_CONTEXT *cpu)
{
	READ_MEM(temp_byte,(HL),4);
	RES(2,temp_byte);
	WRITE_MEM((HL),temp_byte,8);
	T_WAIT_UNTIL(11);
	return;
}

/*RES 2,A*/
static void op_CB_0x97(Z80EX_CONTEXT *cpu)
{
	RES(2,A);
	T_WAIT_UNTIL(4);
	return;
}

/*RES 3,B*/
static void op_CB_0x98(Z80EX_CONTEXT *cpu)
{
	RES(3,B);
	T_WAIT_UNTIL(4);
	return;
}

/*RES 3,C*/
static void op_CB_0x99(Z80EX_CONTEXT *cpu)
{
	RES(3,C);
	T_WAIT_UNTIL(4);
	return;
}

/*RES 3,D*/
static void op_CB_0x9a(Z80EX_CONTEXT *cpu)
{
	RES(3,D);
	T_WAIT_UNTIL(4);
	return;
}

/*RES 3,E*/
static void op_CB_0x9b(Z80EX_CONTEXT *cpu)
{
	RES(3,E);
	T_WAIT_UNTIL(4);
	return;
}

/*RES 3,H*/
static void op_CB_0x9c(Z80EX_CONTEXT *cpu)
{
	RES(3,H);
	T_WAIT_UNTIL(4);
	return;
}

/*RES 3,L*/
static void op_CB_0x9d(Z80EX_CONTEXT *cpu)
{
	RES(3,L);
	T_WAIT_UNTIL(4);
	return;
}

/*RES 3,(HL)*/
static void op_CB_0x9e(Z80EX_CONTEXT *cpu)
{
	READ_MEM(temp_byte,(HL),4);
	RES(3,temp_byte);
	WRITE_MEM((HL),temp_byte,8);
	T_WAIT_UNTIL(11);
	return;
}

/*RES 3,A*/
static void op_CB_0x9f(Z80EX_CONTEXT *cpu)
{
	RES(3,A);
	T_WAIT_UNTIL(4);
	return;
}

/*RES 4,B*/
static void op_CB_0xa0(Z80EX_CONTEXT *cpu)
{
	RES(4,B);
	T_WAIT_UNTIL(4);
	return;
}

/*RES 4,C*/
static void op_CB_0xa1(Z80EX_CONTEXT *cpu)
{
	RES(4,C);
	T_WAIT_UNTIL(4);
	return;
}

/*RES 4,D*/
static void op_CB_0xa2(Z80EX_CONTEXT *cpu)
{
	RES(4,D);
	T_WAIT_UNTIL(4);
	return;
}

/*RES 4,E*/
static void op_CB_0xa3(Z80EX_CONTEXT *cpu)
{
	RES(4,E);
	T_WAIT_UNTIL(4);
	return;
}

/*RES 4,H*/
static void op_CB_0xa4(Z80EX_CONTEXT *cpu)
{
	RES(4,H);
	T_WAIT_UNTIL(4);
	return;
}

/*RES 4,L*/
static void op_CB_0xa5(Z80EX_CONTEXT *cpu)
{
	RES(4,L);
	T_WAIT_UNTIL(4);
	return;
}

/*RES 4,(HL)*/
static void op_CB_0xa6(Z80EX_CONTEXT *cpu)
{
	READ_MEM(temp_byte,(HL),4);
	RES(4,temp_byte);
	WRITE_MEM((HL),temp_byte,8);
	T_WAIT_UNTIL(11);
	return;
}

/*RES 4,A*/
static void op_CB_0xa7(Z80EX_CONTEXT *cpu)
{
	RES(4,A);
	T_WAIT_UNTIL(4);
	return;
}

/*RES 5,B*/
static void op_CB_0xa8(Z80EX_CONTEXT *cpu)
{
	RES(5,B);
	T_WAIT_UNTIL(4);
	return;
}

/*RES 5,C*/
static void op_CB_0xa9(Z80EX_CONTEXT *cpu)
{
	RES(5,C);
	T_WAIT_UNTIL(4);
	return;
}

/*RES 5,D*/
static void op_CB_0xaa(Z80EX_CONTEXT *cpu)
{
	RES(5,D);
	T_WAIT_UNTIL(4);
	return;
}

/*RES 5,E*/
static void op_CB_0xab(Z80EX_CONTEXT *cpu)
{
	RES(5,E);
	T_WAIT_UNTIL(4);
	return;
}

/*RES 5,H*/
static void op_CB_0xac(Z80EX_CONTEXT *cpu)
{
	RES(5,H);
	T_WAIT_UNTIL(4);
	return;
}

/*RES 5,L*/
static void op_CB_0xad(Z80EX_CONTEXT *cpu)
{
	RES(5,L);
	T_WAIT_UNTIL(4);
	return;
}

/*RES 5,(HL)*/
static void op_CB_0xae(Z80EX_CONTEXT *cpu)
{
	READ_MEM(temp_byte,(HL),4);
	RES(5,temp_byte);
	WRITE_MEM((HL),temp_byte,8);
	T_WAIT_UNTIL(11);
	return;
}

/*RES 5,A*/
static void op_CB_0xaf(Z80EX_CONTEXT *cpu)
{
	RES(5,A);
	T_WAIT_UNTIL(4);
	return;
}

/*RES 6,B*/
static void op_CB_0xb0(Z80EX_CONTEXT *cpu)
{
	RES(6,B);
	T_WAIT_UNTIL(4);
	return;
}

/*RES 6,C*/
static void op_CB_0xb1(Z80EX_CONTEXT *cpu)
{
	RES(6,C);
	T_WAIT_UNTIL(4);
	return;
}

/*RES 6,D*/
static void op_CB_0xb2(Z80EX_CONTEXT *cpu)
{
	RES(6,D);
	T_WAIT_UNTIL(4);
	return;
}

/*RES 6,E*/
static void op_CB_0xb3(Z80EX_CONTEXT *cpu)
{
	RES(6,E);
	T_WAIT_UNTIL(4);
	return;
}

/*RES 6,H*/
static void op_CB_0xb4(Z80EX_CONTEXT *cpu)
{
	RES(6,H);
	T_WAIT_UNTIL(4);
	return;
}

/*RES 6,L*/
static void op_CB_0xb5(Z80EX_CONTEXT *cpu)
{
	RES(6,L);
	T_WAIT_UNTIL(4);
	return;
}

/*RES 6,(HL)*/
static void op_CB_0xb6(Z80EX_CONTEXT *cpu)
{
	READ_MEM(temp_byte,(HL),4);
	RES(6,temp_byte);
	WRITE_MEM((HL),temp_byte,8);
	T_WAIT_UNTIL(11);
	return;
}

/*RES 6,A*/
static void op_CB_0xb7(Z80EX_CONTEXT *cpu)
{
	RES(6,A);
	T_WAIT_UNTIL(4);
	return;
}

/*RES 7,B*/
static void op_CB_0xb8(Z80EX_CONTEXT *cpu)
{
	RES(7,B);
	T_WAIT_UNTIL(4);
	return;
}

/*RES 7,C*/
static void op_CB_0xb9(Z80EX_CONTEXT *cpu)
{
	RES(7,C);
	T_WAIT_UNTIL(4);
	return;
}

/*RES 7,D*/
static void op_CB_0xba(Z80EX_CONTEXT *cpu)
{
	RES(7,D);
	T_WAIT_UNTIL(4);
	return;
}

/*RES 7,E*/
static void op_CB_0xbb(Z80EX_CONTEXT *cpu)
{
	RES(7,E);
	T_WAIT_UNTIL(4);
	return;
}

/*RES 7,H*/
static void op_CB_0xbc(Z80EX_CONTEXT *cpu)
{
	RES(7,H);
	T_WAIT_UNTIL(4);
	return;
}

/*RES 7,L*/
static void op_CB_0xbd(Z80EX_CONTEXT *cpu)
{
	RES(7,L);
	T_WAIT_UNTIL(4);
	return;
}

/*RES 7,(HL)*/
static void op_CB_0xbe(Z80EX_CONTEXT *cpu)
{
	READ_MEM(temp_byte,(HL),4);
	RES(7,temp_byte);
	WRITE_MEM((HL),temp_byte,8);
	T_WAIT_UNTIL(11);
	return;
}

/*RES 7,A*/
static void op_CB_0xbf(Z80EX_CONTEXT *cpu)
{
	RES(7,A);
	T_WAIT_UNTIL(4);
	return;
}

/*SET 0,B*/
static void op_CB_0xc0(Z80EX_CONTEXT *cpu)
{
	SET(0,B);
	T_WAIT_UNTIL(4);
	return;
}

/*SET 0,C*/
static void op_CB_0xc1(Z80EX_CONTEXT *cpu)
{
	SET(0,C);
	T_WAIT_UNTIL(4);
	return;
}

/*SET 0,D*/
static void op_CB_0xc2(Z80EX_CONTEXT *cpu)
{
	SET(0,D);
	T_WAIT_UNTIL(4);
	return;
}

/*SET 0,E*/
static void op_CB_0xc3(Z80EX_CONTEXT *cpu)
{
	SET(0,E);
	T_WAIT_UNTIL(4);
	return;
}

/*SET 0,H*/
static void op_CB_0xc4(Z80EX_CONTEXT *cpu)
{
	SET(0,H);
	T_WAIT_UNTIL(4);
	return;
}

/*SET 0,L*/
static void op_CB_0xc5(Z80EX_CONTEXT *cpu)
{
	SET(0,L);
	T_WAIT_UNTIL(4);
	return;
}

/*SET 0,(HL)*/
static void op_CB_0xc6(Z80EX_CONTEXT *cpu)
{
	READ_MEM(temp_byte,(HL),4);
	SET(0,temp_byte);
	WRITE_MEM((HL),temp_byte,8);
	T_WAIT_UNTIL(11);
	return;
}

/*SET 0,A*/
static void op_CB_0xc7(Z80EX_CONTEXT *cpu)
{
	SET(0,A);
	T_WAIT_UNTIL(4);
	return;
}

/*SET 1,B*/
static void op_CB_0xc8(Z80EX_CONTEXT *cpu)
{
	SET(1,B);
	T_WAIT_UNTIL(4);
	return;
}

/*SET 1,C*/
static void op_CB_0xc9(Z80EX_CONTEXT *cpu)
{
	SET(1,C);
	T_WAIT_UNTIL(4);
	return;
}

/*SET 1,D*/
static void op_CB_0xca(Z80EX_CONTEXT *cpu)
{
	SET(1,D);
	T_WAIT_UNTIL(4);
	return;
}

/*SET 1,E*/
static void op_CB_0xcb(Z80EX_CONTEXT *cpu)
{
	SET(1,E);
	T_WAIT_UNTIL(4);
	return;
}

/*SET 1,H*/
static void op_CB_0xcc(Z80EX_CONTEXT *cpu)
{
	SET(1,H);
	T_WAIT_UNTIL(4);
	return;
}

/*SET 1,L*/
static void op_CB_0xcd(Z80EX_CONTEXT *cpu)
{
	SET(1,L);
	T_WAIT_UNTIL(4);
	return;
}

/*SET 1,(HL)*/
static void op_CB_0xce(Z80EX_CONTEXT *cpu)
{
	READ_MEM(temp_byte,(HL),4);
	SET(1,temp_byte);
	WRITE_MEM((HL),temp_byte,8);
	T_WAIT_UNTIL(11);
	return;
}

/*SET 1,A*/
static void op_CB_0xcf(Z80EX_CONTEXT *cpu)
{
	SET(1,A);
	T_WAIT_UNTIL(4);
	return;
}

/*SET 2,B*/
static void op_CB_0xd0(Z80EX_CONTEXT *cpu)
{
	SET(2,B);
	T_WAIT_UNTIL(4);
	return;
}

/*SET 2,C*/
static void op_CB_0xd1(Z80EX_CONTEXT *cpu)
{
	SET(2,C);
	T_WAIT_UNTIL(4);
	return;
}

/*SET 2,D*/
static void op_CB_0xd2(Z80EX_CONTEXT *cpu)
{
	SET(2,D);
	T_WAIT_UNTIL(4);
	return;
}

/*SET 2,E*/
static void op_CB_0xd3(Z80EX_CONTEXT *cpu)
{
	SET(2,E);
	T_WAIT_UNTIL(4);
	return;
}

/*SET 2,H*/
static void op_CB_0xd4(Z80EX_CONTEXT *cpu)
{
	SET(2,H);
	T_WAIT_UNTIL(4);
	return;
}

/*SET 2,L*/
static void op_CB_0xd5(Z80EX_CONTEXT *cpu)
{
	SET(2,L);
	T_WAIT_UNTIL(4);
	return;
}

/*SET 2,(HL)*/
static void op_CB_0xd6(Z80EX_CONTEXT *cpu)
{
	READ_MEM(temp_byte,(HL),4);
	SET(2,temp_byte);
	WRITE_MEM((HL),temp_byte,8);
	T_WAIT_UNTIL(11);
	return;
}

/*SET 2,A*/
static void op_CB_0xd7(Z80EX_CONTEXT *cpu)
{
	SET(2,A);
	T_WAIT_UNTIL(4);
	return;
}

/*SET 3,B*/
static void op_CB_0xd8(Z80EX_CONTEXT *cpu)
{
	SET(3,B);
	T_WAIT_UNTIL(4);
	return;
}

/*SET 3,C*/
static void op_CB_0xd9(Z80EX_CONTEXT *cpu)
{
	SET(3,C);
	T_WAIT_UNTIL(4);
	return;
}

/*SET 3,D*/
static void op_CB_0xda(Z80EX_CONTEXT *cpu)
{
	SET(3,D);
	T_WAIT_UNTIL(4);
	return;
}

/*SET 3,E*/
static void op_CB_0xdb(Z80EX_CONTEXT *cpu)
{
	SET(3,E);
	T_WAIT_UNTIL(4);
	return;
}

/*SET 3,H*/
static void op_CB_0xdc(Z80EX_CONTEXT *cpu)
{
	SET(3,H);
	T_WAIT_UNTIL(4);
	return;
}

/*SET 3,L*/
static void op_CB_0xdd(Z80EX_CONTEXT *cpu)
{
	SET(3,L);
	T_WAIT_UNTIL(4);
	return;
}

/*SET 3,(HL)*/
static void op_CB_0xde(Z80EX_CONTEXT *cpu)
{
	READ_MEM(temp_byte,(HL),4);
	SET(3,temp_byte);
	WRITE_MEM((HL),temp_byte,8);
	T_WAIT_UNTIL(11);
	return;
}

/*SET 3,A*/
static void op_CB_0xdf(Z80EX_CONTEXT *cpu)
{
	SET(3,A);
	T_WAIT_UNTIL(4);
	return;
}

/*SET 4,B*/
static void op_CB_0xe0(Z80EX_CONTEXT *cpu)
{
	SET(4,B);
	T_WAIT_UNTIL(4);
	return;
}

/*SET 4,C*/
static void op_CB_0xe1(Z80EX_CONTEXT *cpu)
{
	SET(4,C);
	T_WAIT_UNTIL(4);
	return;
}

/*SET 4,D*/
static void op_CB_0xe2(Z80EX_CONTEXT *cpu)
{
	SET(4,D);
	T_WAIT_UNTIL(4);
	return;
}

/*SET 4,E*/
static void op_CB_0xe3(Z80EX_CONTEXT *cpu)
{
	SET(4,E);
	T_WAIT_UNTIL(4);
	return;
}

/*SET 4,H*/
static void op_CB_0xe4(Z80EX_CONTEXT *cpu)
{
	SET(4,H);
	T_WAIT_UNTIL(4);
	return;
}

/*SET 4,L*/
static void op_CB_0xe5(Z80EX_CONTEXT *cpu)
{
	SET(4,L);
	T_WAIT_UNTIL(4);
	return;
}

/*SET 4,(HL)*/
static void op_CB_0xe6(Z80EX_CONTEXT *cpu)
{
	READ_MEM(temp_byte,(HL),4);
	SET(4,temp_byte);
	WRITE_MEM((HL),temp_byte,8);
	T_WAIT_UNTIL(11);
	return;
}

/*SET 4,A*/
static void op_CB_0xe7(Z80EX_CONTEXT *cpu)
{
	SET(4,A);
	T_WAIT_UNTIL(4);
	return;
}

/*SET 5,B*/
static void op_CB_0xe8(Z80EX_CONTEXT *cpu)
{
	SET(5,B);
	T_WAIT_UNTIL(4);
	return;
}

/*SET 5,C*/
static void op_CB_0xe9(Z80EX_CONTEXT *cpu)
{
	SET(5,C);
	T_WAIT_UNTIL(4);
	return;
}

/*SET 5,D*/
static void op_CB_0xea(Z80EX_CONTEXT *cpu)
{
	SET(5,D);
	T_WAIT_UNTIL(4);
	return;
}

/*SET 5,E*/
static void op_CB_0xeb(Z80EX_CONTEXT *cpu)
{
	SET(5,E);
	T_WAIT_UNTIL(4);
	return;
}

/*SET 5,H*/
static void op_CB_0xec(Z80EX_CONTEXT *cpu)
{
	SET(5,H);
	T_WAIT_UNTIL(4);
	return;
}

/*SET 5,L*/
static void op_CB_0xed(Z80EX_CONTEXT *cpu)
{
	SET(5,L);
	T_WAIT_UNTIL(4);
	return;
}

/*SET 5,(HL)*/
static void op_CB_0xee(Z80EX_CONTEXT *cpu)
{
	READ_MEM(temp_byte,(HL),4);
	SET(5,temp_byte);
	WRITE_MEM((HL),temp_byte,8);
	T_WAIT_UNTIL(11);
	return;
}

/*SET 5,A*/
static void op_CB_0xef(Z80EX_CONTEXT *cpu)
{
	SET(5,A);
	T_WAIT_UNTIL(4);
	return;
}

/*SET 6,B*/
static void op_CB_0xf0(Z80EX_CONTEXT *cpu)
{
	SET(6,B);
	T_WAIT_UNTIL(4);
	return;
}

/*SET 6,C*/
static void op_CB_0xf1(Z80EX_CONTEXT *cpu)
{
	SET(6,C);
	T_WAIT_UNTIL(4);
	return;
}

/*SET 6,D*/
static void op_CB_0xf2(Z80EX_CONTEXT *cpu)
{
	SET(6,D);
	T_WAIT_UNTIL(4);
	return;
}

/*SET 6,E*/
static void op_CB_0xf3(Z80EX_CONTEXT *cpu)
{
	SET(6,E);
	T_WAIT_UNTIL(4);
	return;
}

/*SET 6,H*/
static void op_CB_0xf4(Z80EX_CONTEXT *cpu)
{
	SET(6,H);
	T_WAIT_UNTIL(4);
	return;
}

/*SET 6,L*/
static void op_CB_0xf5(Z80EX_CONTEXT *cpu)
{
	SET(6,L);
	T_WAIT_UNTIL(4);
	return;
}

/*SET 6,(HL)*/
static void op_CB_0xf6(Z80EX_CONTEXT *cpu)
{
	READ_MEM(temp_byte,(HL),4);
	SET(6,temp_byte);
	WRITE_MEM((HL),temp_byte,8);
	T_WAIT_UNTIL(11);
	return;
}

/*SET 6,A*/
static void op_CB_0xf7(Z80EX_CONTEXT *cpu)
{
	SET(6,A);
	T_WAIT_UNTIL(4);
	return;
}

/*SET 7,B*/
static void op_CB_0xf8(Z80EX_CONTEXT *cpu)
{
	SET(7,B);
	T_WAIT_UNTIL(4);
	return;
}

/*SET 7,C*/
static void op_CB_0xf9(Z80EX_CONTEXT *cpu)
{
	SET(7,C);
	T_WAIT_UNTIL(4);
	return;
}

/*SET 7,D*/
static void op_CB_0xfa(Z80EX_CONTEXT *cpu)
{
	SET(7,D);
	T_WAIT_UNTIL(4);
	return;
}

/*SET 7,E*/
static void op_CB_0xfb(Z80EX_CONTEXT *cpu)
{
	SET(7,E);
	T_WAIT_UNTIL(4);
	return;
}

/*SET 7,H*/
static void op_CB_0xfc(Z80EX_CONTEXT *cpu)
{
	SET(7,H);
	T_WAIT_UNTIL(4);
	return;
}

/*SET 7,L*/
static void op_CB_0xfd(Z80EX_CONTEXT *cpu)
{
	SET(7,L);
	T_WAIT_UNTIL(4);
	return;
}

/*SET 7,(HL)*/
static void op_CB_0xfe(Z80EX_CONTEXT *cpu)
{
	READ_MEM(temp_byte,(HL),4);
	SET(7,temp_byte);
	WRITE_MEM((HL),temp_byte,8);
	T_WAIT_UNTIL(11);
	return;
}

/*SET 7,A*/
static void op_CB_0xff(Z80EX_CONTEXT *cpu)
{
	SET(7,A);
	T_WAIT_UNTIL(4);
	return;
}



/**/
static z80ex_opcode_fn opcodes_cb[0x100] = {
 op_CB_0x00    , op_CB_0x01    , op_CB_0x02    , op_CB_0x03    ,
 op_CB_0x04    , op_CB_0x05    , op_CB_0x06    , op_CB_0x07    ,
 op_CB_0x08    , op_CB_0x09    , op_CB_0x0a    , op_CB_0x0b    ,
 op_CB_0x0c    , op_CB_0x0d    , op_CB_0x0e    , op_CB_0x0f    ,
 op_CB_0x10    , op_CB_0x11    , op_CB_0x12    , op_CB_0x13    ,
 op_CB_0x14    , op_CB_0x15    , op_CB_0x16    , op_CB_0x17    ,
 op_CB_0x18    , op_CB_0x19    , op_CB_0x1a    , op_CB_0x1b    ,
 op_CB_0x1c    , op_CB_0x1d    , op_CB_0x1e    , op_CB_0x1f    ,
 op_CB_0x20    , op_CB_0x21    , op_CB_0x22    , op_CB_0x23    ,
 op_CB_0x24    , op_CB_0x25    , op_CB_0x26    , op_CB_0x27    ,
 op_CB_0x28    , op_CB_0x29    , op_CB_0x2a    , op_CB_0x2b    ,
 op_CB_0x2c    , op_CB_0x2d    , op_CB_0x2e    , op_CB_0x2f    ,
 op_CB_0x30    , op_CB_0x31    , op_CB_0x32    , op_CB_0x33    ,
 op_CB_0x34    , op_CB_0x35    , op_CB_0x36    , op_CB_0x37    ,
 op_CB_0x38    , op_CB_0x39    , op_CB_0x3a    , op_CB_0x3b    ,
 op_CB_0x3c    , op_CB_0x3d    , op_CB_0x3e    , op_CB_0x3f    ,
 op_CB_0x40    , op_CB_0x41    , op_CB_0x42    , op_CB_0x43    ,
 op_CB_0x44    , op_CB_0x45    , op_CB_0x46    , op_CB_0x47    ,
 op_CB_0x48    , op_CB_0x49    , op_CB_0x4a    , op_CB_0x4b    ,
 op_CB_0x4c    , op_CB_0x4d    , op_CB_0x4e    , op_CB_0x4f    ,
 op_CB_0x50    , op_CB_0x51    , op_CB_0x52    , op_CB_0x53    ,
 op_CB_0x54    , op_CB_0x55    , op_CB_0x56    , op_CB_0x57    ,
 op_CB_0x58    , op_CB_0x59    , op_CB_0x5a    , op_CB_0x5b    ,
 op_CB_0x5c    , op_CB_0x5d    , op_CB_0x5e    , op_CB_0x5f    ,
 op_CB_0x60    , op_CB_0x61    , op_CB_0x62    , op_CB_0x63    ,
 op_CB_0x64    , op_CB_0x65    , op_CB_0x66    , op_CB_0x67    ,
 op_CB_0x68    , op_CB_0x69    , op_CB_0x6a    , op_CB_0x6b    ,
 op_CB_0x6c    , op_CB_0x6d    , op_CB_0x6e    , op_CB_0x6f    ,
 op_CB_0x70    , op_CB_0x71    , op_CB_0x72    , op_CB_0x73    ,
 op_CB_0x74    , op_CB_0x75    , op_CB_0x76    , op_CB_0x77    ,
 op_CB_0x78    , op_CB_0x79    , op_CB_0x7a    , op_CB_0x7b    ,
 op_CB_0x7c    , op_CB_0x7d    , op_CB_0x7e    , op_CB_0x7f    ,
 op_CB_0x80    , op_CB_0x81    , op_CB_0x82    , op_CB_0x83    ,
 op_CB_0x84    , op_CB_0x85    , op_CB_0x86    , op_CB_0x87    ,
 op_CB_0x88    , op_CB_0x89    , op_CB_0x8a    , op_CB_0x8b    ,
 op_CB_0x8c    , op_CB_0x8d    , op_CB_0x8e    , op_CB_0x8f    ,
 op_CB_0x90    , op_CB_0x91    , op_CB_0x92    , op_CB_0x93    ,
 op_CB_0x94    , op_CB_0x95    , op_CB_0x96    , op_CB_0x97    ,
 op_CB_0x98    , op_CB_0x99    , op_CB_0x9a    , op_CB_0x9b    ,
 op_CB_0x9c    , op_CB_0x9d    , op_CB_0x9e    , op_CB_0x9f    ,
 op_CB_0xa0    , op_CB_0xa1    , op_CB_0xa2    , op_CB_0xa3    ,
 op_CB_0xa4    , op_CB_0xa5    , op_CB_0xa6    , op_CB_0xa7    ,
 op_CB_0xa8    , op_CB_0xa9    , op_CB_0xaa    , op_CB_0xab    ,
 op_CB_0xac    , op_CB_0xad    , op_CB_0xae    , op_CB_0xaf    ,
 op_CB_0xb0    , op_CB_0xb1    , op_CB_0xb2    , op_CB_0xb3    ,
 op_CB_0xb4    , op_CB_0xb5    , op_CB_0xb6    , op_CB_0xb7    ,
 op_CB_0xb8    , op_CB_0xb9    , op_CB_0xba    , op_CB_0xbb    ,
 op_CB_0xbc    , op_CB_0xbd    , op_CB_0xbe    , op_CB_0xbf    ,
 op_CB_0xc0    , op_CB_0xc1    , op_CB_0xc2    , op_CB_0xc3    ,
 op_CB_0xc4    , op_CB_0xc5    , op_CB_0xc6    , op_CB_0xc7    ,
 op_CB_0xc8    , op_CB_0xc9    , op_CB_0xca    , op_CB_0xcb    ,
 op_CB_0xcc    , op_CB_0xcd    , op_CB_0xce    , op_CB_0xcf    ,
 op_CB_0xd0    , op_CB_0xd1    , op_CB_0xd2    , op_CB_0xd3    ,
 op_CB_0xd4    , op_CB_0xd5    , op_CB_0xd6    , op_CB_0xd7    ,
 op_CB_0xd8    , op_CB_0xd9    , op_CB_0xda    , op_CB_0xdb    ,
 op_CB_0xdc    , op_CB_0xdd    , op_CB_0xde    , op_CB_0xdf    ,
 op_CB_0xe0    , op_CB_0xe1    , op_CB_0xe2    , op_CB_0xe3    ,
 op_CB_0xe4    , op_CB_0xe5    , op_CB_0xe6    , op_CB_0xe7    ,
 op_CB_0xe8    , op_CB_0xe9    , op_CB_0xea    , op_CB_0xeb    ,
 op_CB_0xec    , op_CB_0xed    , op_CB_0xee    , op_CB_0xef    ,
 op_CB_0xf0    , op_CB_0xf1    , op_CB_0xf2    , op_CB_0xf3    ,
 op_CB_0xf4    , op_CB_0xf5    , op_CB_0xf6    , op_CB_0xf7    ,
 op_CB_0xf8    , op_CB_0xf9    , op_CB_0xfa    , op_CB_0xfb    ,
 op_CB_0xfc    , op_CB_0xfd    , op_CB_0xfe    , op_CB_0xff    
};
