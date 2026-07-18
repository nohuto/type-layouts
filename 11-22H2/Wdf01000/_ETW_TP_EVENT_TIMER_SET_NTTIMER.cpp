struct _WMI_TRACE_PACKET// Size=0x4 (Id=3189)
{
    unsigned short Size;// Offset=0x0 Size=0x2
    union // Size=0x2 (Id=0)
    {
        unsigned short HookId;// Offset=0x2 Size=0x2
        unsigned char Type;// Offset=0x2 Size=0x1
    };
    unsigned char Group;// Offset=0x3 Size=0x1
};

union _LARGE_INTEGER// Size=0x8 (Id=915)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct <unnamed-type-u>// Size=0x8 (Id=12193)
    {
        unsigned long LowPart;// Offset=0x0 Size=0x4
        long HighPart;// Offset=0x4 Size=0x4
    };
    struct _LARGE_INTEGER::<unnamed-type-u> u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _SYSTEM_TRACE_HEADER// Size=0x20 (Id=3299)
{
    union // Size=0x4 (Id=0)
    {
        unsigned long Marker;// Offset=0x0 Size=0x4
        unsigned short Version;// Offset=0x0 Size=0x2
        unsigned char HeaderType;// Offset=0x2 Size=0x1
        unsigned char Flags;// Offset=0x3 Size=0x1
    };
    union // Size=0x4 (Id=0)
    {
        unsigned long Header;// Offset=0x4 Size=0x4
        struct _WMI_TRACE_PACKET Packet;// Offset=0x4 Size=0x4
    };
    unsigned long ThreadId;// Offset=0x8 Size=0x4
    unsigned long ProcessId;// Offset=0xc Size=0x4
    union _LARGE_INTEGER SystemTime;// Offset=0x10 Size=0x8
    unsigned long KernelTime;// Offset=0x18 Size=0x4
    unsigned long UserTime;// Offset=0x1c Size=0x4
};

struct _ETW_TP_EVENT_TIMER_SET_NTTIMER// Size=0x34 (Id=3193)
{
    struct _SYSTEM_TRACE_HEADER Header;// Offset=0x0 Size=0x20
    long long DueTime;// Offset=0x20 Size=0x8
    void * SubQueue;// Offset=0x28 Size=0x8
    unsigned long TolerableDelay;// Offset=0x30 Size=0x4
};
