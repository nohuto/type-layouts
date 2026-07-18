union _KPRCB_BPB_RETPOLINE_STATE// Size=0x1 (Id=1094)
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
