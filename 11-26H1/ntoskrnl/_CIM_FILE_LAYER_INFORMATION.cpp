struct _UNICODE_STRING// Size=0x10 (Id=6)
{
    unsigned short Length;// Offset=0x0 Size=0x2
    unsigned short MaximumLength;// Offset=0x2 Size=0x2
    wchar_t * Buffer;// Offset=0x8 Size=0x8
};

struct _CIM_FILE_LAYER_INFORMATION// Size=0x40 (Id=2569)
{
    union // Size=0x4 (Id=0)
    {
        unsigned long Flags;// Offset=0x0 Size=0x4
        struct // Size=0x4 (Id=0)
        {
            unsigned long FlagsBlockDevice:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
            unsigned long FlagsBlockFile:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
            unsigned long FlagsDiskHashesLookup:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        };
    };
    struct _BOOT_LAYER_INFORMATION * ParentLayer;// Offset=0x8 Size=0x8
    struct _UNICODE_STRING FilePath;// Offset=0x10 Size=0x10
    struct _UNICODE_STRING ImageName;// Offset=0x20 Size=0x10
    unsigned long HashAlgId;// Offset=0x30 Size=0x4
    unsigned short ExpectedHashSourceLength;// Offset=0x34 Size=0x2
    unsigned short ExpectedHashLength;// Offset=0x36 Size=0x2
    unsigned char * ExpectedHash;// Offset=0x38 Size=0x8
};
