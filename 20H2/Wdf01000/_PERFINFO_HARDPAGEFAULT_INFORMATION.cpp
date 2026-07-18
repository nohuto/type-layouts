struct _anonymous_108// Size=0x8 (Id=108)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=109)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _anonymous_108 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _PERFINFO_HARDPAGEFAULT_INFORMATION// Size=0x20 (Id=2080)
{
    union _LARGE_INTEGER ReadOffset;// Offset=0x0 Size=0x8
    void * VirtualAddress;// Offset=0x8 Size=0x8
    void * FileObject;// Offset=0x10 Size=0x8
    unsigned long ThreadId;// Offset=0x18 Size=0x4
    unsigned long ByteCount;// Offset=0x1c Size=0x4
};
