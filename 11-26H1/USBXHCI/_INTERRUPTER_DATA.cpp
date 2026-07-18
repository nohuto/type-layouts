struct _INTERRUPTER_COUNTER// Size=0x48 (Id=591)
{
    unsigned long IsrCount;// Offset=0x0 Size=0x4
    unsigned long DpcCount;// Offset=0x4 Size=0x4
    unsigned long EventCount;// Offset=0x8 Size=0x4
    unsigned long WorkItemCount;// Offset=0xc Size=0x4
    unsigned long RequeueCount;// Offset=0x10 Size=0x4
    unsigned long QueuedWorkItem;// Offset=0x14 Size=0x4
    unsigned long QueuedDpc;// Offset=0x18 Size=0x4
    unsigned long EventRingBusy;// Offset=0x1c Size=0x4
    unsigned long ResetPending;// Offset=0x20 Size=0x4
    unsigned long EventRingFull;// Offset=0x24 Size=0x4
    unsigned long DpcTimeExpired;// Offset=0x28 Size=0x4
    unsigned long DpcWatchdogExpired;// Offset=0x2c Size=0x4
    struct _PCW_INSTANCE * PcwInstanceHandle;// Offset=0x30 Size=0x8
    unsigned long ZeroEventCount;// Offset=0x38 Size=0x4
    unsigned long EventRingNotEmptyCount;// Offset=0x3c Size=0x4
    unsigned long EventRingEmptyCount;// Offset=0x40 Size=0x4
    unsigned long DpcRequeuedCount;// Offset=0x44 Size=0x4
};

struct _INTERRUPTER_FLAGS// Size=0x4 (Id=979)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long MessageSignaled:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long PendingDisable:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long Enabled:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long DpcRunning:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long ResetPending:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
    };
};

enum _InterrupterStates
{
    InterrupterState_Uninitialized=0,
    InterrupterState_Prepared=1,
    InterrupterState_Released=2
};

struct _LIST_ENTRY// Size=0x10 (Id=38)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _DISPATCHER_HEADER// Size=0x18 (Id=768)
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

struct _KEVENT// Size=0x18 (Id=76)
{
    struct _DISPATCHER_HEADER Header;// Offset=0x0 Size=0x18
};

struct _INTERRUPTER_DATA// Size=0xf0 (Id=528)
{
    struct WDFINTERRUPT__ * WdfInterrupt;// Offset=0x0 Size=0x8
    void * ControllerHandle;// Offset=0x8 Size=0x8
    struct RECORDER_LOG__ * RecorderLog;// Offset=0x10 Size=0x8
    struct _INTERRUPTER_REGISTER_SET * InterrupterRegisterSet;// Offset=0x18 Size=0x8
    unsigned long MessageNumber;// Offset=0x20 Size=0x4
    struct _INTERRUPTER_COUNTER Counter;// Offset=0x28 Size=0x48
    struct _INTERRUPTER_FLAGS Flags;// Offset=0x70 Size=0x4
    enum _InterrupterStates State;// Offset=0x74 Size=0x4
    unsigned long SegmentSize;// Offset=0x78 Size=0x4
    unsigned long SegmentCount;// Offset=0x7c Size=0x4
    unsigned long UsedEventRingSegments;// Offset=0x80 Size=0x4
    unsigned long TRBsPerSegment;// Offset=0x84 Size=0x4
    unsigned long CycleState;// Offset=0x88 Size=0x4
    unsigned long DequeueIndex;// Offset=0x8c Size=0x4
    unsigned long DequeueSegment;// Offset=0x90 Size=0x4
    struct _TRB * CurrentRingSegment;// Offset=0x98 Size=0x8
    struct _XIL_BUFFER_DATA * CurrentBufferData;// Offset=0xa0 Size=0x8
    struct _XIL_BUFFER_DATA * EventRingTableBufferData;// Offset=0xa8 Size=0x8
    struct _LIST_ENTRY BufferDataList;// Offset=0xb0 Size=0x10
    struct _KEVENT WorkItemEvent;// Offset=0xc0 Size=0x18
    struct _IO_WORKITEM * IoWorkItem;// Offset=0xd8 Size=0x8
    void * EventRingLock;// Offset=0xe0 Size=0x8
    unsigned char EventRingLockRequiresPassiveLevel;// Offset=0xe8 Size=0x1
};
