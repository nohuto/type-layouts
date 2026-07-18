union _unnamed_1278// Size=0x4 (Id=1278)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long Active:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long OnlyTryAcquireUsed:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long ReleasedOutOfOrder:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long SequenceNumber:29;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1d
    };
    unsigned long Whole;// Offset=0x0 Size=0x4
};
