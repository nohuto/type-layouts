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

struct FX_SPIN_LOCK_HISTORY_ENTRY// Size=0x18 (Id=958)
{
    void * CallersAddress;// Offset=0x0 Size=0x8
    union _LARGE_INTEGER AcquiredAtTime;// Offset=0x8 Size=0x8
    long long LockedDuraction;// Offset=0x10 Size=0x8
};
