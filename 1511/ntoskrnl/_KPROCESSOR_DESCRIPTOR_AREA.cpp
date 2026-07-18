union _KIDTENTRY64// Size=0x10 (Id=1034)
{
    union // Size=0x10 (Id=0)
    {
        unsigned short OffsetLow;// Offset=0x0 Size=0x2
        unsigned short Selector;// Offset=0x2 Size=0x2
        struct // Size=0x2 (Id=0)
        {
            unsigned short IstIndex:3;// Offset=0x4 Size=0x2 BitOffset=0x0 BitSize=0x3
            unsigned short Reserved0:5;// Offset=0x4 Size=0x2 BitOffset=0x3 BitSize=0x5
            unsigned short Type:5;// Offset=0x4 Size=0x2 BitOffset=0x8 BitSize=0x5
            unsigned short Dpl:2;// Offset=0x4 Size=0x2 BitOffset=0xd BitSize=0x2
            unsigned short Present:1;// Offset=0x4 Size=0x2 BitOffset=0xf BitSize=0x1
        };
        unsigned short OffsetMiddle;// Offset=0x6 Size=0x2
        unsigned long OffsetHigh;// Offset=0x8 Size=0x4
        unsigned long Reserved1;// Offset=0xc Size=0x4
        unsigned long long Alignment;// Offset=0x0 Size=0x8
    };
};

struct _KTSS64// Size=0x68 (Id=824)
{
    unsigned long Reserved0;// Offset=0x0 Size=0x4
    unsigned long long Rsp0;// Offset=0x4 Size=0x8
    unsigned long long Rsp1;// Offset=0xc Size=0x8
    unsigned long long Rsp2;// Offset=0x14 Size=0x8
    unsigned long long Ist[8];// Offset=0x1c Size=0x40
    unsigned long long Reserved1;// Offset=0x5c Size=0x8
    unsigned short Reserved2;// Offset=0x64 Size=0x2
    unsigned short IoMapBase;// Offset=0x66 Size=0x2
};

struct _unnamed_284// Size=0x4 (Id=284)
{
    unsigned char BaseMiddle;// Offset=0x0 Size=0x1
    unsigned char Flags1;// Offset=0x1 Size=0x1
    unsigned char Flags2;// Offset=0x2 Size=0x1
    unsigned char BaseHigh;// Offset=0x3 Size=0x1
};

struct _unnamed_285// Size=0x4 (Id=285)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long BaseMiddle:8;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x8
        unsigned long Type:5;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x5
        unsigned long Dpl:2;// Offset=0x0 Size=0x4 BitOffset=0xd BitSize=0x2
        unsigned long Present:1;// Offset=0x0 Size=0x4 BitOffset=0xf BitSize=0x1
        unsigned long LimitHigh:4;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x4
        unsigned long System:1;// Offset=0x0 Size=0x4 BitOffset=0x14 BitSize=0x1
        unsigned long LongMode:1;// Offset=0x0 Size=0x4 BitOffset=0x15 BitSize=0x1
        unsigned long DefaultBig:1;// Offset=0x0 Size=0x4 BitOffset=0x16 BitSize=0x1
        unsigned long Granularity:1;// Offset=0x0 Size=0x4 BitOffset=0x17 BitSize=0x1
        unsigned long BaseHigh:8;// Offset=0x0 Size=0x4 BitOffset=0x18 BitSize=0x8
    };
};

union _KGDTENTRY64// Size=0x10 (Id=286)
{
    unsigned short LimitLow;// Offset=0x0 Size=0x2
    unsigned short BaseLow;// Offset=0x2 Size=0x2
    union // Size=0x4 (Id=0)
    {
        struct _unnamed_284 Bytes;// Offset=0x4 Size=0x4
        struct _unnamed_285 Bits;// Offset=0x4 Size=0x4
    };
    unsigned long BaseUpper;// Offset=0x8 Size=0x4
    unsigned long MustBeZero;// Offset=0xc Size=0x4
    long long DataLow;// Offset=0x0 Size=0x8
    long long DataHigh;// Offset=0x8 Size=0x8
};

struct _unnamed_946// Size=0x4 (Id=946)
{
    unsigned char BaseMid;// Offset=0x0 Size=0x1
    unsigned char Flags1;// Offset=0x1 Size=0x1
    unsigned char Flags2;// Offset=0x2 Size=0x1
    unsigned char BaseHi;// Offset=0x3 Size=0x1
};

struct _unnamed_947// Size=0x4 (Id=947)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long BaseMid:8;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x8
        unsigned long Type:5;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x5
        unsigned long Dpl:2;// Offset=0x0 Size=0x4 BitOffset=0xd BitSize=0x2
        unsigned long Pres:1;// Offset=0x0 Size=0x4 BitOffset=0xf BitSize=0x1
        unsigned long LimitHi:4;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x4
        unsigned long Sys:1;// Offset=0x0 Size=0x4 BitOffset=0x14 BitSize=0x1
        unsigned long Reserved_0:1;// Offset=0x0 Size=0x4 BitOffset=0x15 BitSize=0x1
        unsigned long Default_Big:1;// Offset=0x0 Size=0x4 BitOffset=0x16 BitSize=0x1
        unsigned long Granularity:1;// Offset=0x0 Size=0x4 BitOffset=0x17 BitSize=0x1
        unsigned long BaseHi:8;// Offset=0x0 Size=0x4 BitOffset=0x18 BitSize=0x8
    };
};

union _unnamed_948// Size=0x4 (Id=948)
{
    struct _unnamed_946 Bytes;// Offset=0x0 Size=0x4
    struct _unnamed_947 Bits;// Offset=0x0 Size=0x4
};

struct _KLDTENTRY// Size=0x8 (Id=949)
{
    unsigned short LimitLow;// Offset=0x0 Size=0x2
    unsigned short BaseLow;// Offset=0x2 Size=0x2
    union _unnamed_948 HighWord;// Offset=0x4 Size=0x4
};

struct _KIST_BASE_FRAME// Size=0x20 (Id=1302)
{
    struct _KPCR * KernelGsBase;// Offset=0x0 Size=0x8
    struct _KIST_LINK_FRAME * IstStack;// Offset=0x8 Size=0x8
    unsigned long long PreviousGsBase;// Offset=0x10 Size=0x8
    unsigned long long PreviousCr3;// Offset=0x18 Size=0x8
};

struct _KTRANSITION_STACK// Size=0x200 (Id=288)
{
    union // Size=0x200 (Id=0)
    {
        unsigned char Stack[512];// Offset=0x0 Size=0x200
        unsigned char IstStack[480];// Offset=0x0 Size=0x1e0
        struct _KIST_BASE_FRAME IstFrame;// Offset=0x1e0 Size=0x20
    };
};

struct _KPROCESSOR_DESCRIPTOR_AREA// Size=0x5000 (Id=287)
{
    union _KIDTENTRY64 Idt[256];// Offset=0x0 Size=0x1000
    struct _KTSS64 Tss;// Offset=0x1000 Size=0x68
    unsigned long long TssSpare;// Offset=0x1068 Size=0x8
    struct _KPCR * KernelGsBase;// Offset=0x1070 Size=0x8
    void * IdleStack;// Offset=0x1078 Size=0x8
    unsigned char TssPad[3884];// Offset=0x1080 Size=0xf2c
    unsigned char GdtPadTemp[4096];// Offset=0x1fac Size=0x1000
    union _KGDTENTRY64 Gdt[5];// Offset=0x2fb0 Size=0x50
    struct _KLDTENTRY GdtCmTebDescriptor;// Offset=0x3000 Size=0x8
    unsigned char GdtEndPadding[4088];// Offset=0x3008 Size=0xff8
    struct _KTRANSITION_STACK TransitionStack[8];// Offset=0x4000 Size=0x1000
};
