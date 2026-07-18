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

struct _GUID// Size=0x10 (Id=78)
{
    unsigned long Data1;// Offset=0x0 Size=0x4
    unsigned short Data2;// Offset=0x4 Size=0x2
    unsigned short Data3;// Offset=0x6 Size=0x2
    unsigned char Data4[8];// Offset=0x8 Size=0x8
};

struct _WNODE_HEADER// Size=0x30 (Id=2255)
{
    unsigned long BufferSize;// Offset=0x0 Size=0x4
    unsigned long ProviderId;// Offset=0x4 Size=0x4
    union // Size=0x8 (Id=0)
    {
        unsigned long long HistoricalContext;// Offset=0x8 Size=0x8
        unsigned long Version;// Offset=0x8 Size=0x4
    };
    unsigned long Linkage;// Offset=0xc Size=0x4
    union // Size=0x18 (Id=0)
    {
        unsigned long CountLost;// Offset=0x10 Size=0x4
        void * KernelHandle;// Offset=0x10 Size=0x8
        union _LARGE_INTEGER TimeStamp;// Offset=0x10 Size=0x8
    };
    struct _GUID Guid;// Offset=0x18 Size=0x10
    unsigned long ClientContext;// Offset=0x28 Size=0x4
    unsigned long Flags;// Offset=0x2c Size=0x4
};

struct tagWNODE_EVENT_ITEM// Size=0x30 (Id=2403)
{
    struct _WNODE_HEADER WnodeHeader;// Offset=0x0 Size=0x30
};
