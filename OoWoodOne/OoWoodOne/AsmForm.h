#ifndef _ASM_FORM_
#define _ASM_FORM_
#include "Plugin.h"

enum opcode_type
{
	ASM_NONE=0,
	ASM_AAA,
	ASM_AAD,
	ASM_AAM,
	ASM_AAS,
	ASM_ADC,
	ASM_ADD,
	ASM_AND,
	ASM_BSF,
	ASM_BSR,
	ASM_BSWAP,
	ASM_BT,
	ASM_BTC,
	ASM_BTR,
	ASM_BTS,
	ASM_CALL,
	ASM_CBW,
	ASM_CDQ,
	ASM_CLC,
	ASM_CLD,
	ASM_CLI,
	ASM_CLTS,
	ASM_CMC,
	ASM_CMOVA,
	ASM_CMOVAE,
	ASM_CMOVB,
	ASM_CMOVBE,
	ASM_CMOVC,
	ASM_CMOVE,
	ASM_CMOVG,
	ASM_CMOVGE,
	ASM_CMOVL,
	ASM_CMOVLE,
	ASM_CMOVNA,
	ASM_CMOVNAE,
	ASM_CMOVNB,
	ASM_CMOVNBE,
	ASM_CMOVNC,
	ASM_CMOVNE,
	ASM_CMOVNG,
	ASM_CMOVNGE,
	ASM_CMOVNL,
	ASM_CMOVNLE,
	ASM_CMOVNO,
	ASM_CMOVNP,
	ASM_CMOVNS,
	ASM_CMOVNZ,
	ASM_CMOVO,
	ASM_CMOVP,
	ASM_CMOVPE,
	ASM_CMOVPO,
	ASM_CMOVS,
	ASM_CMOVZ,
	ASM_CMP,
	ASM_CMPS,
	ASM_CMPSB,
	ASM_CMPSD,
	ASM_CMPSW,
	ASM_CMPXCHG,
	ASM_CPUID,
	ASM_CWD,
	ASM_CWDE,
	ASM_DAA,
	ASM_DAS,
	ASM_DEC,
	ASM_DIV,
	ASM_ENTER,
	ASM_HLT,
	ASM_IDIV,
	ASM_IMUL,
	ASM_IN,
	ASM_INC,
	ASM_INS,
	ASM_INSB,
	ASM_INSD,
	ASM_INSW,
	ASM_INT,
	ASM_INT3,
	ASM_INTO,
	ASM_INVD,
	ASM_INVLPG,
	ASM_IRET,
	ASM_IRETD,
	ASM_IRETW,
	ASM_JA,
	ASM_JAE,
	ASM_JB,
	ASM_JBE,
	ASM_JC,
	ASM_JCXZ,
	ASM_JE,
	ASM_JECXZ,
	ASM_JG,
	ASM_JGE,
	ASM_JL,
	ASM_JLE,
	ASM_JMP,
	ASM_JNA,
	ASM_JNAE,
	ASM_JNB,
	ASM_JNBE,
	ASM_JNC,
	ASM_JNE,
	ASM_JNG,
	ASM_JNGE,
	ASM_JNL,
	ASM_JNLE,
	ASM_JNO,
	ASM_JNP,
	ASM_JNS,
	ASM_JNZ,
	ASM_JO,
	ASM_JP,
	ASM_JPE,
	ASM_JPO,
	ASM_JS,
	ASM_JZ,
	ASM_LAHF,
	ASM_LAR,
	ASM_LDS,
	ASM_LEA,
	ASM_LEAVE,
	ASM_LES,
	ASM_LFENCE,
	ASM_LFS,
	ASM_LGDT,
	ASM_LGS,
	ASM_LIDT,
	ASM_LLDT,
	ASM_LMSW,
	ASM_LODS,
	ASM_LODSB,
	ASM_LODSD,
	ASM_LODSW,
	ASM_LOOP,
	ASM_LOOPE,
	ASM_LOOPNE,
	ASM_LSL,
	ASM_LSS,
	ASM_LTR,
	ASM_MOV,
	ASM_MOVBE,
	ASM_MOVNTI,
	ASM_MOVS,
	ASM_MOVSB,
	ASM_MOVSD,
	ASM_MOVSW,
	ASM_MOVSX,
	ASM_MOVZX,
	ASM_MUL,
	ASM_MWAIT,
	ASM_NEG,
	ASM_NOP,
	ASM_NOT,
	ASM_OR,
	ASM_OUT,
	ASM_OUTS,
	ASM_OUTSB,
	ASM_OUTSD,
	ASM_OUTSW,
	ASM_PAUSE,
	ASM_POP,
	ASM_POPA,
	ASM_POPAD,
	ASM_POPAW,
	ASM_POPCNT,
	ASM_POPF,
	ASM_POPFD,
	ASM_POPFW,
	ASM_PREFETCHNTA,
	ASM_PREFETCHT0,
	ASM_PREFETCHT1,
	ASM_PREFETCHT2,
	ASM_PUSH,
	ASM_PUSHA,
	ASM_PUSHAD,
	ASM_PUSHAW,
	ASM_PUSHF,
	ASM_PUSHFD,
	ASM_PUSHFW,
	ASM_RCL,
	ASM_RCR,
	ASM_RDMSR,
	ASM_RDPMC,
	ASM_RDTSC,
	ASM_RDTSCP,
	ASM_RET,
	ASM_RETN,
	ASM_ROL,
	ASM_ROR,
	ASM_RSM,
	ASM_SAHF,
	ASM_SAL,
	ASM_SAR,
	ASM_SBB,
	ASM_SCAS,
	ASM_SCASB,
	ASM_SCASD,
	ASM_SCASW,
	ASM_SETA,
	ASM_SETAE,
	ASM_SETB,
	ASM_SETBE,
	ASM_SETC,
	ASM_SETE,
	ASM_SETG,
	ASM_SETGE,
	ASM_SETL,
	ASM_SETLE,
	ASM_SETNA,
	ASM_SETNAE,
	ASM_SETNB,
	ASM_SETNBE,
	ASM_SETNC,
	ASM_SETNE,
	ASM_SETNG,
	ASM_SETNGE,
	ASM_SETNL,
	ASM_SETNLE,
	ASM_SETNO,
	ASM_SETNP,
	ASM_SETNS,
	ASM_SETNZ,
	ASM_SETO,
	ASM_SETP,
	ASM_SETPE,
	ASM_SETPO,
	ASM_SETS,
	ASM_SETZ,
	ASM_SFENCE,
	ASM_SGDT,
	ASM_SHL,
	ASM_SHLD,
	ASM_SHR,
	ASM_SHRD,
	ASM_SIDT,
	ASM_SLDT,
	ASM_SMSW,
	ASM_STAC,
	ASM_STC,
	ASM_STD,
	ASM_STI,
	ASM_STOS,
	ASM_STOSB,
	ASM_STOSD,
	ASM_STOSW,
	ASM_STR,
	ASM_SUB,
	ASM_SYSCALL,
	ASM_SYSENTER,
	ASM_SYSEXIT,
	ASM_SYSRET,
	ASM_TEST,
	ASM_UD2,
	ASM_VERR,
	ASM_VERW,
	ASM_WAIT,
	ASM_WBINVD,
	ASM_WRMSR,
	ASM_XADD,
	ASM_XCHG,
	ASM_XGETVB,
	ASM_XLATB,
	ASM_XOR,
	ASM_XRSTOR,
	ASM_XRSTORS,
	ASM_XSAVE,
	ASM_XSAVEC,
	ASM_XSAVES,
};

enum reg_type
{
	ud_none = 0x00000000,
	ud_al = 0x00000001,//0001
	ud_ah = 0x00000002,//0010
	ud_ax = 0x00000003,//0011
	ud_eax = 0x00000007,//0111
	ud_cl = 0x00000010,//0001 /1
	ud_ch = 0x00000020,//0010 /1
	ud_cx = 0x00000030,//0011 /1
	ud_ecx = 0x00000070,//0111 /1
	ud_dl = 0x00000100,//0001 /2
	ud_dh = 0x00000200,//0010 /2
	ud_dx = 0x00000300,//0011 /2
	ud_edx = 0x00000700,//0111 /2
	ud_bl = 0x00001000,//0001 /3
	ud_bh = 0x00002000,//0010 /3
	ud_bx = 0x00003000,//0011 /3
	ud_ebx = 0x00007000,//0111 /3
	ud_sp = 0x00010000,//0001 /4
	ud_esp = 0x00030000,//0011 /4
	ud_bp = 0x00100000,//0001 /5
	ud_ebp = 0x00300000,//0011 /5
	ud_si = 0x01000000,//0001 /6
	ud_esi = 0x03000000,//0011 /6
	ud_di = 0x10000000,//0001 /7
	ud_edi = 0x30000000,//0011 /7
	ud_all = ud_eax | ud_ecx | ud_edx | ud_ebx | ud_esp | ud_ebp | ud_esi | ud_edi
};

#define REG_INDEX_NONE 0xFFFFFFFF
//#define IsUDRegType(x) ((x)>=ud_eax && (x)<=ud_edi)

enum op_type
{
	OP_NONE = 0x0000,
	//type
	OP_REG = 0x0001,
	OP_IMM = 0x0002,
	OP_MEM = 0x0004,
	//size
	OP_BYTE = 0x00010000,
	OP_WORD = 0x00020000,
	OP_DWORD = 0x00040000
};


enum efl_type
{
	efl_CF=0,
	efl_PF,
	efl_AF,
	efl_ZF,
	efl_SF,
	efl_TF,
	efl_DF,
	efl_OF
};

struct op_info
{
	ulong opType;//op_type
	ulong reg; //reg_type
	ulong opConst;
};

struct cmd_info
{
	ulong ip;
	int optType;//opcode type
	op_info op[3];
	ulong cmdLen;
	char cmdBuf[MAXCMDSIZE];
	char cmd[TEXTLEN];
};

const char* ASM_REG_KEY[];
const char* ASM_OPT_KEY[];


#define GET_REG_KEY(x) ASM_REG_KEY[x]

#define RegIndex2RegType(x) (0x7 << ((x)*4))
ulong RegType2RegIndex(ulong regType);
opcode_type FindAsmOpt(const char* keyWord);
opcode_type GetOpcodeType(const char* text);
ulong Regscale2Regtype(t_operand* op);
/*
 * 此函数功能为填cmdInfo节点，一个cmdInfo节点能完整说明一条汇编指令所有信息。
 * 包括基本的地址、汇编指令文本、汇编枚举类型、字节码；
 * 还有所有操作数的信息，操作数类型、大小、所用寄存器、操作数值。
 * ulong ip;						///EIP
 * int optType;//opcode type		///枚举出来的指令类型
 * op_info op[3];					///
 * ulong cmdLen;					///字节码长度
 * char cmdBuf[MAXCMDSIZE];		///字节码数组
 * char cmd[TEXTLEN];				///反汇编出来的汇编指令
 *
 * op[i].opType		操作数类型、操作数大小
 * op[i].reg		如果操作数是寄存器用了哪个寄存器
 * op[i].opConst	操作数
*/
void convertDisasm2Cmdinfo(t_disasm* disasm,void* cmdbuf,ulong cmdlen, cmd_info* cmdinfo);






#endif
