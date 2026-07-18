struct _SETJMP_FLOAT128// Size=0x10 (Id=1149)
{
    unsigned long long Part[2];// Offset=0x0 Size=0x10
};

struct _JUMP_BUFFER// Size=0x100 (Id=3462)
{
    unsigned long long Frame;// Offset=0x0 Size=0x8
    unsigned long long Rbx;// Offset=0x8 Size=0x8
    unsigned long long Rsp;// Offset=0x10 Size=0x8
    unsigned long long Rbp;// Offset=0x18 Size=0x8
    unsigned long long Rsi;// Offset=0x20 Size=0x8
    unsigned long long Rdi;// Offset=0x28 Size=0x8
    unsigned long long R12;// Offset=0x30 Size=0x8
    unsigned long long R13;// Offset=0x38 Size=0x8
    unsigned long long R14;// Offset=0x40 Size=0x8
    unsigned long long R15;// Offset=0x48 Size=0x8
    unsigned long long Rip;// Offset=0x50 Size=0x8
    unsigned long MxCsr;// Offset=0x58 Size=0x4
    unsigned short FpCsr;// Offset=0x5c Size=0x2
    unsigned short Spare;// Offset=0x5e Size=0x2
    struct _SETJMP_FLOAT128 Xmm6;// Offset=0x60 Size=0x10
    struct _SETJMP_FLOAT128 Xmm7;// Offset=0x70 Size=0x10
    struct _SETJMP_FLOAT128 Xmm8;// Offset=0x80 Size=0x10
    struct _SETJMP_FLOAT128 Xmm9;// Offset=0x90 Size=0x10
    struct _SETJMP_FLOAT128 Xmm10;// Offset=0xa0 Size=0x10
    struct _SETJMP_FLOAT128 Xmm11;// Offset=0xb0 Size=0x10
    struct _SETJMP_FLOAT128 Xmm12;// Offset=0xc0 Size=0x10
    struct _SETJMP_FLOAT128 Xmm13;// Offset=0xd0 Size=0x10
    struct _SETJMP_FLOAT128 Xmm14;// Offset=0xe0 Size=0x10
    struct _SETJMP_FLOAT128 Xmm15;// Offset=0xf0 Size=0x10
};
