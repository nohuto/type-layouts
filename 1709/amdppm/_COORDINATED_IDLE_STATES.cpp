struct _KAFFINITY_EX// Size=0xa8 (Id=468)
{
    unsigned short Count;// Offset=0x0 Size=0x2
    unsigned short Size;// Offset=0x2 Size=0x2
    unsigned long Reserved;// Offset=0x4 Size=0x4
    unsigned long long Bitmap[20];// Offset=0x8 Size=0xa0
};

struct _UNICODE_STRING// Size=0x10 (Id=169)
{
    unsigned short Length;// Offset=0x0 Size=0x2
    unsigned short MaximumLength;// Offset=0x2 Size=0x2
    wchar_t * Buffer;// Offset=0x8 Size=0x8
};

struct _COORDINATED_IDLE_STATE// Size=0xe0 (Id=613)
{
    struct _KAFFINITY_EX Processors;// Offset=0x0 Size=0xa8
    struct _UNICODE_STRING Name;// Offset=0xa8 Size=0x10
    unsigned long long LevelId;// Offset=0xb8 Size=0x8
    unsigned long Latency;// Offset=0xc0 Size=0x4
    unsigned long BreakEvenTime;// Offset=0xc4 Size=0x4
    unsigned long MaximumDependencyOptions;// Offset=0xc8 Size=0x4
    unsigned long DependencyCount;// Offset=0xcc Size=0x4
    unsigned char Platform;// Offset=0xd0 Size=0x1
    unsigned char WakesSpuriously;// Offset=0xd1 Size=0x1
    unsigned char Interruptible;// Offset=0xd2 Size=0x1
    unsigned char ContextLost;// Offset=0xd3 Size=0x1
    struct _COORDINATED_IDLE_DEPENDENCY * Dependencies;// Offset=0xd8 Size=0x8
};

struct _COORDINATED_IDLE_STATES// Size=0x110 (Id=593)
{
    unsigned long Count;// Offset=0x0 Size=0x4
    unsigned long  ( * IdleTest)(void * ,unsigned long ,unsigned long );// Offset=0x8 Size=0x8
    long  ( * IdlePreExecute)(void * ,unsigned long ,unsigned long ,unsigned long ,unsigned long * );// Offset=0x10 Size=0x8
    void  ( * IdleComplete)(void * ,unsigned long ,unsigned long ,unsigned long ,unsigned long * );// Offset=0x18 Size=0x8
    long  ( * QueryPlatformStateResidency)(void * ,struct _PROCESSOR_PLATFORM_STATE_RESIDENCIES * );// Offset=0x20 Size=0x8
    unsigned char Update;// Offset=0x28 Size=0x1
    struct _COORDINATED_IDLE_STATE State[1];// Offset=0x30 Size=0xe0
};
