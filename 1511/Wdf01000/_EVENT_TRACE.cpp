struct _unnamed_73// Size=0x8 (Id=73)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=74)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_73 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _GUID// Size=0x10 (Id=175)
{
    unsigned long Data1;// Offset=0x0 Size=0x4
    unsigned short Data2;// Offset=0x4 Size=0x2
    unsigned short Data3;// Offset=0x6 Size=0x2
    unsigned char Data4[8];// Offset=0x8 Size=0x8
};

struct _EVENT_TRACE_HEADER// Size=0x30 (Id=3120)
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
        struct _EVENT_TRACE_HEADER::_unnamed_3121::<unnamed-type-Class> Class;// Offset=0x4 Size=0x4
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

struct _ETW_BUFFER_CONTEXT// Size=0x4 (Id=2198)
{
    union // Size=0x2 (Id=0)
    {
        unsigned char ProcessorNumber;// Offset=0x0 Size=0x1
        unsigned char Alignment;// Offset=0x1 Size=0x1
        unsigned short ProcessorIndex;// Offset=0x0 Size=0x2
    };
    unsigned short LoggerId;// Offset=0x2 Size=0x2
};

struct _EVENT_TRACE// Size=0x58 (Id=1894)
{
    struct _EVENT_TRACE_HEADER Header;// Offset=0x0 Size=0x30
    unsigned long InstanceId;// Offset=0x30 Size=0x4
    unsigned long ParentInstanceId;// Offset=0x34 Size=0x4
    struct _GUID ParentGuid;// Offset=0x38 Size=0x10
    void * MofData;// Offset=0x48 Size=0x8
    unsigned long MofLength;// Offset=0x50 Size=0x4
    union // Size=0x4 (Id=0)
    {
        unsigned long ClientContext;// Offset=0x54 Size=0x4
        struct _ETW_BUFFER_CONTEXT BufferContext;// Offset=0x54 Size=0x4
    };
};
