struct _anonymous_108// Size=0x8 (Id=108)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=109)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _anonymous_108 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _GUID// Size=0x10 (Id=107)
{
    unsigned long Data1;// Offset=0x0 Size=0x4
    unsigned short Data2;// Offset=0x4 Size=0x2
    unsigned short Data3;// Offset=0x6 Size=0x2
    unsigned char Data4[8];// Offset=0x8 Size=0x8
};

struct _EVENT_TRACE_HEADER// Size=0x30 (Id=2594)
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
        struct _EVENT_TRACE_HEADER::_anonymous_3077::<unnamed-type-Class> Class;// Offset=0x4 Size=0x4
    };
    unsigned long ThreadId;// Offset=0x8 Size=0x4
    unsigned long ProcessId;// Offset=0xc Size=0x4
    union _LARGE_INTEGER TimeStamp;// Offset=0x10 Size=0x8
    union // Size=0x10 (Id=0)
    {
        struct _GUID Guid;// Offset=0x18 Size=0x10
        unsigned long long GuidPtr;// Offset=0x18 Size=0x8
    };
    union // Size=0x30 (Id=0)
    {
        unsigned long KernelTime;// Offset=0x28 Size=0x4
        unsigned long UserTime;// Offset=0x2c Size=0x4
        unsigned long long ProcessorTime;// Offset=0x28 Size=0x8
        unsigned long ClientContext;// Offset=0x28 Size=0x4
        unsigned long Flags;// Offset=0x2c Size=0x4
    };
};

struct _CI_LOG_SCHEDULER_SLEEP_RESPONSE// Size=0x30 (Id=2049)
{
    struct _EVENT_TRACE_HEADER Header;// Offset=0x0 Size=0x30
};
