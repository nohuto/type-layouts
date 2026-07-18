struct _PROCESSOR_NUMBER// Size=0x4 (Id=440)
{
    unsigned short Group;// Offset=0x0 Size=0x2
    unsigned char Number;// Offset=0x2 Size=0x1
    unsigned char Reserved;// Offset=0x3 Size=0x1
};

struct _UNICODE_STRING// Size=0x10 (Id=64)
{
    unsigned short Length;// Offset=0x0 Size=0x2
    unsigned short MaximumLength;// Offset=0x2 Size=0x2
    wchar_t * Buffer;// Offset=0x8 Size=0x8
};

struct _PLATFORM_IDLE_STATE// Size=0x30 (Id=593)
{
    struct _PROCESSOR_NUMBER InitiatingProcessor;// Offset=0x0 Size=0x4
    unsigned char OneInitiator;// Offset=0x4 Size=0x1
    unsigned char InitiatingState;// Offset=0x5 Size=0x1
    unsigned long Latency;// Offset=0x8 Size=0x4
    unsigned long BreakEvenTime;// Offset=0xc Size=0x4
    unsigned long DependencyCount;// Offset=0x10 Size=0x4
    struct _UNICODE_STRING Name;// Offset=0x18 Size=0x10
    struct _PROCESSOR_IDLE_DEPENDENCY * Dependencies;// Offset=0x28 Size=0x8
};
