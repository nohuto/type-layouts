struct _anonymous_31// Size=0x8 (Id=31)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=83)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _anonymous_31 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _LIST_ENTRY// Size=0x10 (Id=22)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _MI_PROCESS_STATE// Size=0x48 (Id=907)
{
    void * SystemDllBase;// Offset=0x0 Size=0x8
    unsigned long ColorSeed;// Offset=0x8 Size=0x4
    long RotatingUniprocessorNumber;// Offset=0xc Size=0x4
    union _LARGE_INTEGER CriticalSectionTimeout;// Offset=0x10 Size=0x8
    struct _LIST_ENTRY ProcessList;// Offset=0x18 Size=0x10
    struct _MMPTE * SharedUserDataPte[2];// Offset=0x28 Size=0x10
    void * HypervisorSharedVa;// Offset=0x38 Size=0x8
    unsigned long long VadSecureCookie;// Offset=0x40 Size=0x8
};
