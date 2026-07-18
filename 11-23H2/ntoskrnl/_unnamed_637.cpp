struct _unnamed_637// Size=0x10 (Id=637)
{
    union // Size=0x4 (Id=0)
    {
        unsigned long NumberOfSystemCacheViews;// Offset=0x0 Size=0x4
        unsigned long ImageRelocationStartBit;// Offset=0x0 Size=0x4
    };
    union // Size=0x4 (Id=0)
    {
        long WritableUserReferences;// Offset=0x4 Size=0x4
        struct // Size=0x4 (Id=0)
        {
            unsigned long ImageRelocationSizeIn64k:16;// Offset=0x4 Size=0x4 BitOffset=0x0 BitSize=0x10
            unsigned long SystemImage:1;// Offset=0x4 Size=0x4 BitOffset=0x10 BitSize=0x1
            unsigned long CantMove:1;// Offset=0x4 Size=0x4 BitOffset=0x11 BitSize=0x1
            unsigned long StrongCode:2;// Offset=0x4 Size=0x4 BitOffset=0x12 BitSize=0x2
            unsigned long BitMap:2;// Offset=0x4 Size=0x4 BitOffset=0x14 BitSize=0x2
            unsigned long ImageActive:1;// Offset=0x4 Size=0x4 BitOffset=0x16 BitSize=0x1
            unsigned long ImageBaseOkToReuse:1;// Offset=0x4 Size=0x4 BitOffset=0x17 BitSize=0x1
        };
    };
    union // Size=0xc (Id=0)
    {
        unsigned long FlushInProgressCount;// Offset=0x8 Size=0x4
        unsigned long NumberOfSubsections;// Offset=0x8 Size=0x4
        struct _MI_IMAGE_SECURITY_REFERENCE * SeImageStub;// Offset=0x8 Size=0x8
    };
};
