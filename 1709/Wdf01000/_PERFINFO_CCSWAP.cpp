struct _PERFINFO_CCSWAP// Size=0x8 (Id=3213)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long DataType:2;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x2
        unsigned long TimeDelta:30;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1e
        unsigned long OldThreadIdIndex:4;// Offset=0x4 Size=0x4 BitOffset=0x0 BitSize=0x4
        unsigned long OldThreadStateWr:6;// Offset=0x4 Size=0x4 BitOffset=0x4 BitSize=0x6
        unsigned long OldThreadPriority:5;// Offset=0x4 Size=0x4 BitOffset=0xa BitSize=0x5
        unsigned long NewThreadWaitTime:17;// Offset=0x4 Size=0x4 BitOffset=0xf BitSize=0x11
    };
};
