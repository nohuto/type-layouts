struct _unnamed_119// Size=0x8 (Id=119)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=120)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_119 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _FILE_FS_FULL_SIZE_INFORMATION// Size=0x20 (Id=1015)
{
    union _LARGE_INTEGER TotalAllocationUnits;// Offset=0x0 Size=0x8
    union _LARGE_INTEGER CallerAvailableAllocationUnits;// Offset=0x8 Size=0x8
    union _LARGE_INTEGER ActualAvailableAllocationUnits;// Offset=0x10 Size=0x8
    unsigned long SectorsPerAllocationUnit;// Offset=0x18 Size=0x4
    unsigned long BytesPerSector;// Offset=0x1c Size=0x4
};
