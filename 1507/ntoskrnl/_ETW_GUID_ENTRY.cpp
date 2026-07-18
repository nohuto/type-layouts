struct _LIST_ENTRY// Size=0x10 (Id=20)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _GUID// Size=0x10 (Id=92)
{
    unsigned long Data1;// Offset=0x0 Size=0x4
    unsigned short Data2;// Offset=0x4 Size=0x2
    unsigned short Data3;// Offset=0x6 Size=0x2
    unsigned char Data4[8];// Offset=0x8 Size=0x8
};

struct _unnamed_28// Size=0x8 (Id=28)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=29)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_28 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _ETW_LAST_ENABLE_INFO// Size=0x10 (Id=997)
{
    union _LARGE_INTEGER EnableFlags;// Offset=0x0 Size=0x8
    unsigned short LoggerId;// Offset=0x8 Size=0x2
    unsigned char Level;// Offset=0xa Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char Enabled:1;// Offset=0xb Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char InternalFlag:7;// Offset=0xb Size=0x1 BitOffset=0x1 BitSize=0x7
    };
};

struct _TRACE_ENABLE_INFO// Size=0x20 (Id=787)
{
    unsigned long IsEnabled;// Offset=0x0 Size=0x4
    unsigned char Level;// Offset=0x4 Size=0x1
    unsigned char Reserved1;// Offset=0x5 Size=0x1
    unsigned short LoggerId;// Offset=0x6 Size=0x2
    unsigned long EnableProperty;// Offset=0x8 Size=0x4
    unsigned long Reserved2;// Offset=0xc Size=0x4
    unsigned long long MatchAnyKeyword;// Offset=0x10 Size=0x8
    unsigned long long MatchAllKeyword;// Offset=0x18 Size=0x8
};

struct _ETW_GUID_ENTRY// Size=0x180 (Id=490)
{
    struct _LIST_ENTRY GuidList;// Offset=0x0 Size=0x10
    long long RefCount;// Offset=0x10 Size=0x8
    struct _GUID Guid;// Offset=0x18 Size=0x10
    struct _LIST_ENTRY RegListHead;// Offset=0x28 Size=0x10
    void * SecurityDescriptor;// Offset=0x38 Size=0x8
    union // Size=0x10 (Id=0)
    {
        struct _ETW_LAST_ENABLE_INFO LastEnable;// Offset=0x40 Size=0x10
        unsigned long long MatchId;// Offset=0x40 Size=0x8
    };
    struct _TRACE_ENABLE_INFO ProviderEnableInfo;// Offset=0x50 Size=0x20
    struct _TRACE_ENABLE_INFO EnableInfo[8];// Offset=0x70 Size=0x100
    struct _ETW_FILTER_HEADER * FilterData;// Offset=0x170 Size=0x8
    struct _ESILO * ServerSilo;// Offset=0x178 Size=0x8
};
