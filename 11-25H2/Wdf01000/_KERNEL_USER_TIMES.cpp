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

struct _KERNEL_USER_TIMES// Size=0x20 (Id=2524)
{
    union _LARGE_INTEGER CreateTime;// Offset=0x0 Size=0x8
    union _LARGE_INTEGER ExitTime;// Offset=0x8 Size=0x8
    union _LARGE_INTEGER KernelTime;// Offset=0x10 Size=0x8
    union _LARGE_INTEGER UserTime;// Offset=0x18 Size=0x8
};
