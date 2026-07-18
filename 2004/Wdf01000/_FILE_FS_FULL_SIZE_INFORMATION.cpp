union _LARGE_INTEGER// Size=0x8 (Id=206)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct <unnamed-type-u>// Size=0x8 (Id=10311)
    {
        unsigned long LowPart;// Offset=0x0 Size=0x4
        long HighPart;// Offset=0x4 Size=0x4
    };
    struct _LARGE_INTEGER::<unnamed-type-u> u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _FILE_FS_FULL_SIZE_INFORMATION// Size=0x20 (Id=1783)
{
    union _LARGE_INTEGER TotalAllocationUnits;// Offset=0x0 Size=0x8
    union _LARGE_INTEGER CallerAvailableAllocationUnits;// Offset=0x8 Size=0x8
    union _LARGE_INTEGER ActualAvailableAllocationUnits;// Offset=0x10 Size=0x8
    unsigned long SectorsPerAllocationUnit;// Offset=0x18 Size=0x4
    unsigned long BytesPerSector;// Offset=0x1c Size=0x4
};
