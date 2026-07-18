struct _GUID// Size=0x10 (Id=464)
{
    unsigned long Data1;// Offset=0x0 Size=0x4
    unsigned short Data2;// Offset=0x4 Size=0x2
    unsigned short Data3;// Offset=0x6 Size=0x2
    unsigned char Data4[8];// Offset=0x8 Size=0x8
};

union KSDATAFORMAT// Size=0x40 (Id=945)
{
    union // Size=0x40 (Id=0)
    {
        unsigned long FormatSize;// Offset=0x0 Size=0x4
        unsigned long Flags;// Offset=0x4 Size=0x4
        unsigned long SampleSize;// Offset=0x8 Size=0x4
        unsigned long Reserved;// Offset=0xc Size=0x4
        struct _GUID MajorFormat;// Offset=0x10 Size=0x10
        struct _GUID SubFormat;// Offset=0x20 Size=0x10
        struct _GUID Specifier;// Offset=0x30 Size=0x10
        long long Alignment;// Offset=0x0 Size=0x8
    };
};
