struct _unnamed_10// Size=0x8 (Id=10)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=11)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_10 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _FILE_BASIC_INFORMATION// Size=0x28 (Id=463)
{
    union _LARGE_INTEGER CreationTime;// Offset=0x0 Size=0x8
    union _LARGE_INTEGER LastAccessTime;// Offset=0x8 Size=0x8
    union _LARGE_INTEGER LastWriteTime;// Offset=0x10 Size=0x8
    union _LARGE_INTEGER ChangeTime;// Offset=0x18 Size=0x8
    unsigned long FileAttributes;// Offset=0x20 Size=0x4
};
