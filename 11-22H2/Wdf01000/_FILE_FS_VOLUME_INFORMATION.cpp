union _LARGE_INTEGER// Size=0x8 (Id=915)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct <unnamed-type-u>// Size=0x8 (Id=12193)
    {
        unsigned long LowPart;// Offset=0x0 Size=0x4
        long HighPart;// Offset=0x4 Size=0x4
    };
    struct _LARGE_INTEGER::<unnamed-type-u> u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _FILE_FS_VOLUME_INFORMATION// Size=0x18 (Id=2157)
{
    union _LARGE_INTEGER VolumeCreationTime;// Offset=0x0 Size=0x8
    unsigned long VolumeSerialNumber;// Offset=0x8 Size=0x4
    unsigned long VolumeLabelLength;// Offset=0xc Size=0x4
    unsigned char SupportsObjects;// Offset=0x10 Size=0x1
    wchar_t VolumeLabel[1];// Offset=0x12 Size=0x2
};
