struct _LIST_ENTRY// Size=0x10 (Id=23)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _GUID// Size=0x10 (Id=40)
{
    unsigned long Data1;// Offset=0x0 Size=0x4
    unsigned short Data2;// Offset=0x4 Size=0x2
    unsigned short Data3;// Offset=0x6 Size=0x2
    unsigned char Data4[8];// Offset=0x8 Size=0x8
};

struct _unnamed_31// Size=0x8 (Id=31)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=76)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_31 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _ETW_LAST_ENABLE_INFO// Size=0x10 (Id=1249)
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

struct _TRACE_ENABLE_INFO// Size=0x20 (Id=955)
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

struct _EX_PUSH_LOCK// Size=0x8 (Id=85)
{
    union // Size=0x8 (Id=0)
    {
        struct // Size=0x8 (Id=0)
        {
            unsigned long long Locked:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
            unsigned long long Waiting:1;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x1
            unsigned long long Waking:1;// Offset=0x0 Size=0x8 BitOffset=0x2 BitSize=0x1
            unsigned long long MultipleShared:1;// Offset=0x0 Size=0x8 BitOffset=0x3 BitSize=0x1
            unsigned long long Shared:60;// Offset=0x0 Size=0x8 BitOffset=0x4 BitSize=0x3c
        };
        unsigned long long Value;// Offset=0x0 Size=0x8
        void * Ptr;// Offset=0x0 Size=0x8
    };
};

struct _ETW_GUID_ENTRY// Size=0x190 (Id=765)
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
    struct _ETW_SILODRIVERSTATE * SiloState;// Offset=0x178 Size=0x8
    struct _EX_PUSH_LOCK Lock;// Offset=0x180 Size=0x8
    struct _ETHREAD * LockOwner;// Offset=0x188 Size=0x8
};

struct _ETW_HASH_BUCKET// Size=0x38 (Id=585)
{
    struct _LIST_ENTRY ListHead[3];// Offset=0x0 Size=0x30
    struct _EX_PUSH_LOCK BucketLock;// Offset=0x30 Size=0x8
};

struct _RTL_RB_TREE// Size=0x10 (Id=38)
{
    struct _RTL_BALANCED_NODE * Root;// Offset=0x0 Size=0x8
    union // Size=0x1 (Id=0)
    {
        struct // Size=0x1 (Id=0)
        {
            unsigned char Encoded:1;// Offset=0x8 Size=0x1 BitOffset=0x0 BitSize=0x1
        };
        struct _RTL_BALANCED_NODE * Min;// Offset=0x8 Size=0x8
    };
};

struct _ETW_PRIV_HANDLE_DEMUX_TABLE// Size=0x20 (Id=1049)
{
    struct _RTL_RB_TREE Tree;// Offset=0x0 Size=0x10
    struct _EX_PUSH_LOCK Lock;// Offset=0x10 Size=0x8
    unsigned short SequenceNumber;// Offset=0x18 Size=0x2
};

struct _ETW_COUNTERS// Size=0x10 (Id=895)
{
    long GuidCount;// Offset=0x0 Size=0x4
    long PoolUsage[2];// Offset=0x4 Size=0x8
    long SessionCount;// Offset=0xc Size=0x4
};

struct _ETW_SYSTEM_LOGGER// Size=0x2 (Id=1007)
{
    unsigned char LoggerId;// Offset=0x0 Size=0x1
    unsigned char ClockType;// Offset=0x1 Size=0x1
};

struct _PERFINFO_GROUPMASK// Size=0x20 (Id=185)
{
    unsigned long Masks[8];// Offset=0x0 Size=0x20
};

struct _ETW_SYSTEM_LOGGER_SETTINGS// Size=0x154 (Id=872)
{
    struct _ETW_SYSTEM_LOGGER EtwpSystemLogger[8];// Offset=0x0 Size=0x10
    unsigned long EtwpActiveSystemLoggers;// Offset=0x10 Size=0x4
    struct _PERFINFO_GROUPMASK SiloGlobalGroupMask;// Offset=0x14 Size=0x20
    struct _PERFINFO_GROUPMASK EtwpGroupMasks[9];// Offset=0x34 Size=0x120
};

struct _ETW_SILODRIVERSTATE// Size=0x1190 (Id=505)
{
    struct _ESERVERSILO_GLOBALS * SiloGlobals;// Offset=0x0 Size=0x8
    unsigned long MaxLoggers;// Offset=0x8 Size=0x4
    struct _ETW_GUID_ENTRY EtwpSecurityProviderGuidEntry;// Offset=0x10 Size=0x190
    struct _EX_RUNDOWN_REF_CACHE_AWARE ** EtwpLoggerRundown;// Offset=0x1a0 Size=0x8
    struct _WMI_LOGGER_CONTEXT ** EtwpLoggerContext;// Offset=0x1a8 Size=0x8
    struct _ETW_HASH_BUCKET EtwpGuidHashTable[64];// Offset=0x1b0 Size=0xe00
    unsigned short EtwpSecurityLoggers[8];// Offset=0xfb0 Size=0x10
    unsigned char EtwpSecurityProviderEnableMask;// Offset=0xfc0 Size=0x1
    long EtwpShutdownInProgress;// Offset=0xfc4 Size=0x4
    unsigned long EtwpSecurityProviderPID;// Offset=0xfc8 Size=0x4
    struct _ETW_PRIV_HANDLE_DEMUX_TABLE PrivHandleDemuxTable;// Offset=0xfd0 Size=0x20
    struct _ETW_COUNTERS EtwpCounters;// Offset=0xff0 Size=0x10
    union _LARGE_INTEGER LogfileBytesWritten;// Offset=0x1000 Size=0x8
    struct _ETW_SILO_TRACING_BLOCK * ProcessorBlocks;// Offset=0x1008 Size=0x8
    struct _GUID PartitionId;// Offset=0x1010 Size=0x10
    struct _GUID ParentId;// Offset=0x1020 Size=0x10
    union _LARGE_INTEGER QpcOffsetFromRoot;// Offset=0x1030 Size=0x8
    unsigned long PartitionType;// Offset=0x1038 Size=0x4
    struct _ETW_SYSTEM_LOGGER_SETTINGS SystemLoggerSettings;// Offset=0x103c Size=0x154
};
