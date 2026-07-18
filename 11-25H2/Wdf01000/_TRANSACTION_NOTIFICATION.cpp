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

struct _TRANSACTION_NOTIFICATION// Size=0x20 (Id=3001)
{
    void * TransactionKey;// Offset=0x0 Size=0x8
    unsigned long TransactionNotification;// Offset=0x8 Size=0x4
    union _LARGE_INTEGER TmVirtualClock;// Offset=0x10 Size=0x8
    unsigned long ArgumentLength;// Offset=0x18 Size=0x4
};
