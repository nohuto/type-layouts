struct _KAFFINITY_EX// Size=0x58 (Id=58)
{
    unsigned short Count;// Offset=0x0 Size=0x2
    unsigned short Size;// Offset=0x2 Size=0x2
    unsigned long Reserved;// Offset=0x4 Size=0x4
    unsigned long Bitmap[20];// Offset=0x8 Size=0x50
};

struct _UNICODE_STRING// Size=0x8 (Id=306)
{
    unsigned short Length;// Offset=0x0 Size=0x2
    unsigned short MaximumLength;// Offset=0x2 Size=0x2
    wchar_t * Buffer;// Offset=0x4 Size=0x4
};

struct _LIST_ENTRY// Size=0x8 (Id=25)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x4
    struct _LIST_ENTRY * Blink;// Offset=0x4 Size=0x4
};

struct _PPM_VETO_ACCOUNTING// Size=0x18 (Id=722)
{
    long VetoPresent;// Offset=0x0 Size=0x4
    struct _LIST_ENTRY VetoListHead;// Offset=0x4 Size=0x8
    unsigned char CsAccountingBlocks;// Offset=0xc Size=0x1
    unsigned char BlocksDrips;// Offset=0xd Size=0x1
    unsigned long PreallocatedVetoCount;// Offset=0x10 Size=0x4
    struct _PPM_VETO_ENTRY * PreallocatedVetoList;// Offset=0x14 Size=0x4
};

struct _PPM_IDLE_STATE// Size=0x90 (Id=683)
{
    struct _KAFFINITY_EX DomainMembers;// Offset=0x0 Size=0x58
    struct _UNICODE_STRING Name;// Offset=0x58 Size=0x8
    unsigned long Latency;// Offset=0x60 Size=0x4
    unsigned long BreakEvenDuration;// Offset=0x64 Size=0x4
    unsigned long Power;// Offset=0x68 Size=0x4
    unsigned long StateFlags;// Offset=0x6c Size=0x4
    struct _PPM_VETO_ACCOUNTING VetoAccounting;// Offset=0x70 Size=0x18
    unsigned char StateType;// Offset=0x88 Size=0x1
    unsigned char InterruptsEnabled;// Offset=0x89 Size=0x1
    unsigned char Interruptible;// Offset=0x8a Size=0x1
    unsigned char ContextRetained;// Offset=0x8b Size=0x1
    unsigned char CacheCoherent;// Offset=0x8c Size=0x1
    unsigned char WakesSpuriously;// Offset=0x8d Size=0x1
    unsigned char PlatformOnly;// Offset=0x8e Size=0x1
    unsigned char NoCState;// Offset=0x8f Size=0x1
};
