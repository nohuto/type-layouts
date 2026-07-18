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
