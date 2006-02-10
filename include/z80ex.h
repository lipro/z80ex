/*
 * Z80~Ex, ZILoG Z80 CPU emulator.
 *
 * by Boo-boo [boo_boo(^at^)inbox.ru]
 * contains code from the FUSE project (http://fuse-emulator.sourceforge.net)
 * Released under GNU GPL v2
 *
 */

#ifndef _Z80EX_m_HH
#define _Z80EX_m_HH

#ifdef __GNUC__
#include <stdint.h>
typedef uint8_t Z80EX_BYTE;
typedef int8_t Z80EX_SIGNED_BYTE;
typedef uint16_t Z80EX_WORD;
typedef uint32_t Z80EX_DWORD;
#else
#ifdef _MSC_VER
typedef __int8 Z80EX_BYTE;
typedef char Z80EX_SIGNED_BYTE;
typedef __int16 Z80EX_WORD;
typedef __int32 Z80EX_DWORD;
#else
typedef unsigned char Z80EX_BYTE;
typedef char Z80EX_SIGNED_BYTE;
typedef unsigned short Z80EX_WORD;
typedef unsigned Z80EX_DWORD;
#endif
#endif

typedef
enum {regAF,regBC,regDE,regHL,regAF_,regBC_,regDE_,regHL_,regIX,regIY,regPC,regSP,regI,regR,regR7,regIM/*0,1 или 2*/,regIFF1,regIFF2}
Z80_REG_T;

#ifndef __Z80EX_SELF_INCLUDE

struct _z80_cpu_context;
typedef struct _z80_cpu_context Z80EX_CONTEXT;

#endif

/*callback prototypes:*/

/*called on each T-State [optional]*/
typedef void (*z80ex_tstate_cb)(Z80EX_CONTEXT *cpu, void *user_data);

/*read byte from memory <addr> -- called when RD & MREQ goes active*/
typedef Z80EX_BYTE (*z80ex_mread_cb)(Z80EX_CONTEXT *cpu, Z80EX_WORD addr, void *user_data);

/*write <value> to memory <addr> -- called when WR & MREQ goes active*/
typedef void (*z80ex_mwrite_cb)(Z80EX_CONTEXT *cpu, Z80EX_WORD addr, Z80EX_BYTE value, void *user_data);

/*read byte from <port> -- called when RD & IORQ goes active*/
typedef Z80EX_BYTE (*z80ex_pread_cb)(Z80EX_CONTEXT *cpu, Z80EX_WORD port, void *user_data);

/*write <value> to <port> -- called when WR & IORQ goes active*/
typedef void (*z80ex_pwrite_cb)(Z80EX_CONTEXT *cpu, Z80EX_WORD port, Z80EX_BYTE value, void *user_data);

/*read byte of interrupt vector*/
typedef Z80EX_BYTE (*z80ex_intread_cb)(Z80EX_CONTEXT *cpu, void *user_data);


#ifndef __Z80EX_SELF_INCLUDE
	
#ifdef __cplusplus
extern "C" {
#endif

/*create and initialize CPU*/
extern Z80EX_CONTEXT *z80ex_create(z80ex_mread_cb mrcb_fn, void *mrcb_data,
	z80ex_mwrite_cb mwcb_fn, void *mwcb_data,
	z80ex_pread_cb prcb_fn, void *prcb_data,
	z80ex_pwrite_cb pwcb_fn, void *pwcb_data,
	z80ex_intread_cb ircb_fn, void *ircb_data);

/*destroy CPU*/
extern void z80ex_destroy(Z80EX_CONTEXT *cpu);

/*execute next opcode, return number of T-states*/
extern int z80ex_step(Z80EX_CONTEXT *cpu);

/*set T-state callback*/
extern void z80ex_set_tstate_callback(Z80EX_CONTEXT *cpu, z80ex_tstate_cb cb_fn, void *user_data);

/*maskable interrupr*/
/*returns number of t-states if interrupt was accepted, or 0*/
extern int z80ex_int(Z80EX_CONTEXT *cpu);

/*non-maskable interrupt*/
/*returns number of t-states(11 if interrupt taken, 0 if processor
doing an instruction just now)*/
extern int z80ex_nmi(Z80EX_CONTEXT *cpu);

/*reset CPU*/
extern void z80ex_reset(Z80EX_CONTEXT *cpu);

/*getting register value*/
extern Z80EX_WORD z80ex_get_reg(Z80EX_CONTEXT *cpu, Z80_REG_T reg);

/*setting register value (for 1-byte registers, lower byte of <value> will be used)*/
extern void z80ex_set_reg(Z80EX_CONTEXT *cpu, Z80_REG_T reg, Z80EX_WORD value);

/*returns 1 if CPU doing HALT now*/
extern int z80ex_is_halted(Z80EX_CONTEXT *cpu);

/*when called from callbacks, returns current T-state of executing opcode,
else returns t-states taken by last opcode executed*/
extern int z80ex_op_tstate(Z80EX_CONTEXT *cpu);

/*======================================================*/
/*functions for use in I/O callbacks:*/

/*generate <w_states> Wait-states. (T-state callback will be called for each of them).*/
extern void z80ex_io_w_states(Z80EX_CONTEXT *cpu, unsigned w_states);

/*spend one T-state doing nothing (often IO devices don't handle data request on
the first T-state, at which RD/WR goes active).*/
extern void z80ex_io_next_t_state(Z80EX_CONTEXT *cpu);


#ifdef __cplusplus
}
#endif

#endif

#endif
