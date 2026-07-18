struct _WHEA128A// Size=0x10 (Id=2388)
{
    unsigned long long Low;// Offset=0x0 Size=0x8
    long long High;// Offset=0x8 Size=0x8
};

struct _WHEA_X64_REGISTER_STATE// Size=0x100 (Id=1730)
{
    unsigned long long Rax;// Offset=0x0 Size=0x8
    unsigned long long Rbx;// Offset=0x8 Size=0x8
    unsigned long long Rcx;// Offset=0x10 Size=0x8
    unsigned long long Rdx;// Offset=0x18 Size=0x8
    unsigned long long Rsi;// Offset=0x20 Size=0x8
    unsigned long long Rdi;// Offset=0x28 Size=0x8
    unsigned long long Rbp;// Offset=0x30 Size=0x8
    unsigned long long Rsp;// Offset=0x38 Size=0x8
    unsigned long long R8;// Offset=0x40 Size=0x8
    unsigned long long R9;// Offset=0x48 Size=0x8
    unsigned long long R10;// Offset=0x50 Size=0x8
    unsigned long long R11;// Offset=0x58 Size=0x8
    unsigned long long R12;// Offset=0x60 Size=0x8
    unsigned long long R13;// Offset=0x68 Size=0x8
    unsigned long long R14;// Offset=0x70 Size=0x8
    unsigned long long R15;// Offset=0x78 Size=0x8
    unsigned short Cs;// Offset=0x80 Size=0x2
    unsigned short Ds;// Offset=0x82 Size=0x2
    unsigned short Ss;// Offset=0x84 Size=0x2
    unsigned short Es;// Offset=0x86 Size=0x2
    unsigned short Fs;// Offset=0x88 Size=0x2
    unsigned short Gs;// Offset=0x8a Size=0x2
    unsigned long Reserved;// Offset=0x8c Size=0x4
    unsigned long long Rflags;// Offset=0x90 Size=0x8
    unsigned long long Eip;// Offset=0x98 Size=0x8
    unsigned long long Cr0;// Offset=0xa0 Size=0x8
    unsigned long long Cr1;// Offset=0xa8 Size=0x8
    unsigned long long Cr2;// Offset=0xb0 Size=0x8
    unsigned long long Cr3;// Offset=0xb8 Size=0x8
    unsigned long long Cr4;// Offset=0xc0 Size=0x8
    unsigned long long Cr8;// Offset=0xc8 Size=0x8
    struct _WHEA128A Gdtr;// Offset=0xd0 Size=0x10
    struct _WHEA128A Idtr;// Offset=0xe0 Size=0x10
    unsigned short Ldtr;// Offset=0xf0 Size=0x2
    unsigned short Tr;// Offset=0xf2 Size=0x2
};
