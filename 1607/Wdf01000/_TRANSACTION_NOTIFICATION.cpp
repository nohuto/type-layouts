union _LARGE_INTEGER// Size=0x8 (Id=253)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct <unnamed-type-u>// Size=0x8 (Id=10208)
    {
        unsigned long LowPart;// Offset=0x0 Size=0x4
        long HighPart;// Offset=0x4 Size=0x4
    };
    struct _LARGE_INTEGER::<unnamed-type-u> u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _TRANSACTION_NOTIFICATION// Size=0x20 (Id=2889)
{
    void * TransactionKey;// Offset=0x0 Size=0x8
    unsigned long TransactionNotification;// Offset=0x8 Size=0x4
    union _LARGE_INTEGER TmVirtualClock;// Offset=0x10 Size=0x8
    unsigned long ArgumentLength;// Offset=0x18 Size=0x4
};
