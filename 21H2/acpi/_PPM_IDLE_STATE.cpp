struct _KAFFINITY_EX// Size=0xa8 (Id=383)
{
    unsigned short Count;// Offset=0x0 Size=0x2
    unsigned short Size;// Offset=0x2 Size=0x2
    unsigned long Reserved;// Offset=0x4 Size=0x4
    unsigned long long Bitmap[20];// Offset=0x8 Size=0xa0
};

struct _UNICODE_STRING// Size=0x10 (Id=87)
{
    unsigned short Length;// Offset=0x0 Size=0x2
    unsigned short MaximumLength;// Offset=0x2 Size=0x2
    wchar_t * Buffer;// Offset=0x8 Size=0x8
};

struct _LIST_ENTRY// Size=0x10 (Id=23)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _PPM_VETO_ACCOUNTING// Size=0x28 (Id=717)
{
    long VetoPresent;// Offset=0x0 Size=0x4
    struct _LIST_ENTRY VetoListHead;// Offset=0x8 Size=0x10
    unsigned char CsAccountingBlocks;// Offset=0x18 Size=0x1
    unsigned char BlocksDrips;// Offset=0x19 Size=0x1
    unsigned long PreallocatedVetoCount;// Offset=0x1c Size=0x4
    struct _PPM_VETO_ENTRY * PreallocatedVetoList;// Offset=0x20 Size=0x8
};

struct _PPM_IDLE_STATE// Size=0xf8 (Id=659)
{
    struct _KAFFINITY_EX DomainMembers;// Offset=0x0 Size=0xa8
    struct _UNICODE_STRING Name;// Offset=0xa8 Size=0x10
    unsigned long Latency;// Offset=0xb8 Size=0x4
    unsigned long BreakEvenDuration;// Offset=0xbc Size=0x4
    unsigned long Power;// Offset=0xc0 Size=0x4
    unsigned long StateFlags;// Offset=0xc4 Size=0x4
    struct _PPM_VETO_ACCOUNTING VetoAccounting;// Offset=0xc8 Size=0x28
    unsigned char StateType;// Offset=0xf0 Size=0x1
    unsigned char InterruptsEnabled;// Offset=0xf1 Size=0x1
    unsigned char Interruptible;// Offset=0xf2 Size=0x1
    unsigned char ContextRetained;// Offset=0xf3 Size=0x1
    unsigned char CacheCoherent;// Offset=0xf4 Size=0x1
    unsigned char WakesSpuriously;// Offset=0xf5 Size=0x1
    unsigned char PlatformOnly;// Offset=0xf6 Size=0x1
    unsigned char NoCState;// Offset=0xf7 Size=0x1
};
