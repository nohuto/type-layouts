struct _M128A// Size=0x10 (Id=1106)
{
    unsigned long long Low;// Offset=0x0 Size=0x8
    long long High;// Offset=0x8 Size=0x8
};

struct _XSAVE_FORMAT// Size=0x200 (Id=1450)
{
    unsigned short ControlWord;// Offset=0x0 Size=0x2
    unsigned short StatusWord;// Offset=0x2 Size=0x2
    unsigned char TagWord;// Offset=0x4 Size=0x1
    unsigned char Reserved1;// Offset=0x5 Size=0x1
    unsigned short ErrorOpcode;// Offset=0x6 Size=0x2
    unsigned long ErrorOffset;// Offset=0x8 Size=0x4
    unsigned short ErrorSelector;// Offset=0xc Size=0x2
    unsigned short Reserved2;// Offset=0xe Size=0x2
    unsigned long DataOffset;// Offset=0x10 Size=0x4
    unsigned short DataSelector;// Offset=0x14 Size=0x2
    unsigned short Reserved3;// Offset=0x16 Size=0x2
    unsigned long MxCsr;// Offset=0x18 Size=0x4
    unsigned long MxCsr_Mask;// Offset=0x1c Size=0x4
    struct _M128A FloatRegisters[8];// Offset=0x20 Size=0x80
    struct _M128A XmmRegisters[16];// Offset=0xa0 Size=0x100
    unsigned char Reserved4[96];// Offset=0x1a0 Size=0x60
};

union _CONTEXT::_unnamed_993// Size=0x200 (Id=993)
{
    union // Size=0x200 (Id=0)
    {
        struct _XSAVE_FORMAT FltSave;// Offset=0x0 Size=0x200
        struct _M128A Header[2];// Offset=0x0 Size=0x20
        struct _M128A Legacy[8];// Offset=0x20 Size=0x80
        struct _M128A Xmm0;// Offset=0xa0 Size=0x10
        struct _M128A Xmm1;// Offset=0xb0 Size=0x10
        struct _M128A Xmm2;// Offset=0xc0 Size=0x10
        struct _M128A Xmm3;// Offset=0xd0 Size=0x10
        struct _M128A Xmm4;// Offset=0xe0 Size=0x10
        struct _M128A Xmm5;// Offset=0xf0 Size=0x10
        struct _M128A Xmm6;// Offset=0x100 Size=0x10
        struct _M128A Xmm7;// Offset=0x110 Size=0x10
        struct _M128A Xmm8;// Offset=0x120 Size=0x10
        struct _M128A Xmm9;// Offset=0x130 Size=0x10
        struct _M128A Xmm10;// Offset=0x140 Size=0x10
        struct _M128A Xmm11;// Offset=0x150 Size=0x10
        struct _M128A Xmm12;// Offset=0x160 Size=0x10
        struct _M128A Xmm13;// Offset=0x170 Size=0x10
        struct _M128A Xmm14;// Offset=0x180 Size=0x10
        struct _M128A Xmm15;// Offset=0x190 Size=0x10
    };
};
