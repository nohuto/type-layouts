union _KPRCB_BPB_STATE// Size=0x2 (Id=982)
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
        unsigned short Reserved1:1;// Offset=0x0 Size=0x2 BitOffset=0x9 BitSize=0x1
        unsigned short Spare:6;// Offset=0x0 Size=0x2 BitOffset=0xa BitSize=0x6
    };
    unsigned short AllFlags;// Offset=0x0 Size=0x2
};
