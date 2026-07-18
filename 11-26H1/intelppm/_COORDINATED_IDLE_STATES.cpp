struct _KAFFINITY_EX// Size=0x108 (Id=67)
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

struct _UNICODE_STRING// Size=0x10 (Id=19)
{
    unsigned short Length;// Offset=0x0 Size=0x2
    unsigned short MaximumLength;// Offset=0x2 Size=0x2
    wchar_t * Buffer;// Offset=0x8 Size=0x8
};

struct _COORDINATED_IDLE_STATE// Size=0x140 (Id=766)
{
    struct _KAFFINITY_EX Processors;// Offset=0x0 Size=0x108
    struct _UNICODE_STRING Name;// Offset=0x108 Size=0x10
    unsigned long long LevelId;// Offset=0x118 Size=0x8
    unsigned long Latency;// Offset=0x120 Size=0x4
    unsigned long BreakEvenTime;// Offset=0x124 Size=0x4
    unsigned long MaximumDependencyOptions;// Offset=0x128 Size=0x4
    unsigned long DependencyCount;// Offset=0x12c Size=0x4
    unsigned char Platform;// Offset=0x130 Size=0x1
    unsigned char WakesSpuriously;// Offset=0x131 Size=0x1
    unsigned char Interruptible;// Offset=0x132 Size=0x1
    unsigned char ContextLost;// Offset=0x133 Size=0x1
    unsigned char Enabled;// Offset=0x134 Size=0x1
    struct _COORDINATED_IDLE_DEPENDENCY * Dependencies;// Offset=0x138 Size=0x8
};

struct _COORDINATED_IDLE_STATES// Size=0x170 (Id=737)
{
    unsigned long Count;// Offset=0x0 Size=0x4
    unsigned long  ( * IdleTest)(void * ,unsigned long ,unsigned long );// Offset=0x8 Size=0x8
    long  ( * IdlePreExecute)(void * ,unsigned long ,unsigned long ,unsigned long ,unsigned long * );// Offset=0x10 Size=0x8
    void  ( * IdleComplete)(void * ,unsigned long ,unsigned long ,unsigned long ,unsigned long * );// Offset=0x18 Size=0x8
    long  ( * QueryPlatformStateResidency)(void * ,struct _PROCESSOR_PLATFORM_STATE_RESIDENCIES * );// Offset=0x20 Size=0x8
    unsigned char Update;// Offset=0x28 Size=0x1
    struct _COORDINATED_IDLE_STATE State[1];// Offset=0x30 Size=0x140
};
