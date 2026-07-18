struct _MMPAGE_FILE_EXPANSION_FLAGS// Size=0x4 (Id=1473)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned char PageFileNumber:8;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x8
        unsigned char Spare1:8;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x8
        unsigned char Spare2:8;// Offset=0x2 Size=0x1 BitOffset=0x0 BitSize=0x8
        unsigned char IgnoreCurrentCommit:1;// Offset=0x3 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char IncreaseMinimumSize:1;// Offset=0x3 Size=0x1 BitOffset=0x1 BitSize=0x1
        unsigned char AttemptForCantExtend:1;// Offset=0x3 Size=0x1 BitOffset=0x2 BitSize=0x1
        unsigned char UnusedSegmentDeletion:1;// Offset=0x3 Size=0x1 BitOffset=0x3 BitSize=0x1
        unsigned char PageFileContract:1;// Offset=0x3 Size=0x1 BitOffset=0x4 BitSize=0x1
        unsigned char Spare3:3;// Offset=0x3 Size=0x1 BitOffset=0x5 BitSize=0x3
    };
};

union _unnamed_1035// Size=0x4 (Id=1035)
{
    unsigned long LongFlags;// Offset=0x0 Size=0x4
    struct _MMPAGE_FILE_EXPANSION_FLAGS Flags;// Offset=0x0 Size=0x4
};
