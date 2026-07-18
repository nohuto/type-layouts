union _MI_IMAGE_INFO_REF// Size=0x8 (Id=689)
{
    long LongValue;// Offset=0x0 Size=0x4
    unsigned long long FullValue;// Offset=0x0 Size=0x8
    struct _MI_IMAGE_ADDITIONAL_INFO * PointerValue;// Offset=0x0 Size=0x8
    struct // Size=0x8 (Id=0)
    {
        union // Size=0x8 (Id=0)
        {
            unsigned long long AllFlags:3;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x3
            unsigned long long DebugRecordsPresent:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        };
    };
};

struct _unnamed_685// Size=0x10 (Id=685)
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
    union // Size=0x4 (Id=0)
    {
        unsigned long NumberOfSubsections;// Offset=0x8 Size=0x4
        union _MI_IMAGE_INFO_REF ImageInfoRef;// Offset=0x8 Size=0x8
    };
};
