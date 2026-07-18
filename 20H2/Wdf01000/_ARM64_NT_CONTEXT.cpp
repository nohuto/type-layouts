union _ARM64_NT_NEON128// Size=0x10 (Id=2600)
{
    unsigned long long Low;// Offset=0x0 Size=0x8
    long long High;// Offset=0x8 Size=0x8
    float D[2];// Offset=0x0 Size=0x10
    float S[4];// Offset=0x0 Size=0x10
    unsigned short H[8];// Offset=0x0 Size=0x10
    unsigned char B[16];// Offset=0x0 Size=0x10
};

struct _ARM64_NT_CONTEXT// Size=0x390 (Id=2509)
{
    unsigned long ContextFlags;// Offset=0x0 Size=0x4
    unsigned long Cpsr;// Offset=0x4 Size=0x4
    union // Size=0x100 (Id=0)
    {
        unsigned long long X0;// Offset=0x8 Size=0x8
        unsigned long long X1;// Offset=0x10 Size=0x8
        unsigned long long X2;// Offset=0x18 Size=0x8
        unsigned long long X3;// Offset=0x20 Size=0x8
        unsigned long long X4;// Offset=0x28 Size=0x8
        unsigned long long X5;// Offset=0x30 Size=0x8
        unsigned long long X6;// Offset=0x38 Size=0x8
        unsigned long long X7;// Offset=0x40 Size=0x8
        unsigned long long X8;// Offset=0x48 Size=0x8
        unsigned long long X9;// Offset=0x50 Size=0x8
        unsigned long long X10;// Offset=0x58 Size=0x8
        unsigned long long X11;// Offset=0x60 Size=0x8
        unsigned long long X12;// Offset=0x68 Size=0x8
        unsigned long long X13;// Offset=0x70 Size=0x8
        unsigned long long X14;// Offset=0x78 Size=0x8
        unsigned long long X15;// Offset=0x80 Size=0x8
        unsigned long long X16;// Offset=0x88 Size=0x8
        unsigned long long X17;// Offset=0x90 Size=0x8
        unsigned long long X18;// Offset=0x98 Size=0x8
        unsigned long long X19;// Offset=0xa0 Size=0x8
        unsigned long long X20;// Offset=0xa8 Size=0x8
        unsigned long long X21;// Offset=0xb0 Size=0x8
        unsigned long long X22;// Offset=0xb8 Size=0x8
        unsigned long long X23;// Offset=0xc0 Size=0x8
        unsigned long long X24;// Offset=0xc8 Size=0x8
        unsigned long long X25;// Offset=0xd0 Size=0x8
        unsigned long long X26;// Offset=0xd8 Size=0x8
        unsigned long long X27;// Offset=0xe0 Size=0x8
        unsigned long long X28;// Offset=0xe8 Size=0x8
        unsigned long long Fp;// Offset=0xf0 Size=0x8
        unsigned long long Lr;// Offset=0xf8 Size=0x8
        unsigned long long X[31];// Offset=0x8 Size=0xf8
    };
    unsigned long long Sp;// Offset=0x100 Size=0x8
    unsigned long long Pc;// Offset=0x108 Size=0x8
    union _ARM64_NT_NEON128 V[32];// Offset=0x110 Size=0x200
    unsigned long Fpcr;// Offset=0x310 Size=0x4
    unsigned long Fpsr;// Offset=0x314 Size=0x4
    unsigned long Bcr[8];// Offset=0x318 Size=0x20
    unsigned long long Bvr[8];// Offset=0x338 Size=0x40
    unsigned long Wcr[2];// Offset=0x378 Size=0x8
    unsigned long long Wvr[2];// Offset=0x380 Size=0x10
};
