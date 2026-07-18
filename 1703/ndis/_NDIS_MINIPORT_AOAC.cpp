struct _LIST_ENTRY// Size=0x10 (Id=28)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

enum _NDIS_TMP_REF_REASON
{
    NdisAoAcTempRefNone=0,
    NdisAoAcTempRefInit=1,
    NdisAoAcTempRefPmInit=2,
    NdisAoAcTempRefWake=3,
    NdisAoAcTempRefLastDeref=4,
    NdisAoAcTempRefClearStop=5,
    NdisAoAcTempRefMagicPacket=6
};

struct _DISPATCHER_HEADER// Size=0x18 (Id=685)
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
                unsigned char ThreadReservedControlFlags:2;// Offset=0x2 Size=0x1 BitOffset=0x6 BitSize=0x2
            };
        };
        unsigned char DebugActive;// Offset=0x3 Size=0x1
        struct // Size=0x1 (Id=0)
        {
            unsigned char ActiveDR7:1;// Offset=0x3 Size=0x1 BitOffset=0x0 BitSize=0x1
            unsigned char Instrumented:1;// Offset=0x3 Size=0x1 BitOffset=0x1 BitSize=0x1
            unsigned char Minimal:1;// Offset=0x3 Size=0x1 BitOffset=0x2 BitSize=0x1
            unsigned char Reserved4:3;// Offset=0x3 Size=0x1 BitOffset=0x3 BitSize=0x3
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
    void _DISPATCHER_HEADER(struct _DISPATCHER_HEADER * );
    void _DISPATCHER_HEADER(struct _DISPATCHER_HEADER & );
    struct _DISPATCHER_HEADER & operator=(struct _DISPATCHER_HEADER * );
    struct _DISPATCHER_HEADER & operator=(struct _DISPATCHER_HEADER & );
};

union _ULARGE_INTEGER// Size=0x8 (Id=71)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    unsigned long HighPart;// Offset=0x4 Size=0x4
    struct <unnamed-type-u>// Size=0x8 (Id=12838)
    {
        unsigned long LowPart;// Offset=0x0 Size=0x4
        unsigned long HighPart;// Offset=0x4 Size=0x4
    };
    struct _ULARGE_INTEGER::<unnamed-type-u> u;// Offset=0x0 Size=0x8
    unsigned long long QuadPart;// Offset=0x0 Size=0x8
};

struct _KTIMER// Size=0x40 (Id=316)
{
    struct _DISPATCHER_HEADER Header;// Offset=0x0 Size=0x18
    union _ULARGE_INTEGER DueTime;// Offset=0x18 Size=0x8
    struct _LIST_ENTRY TimerListEntry;// Offset=0x20 Size=0x10
    struct _KDPC * Dpc;// Offset=0x30 Size=0x8
    unsigned long Processor;// Offset=0x38 Size=0x4
    unsigned long Period;// Offset=0x3c Size=0x4
    void _KTIMER(struct _KTIMER * );
    void _KTIMER(struct _KTIMER & );
    struct _KTIMER & operator=(struct _KTIMER * );
    struct _KTIMER & operator=(struct _KTIMER & );
};

struct _SINGLE_LIST_ENTRY// Size=0x8 (Id=29)
{
    struct _SINGLE_LIST_ENTRY * Next;// Offset=0x0 Size=0x8
};

struct _KDPC// Size=0x40 (Id=89)
{
    union // Size=0x4 (Id=0)
    {
        unsigned long TargetInfoAsUlong;// Offset=0x0 Size=0x4
        unsigned char Type;// Offset=0x0 Size=0x1
        unsigned char Importance;// Offset=0x1 Size=0x1
        unsigned short Number;// Offset=0x2 Size=0x2
    };
    struct _SINGLE_LIST_ENTRY DpcListEntry;// Offset=0x8 Size=0x8
    unsigned long long ProcessorHistory;// Offset=0x10 Size=0x8
    void  ( * DeferredRoutine)(struct _KDPC * ,void * ,void * ,void * );// Offset=0x18 Size=0x8
    void * DeferredContext;// Offset=0x20 Size=0x8
    void * SystemArgument1;// Offset=0x28 Size=0x8
    void * SystemArgument2;// Offset=0x30 Size=0x8
    void * DpcData;// Offset=0x38 Size=0x8
    void _KDPC(struct _KDPC * );
    void _KDPC(struct _KDPC & );
    struct _KDPC & operator=(struct _KDPC * );
    struct _KDPC & operator=(struct _KDPC & );
};

struct _NDIS_TIMER// Size=0x80 (Id=456)
{
    struct _KTIMER Timer;// Offset=0x0 Size=0x40
    struct _KDPC Dpc;// Offset=0x40 Size=0x40
    void _NDIS_TIMER(struct _NDIS_TIMER * );
    void _NDIS_TIMER(struct _NDIS_TIMER & );
    struct _NDIS_TIMER & operator=(struct _NDIS_TIMER * );
    struct _NDIS_TIMER & operator=(struct _NDIS_TIMER & );
};

struct _NDIS_WORK_ITEM// Size=0x50 (Id=465)
{
    void * Context;// Offset=0x0 Size=0x8
    void  ( * Routine)(struct _NDIS_WORK_ITEM * ,void * );// Offset=0x8 Size=0x8
    unsigned char WrapperReserved[64];// Offset=0x10 Size=0x40
};

enum _NDIS_MINIPORT_EVENT
{
    NdisMEvent_Unknown=0,
    NdisMEventDx_SystemSleep=1,
    NdisMEventDx_NicQuiet=2,
    NdisMEventDx_SSIdle=3,
    NdisMEventDx_D3DTimeout=4,
    NdisMEventD0_SystemResume=5,
    NdisMEventD0_NicActive=6,
    NdisMEventD0_AoAcWake=7,
    NdisMEventD0_SSResume=8,
    NdisMEventD0_D3DCancel=9,
    NdisMEventD0_D3DWake=10,
    NdisMEventD0_D3DResume=11,
    NdisMEventD0_Complete=12,
    NdisMEventD0_SSComplete=13,
    NdisMEventDx_Complete=14,
    NdisMEventDx_SSComplete=15,
    NdisMEventD0_AoAcSurpriseWake=20,
    NdisMEvent_DeviceAdded=31,
    NdisMEvent_DeviceStart=32,
    NdisMEvent_DeviceQueryRemove=33,
    NdisMEvent_DeviceCancelRemove=34,
    NdisMEvent_DeviceRemove=35,
    NdisMEvent_DeviceSurpriseRemoval=36,
    NdisMEvent_DeviceQueryStop=37,
    NdisMEvent_DeviceCancelStop=38,
    NdisMEvent_DeviceStop=39,
    NdisMEvent_MiniportInitialized=51,
    NdisMEvent_MiniportHalted=52,
    NdisMEvent_MiniportPaused=53,
    NdisMEvent_MiniportRestarted=54,
    NdisMEvent_MiniportPmInitialized=55,
    NdisMEventErr_Min=70,
    NdisMEventErr_UserRequested=70,
    NdisMEventErr_MiniportRequested=71,
    NdisMEventErr_FailedIMInitDevice=72,
    NdisMEventErr_FailedRestart=73,
    NdisMEventErr_FailedPowerD0=74,
    NdisMEventErr_FailedPowerDx=75,
    NdisMEventErr_UninstalledByUsermode=76,
    NdisMEventErr_Max=76
};

enum _NDIS_NIC_ACTIVE_STATE
{
    NdisNicActive=0,
    NdisNicSuspending=1,
    NdisNicQuiet=2,
    NdisNicResuming=3,
    NdisNicError=4
};

struct _NDIS_SS_STOP_FLAGS// Size=0x4 (Id=1051)
{
    union // Size=0x4 (Id=0)
    {
        struct // Size=0x4 (Id=0)
        {
            unsigned long QueryRemove:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
            unsigned long DeviceRemove:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
            unsigned long SurpriseRemove:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
            unsigned long QueryStop:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
            unsigned long DeviceStop:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
            unsigned long SystemPower:1;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1
            unsigned long NicQuiet:1;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1
            unsigned long PnPOp:1;// Offset=0x0 Size=0x4 BitOffset=0x7 BitSize=0x1
            unsigned long NotStarted:1;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x1
            unsigned long MiniportFatalError:1;// Offset=0x0 Size=0x4 BitOffset=0x9 BitSize=0x1
            unsigned long ApplyInterfaceChange:1;// Offset=0x0 Size=0x4 BitOffset=0xa BitSize=0x1
            unsigned long MagicPacket:1;// Offset=0x0 Size=0x4 BitOffset=0xb BitSize=0x1
            unsigned long BindChanges:1;// Offset=0x0 Size=0x4 BitOffset=0xc BitSize=0x1
        };
        unsigned long Value;// Offset=0x0 Size=0x4
    };
};

struct _KEVENT// Size=0x18 (Id=61)
{
    struct _DISPATCHER_HEADER Header;// Offset=0x0 Size=0x18
    void _KEVENT(struct _KEVENT * );
    void _KEVENT(struct _KEVENT & );
    struct _KEVENT & operator=(struct _KEVENT * );
    struct _KEVENT & operator=(struct _KEVENT & );
};

union _LARGE_INTEGER// Size=0x8 (Id=343)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct <unnamed-type-u>// Size=0x8 (Id=5022)
    {
        unsigned long LowPart;// Offset=0x0 Size=0x4
        long HighPart;// Offset=0x4 Size=0x4
    };
    struct _LARGE_INTEGER::<unnamed-type-u> u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _NDIS_AOAC_COMPONENT_REF_TIME// Size=0x10 (Id=1680)
{
    unsigned long long TotalRefTime;// Offset=0x0 Size=0x8
    unsigned long long CurrentRefStartTime;// Offset=0x8 Size=0x8
};

struct _NDIS_MINIPORT_CS_TRAFFIC_STATS// Size=0x30 (Id=964)
{
    unsigned long long IfInUnicastPackets;// Offset=0x0 Size=0x8
    unsigned long long IfOutUnicastPackets;// Offset=0x8 Size=0x8
    unsigned long long IfInMulticastPackets;// Offset=0x10 Size=0x8
    unsigned long long IfOutMulticastPackets;// Offset=0x18 Size=0x8
    unsigned long long IfInBroadcastPackets;// Offset=0x20 Size=0x8
    unsigned long long IfOutBroadcastPackets;// Offset=0x28 Size=0x8
};

struct _NDIS_MINIPORT_CS_SPURIOUS_WAKE_STATS// Size=0x2c (Id=1136)
{
    unsigned long WakeReasonUnspec;// Offset=0x0 Size=0x4
    unsigned long WakeReasonPacket;// Offset=0x4 Size=0x4
    unsigned long WakeReasonMediaDisconnect;// Offset=0x8 Size=0x4
    unsigned long WakeReasonMediaConnect;// Offset=0xc Size=0x4
    unsigned long WakeReasonWlanNLODiscovery;// Offset=0x10 Size=0x4
    unsigned long WakeReasonWlanApAssociationLost;// Offset=0x14 Size=0x4
    unsigned long WakeReasonWlanGTKHandshakeError;// Offset=0x18 Size=0x4
    unsigned long WakeReasonWlan4WayHandshakeRequest;// Offset=0x1c Size=0x4
    unsigned long WakeReasonWwanRegisterState;// Offset=0x20 Size=0x4
    unsigned long WakeReasonWwanSMSReceive;// Offset=0x24 Size=0x4
    unsigned long WakeReasonWwanUSSDReceive;// Offset=0x28 Size=0x4
};

struct _NDIS_MINIPORT_CS_SPURIOUS_WAKE_STATS_EX// Size=0x10 (Id=1337)
{
    unsigned long WakeReasonBadIndication;// Offset=0x0 Size=0x4
    unsigned long WakeReasonNoIndication;// Offset=0x4 Size=0x4
    unsigned long WakeReasonUnknown;// Offset=0x8 Size=0x4
    unsigned long LastUnknownWakeReason;// Offset=0xc Size=0x4
};

struct _NDIS_MINIPORT_AOAC// Size=0x430 (Id=818)
{
    unsigned long long Lock;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY HandleList;// Offset=0x8 Size=0x10
    long HandleListCount;// Offset=0x18 Size=0x4
    struct _LIST_ENTRY PendingIrpList;// Offset=0x20 Size=0x10
    long PendingIrpListCount;// Offset=0x30 Size=0x4
    long ActiveRef;// Offset=0x34 Size=0x4
    enum _NDIS_TMP_REF_REASON TempRefReason;// Offset=0x38 Size=0x4
    struct _NDIS_TIMER TempRefTimer;// Offset=0x40 Size=0x80
    struct _NDIS_WORK_ITEM TempRefWorkItem;// Offset=0xc0 Size=0x50
    unsigned char TempDerefInProgress;// Offset=0x110 Size=0x1
    unsigned long DerefTimeoutMilliseconds;// Offset=0x114 Size=0x4
    unsigned char WakeWorkItemScheduled;// Offset=0x118 Size=0x1
    enum _NDIS_MINIPORT_EVENT WakeWorkItemWakeReason;// Offset=0x11a Size=0x2
    struct _NDIS_WORK_ITEM WakeWorkItem;// Offset=0x120 Size=0x50
    enum _NDIS_NIC_ACTIVE_STATE ActiveState;// Offset=0x170 Size=0x4
    struct _NDIS_SS_STOP_FLAGS StopFlags;// Offset=0x174 Size=0x4
    unsigned char SSIdleConfirmed;// Offset=0x178 Size=0x1
    unsigned char SSIdleConfirmInProgress;// Offset=0x179 Size=0x1
    unsigned char RemoteWakeEnabled;// Offset=0x17a Size=0x1
    unsigned char DeviceGone;// Offset=0x17b Size=0x1
    struct _KEVENT PowerSuspendCompleteEvent;// Offset=0x180 Size=0x18
    struct _KEVENT WdfAoAcDisengagedEvent;// Offset=0x198 Size=0x18
    unsigned char WdfAoAcTransition;// Offset=0x1b0 Size=0x1
    struct _KEVENT NicQuietCheckCompleteEvent;// Offset=0x1b8 Size=0x18
    unsigned long long StartTime;// Offset=0x1d0 Size=0x8
    unsigned short LastUnexpectedFailureLine[2];// Offset=0x1d8 Size=0x4
    unsigned char TakeStartToRefTime;// Offset=0x1dc Size=0x1
    union _LARGE_INTEGER LastWakeTime;// Offset=0x1e0 Size=0x8
    unsigned char TakeWakeToRefTime;// Offset=0x1e8 Size=0x1
    long ComponentRefCounts[16];// Offset=0x1ec Size=0x40
    struct _NDIS_AOAC_COMPONENT_REF_TIME CsRefTimes[16];// Offset=0x230 Size=0x100
    long CsPowerTransitions;// Offset=0x330 Size=0x4
    unsigned long long TotalCsActiveTime;// Offset=0x338 Size=0x8
    unsigned long long TotalCsResiliencyTime;// Offset=0x340 Size=0x8
    unsigned long long CurrentActiveStartTime;// Offset=0x348 Size=0x8
    unsigned long long CurrentCsResiliencyStartTime;// Offset=0x350 Size=0x8
    unsigned long CsSurpriseWakes;// Offset=0x358 Size=0x4
    unsigned long CsSpuriousWakes;// Offset=0x35c Size=0x4
    struct _NDIS_MINIPORT_CS_TRAFFIC_STATS CsTrafficStats[3];// Offset=0x360 Size=0x90
    struct _NDIS_MINIPORT_CS_SPURIOUS_WAKE_STATS CsSpuriousWakeStats;// Offset=0x3f0 Size=0x2c
    struct _NDIS_MINIPORT_CS_SPURIOUS_WAKE_STATS_EX CsSpuriousWakeStatsEx;// Offset=0x41c Size=0x10
    unsigned char DirectedMacPatternPlumbed;// Offset=0x42c Size=0x1
    unsigned char IsInCsResiliency;// Offset=0x42d Size=0x1
    void _NDIS_MINIPORT_AOAC(struct _NDIS_MINIPORT_AOAC * );
    void _NDIS_MINIPORT_AOAC(struct _NDIS_MINIPORT_AOAC & );
    struct _NDIS_MINIPORT_AOAC & operator=(struct _NDIS_MINIPORT_AOAC * );
    struct _NDIS_MINIPORT_AOAC & operator=(struct _NDIS_MINIPORT_AOAC & );
};
