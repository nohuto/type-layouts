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

struct _WNODE_HEADER// Size=0x30 (Id=2243)
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

struct tagWNODE_EVENT_REFERENCE// Size=0x48 (Id=2452)
{
    struct _WNODE_HEADER WnodeHeader;// Offset=0x0 Size=0x30
    struct _GUID TargetGuid;// Offset=0x30 Size=0x10
    unsigned long TargetDataBlockSize;// Offset=0x40 Size=0x4
    unsigned long TargetInstanceIndex;// Offset=0x44 Size=0x4
    wchar_t TargetInstanceName[0];
};
