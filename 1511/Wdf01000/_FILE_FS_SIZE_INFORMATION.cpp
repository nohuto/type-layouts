struct _unnamed_73// Size=0x8 (Id=73)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=74)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_73 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _FILE_FS_SIZE_INFORMATION// Size=0x18 (Id=2835)
{
    union _LARGE_INTEGER TotalAllocationUnits;// Offset=0x0 Size=0x8
    union _LARGE_INTEGER AvailableAllocationUnits;// Offset=0x8 Size=0x8
    unsigned long SectorsPerAllocationUnit;// Offset=0x10 Size=0x4
    unsigned long BytesPerSector;// Offset=0x14 Size=0x4
};
