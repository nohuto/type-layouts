union _LARGE_INTEGER// Size=0x8 (Id=260)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct <unnamed-type-u>// Size=0x8 (Id=12818)
    {
        unsigned long LowPart;// Offset=0x0 Size=0x4
        long HighPart;// Offset=0x4 Size=0x4
    };
    struct _LARGE_INTEGER::<unnamed-type-u> u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _FILE_FS_METADATA_SIZE_INFORMATION// Size=0x10 (Id=2729)
{
    union _LARGE_INTEGER TotalMetadataAllocationUnits;// Offset=0x0 Size=0x8
    unsigned long SectorsPerAllocationUnit;// Offset=0x8 Size=0x4
    unsigned long BytesPerSector;// Offset=0xc Size=0x4
};
