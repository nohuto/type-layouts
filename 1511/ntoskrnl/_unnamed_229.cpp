struct _MMSECTION_FLAGS2// Size=0x4 (Id=1056)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long PartitionId:10;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0xa
        unsigned long NumberOfChildViews:22;// Offset=0x0 Size=0x4 BitOffset=0xa BitSize=0x16
    };
};

union _unnamed_229// Size=0x4 (Id=229)
{
    unsigned long LongFlags;// Offset=0x0 Size=0x4
    struct _MMSECTION_FLAGS2 Flags;// Offset=0x0 Size=0x4
};
