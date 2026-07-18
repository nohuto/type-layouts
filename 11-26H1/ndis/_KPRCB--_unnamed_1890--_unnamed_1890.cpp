union _KPRCB_BPB_STATE// Size=0x2 (Id=980)
{
    struct // Size=0x2 (Id=0)
    {
        unsigned short CpuIdle:1;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0x1
        unsigned short FlushRsbOnTrap:1;// Offset=0x0 Size=0x2 BitOffset=0x1 BitSize=0x1
        unsigned short IbpbOnReturn:1;// Offset=0x0 Size=0x2 BitOffset=0x2 BitSize=0x1
        unsigned short IbpbOnTrap:1;// Offset=0x0 Size=0x2 BitOffset=0x3 BitSize=0x1
        unsigned short IbpbOnRetpolineExit:1;// Offset=0x0 Size=0x2 BitOffset=0x4 BitSize=0x1
        unsigned short FlushRsbOnReturn:1;// Offset=0x0 Size=0x2 BitOffset=0x5 BitSize=0x1
        unsigned short FlushRsbOnRetpolineExit:1;// Offset=0x0 Size=0x2 BitOffset=0x6 BitSize=0x1
        unsigned short FlushBhbOnTrap:1;// Offset=0x0 Size=0x2 BitOffset=0x7 BitSize=0x1
        unsigned short DivideOnReturn:1;// Offset=0x0 Size=0x2 BitOffset=0x8 BitSize=0x1
        unsigned short VerwOnNonKvaReturn:1;// Offset=0x0 Size=0x2 BitOffset=0x9 BitSize=0x1
        unsigned short Spare:6;// Offset=0x0 Size=0x2 BitOffset=0xa BitSize=0x6
    };
    unsigned short AllFlags;// Offset=0x0 Size=0x2
};

union _KPRCB_BPB_FEATURES// Size=0x1 (Id=1405)
{
    struct // Size=0x1 (Id=0)
    {
        unsigned char ClearOnIdle:1;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char Enabled:1;// Offset=0x0 Size=0x1 BitOffset=0x1 BitSize=0x1
        unsigned char Smep:1;// Offset=0x0 Size=0x1 BitOffset=0x2 BitSize=0x1
        unsigned char KCet:1;// Offset=0x0 Size=0x1 BitOffset=0x3 BitSize=0x1
        unsigned char BhbFlushSequence:2;// Offset=0x0 Size=0x1 BitOffset=0x4 BitSize=0x2
        unsigned char FeaturesReserved2:1;// Offset=0x0 Size=0x1 BitOffset=0x6 BitSize=0x1
        unsigned char FeaturesReserved:1;// Offset=0x0 Size=0x1 BitOffset=0x7 BitSize=0x1
    };
    unsigned char AllFlags;// Offset=0x0 Size=0x1
};

union _KPRCB_BPB_RETPOLINE_STATE// Size=0x1 (Id=1092)
{
    struct // Size=0x1 (Id=0)
    {
        unsigned char RunningNonRetpolineCode:1;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char IndirectCallsSafe:1;// Offset=0x0 Size=0x1 BitOffset=0x1 BitSize=0x1
        unsigned char RetpolineEnabled:1;// Offset=0x0 Size=0x1 BitOffset=0x2 BitSize=0x1
        unsigned char RetpolineStateReserved:5;// Offset=0x0 Size=0x1 BitOffset=0x3 BitSize=0x5
    };
    unsigned char AllFlags;// Offset=0x0 Size=0x1
};

struct _KPRCB::_unnamed_1890::_unnamed_1890// Size=0x20 (Id=1890)
{
    unsigned long long TrappedSecurityDomain;// Offset=0x0 Size=0x8
    union _KPRCB_BPB_STATE BpbState;// Offset=0x8 Size=0x2
    union _KPRCB_BPB_STATE BpbTrappedBpbState;// Offset=0xa Size=0x2
    union _KPRCB_BPB_FEATURES BpbFeatures;// Offset=0xc Size=0x1
    unsigned char PrcbPad12b;// Offset=0xd Size=0x1
    union _KPRCB_BPB_RETPOLINE_STATE BpbRetpolineState;// Offset=0xe Size=0x1
    unsigned char BpbRetpolineStateOverflow;// Offset=0xf Size=0x1
    short PairRegister;// Offset=0x10 Size=0x2
    unsigned short BpbRetpolineExitSpecCtrl;// Offset=0x12 Size=0x2
    unsigned short BpbTrappedRetpolineExitSpecCtrl;// Offset=0x14 Size=0x2
    unsigned short BpbCurrentSpecCtrl;// Offset=0x16 Size=0x2
    unsigned short BpbKernelSpecCtrl;// Offset=0x18 Size=0x2
    unsigned short BpbNmiSpecCtrl;// Offset=0x1a Size=0x2
    unsigned short BpbUserSpecCtrl;// Offset=0x1c Size=0x2
    unsigned short PrcbPad12c[1];// Offset=0x1e Size=0x2
};
