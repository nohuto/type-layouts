union _LARGE_INTEGER// Size=0x8 (Id=206)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct <unnamed-type-u>// Size=0x8 (Id=10311)
    {
        unsigned long LowPart;// Offset=0x0 Size=0x4
        long HighPart;// Offset=0x4 Size=0x4
    };
    struct _LARGE_INTEGER::<unnamed-type-u> u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _EVENT_INSTANCE_HEADER// Size=0x38 (Id=1808)
{
    unsigned short Size;// Offset=0x0 Size=0x2
    union // Size=0x2 (Id=0)
    {
        unsigned short FieldTypeFlags;// Offset=0x2 Size=0x2
        unsigned char HeaderType;// Offset=0x2 Size=0x1
    };
    unsigned char MarkerFlags;// Offset=0x3 Size=0x1
    union // Size=0x4 (Id=0)
    {
        unsigned long Version;// Offset=0x4 Size=0x4
        struct _EVENT_INSTANCE_HEADER::_anonymous_2941::<unnamed-type-Class> Class;// Offset=0x4 Size=0x4
    };
    unsigned long ThreadId;// Offset=0x8 Size=0x4
    unsigned long ProcessId;// Offset=0xc Size=0x4
    union _LARGE_INTEGER TimeStamp;// Offset=0x10 Size=0x8
    unsigned long long RegHandle;// Offset=0x18 Size=0x8
    unsigned long InstanceId;// Offset=0x20 Size=0x4
    unsigned long ParentInstanceId;// Offset=0x24 Size=0x4
    union // Size=0x30 (Id=0)
    {
        unsigned long KernelTime;// Offset=0x28 Size=0x4
        unsigned long UserTime;// Offset=0x2c Size=0x4
        unsigned long long ProcessorTime;// Offset=0x28 Size=0x8
        unsigned long EventId;// Offset=0x28 Size=0x4
        unsigned long Flags;// Offset=0x2c Size=0x4
    };
    unsigned long long ParentRegHandle;// Offset=0x30 Size=0x8
};
