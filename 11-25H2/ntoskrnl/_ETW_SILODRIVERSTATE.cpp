struct _LIST_ENTRY// Size=0x10 (Id=3)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _GUID// Size=0x10 (Id=647)
{
    unsigned long Data1;// Offset=0x0 Size=0x4
    unsigned short Data2;// Offset=0x4 Size=0x2
    unsigned short Data3;// Offset=0x6 Size=0x2
    unsigned char Data4[8];// Offset=0x8 Size=0x8
};

struct _unnamed_9// Size=0x8 (Id=9)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=587)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_9 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _ETW_LAST_ENABLE_INFO// Size=0x10 (Id=2044)
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

struct _TRACE_ENABLE_INFO// Size=0x20 (Id=1048)
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

struct _EX_PUSH_LOCK// Size=0x8 (Id=120)
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

struct _ETW_GUID_ENTRY// Size=0x1a8 (Id=1047)
{
    struct _LIST_ENTRY GuidList;// Offset=0x0 Size=0x10
    struct _LIST_ENTRY SiloGuidList;// Offset=0x10 Size=0x10
    long long RefCount;// Offset=0x20 Size=0x8
    struct _GUID Guid;// Offset=0x28 Size=0x10
    struct _LIST_ENTRY RegListHead;// Offset=0x38 Size=0x10
    void * SecurityDescriptor;// Offset=0x48 Size=0x8
    union // Size=0x10 (Id=0)
    {
        struct _ETW_LAST_ENABLE_INFO LastEnable;// Offset=0x50 Size=0x10
        unsigned long long MatchId;// Offset=0x50 Size=0x8
    };
    struct _TRACE_ENABLE_INFO ProviderEnableInfo;// Offset=0x60 Size=0x20
    struct _TRACE_ENABLE_INFO EnableInfo[8];// Offset=0x80 Size=0x100
    struct _ETW_FILTER_HEADER * FilterData;// Offset=0x180 Size=0x8
    struct _ETW_SILODRIVERSTATE * SiloState;// Offset=0x188 Size=0x8
    struct _ETW_GUID_ENTRY * HostEntry;// Offset=0x190 Size=0x8
    struct _EX_PUSH_LOCK Lock;// Offset=0x198 Size=0x8
    struct _ETHREAD * LockOwner;// Offset=0x1a0 Size=0x8
};

struct _ETW_HASH_BUCKET// Size=0x38 (Id=1152)
{
    struct _LIST_ENTRY ListHead[3];// Offset=0x0 Size=0x30
    struct _EX_PUSH_LOCK BucketLock;// Offset=0x30 Size=0x8
};

struct _RTL_RB_TREE// Size=0x10 (Id=115)
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

struct _ETW_PRIV_HANDLE_DEMUX_TABLE// Size=0x20 (Id=1785)
{
    struct _RTL_RB_TREE Tree;// Offset=0x0 Size=0x10
    struct _EX_PUSH_LOCK Lock;// Offset=0x10 Size=0x8
    unsigned short SequenceNumber;// Offset=0x18 Size=0x2
};

struct _ETW_COUNTERS// Size=0x10 (Id=1579)
{
    long GuidCount;// Offset=0x0 Size=0x4
    long PoolUsage[2];// Offset=0x4 Size=0x8
    long SessionCount;// Offset=0xc Size=0x4
};

struct _ETW_SYSTEM_LOGGER// Size=0x2 (Id=1730)
{
    unsigned char LoggerId;// Offset=0x0 Size=0x1
    unsigned char ClockType;// Offset=0x1 Size=0x1
};

struct _PERFINFO_GROUPMASK// Size=0x20 (Id=584)
{
    unsigned long Masks[8];// Offset=0x0 Size=0x20
};

struct _ETW_SYSTEM_LOGGER_SETTINGS// Size=0x174 (Id=1532)
{
    struct _ETW_SYSTEM_LOGGER EtwpSystemLogger[8];// Offset=0x0 Size=0x10
    unsigned long EtwpActiveSystemLoggers;// Offset=0x10 Size=0x4
    struct _PERFINFO_GROUPMASK SiloGlobalGroupMask;// Offset=0x14 Size=0x20
    struct _PERFINFO_GROUPMASK EtwpGroupMasks[10];// Offset=0x34 Size=0x140
};

struct _DISPATCHER_HEADER// Size=0x18 (Id=174)
{
    union // Size=0x4 (Id=0)
    {
        long Lock;// Offset=0x0 Size=0x4
        long LockNV;// Offset=0x0 Size=0x4
        unsigned char Type;// Offset=0x0 Size=0x1
        unsigned char Signalling;// Offset=0x1 Size=0x1
        unsigned char Size;// Offset=0x2 Size=0x1
        unsigned char Reserved1;// Offset=0x3 Size=0x1
        unsigned char TimerType;// Offset=0x0 Size=0x1
        union // Size=0x1 (Id=0)
        {
            unsigned char TimerControlFlags;// Offset=0x1 Size=0x1
            struct // Size=0x1 (Id=0)
            {
                unsigned char Absolute:1;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x1
                unsigned char Wake:1;// Offset=0x1 Size=0x1 BitOffset=0x1 BitSize=0x1
                unsigned char EncodedTolerableDelay:6;// Offset=0x1 Size=0x1 BitOffset=0x2 BitSize=0x6
            };
        };
        unsigned char Hand;// Offset=0x2 Size=0x1
        unsigned char TimerMiscFlags;// Offset=0x3 Size=0x1
        struct // Size=0x1 (Id=0)
        {
            unsigned char Index:6;// Offset=0x3 Size=0x1 BitOffset=0x0 BitSize=0x6
            unsigned char Inserted:1;// Offset=0x3 Size=0x1 BitOffset=0x6 BitSize=0x1
            unsigned char Expired:1;// Offset=0x3 Size=0x1 BitOffset=0x7 BitSize=0x1
        };
        unsigned char Timer2Type;// Offset=0x0 Size=0x1
        union // Size=0x1 (Id=0)
        {
            unsigned char Timer2Flags;// Offset=0x1 Size=0x1
            struct // Size=0x1 (Id=0)
            {
                unsigned char Timer2Inserted:1;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x1
                unsigned char Timer2Expiring:1;// Offset=0x1 Size=0x1 BitOffset=0x1 BitSize=0x1
                unsigned char Timer2CancelPending:1;// Offset=0x1 Size=0x1 BitOffset=0x2 BitSize=0x1
                unsigned char Timer2SetPending:1;// Offset=0x1 Size=0x1 BitOffset=0x3 BitSize=0x1
                unsigned char Timer2Running:1;// Offset=0x1 Size=0x1 BitOffset=0x4 BitSize=0x1
                unsigned char Timer2Disabled:1;// Offset=0x1 Size=0x1 BitOffset=0x5 BitSize=0x1
                unsigned char Timer2ReservedFlags:2;// Offset=0x1 Size=0x1 BitOffset=0x6 BitSize=0x2
            };
        };
        unsigned char Timer2ComponentId;// Offset=0x2 Size=0x1
        unsigned char Timer2RelativeId;// Offset=0x3 Size=0x1
        unsigned char QueueType;// Offset=0x0 Size=0x1
        union // Size=0x1 (Id=0)
        {
            unsigned char QueueControlFlags;// Offset=0x1 Size=0x1
            struct // Size=0x1 (Id=0)
            {
                unsigned char Abandoned:1;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x1
                unsigned char DisableIncrement:1;// Offset=0x1 Size=0x1 BitOffset=0x1 BitSize=0x1
                unsigned char QueueReservedControlFlags:6;// Offset=0x1 Size=0x1 BitOffset=0x2 BitSize=0x6
            };
        };
        unsigned char QueueSize;// Offset=0x2 Size=0x1
        unsigned char QueueReserved;// Offset=0x3 Size=0x1
        unsigned char ThreadType;// Offset=0x0 Size=0x1
        unsigned char ThreadReserved;// Offset=0x1 Size=0x1
        union // Size=0x1 (Id=0)
        {
            unsigned char ThreadControlFlags;// Offset=0x2 Size=0x1
            struct // Size=0x1 (Id=0)
            {
                unsigned char CycleProfiling:1;// Offset=0x2 Size=0x1 BitOffset=0x0 BitSize=0x1
                unsigned char CounterProfiling:1;// Offset=0x2 Size=0x1 BitOffset=0x1 BitSize=0x1
                unsigned char GroupScheduling:1;// Offset=0x2 Size=0x1 BitOffset=0x2 BitSize=0x1
                unsigned char AffinitySet:1;// Offset=0x2 Size=0x1 BitOffset=0x3 BitSize=0x1
                unsigned char Tagged:1;// Offset=0x2 Size=0x1 BitOffset=0x4 BitSize=0x1
                unsigned char EnergyProfiling:1;// Offset=0x2 Size=0x1 BitOffset=0x5 BitSize=0x1
                unsigned char SchedulerAssist:1;// Offset=0x2 Size=0x1 BitOffset=0x6 BitSize=0x1
                unsigned char ThreadReservedControlFlags:1;// Offset=0x2 Size=0x1 BitOffset=0x7 BitSize=0x1
            };
        };
        unsigned char DebugActive;// Offset=0x3 Size=0x1
        struct // Size=0x1 (Id=0)
        {
            unsigned char ActiveDR7:1;// Offset=0x3 Size=0x1 BitOffset=0x0 BitSize=0x1
            unsigned char Instrumented:1;// Offset=0x3 Size=0x1 BitOffset=0x1 BitSize=0x1
            unsigned char Minimal:1;// Offset=0x3 Size=0x1 BitOffset=0x2 BitSize=0x1
            unsigned char Reserved4:2;// Offset=0x3 Size=0x1 BitOffset=0x3 BitSize=0x2
            unsigned char AltSyscall:1;// Offset=0x3 Size=0x1 BitOffset=0x5 BitSize=0x1
            unsigned char Emulation:1;// Offset=0x3 Size=0x1 BitOffset=0x6 BitSize=0x1
            unsigned char Reserved5:1;// Offset=0x3 Size=0x1 BitOffset=0x7 BitSize=0x1
        };
        unsigned char MutantType;// Offset=0x0 Size=0x1
        unsigned char MutantSize;// Offset=0x1 Size=0x1
        unsigned char DpcActive;// Offset=0x2 Size=0x1
        unsigned char MutantReserved;// Offset=0x3 Size=0x1
    };
    long SignalState;// Offset=0x4 Size=0x4
    struct _LIST_ENTRY WaitListHead;// Offset=0x8 Size=0x10
};

struct _KMUTANT// Size=0x38 (Id=1653)
{
    struct _DISPATCHER_HEADER Header;// Offset=0x0 Size=0x18
    struct _LIST_ENTRY MutantListEntry;// Offset=0x18 Size=0x10
    struct _KTHREAD * OwnerThread;// Offset=0x28 Size=0x8
    union // Size=0x1 (Id=0)
    {
        unsigned char MutantFlags;// Offset=0x30 Size=0x1
        struct // Size=0x1 (Id=0)
        {
            union // Size=0x31 (Id=0)
            {
                unsigned char Abandoned:1;// Offset=0x30 Size=0x1 BitOffset=0x0 BitSize=0x1
                unsigned char Spare1:7;// Offset=0x30 Size=0x1 BitOffset=0x1 BitSize=0x7
                unsigned char Abandoned2:1;// Offset=0x30 Size=0x1 BitOffset=0x0 BitSize=0x1
            };
            unsigned char AbEnabled:1;// Offset=0x30 Size=0x1 BitOffset=0x1 BitSize=0x1
            unsigned char Spare2:6;// Offset=0x30 Size=0x1 BitOffset=0x2 BitSize=0x6
        };
    };
    unsigned char ApcDisable;// Offset=0x31 Size=0x1
};

struct _ETW_SILODRIVERSTATE// Size=0x1238 (Id=1045)
{
    struct _EJOB * Silo;// Offset=0x0 Size=0x8
    struct _ESERVERSILO_GLOBALS * SiloGlobals;// Offset=0x8 Size=0x8
    unsigned long MaxLoggers;// Offset=0x10 Size=0x4
    struct _ETW_GUID_ENTRY EtwpSecurityProviderGuidEntry;// Offset=0x18 Size=0x1a8
    struct _EX_RUNDOWN_REF_CACHE_AWARE ** EtwpLoggerRundown;// Offset=0x1c0 Size=0x8
    struct _WMI_LOGGER_CONTEXT ** EtwpLoggerContext;// Offset=0x1c8 Size=0x8
    struct _ETW_HASH_BUCKET EtwpGuidHashTable[64];// Offset=0x1d0 Size=0xe00
    unsigned short EtwpSecurityLoggers[8];// Offset=0xfd0 Size=0x10
    unsigned char EtwpSecurityProviderEnableMask;// Offset=0xfe0 Size=0x1
    long EtwpShutdownInProgress;// Offset=0xfe4 Size=0x4
    unsigned long EtwpSecurityProviderPID;// Offset=0xfe8 Size=0x4
    struct _ETW_PRIV_HANDLE_DEMUX_TABLE PrivHandleDemuxTable;// Offset=0xff0 Size=0x20
    wchar_t * RTBacklogFileRoot;// Offset=0x1010 Size=0x8
    struct _ETW_COUNTERS EtwpCounters;// Offset=0x1018 Size=0x10
    union _LARGE_INTEGER LogfileBytesWritten;// Offset=0x1028 Size=0x8
    struct _ETW_SILO_TRACING_BLOCK * ProcessorBlocks;// Offset=0x1030 Size=0x8
    struct _EX_WNF_SUBSCRIPTION * ContainerStateWnfSubscription;// Offset=0x1038 Size=0x8
    unsigned long ContainerStateWnfCallbackCalled;// Offset=0x1040 Size=0x4
    struct _WORK_QUEUE_ITEM * UnsubscribeWorkItem;// Offset=0x1048 Size=0x8
    struct _GUID PartitionId;// Offset=0x1050 Size=0x10
    struct _GUID ParentId;// Offset=0x1060 Size=0x10
    union _LARGE_INTEGER QpcOffsetFromRoot;// Offset=0x1070 Size=0x8
    char * PartitionName;// Offset=0x1078 Size=0x8
    unsigned short PartitionNameSize;// Offset=0x1080 Size=0x2
    unsigned short UnusedPadding;// Offset=0x1082 Size=0x2
    unsigned long PartitionType;// Offset=0x1084 Size=0x4
    struct _ETW_SYSTEM_LOGGER_SETTINGS SystemLoggerSettings;// Offset=0x1088 Size=0x174
    struct _KMUTANT EtwpStartTraceMutex;// Offset=0x1200 Size=0x38
};
