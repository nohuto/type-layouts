struct _WMI_TRACE_PACKET// Size=0x4 (Id=3646)
{
    unsigned short Size;// Offset=0x0 Size=0x2
    union // Size=0x2 (Id=0)
    {
        unsigned short HookId;// Offset=0x2 Size=0x2
        unsigned char Type;// Offset=0x2 Size=0x1
    };
    unsigned char Group;// Offset=0x3 Size=0x1
};

struct _unnamed_119// Size=0x8 (Id=119)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=120)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_119 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _SYSTEM_TRACE_HEADER// Size=0x20 (Id=3726)
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

struct _ETW_HEAP_EVENT_SNAPSHOT// Size=0x68 (Id=365)
{
    struct _SYSTEM_TRACE_HEADER Header;// Offset=0x0 Size=0x20
    void * HeapHandle;// Offset=0x20 Size=0x8
    unsigned long long FreeSpace;// Offset=0x28 Size=0x8
    unsigned long long CommittedSpace;// Offset=0x30 Size=0x8
    unsigned long long ReservedSpace;// Offset=0x38 Size=0x8
    unsigned long Flags;// Offset=0x40 Size=0x4
    unsigned long ProcessId;// Offset=0x44 Size=0x4
    unsigned long long LargeUCRSpace;// Offset=0x48 Size=0x8
    unsigned long FreeListLength;// Offset=0x50 Size=0x4
    unsigned long UCRLength;// Offset=0x54 Size=0x4
    unsigned long long AllocatedSpace;// Offset=0x58 Size=0x8
    unsigned long long HeapTag;// Offset=0x60 Size=0x8
};
