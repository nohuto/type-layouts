struct _LIST_ENTRY// Size=0x10 (Id=3)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _PPM_VETO_ACCOUNTING// Size=0x28 (Id=1758)
{
    long VetoPresent;// Offset=0x0 Size=0x4
    struct _LIST_ENTRY VetoListHead;// Offset=0x8 Size=0x10
    unsigned char CsAccountingBlocks;// Offset=0x18 Size=0x1
    unsigned char BlocksDrips;// Offset=0x19 Size=0x1
    unsigned long PreallocatedVetoCount;// Offset=0x1c Size=0x4
    struct _PPM_VETO_ENTRY * PreallocatedVetoList;// Offset=0x20 Size=0x8
};

struct _KAFFINITY_EX// Size=0xa8 (Id=277)
{
    unsigned short Count;// Offset=0x0 Size=0x2
    unsigned short Size;// Offset=0x2 Size=0x2
    unsigned long Reserved;// Offset=0x4 Size=0x4
    unsigned long long Bitmap[20];// Offset=0x8 Size=0xa0
};

struct _UNICODE_STRING// Size=0x10 (Id=6)
{
    unsigned short Length;// Offset=0x0 Size=0x2
    unsigned short MaximumLength;// Offset=0x2 Size=0x2
    wchar_t * Buffer;// Offset=0x8 Size=0x8
};

union _PPM_COORDINATED_SYNCHRONIZATION// Size=0x4 (Id=1522)
{
    long AsLong;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long EnterProcessor:12;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0xc
        unsigned long ExitProcessor:12;// Offset=0x0 Size=0x4 BitOffset=0xc BitSize=0xc
        unsigned long Transition:2;// Offset=0x0 Size=0x4 BitOffset=0x18 BitSize=0x2
        unsigned long Entered:1;// Offset=0x0 Size=0x4 BitOffset=0x1a BitSize=0x1
        unsigned long EntryPriority:5;// Offset=0x0 Size=0x4 BitOffset=0x1b BitSize=0x5
    };
};

struct _PPM_PLATFORM_STATE// Size=0x180 (Id=1276)
{
    unsigned long long LevelId;// Offset=0x0 Size=0x8
    unsigned long Latency;// Offset=0x8 Size=0x4
    unsigned long BreakEvenDuration;// Offset=0xc Size=0x4
    struct _PPM_VETO_ACCOUNTING VetoAccounting;// Offset=0x10 Size=0x28
    unsigned char TransitionDebugger;// Offset=0x38 Size=0x1
    unsigned char Platform;// Offset=0x39 Size=0x1
    unsigned long DependencyListCount;// Offset=0x3c Size=0x4
    struct _KAFFINITY_EX Processors;// Offset=0x40 Size=0xa8
    struct _UNICODE_STRING Name;// Offset=0xe8 Size=0x10
    struct _PPM_SELECTION_DEPENDENCY * DependencyLists;// Offset=0xf8 Size=0x8
    union _PPM_COORDINATED_SYNCHRONIZATION Synchronization;// Offset=0x100 Size=0x4
    unsigned long long EnterTime;// Offset=0x108 Size=0x8
    union // Size=0x4 (Id=0)
    {
        long RefCount;// Offset=0x140 Size=0x4
        unsigned char CacheAlign0[64];// Offset=0x140 Size=0x40
    };
};

struct _PPM_PLATFORM_STATES// Size=0x1c0 (Id=683)
{
    unsigned long StateCount;// Offset=0x0 Size=0x4
    unsigned long InterfaceVersion;// Offset=0x4 Size=0x4
    unsigned long ProcessorCount;// Offset=0x8 Size=0x4
    unsigned char CoordinatedInterface;// Offset=0xc Size=0x1
    unsigned long  ( * IdleTest)(void * ,unsigned long ,unsigned long );// Offset=0x10 Size=0x8
    long  ( * IdlePreExecute)(void * ,unsigned long ,unsigned long ,unsigned long ,unsigned long * );// Offset=0x18 Size=0x8
    void  ( * IdleComplete)(void * ,unsigned long ,unsigned long ,unsigned long ,unsigned long * );// Offset=0x20 Size=0x8
    long  ( * QueryPlatformStateResidency)(void * ,struct _PROCESSOR_PLATFORM_STATE_RESIDENCIES * );// Offset=0x28 Size=0x8
    struct _PLATFORM_IDLE_ACCOUNTING * Accounting;// Offset=0x30 Size=0x8
    unsigned char DeepSleepEnabled;// Offset=0x38 Size=0x1
    struct _PPM_PLATFORM_STATE State[1];// Offset=0x40 Size=0x180
};
