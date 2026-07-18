struct _PROCESSOR_NUMBER// Size=0x4 (Id=156)
{
    unsigned short Group;// Offset=0x0 Size=0x2
    unsigned char Number;// Offset=0x2 Size=0x1
    unsigned char Reserved;// Offset=0x3 Size=0x1
};

struct _SLIST_ENTRY// Size=0x10 (Id=23)
{
    struct _SLIST_ENTRY * Next;// Offset=0x0 Size=0x8
};

struct _LIST_ENTRY// Size=0x10 (Id=4)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _STOR_EVENT_QUEUE_ENTRY// Size=0x38 (Id=237)
{
    struct _LIST_ENTRY NextLink;// Offset=0x0 Size=0x10
    struct _LIST_ENTRY SortedListEntry;// Offset=0x10 Size=0x10
    unsigned long Timeout;// Offset=0x20 Size=0x4
    unsigned long QueueIndex;// Offset=0x24 Size=0x4
    unsigned long long StartTime;// Offset=0x28 Size=0x8
    union // Size=0x4 (Id=0)
    {
        struct // Size=0x4 (Id=0)
        {
            unsigned long InSortedQueue:1;// Offset=0x30 Size=0x4 BitOffset=0x0 BitSize=0x1
            unsigned long Reserved:31;// Offset=0x30 Size=0x4 BitOffset=0x1 BitSize=0x1f
        };
        unsigned long Flags;// Offset=0x30 Size=0x4
    };
};

struct _anonymous_241// Size=0x28 (Id=241)
{
    void * OriginalRequest;// Offset=0x0 Size=0x8
    void * DataBuffer;// Offset=0x8 Size=0x8
    void * DataInBuffer;// Offset=0x10 Size=0x8
    void * SenseInfoBuffer;// Offset=0x18 Size=0x8
    unsigned char SenseInfoBufferLength;// Offset=0x20 Size=0x1
};

struct _DISPATCHER_HEADER// Size=0x18 (Id=421)
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
            unsigned char UmsScheduled:1;// Offset=0x3 Size=0x1 BitOffset=0x6 BitSize=0x1
            unsigned char UmsPrimary:1;// Offset=0x3 Size=0x1 BitOffset=0x7 BitSize=0x1
        };
        unsigned char MutantType;// Offset=0x0 Size=0x1
        unsigned char MutantSize;// Offset=0x1 Size=0x1
        unsigned char DpcActive;// Offset=0x2 Size=0x1
        unsigned char MutantReserved;// Offset=0x3 Size=0x1
    };
    long SignalState;// Offset=0x4 Size=0x4
    struct _LIST_ENTRY WaitListHead;// Offset=0x8 Size=0x10
};

struct _KEVENT// Size=0x18 (Id=21)
{
    struct _DISPATCHER_HEADER Header;// Offset=0x0 Size=0x18
};

union _anonymous_242// Size=0x18 (Id=242)
{
    struct _KEVENT CompletionEvent;// Offset=0x0 Size=0x18
};

struct _anonymous_10// Size=0x8 (Id=10)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=11)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _anonymous_10 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _GUID// Size=0x10 (Id=66)
{
    unsigned long Data1;// Offset=0x0 Size=0x4
    unsigned short Data2;// Offset=0x4 Size=0x2
    unsigned short Data3;// Offset=0x6 Size=0x2
    unsigned char Data4[8];// Offset=0x8 Size=0x8
};

struct _EXTENDED_REQUEST_BLOCK// Size=0x320 (Id=243)
{
    unsigned long Signature;// Offset=0x0 Size=0x4
    struct _NPAGED_LOOKASIDE_LIST * Pool;// Offset=0x8 Size=0x8
    struct // Size=0x2 (Id=0)
    {
        unsigned char OwnedMdl:1;// Offset=0x10 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char RemoveFromEventQueue:1;// Offset=0x10 Size=0x1 BitOffset=0x1 BitSize=0x1
        unsigned char State:3;// Offset=0x10 Size=0x1 BitOffset=0x2 BitSize=0x3
        unsigned char RemappedSenseInfo:1;// Offset=0x10 Size=0x1 BitOffset=0x5 BitSize=0x1
        unsigned char CompatSrbInUse:1;// Offset=0x10 Size=0x1 BitOffset=0x6 BitSize=0x1
        unsigned char SrbActivateComponent:1;// Offset=0x10 Size=0x1 BitOffset=0x7 BitSize=0x1
        unsigned char DoExtraAdapterDereference:1;// Offset=0x11 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char DoExtraUnitDereference:1;// Offset=0x11 Size=0x1 BitOffset=0x1 BitSize=0x1
        unsigned char AbortInProgress:1;// Offset=0x11 Size=0x1 BitOffset=0x2 BitSize=0x1
        unsigned char ByPassPausedGateway:1;// Offset=0x11 Size=0x1 BitOffset=0x3 BitSize=0x1
        unsigned char ZoneOverflowIo:1;// Offset=0x11 Size=0x1 BitOffset=0x4 BitSize=0x1
        unsigned char Reserved:3;// Offset=0x11 Size=0x1 BitOffset=0x5 BitSize=0x3
    };
    struct _PROCESSOR_NUMBER InitiatingProcessor;// Offset=0x12 Size=0x4
    unsigned long ChannelNumber;// Offset=0x18 Size=0x4
    struct _SLIST_ENTRY CompletedLink;// Offset=0x20 Size=0x10
    struct _STOR_EVENT_QUEUE_ENTRY PendingLink;// Offset=0x30 Size=0x38
    struct _MDL * Mdl;// Offset=0x68 Size=0x8
    struct _SCATTER_GATHER_LIST * SgList;// Offset=0x70 Size=0x8
    struct _MDL * RemappedSgListMdl;// Offset=0x78 Size=0x8
    struct _SCATTER_GATHER_LIST * RemappedSgList;// Offset=0x80 Size=0x8
    struct _MDL * DataInMdl;// Offset=0x88 Size=0x8
    struct _MDL * DoubleBufferedMdl;// Offset=0x90 Size=0x8
    struct _SCATTER_GATHER_LIST * DataInSgList;// Offset=0x98 Size=0x8
    struct _IRP * Irp;// Offset=0xa0 Size=0x8
    struct _SCSI_REQUEST_BLOCK * Srb;// Offset=0xa8 Size=0x8
    struct _anonymous_241 SrbData;// Offset=0xb0 Size=0x28
    struct _RAID_ADAPTER_EXTENSION * Adapter;// Offset=0xd8 Size=0x8
    struct _RAID_UNIT_EXTENSION * Unit;// Offset=0xe0 Size=0x8
    unsigned char ScatterGatherBuffer[424];// Offset=0xe8 Size=0x1a8
    void  ( * CompletionRoutine)(struct _EXTENDED_REQUEST_BLOCK * );// Offset=0x290 Size=0x8
    union _anonymous_242 u;// Offset=0x298 Size=0x18
    unsigned long long RequestWaitDuration;// Offset=0x2b0 Size=0x8
    union _LARGE_INTEGER RequestStartTimeStamp;// Offset=0x2b8 Size=0x8
    union _LARGE_INTEGER RequestAfterBuildIoTimeStamp;// Offset=0x2c0 Size=0x8
    union _LARGE_INTEGER RequestAfterStartIoTimeStamp;// Offset=0x2c8 Size=0x8
    unsigned long long RequestMiniportDuration;// Offset=0x2d0 Size=0x8
    struct _GUID ActivityId;// Offset=0x2d8 Size=0x10
    unsigned long CompatSrbBufferSize;// Offset=0x2e8 Size=0x4
    unsigned long Component;// Offset=0x2ec Size=0x4
    struct _SCSI_REQUEST_BLOCK * OriginalSrb;// Offset=0x2f0 Size=0x8
    void * CompatSrbBuffer;// Offset=0x2f8 Size=0x8
    struct _IRP * ParentIrp;// Offset=0x300 Size=0x8
    long AbortStatus;// Offset=0x308 Size=0x4
    struct _STOR_CRYPTO_KEY_INFO * CryptoKeyInfo;// Offset=0x310 Size=0x8
};
