struct _WMI_TRACE_PACKET// Size=0x4 (Id=4384)
{
    unsigned short Size;// Offset=0x0 Size=0x2
    union // Size=0x2 (Id=0)
    {
        unsigned short HookId;// Offset=0x2 Size=0x2
        unsigned char Type;// Offset=0x2 Size=0x1
    };
    unsigned char Group;// Offset=0x3 Size=0x1
};

union _LARGE_INTEGER// Size=0x8 (Id=260)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct <unnamed-type-u>// Size=0x8 (Id=12818)
    {
        unsigned long LowPart;// Offset=0x0 Size=0x4
        long HighPart;// Offset=0x4 Size=0x4
    };
    struct _LARGE_INTEGER::<unnamed-type-u> u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _SYSTEM_TRACE_HEADER// Size=0x20 (Id=4557)
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

struct _ETW_HEAP_EVENT_ALLOC// Size=0x3c (Id=3240)
{
    struct _SYSTEM_TRACE_HEADER Header;// Offset=0x0 Size=0x20
    void * HeapHandle;// Offset=0x20 Size=0x8
    unsigned long long Size;// Offset=0x28 Size=0x8
    void * Address;// Offset=0x30 Size=0x8
    unsigned long Source;// Offset=0x38 Size=0x4
};
