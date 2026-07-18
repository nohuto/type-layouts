union _WHEA_GENERIC_ERROR_BLOCKSTATUS// Size=0x4 (Id=2500)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long UncorrectableError:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long CorrectableError:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long MultipleUncorrectableErrors:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long MultipleCorrectableErrors:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long ErrorDataEntryCount:10;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0xa
        unsigned long Reserved:18;// Offset=0x0 Size=0x4 BitOffset=0xe BitSize=0x12
    };
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};
