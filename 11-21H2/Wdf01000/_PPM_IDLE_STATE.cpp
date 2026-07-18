struct _KAFFINITY_EX// Size=0x108 (Id=1015)
{
    unsigned short Count;// Offset=0x0 Size=0x2
    unsigned short Size;// Offset=0x2 Size=0x2
    unsigned long Reserved;// Offset=0x4 Size=0x4
    union // Size=0x8 (Id=0)
    {
        unsigned long long Bitmap[1];// Offset=0x8 Size=0x8
        unsigned long long StaticBitmap[32];// Offset=0x8 Size=0x100
    };
};

struct _UNICODE_STRING// Size=0x10 (Id=29)
{
    unsigned short Length;// Offset=0x0 Size=0x2
    unsigned short MaximumLength;// Offset=0x2 Size=0x2
    wchar_t * Buffer;// Offset=0x8 Size=0x8
};

struct _LIST_ENTRY// Size=0x10 (Id=128)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _PPM_VETO_ACCOUNTING// Size=0x28 (Id=647)
{
    long VetoPresent;// Offset=0x0 Size=0x4
    struct _LIST_ENTRY VetoListHead;// Offset=0x8 Size=0x10
    unsigned char CsAccountingBlocks;// Offset=0x18 Size=0x1
    unsigned char BlocksDrips;// Offset=0x19 Size=0x1
    unsigned long PreallocatedVetoCount;// Offset=0x1c Size=0x4
    struct _PPM_VETO_ENTRY * PreallocatedVetoList;// Offset=0x20 Size=0x8
};

struct _PPM_IDLE_STATE// Size=0x158 (Id=770)
{
    struct _KAFFINITY_EX DomainMembers;// Offset=0x0 Size=0x108
    struct _UNICODE_STRING Name;// Offset=0x108 Size=0x10
    unsigned long Latency;// Offset=0x118 Size=0x4
    unsigned long BreakEvenDuration;// Offset=0x11c Size=0x4
    unsigned long Power;// Offset=0x120 Size=0x4
    unsigned long StateFlags;// Offset=0x124 Size=0x4
    struct _PPM_VETO_ACCOUNTING VetoAccounting;// Offset=0x128 Size=0x28
    unsigned char StateType;// Offset=0x150 Size=0x1
    unsigned char InterruptsEnabled;// Offset=0x151 Size=0x1
    unsigned char Interruptible;// Offset=0x152 Size=0x1
    unsigned char ContextRetained;// Offset=0x153 Size=0x1
    unsigned char CacheCoherent;// Offset=0x154 Size=0x1
    unsigned char WakesSpuriously;// Offset=0x155 Size=0x1
    unsigned char PlatformOnly;// Offset=0x156 Size=0x1
    unsigned char NoCState;// Offset=0x157 Size=0x1
};
