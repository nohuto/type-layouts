struct _MMSECTION_FLAGS2// Size=0x4 (Id=1228)
{
    struct // Size=0x3 (Id=0)
    {
        unsigned short PartitionId:10;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0xa
        unsigned char NoCrossPartitionAccess:1;// Offset=0x2 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char SubsectionCrossPartitionReferenceOverflow:1;// Offset=0x2 Size=0x1 BitOffset=0x1 BitSize=0x1
        unsigned char UsingFileExtents:2;// Offset=0x2 Size=0x1 BitOffset=0x2 BitSize=0x2
    };
};

union _unnamed_636// Size=0x4 (Id=636)
{
    unsigned long LongFlags;// Offset=0x0 Size=0x4
    struct _MMSECTION_FLAGS2 Flags;// Offset=0x0 Size=0x4
};
