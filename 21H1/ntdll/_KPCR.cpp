struct _NT_TIB// Size=0x1c (Id=485)
{
    struct _EXCEPTION_REGISTRATION_RECORD * ExceptionList;// Offset=0x0 Size=0x4
    void * StackBase;// Offset=0x4 Size=0x4
    void * StackLimit;// Offset=0x8 Size=0x4
    void * SubSystemTib;// Offset=0xc Size=0x4
    union // Size=0x4 (Id=0)
    {
        void * FiberData;// Offset=0x10 Size=0x4
        unsigned long Version;// Offset=0x10 Size=0x4
    };
    void * ArbitraryUserPointer;// Offset=0x14 Size=0x4
    struct _NT_TIB * Self;// Offset=0x18 Size=0x4
};

struct _FLOATING_SAVE_AREA// Size=0x70 (Id=537)
{
    unsigned long ControlWord;// Offset=0x0 Size=0x4
    unsigned long StatusWord;// Offset=0x4 Size=0x4
    unsigned long TagWord;// Offset=0x8 Size=0x4
    unsigned long ErrorOffset;// Offset=0xc Size=0x4
    unsigned long ErrorSelector;// Offset=0x10 Size=0x4
    unsigned long DataOffset;// Offset=0x14 Size=0x4
    unsigned long DataSelector;// Offset=0x18 Size=0x4
    unsigned char RegisterArea[80];// Offset=0x1c Size=0x50
    unsigned long Spare0;// Offset=0x6c Size=0x4
};

struct _CONTEXT// Size=0x2cc (Id=424)
{
    unsigned long ContextFlags;// Offset=0x0 Size=0x4
    unsigned long Dr0;// Offset=0x4 Size=0x4
    unsigned long Dr1;// Offset=0x8 Size=0x4
    unsigned long Dr2;// Offset=0xc Size=0x4
    unsigned long Dr3;// Offset=0x10 Size=0x4
    unsigned long Dr6;// Offset=0x14 Size=0x4
    unsigned long Dr7;// Offset=0x18 Size=0x4
    struct _FLOATING_SAVE_AREA FloatSave;// Offset=0x1c Size=0x70
    unsigned long SegGs;// Offset=0x8c Size=0x4
    unsigned long SegFs;// Offset=0x90 Size=0x4
    unsigned long SegEs;// Offset=0x94 Size=0x4
    unsigned long SegDs;// Offset=0x98 Size=0x4
    unsigned long Edi;// Offset=0x9c Size=0x4
    unsigned long Esi;// Offset=0xa0 Size=0x4
    unsigned long Ebx;// Offset=0xa4 Size=0x4
    unsigned long Edx;// Offset=0xa8 Size=0x4
    unsigned long Ecx;// Offset=0xac Size=0x4
    unsigned long Eax;// Offset=0xb0 Size=0x4
    unsigned long Ebp;// Offset=0xb4 Size=0x4
    unsigned long Eip;// Offset=0xb8 Size=0x4
    unsigned long SegCs;// Offset=0xbc Size=0x4
    unsigned long EFlags;// Offset=0xc0 Size=0x4
    unsigned long Esp;// Offset=0xc4 Size=0x4
    unsigned long SegSs;// Offset=0xc8 Size=0x4
    unsigned char ExtendedRegisters[512];// Offset=0xcc Size=0x200
};

struct _DESCRIPTOR// Size=0x8 (Id=682)
{
    unsigned short Pad;// Offset=0x0 Size=0x2
    unsigned short Limit;// Offset=0x2 Size=0x2
    unsigned long Base;// Offset=0x4 Size=0x4
};

struct _KSPECIAL_REGISTERS// Size=0x54 (Id=636)
{
    unsigned long Cr0;// Offset=0x0 Size=0x4
    unsigned long Cr2;// Offset=0x4 Size=0x4
    unsigned long Cr3;// Offset=0x8 Size=0x4
    unsigned long Cr4;// Offset=0xc Size=0x4
    unsigned long KernelDr0;// Offset=0x10 Size=0x4
    unsigned long KernelDr1;// Offset=0x14 Size=0x4
    unsigned long KernelDr2;// Offset=0x18 Size=0x4
    unsigned long KernelDr3;// Offset=0x1c Size=0x4
    unsigned long KernelDr6;// Offset=0x20 Size=0x4
    unsigned long KernelDr7;// Offset=0x24 Size=0x4
    struct _DESCRIPTOR Gdtr;// Offset=0x28 Size=0x8
    struct _DESCRIPTOR Idtr;// Offset=0x30 Size=0x8
    unsigned short Tr;// Offset=0x38 Size=0x2
    unsigned short Ldtr;// Offset=0x3a Size=0x2
    unsigned long long Xcr0;// Offset=0x3c Size=0x8
    unsigned long ExceptionList;// Offset=0x44 Size=0x4
    unsigned long Reserved[3];// Offset=0x48 Size=0xc
};

struct _KPROCESSOR_STATE// Size=0x320 (Id=557)
{
    struct _CONTEXT ContextFrame;// Offset=0x0 Size=0x2cc
    struct _KSPECIAL_REGISTERS SpecialRegisters;// Offset=0x2cc Size=0x54
};

struct _KSPIN_LOCK_QUEUE// Size=0x8 (Id=63)
{
    struct _KSPIN_LOCK_QUEUE * Next;// Offset=0x0 Size=0x4
    unsigned long * Lock;// Offset=0x4 Size=0x4
};

union _KPRCBFLAG// Size=0x4 (Id=419)
{
    long PrcbFlags;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long BamQosLevel:8;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x8
        unsigned long PendingQosUpdate:2;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x2
        unsigned long CacheIsolationEnabled:1;// Offset=0x0 Size=0x4 BitOffset=0xa BitSize=0x1
        unsigned long TracepointActive:1;// Offset=0x0 Size=0x4 BitOffset=0xb BitSize=0x1
        unsigned long PrcbFlagsReserved:20;// Offset=0x0 Size=0x4 BitOffset=0xc BitSize=0x14
    };
};

struct _anonymous_13// Size=0x8 (Id=13)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=322)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _anonymous_13 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _PP_LOOKASIDE_LIST// Size=0x8 (Id=84)
{
    struct _GENERAL_LOOKASIDE * P;// Offset=0x0 Size=0x4
    struct _GENERAL_LOOKASIDE * L;// Offset=0x4 Size=0x4
};

struct _SINGLE_LIST_ENTRY// Size=0x4 (Id=26)
{
    struct _SINGLE_LIST_ENTRY * Next;// Offset=0x0 Size=0x4
};

union _SLIST_HEADER// Size=0x8 (Id=70)
{
    unsigned long long Alignment;// Offset=0x0 Size=0x8
    struct _SINGLE_LIST_ENTRY Next;// Offset=0x0 Size=0x4
    unsigned short Depth;// Offset=0x4 Size=0x2
    unsigned short CpuId;// Offset=0x6 Size=0x2
};

enum _POOL_TYPE
{
    NonPagedPool=0,
    NonPagedPoolExecute=0,
    PagedPool=1,
    NonPagedPoolMustSucceed=2,
    DontUseThisType=3,
    NonPagedPoolCacheAligned=4,
    PagedPoolCacheAligned=5,
    NonPagedPoolCacheAlignedMustS=6,
    MaxPoolType=7,
    NonPagedPoolBase=0,
    NonPagedPoolBaseMustSucceed=2,
    NonPagedPoolBaseCacheAligned=4,
    NonPagedPoolBaseCacheAlignedMustS=6,
    NonPagedPoolSession=32,
    PagedPoolSession=33,
    NonPagedPoolMustSucceedSession=34,
    DontUseThisTypeSession=35,
    NonPagedPoolCacheAlignedSession=36,
    PagedPoolCacheAlignedSession=37,
    NonPagedPoolCacheAlignedMustSSession=38,
    NonPagedPoolNx=512,
    NonPagedPoolNxCacheAligned=516,
    NonPagedPoolSessionNx=544
};

struct _LIST_ENTRY// Size=0x8 (Id=25)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x4
    struct _LIST_ENTRY * Blink;// Offset=0x4 Size=0x4
};

struct _GENERAL_LOOKASIDE_POOL// Size=0x48 (Id=384)
{
    union // Size=0x8 (Id=0)
    {
        union _SLIST_HEADER ListHead;// Offset=0x0 Size=0x8
        struct _SINGLE_LIST_ENTRY SingleListHead;// Offset=0x0 Size=0x4
        unsigned short Depth;// Offset=0x8 Size=0x2
    };
    unsigned short MaximumDepth;// Offset=0xa Size=0x2
    unsigned long TotalAllocates;// Offset=0xc Size=0x4
    union // Size=0x4 (Id=0)
    {
        unsigned long AllocateMisses;// Offset=0x10 Size=0x4
        unsigned long AllocateHits;// Offset=0x10 Size=0x4
    };
    unsigned long TotalFrees;// Offset=0x14 Size=0x4
    union // Size=0x4 (Id=0)
    {
        unsigned long FreeMisses;// Offset=0x18 Size=0x4
        unsigned long FreeHits;// Offset=0x18 Size=0x4
    };
    enum _POOL_TYPE Type;// Offset=0x1c Size=0x4
    unsigned long Tag;// Offset=0x20 Size=0x4
    unsigned long Size;// Offset=0x24 Size=0x4
    union // Size=0x4 (Id=0)
    {
        void *  ( * AllocateEx)(enum _POOL_TYPE ,unsigned long ,unsigned long ,struct _LOOKASIDE_LIST_EX * );// Offset=0x28 Size=0x4
        void *  ( * Allocate)(enum _POOL_TYPE ,unsigned long ,unsigned long );// Offset=0x28 Size=0x4
    };
    union // Size=0x4 (Id=0)
    {
        void  ( * FreeEx)(void * ,struct _LOOKASIDE_LIST_EX * );// Offset=0x2c Size=0x4
        void  ( * Free)(void * );// Offset=0x2c Size=0x4
    };
    struct _LIST_ENTRY ListEntry;// Offset=0x30 Size=0x8
    unsigned long LastTotalAllocates;// Offset=0x38 Size=0x4
    union // Size=0x4 (Id=0)
    {
        unsigned long LastAllocateMisses;// Offset=0x3c Size=0x4
        unsigned long LastAllocateHits;// Offset=0x3c Size=0x4
    };
    unsigned long Future[2];// Offset=0x40 Size=0x8
};

struct _KDPC_LIST// Size=0x8 (Id=542)
{
    struct _SINGLE_LIST_ENTRY ListHead;// Offset=0x0 Size=0x4
    struct _SINGLE_LIST_ENTRY * LastEntry;// Offset=0x4 Size=0x4
};

struct _KDPC_DATA// Size=0x18 (Id=291)
{
    struct _KDPC_LIST DpcList;// Offset=0x0 Size=0x8
    unsigned long DpcLock;// Offset=0x8 Size=0x4
    long DpcQueueDepth;// Offset=0xc Size=0x4
    unsigned long DpcCount;// Offset=0x10 Size=0x4
    struct _KDPC * ActiveDpc;// Offset=0x14 Size=0x4
};

struct _DISPATCHER_HEADER// Size=0x10 (Id=360)
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
            unsigned char Index:1;// Offset=0x3 Size=0x1 BitOffset=0x0 BitSize=0x1
            unsigned char Processor:5;// Offset=0x3 Size=0x1 BitOffset=0x1 BitSize=0x5
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
                unsigned char Instrumented:1;// Offset=0x2 Size=0x1 BitOffset=0x7 BitSize=0x1
            };
        };
        unsigned char DebugActive;// Offset=0x3 Size=0x1
        unsigned char MutantType;// Offset=0x0 Size=0x1
        unsigned char MutantSize;// Offset=0x1 Size=0x1
        unsigned char DpcActive;// Offset=0x2 Size=0x1
        unsigned char MutantReserved;// Offset=0x3 Size=0x1
    };
    long SignalState;// Offset=0x4 Size=0x4
    struct _LIST_ENTRY WaitListHead;// Offset=0x8 Size=0x8
};

struct _KGATE// Size=0x10 (Id=410)
{
    struct _DISPATCHER_HEADER Header;// Offset=0x0 Size=0x10
};

struct _anonymous_11// Size=0x8 (Id=11)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    unsigned long HighPart;// Offset=0x4 Size=0x4
};

union _ULARGE_INTEGER// Size=0x8 (Id=12)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    unsigned long HighPart;// Offset=0x4 Size=0x4
    struct _anonymous_11 u;// Offset=0x0 Size=0x8
    unsigned long long QuadPart;// Offset=0x0 Size=0x8
};

struct _KTIMER_TABLE_ENTRY// Size=0x18 (Id=687)
{
    unsigned long Lock;// Offset=0x0 Size=0x4
    struct _LIST_ENTRY Entry;// Offset=0x4 Size=0x8
    union _ULARGE_INTEGER Time;// Offset=0x10 Size=0x8
};

struct _KTIMER_TABLE_STATE// Size=0x10 (Id=681)
{
    unsigned long long LastTimerExpiration[1];// Offset=0x0 Size=0x8
    unsigned long LastTimerHand[1];// Offset=0x8 Size=0x4
};

struct _KTIMER_TABLE// Size=0x1850 (Id=627)
{
    struct _KTIMER * TimerExpiry[16];// Offset=0x0 Size=0x40
    struct _KTIMER_TABLE_ENTRY TimerEntries[1][256];// Offset=0x40 Size=0x1800
    struct _KTIMER_TABLE_STATE TableState;// Offset=0x1840 Size=0x10
};

struct _KDPC// Size=0x20 (Id=165)
{
    union // Size=0x4 (Id=0)
    {
        unsigned long TargetInfoAsUlong;// Offset=0x0 Size=0x4
        unsigned char Type;// Offset=0x0 Size=0x1
        unsigned char Importance;// Offset=0x1 Size=0x1
        unsigned short Number;// Offset=0x2 Size=0x2
    };
    struct _SINGLE_LIST_ENTRY DpcListEntry;// Offset=0x4 Size=0x4
    unsigned long ProcessorHistory;// Offset=0x8 Size=0x4
    void  ( * DeferredRoutine)(struct _KDPC * ,void * ,void * ,void * );// Offset=0xc Size=0x4
    void * DeferredContext;// Offset=0x10 Size=0x4
    void * SystemArgument1;// Offset=0x14 Size=0x4
    void * SystemArgument2;// Offset=0x18 Size=0x4
    void * DpcData;// Offset=0x1c Size=0x4
};

struct _RTL_RB_TREE// Size=0x8 (Id=37)
{
    struct _RTL_BALANCED_NODE * Root;// Offset=0x0 Size=0x4
    union // Size=0x1 (Id=0)
    {
        struct // Size=0x1 (Id=0)
        {
            unsigned char Encoded:1;// Offset=0x4 Size=0x1 BitOffset=0x0 BitSize=0x1
        };
        struct _RTL_BALANCED_NODE * Min;// Offset=0x4 Size=0x4
    };
};

struct _PROC_IDLE_POLICY// Size=0x6 (Id=667)
{
    unsigned char PromotePercent;// Offset=0x0 Size=0x1
    unsigned char DemotePercent;// Offset=0x1 Size=0x1
    unsigned char PromotePercentBase;// Offset=0x2 Size=0x1
    unsigned char DemotePercentBase;// Offset=0x3 Size=0x1
    unsigned char AllowScaling;// Offset=0x4 Size=0x1
    unsigned char ForceLightIdle;// Offset=0x5 Size=0x1
};

union _PPM_IDLE_SYNCHRONIZATION_STATE// Size=0x4 (Id=524)
{
    long AsLong;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        long RefCount:24;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x18
        unsigned long State:8;// Offset=0x0 Size=0x4 BitOffset=0x18 BitSize=0x8
    };
};

struct _PROC_FEEDBACK// Size=0x88 (Id=556)
{
    unsigned long Lock;// Offset=0x0 Size=0x4
    unsigned long long CyclesLast;// Offset=0x8 Size=0x8
    unsigned long long CyclesActive;// Offset=0x10 Size=0x8
    struct _PROC_FEEDBACK_COUNTER * Counters[2];// Offset=0x18 Size=0x8
    unsigned long long LastUpdateTime;// Offset=0x20 Size=0x8
    unsigned long long UnscaledTime;// Offset=0x28 Size=0x8
    long long UnaccountedTime;// Offset=0x30 Size=0x8
    unsigned long long ScaledTime[2];// Offset=0x38 Size=0x10
    unsigned long long UnaccountedKernelTime;// Offset=0x48 Size=0x8
    unsigned long long PerformanceScaledKernelTime;// Offset=0x50 Size=0x8
    unsigned long UserTimeLast;// Offset=0x58 Size=0x4
    unsigned long KernelTimeLast;// Offset=0x5c Size=0x4
    unsigned long long IdleGenerationNumberLast;// Offset=0x60 Size=0x8
    unsigned long long HvActiveTimeLast;// Offset=0x68 Size=0x8
    unsigned long long StallCyclesLast;// Offset=0x70 Size=0x8
    unsigned long long StallTime;// Offset=0x78 Size=0x8
    unsigned char KernelTimesIndex;// Offset=0x80 Size=0x1
    unsigned char CounterDiscardsIdleTime;// Offset=0x81 Size=0x1
};

enum _PROC_HYPERVISOR_STATE
{
    ProcHypervisorNone=0,
    ProcHypervisorPresent=1,
    ProcHypervisorPower=2,
    ProcHypervisorHvCounters=3
};

struct _PPM_FFH_THROTTLE_STATE_INFO// Size=0x20 (Id=563)
{
    unsigned char EnableLogging;// Offset=0x0 Size=0x1
    unsigned long MismatchCount;// Offset=0x4 Size=0x4
    unsigned char Initialized;// Offset=0x8 Size=0x1
    unsigned long long LastValue;// Offset=0x10 Size=0x8
    union _LARGE_INTEGER LastLogTickCount;// Offset=0x18 Size=0x8
};

struct _PROC_IDLE_SNAP// Size=0x10 (Id=642)
{
    unsigned long long Time;// Offset=0x0 Size=0x8
    unsigned long long Idle;// Offset=0x8 Size=0x8
};

struct _PROC_PERF_CHECK_CONTEXT// Size=0x28 (Id=580)
{
    struct _PROC_PERF_DOMAIN * Domain;// Offset=0x0 Size=0x4
    struct _PROC_PERF_CONSTRAINT * Constraint;// Offset=0x4 Size=0x4
    struct _PROC_PERF_CHECK * PerfCheck;// Offset=0x8 Size=0x4
    struct _PROC_PERF_LOAD * Load;// Offset=0xc Size=0x4
    struct _PROC_PERF_HISTORY * PerfHistory;// Offset=0x10 Size=0x4
    unsigned long Utility;// Offset=0x14 Size=0x4
    unsigned long AffinitizedUtility;// Offset=0x18 Size=0x4
    unsigned long MediaUtility;// Offset=0x1c Size=0x4
    unsigned short LatestAffinitizedPercent;// Offset=0x20 Size=0x2
    unsigned short AveragePerformancePercent;// Offset=0x22 Size=0x2
    unsigned long RelativePerformance;// Offset=0x24 Size=0x4
};

enum _KHETERO_CPU_QOS
{
    KHeteroCpuQosDefault=0,
    KHeteroCpuQosHigh=0,
    KHeteroCpuQosMedium=1,
    KHeteroCpuQosLow=2,
    KHeteroCpuQosMultimedia=3,
    KHeteroCpuQosDeadline=4,
    KHeteroCpuQosDynamic=5,
    KHeteroCpuQosMax=5
};

struct _PROCESSOR_POWER_STATE// Size=0x1a8 (Id=528)
{
    struct _PPM_IDLE_STATES * IdleStates;// Offset=0x0 Size=0x4
    struct _PROC_IDLE_ACCOUNTING * IdleAccounting;// Offset=0x4 Size=0x4
    unsigned long long IdleTimeLast;// Offset=0x8 Size=0x8
    unsigned long long IdleTimeTotal;// Offset=0x10 Size=0x8
    unsigned long long IdleTimeEntry;// Offset=0x18 Size=0x8
    unsigned long long IdleTimeExpiration;// Offset=0x20 Size=0x8
    unsigned char NonInterruptibleTransition;// Offset=0x28 Size=0x1
    unsigned char PepWokenTransition;// Offset=0x29 Size=0x1
    unsigned char HvTargetState;// Offset=0x2a Size=0x1
    unsigned char SoftParked;// Offset=0x2b Size=0x1
    unsigned long TargetIdleState;// Offset=0x2c Size=0x4
    struct _PROC_IDLE_POLICY IdlePolicy;// Offset=0x30 Size=0x6
    union _PPM_IDLE_SYNCHRONIZATION_STATE Synchronization;// Offset=0x38 Size=0x4
    struct _PROC_FEEDBACK PerfFeedback;// Offset=0x40 Size=0x88
    enum _PROC_HYPERVISOR_STATE Hypervisor;// Offset=0xc8 Size=0x4
    unsigned long LastSysTime;// Offset=0xcc Size=0x4
    unsigned long WmiDispatchPtr;// Offset=0xd0 Size=0x4
    long WmiInterfaceEnabled;// Offset=0xd4 Size=0x4
    struct _PPM_FFH_THROTTLE_STATE_INFO FFHThrottleStateInfo;// Offset=0xd8 Size=0x20
    struct _KDPC PerfActionDpc;// Offset=0xf8 Size=0x20
    long PerfActionMask;// Offset=0x118 Size=0x4
    struct _PROC_IDLE_SNAP HvIdleCheck;// Offset=0x120 Size=0x10
    struct _PROC_PERF_CHECK_CONTEXT CheckContext;// Offset=0x130 Size=0x28
    struct _PPM_CONCURRENCY_ACCOUNTING * Concurrency;// Offset=0x158 Size=0x4
    struct _PPM_CONCURRENCY_ACCOUNTING * ClassConcurrency;// Offset=0x15c Size=0x4
    unsigned char ArchitecturalEfficiencyClass;// Offset=0x160 Size=0x1
    unsigned char PerformanceSchedulingClass;// Offset=0x161 Size=0x1
    unsigned char EfficiencySchedulingClass;// Offset=0x162 Size=0x1
    unsigned char Unused;// Offset=0x163 Size=0x1
    unsigned char Parked;// Offset=0x164 Size=0x1
    unsigned char LongPriorQosPeriod;// Offset=0x165 Size=0x1
    union // Size=0x8 (Id=0)
    {
        unsigned long long SnapTimeLast;// Offset=0x168 Size=0x8
        unsigned long long EnergyConsumed;// Offset=0x168 Size=0x8
    };
    unsigned long long ActiveTime;// Offset=0x170 Size=0x8
    unsigned long long TotalTime;// Offset=0x178 Size=0x8
    struct _POP_FX_DEVICE * FxDevice;// Offset=0x180 Size=0x4
    unsigned long long LastQosTranstionTsc;// Offset=0x188 Size=0x8
    unsigned long long QosTransitionHysteresis;// Offset=0x190 Size=0x8
    enum _KHETERO_CPU_QOS RequestedQosClass;// Offset=0x198 Size=0x4
    enum _KHETERO_CPU_QOS ResolvedQosClass;// Offset=0x19c Size=0x4
    unsigned short QosEquivalencyMask;// Offset=0x1a0 Size=0x2
    unsigned short HwFeedbackTableIndex;// Offset=0x1a2 Size=0x2
    unsigned char HwFeedbackParkHint;// Offset=0x1a4 Size=0x1
    unsigned char HwFeedbackPerformanceClass;// Offset=0x1a5 Size=0x1
    unsigned char HwFeedbackEfficiencyClass;// Offset=0x1a6 Size=0x1
    unsigned char HeteroCoreType;// Offset=0x1a7 Size=0x1
};

struct _KTIMER// Size=0x28 (Id=570)
{
    struct _DISPATCHER_HEADER Header;// Offset=0x0 Size=0x10
    union _ULARGE_INTEGER DueTime;// Offset=0x10 Size=0x8
    struct _LIST_ENTRY TimerListEntry;// Offset=0x18 Size=0x8
    struct _KDPC * Dpc;// Offset=0x20 Size=0x4
    unsigned long Period;// Offset=0x24 Size=0x4
};

enum _PROCESSOR_CACHE_TYPE
{
    CacheUnified=0,
    CacheInstruction=1,
    CacheData=2,
    CacheTrace=3
};

struct _CACHE_DESCRIPTOR// Size=0xc (Id=444)
{
    unsigned char Level;// Offset=0x0 Size=0x1
    unsigned char Associativity;// Offset=0x1 Size=0x1
    unsigned short LineSize;// Offset=0x2 Size=0x2
    unsigned long Size;// Offset=0x4 Size=0x4
    enum _PROCESSOR_CACHE_TYPE Type;// Offset=0x8 Size=0x4
};

struct _KAFFINITY_EX// Size=0x58 (Id=58)
{
    unsigned short Count;// Offset=0x0 Size=0x2
    unsigned short Size;// Offset=0x2 Size=0x2
    unsigned long Reserved;// Offset=0x4 Size=0x4
    unsigned long Bitmap[20];// Offset=0x8 Size=0x50
};

struct _SYNCH_COUNTERS// Size=0xb8 (Id=573)
{
    unsigned long SpinLockAcquireCount;// Offset=0x0 Size=0x4
    unsigned long SpinLockContentionCount;// Offset=0x4 Size=0x4
    unsigned long SpinLockSpinCount;// Offset=0x8 Size=0x4
    unsigned long IpiSendRequestBroadcastCount;// Offset=0xc Size=0x4
    unsigned long IpiSendRequestRoutineCount;// Offset=0x10 Size=0x4
    unsigned long IpiSendSoftwareInterruptCount;// Offset=0x14 Size=0x4
    unsigned long ExInitializeResourceCount;// Offset=0x18 Size=0x4
    unsigned long ExReInitializeResourceCount;// Offset=0x1c Size=0x4
    unsigned long ExDeleteResourceCount;// Offset=0x20 Size=0x4
    unsigned long ExecutiveResourceAcquiresCount;// Offset=0x24 Size=0x4
    unsigned long ExecutiveResourceContentionsCount;// Offset=0x28 Size=0x4
    unsigned long ExecutiveResourceReleaseExclusiveCount;// Offset=0x2c Size=0x4
    unsigned long ExecutiveResourceReleaseSharedCount;// Offset=0x30 Size=0x4
    unsigned long ExecutiveResourceConvertsCount;// Offset=0x34 Size=0x4
    unsigned long ExAcqResExclusiveAttempts;// Offset=0x38 Size=0x4
    unsigned long ExAcqResExclusiveAcquiresExclusive;// Offset=0x3c Size=0x4
    unsigned long ExAcqResExclusiveAcquiresExclusiveRecursive;// Offset=0x40 Size=0x4
    unsigned long ExAcqResExclusiveWaits;// Offset=0x44 Size=0x4
    unsigned long ExAcqResExclusiveNotAcquires;// Offset=0x48 Size=0x4
    unsigned long ExAcqResSharedAttempts;// Offset=0x4c Size=0x4
    unsigned long ExAcqResSharedAcquiresExclusive;// Offset=0x50 Size=0x4
    unsigned long ExAcqResSharedAcquiresShared;// Offset=0x54 Size=0x4
    unsigned long ExAcqResSharedAcquiresSharedRecursive;// Offset=0x58 Size=0x4
    unsigned long ExAcqResSharedWaits;// Offset=0x5c Size=0x4
    unsigned long ExAcqResSharedNotAcquires;// Offset=0x60 Size=0x4
    unsigned long ExAcqResSharedStarveExclusiveAttempts;// Offset=0x64 Size=0x4
    unsigned long ExAcqResSharedStarveExclusiveAcquiresExclusive;// Offset=0x68 Size=0x4
    unsigned long ExAcqResSharedStarveExclusiveAcquiresShared;// Offset=0x6c Size=0x4
    unsigned long ExAcqResSharedStarveExclusiveAcquiresSharedRecursive;// Offset=0x70 Size=0x4
    unsigned long ExAcqResSharedStarveExclusiveWaits;// Offset=0x74 Size=0x4
    unsigned long ExAcqResSharedStarveExclusiveNotAcquires;// Offset=0x78 Size=0x4
    unsigned long ExAcqResSharedWaitForExclusiveAttempts;// Offset=0x7c Size=0x4
    unsigned long ExAcqResSharedWaitForExclusiveAcquiresExclusive;// Offset=0x80 Size=0x4
    unsigned long ExAcqResSharedWaitForExclusiveAcquiresShared;// Offset=0x84 Size=0x4
    unsigned long ExAcqResSharedWaitForExclusiveAcquiresSharedRecursive;// Offset=0x88 Size=0x4
    unsigned long ExAcqResSharedWaitForExclusiveWaits;// Offset=0x8c Size=0x4
    unsigned long ExAcqResSharedWaitForExclusiveNotAcquires;// Offset=0x90 Size=0x4
    unsigned long ExSetResOwnerPointerExclusive;// Offset=0x94 Size=0x4
    unsigned long ExSetResOwnerPointerSharedNew;// Offset=0x98 Size=0x4
    unsigned long ExSetResOwnerPointerSharedOld;// Offset=0x9c Size=0x4
    unsigned long ExTryToAcqExclusiveAttempts;// Offset=0xa0 Size=0x4
    unsigned long ExTryToAcqExclusiveAcquires;// Offset=0xa4 Size=0x4
    unsigned long ExBoostExclusiveOwner;// Offset=0xa8 Size=0x4
    unsigned long ExBoostSharedOwners;// Offset=0xac Size=0x4
    unsigned long ExEtwSynchTrackingNotificationsCount;// Offset=0xb0 Size=0x4
    unsigned long ExEtwSynchTrackingNotificationsAccountedCount;// Offset=0xb4 Size=0x4
};

struct _FILESYSTEM_DISK_COUNTERS// Size=0x10 (Id=284)
{
    unsigned long long FsBytesRead;// Offset=0x0 Size=0x8
    unsigned long long FsBytesWritten;// Offset=0x8 Size=0x8
};

struct _KENTROPY_TIMING_STATE// Size=0x128 (Id=575)
{
    unsigned long EntropyCount;// Offset=0x0 Size=0x4
    unsigned long Buffer[64];// Offset=0x4 Size=0x100
    struct _KDPC Dpc;// Offset=0x104 Size=0x20
    unsigned long LastDeliveredBuffer;// Offset=0x124 Size=0x4
};

struct _IOP_IRP_STACK_PROFILER// Size=0x54 (Id=548)
{
    unsigned long Profile[20];// Offset=0x0 Size=0x50
    unsigned long TotalIrps;// Offset=0x50 Size=0x4
};

struct _KTIMER_EXPIRATION_TRACE// Size=0x10 (Id=554)
{
    unsigned long long InterruptTime;// Offset=0x0 Size=0x8
    union _LARGE_INTEGER PerformanceCounter;// Offset=0x8 Size=0x8
};

struct _KSHARED_READY_QUEUE// Size=0x140 (Id=484)
{
    unsigned long Lock;// Offset=0x0 Size=0x4
    unsigned long ReadySummary;// Offset=0x4 Size=0x4
    struct _LIST_ENTRY ReadyListHead[32];// Offset=0x8 Size=0x100
    char RunningSummary[32];// Offset=0x108 Size=0x20
    unsigned char Span;// Offset=0x128 Size=0x1
    unsigned char LowProcIndex;// Offset=0x129 Size=0x1
    unsigned char QueueIndex;// Offset=0x12a Size=0x1
    unsigned char ProcCount;// Offset=0x12b Size=0x1
    unsigned char ScanOwner;// Offset=0x12c Size=0x1
    unsigned char Spare[3];// Offset=0x12d Size=0x3
    unsigned long Affinity;// Offset=0x130 Size=0x4
    unsigned long ReadyThreadCount;// Offset=0x134 Size=0x4
    unsigned long long ReadyQueueExpectedRunTime;// Offset=0x138 Size=0x8
};

struct _KREQUEST_PACKET// Size=0x10 (Id=369)
{
    void * CurrentPacket[3];// Offset=0x0 Size=0xc
    void  ( * WorkerRoutine)(void * ,void * ,void * ,void * );// Offset=0xc Size=0x4
};

struct _REQUEST_MAILBOX// Size=0x20 (Id=352)
{
    struct _REQUEST_MAILBOX * Next;// Offset=0x0 Size=0x4
    unsigned long RequestSummary;// Offset=0x4 Size=0x4
    struct _KREQUEST_PACKET RequestPacket;// Offset=0x8 Size=0x10
    long * NodeTargetCountAddr;// Offset=0x18 Size=0x4
    long NodeTargetCount;// Offset=0x1c Size=0x4
};

struct _KPRCB// Size=0x5f50 (Id=42)
{
    unsigned short MinorVersion;// Offset=0x0 Size=0x2
    unsigned short MajorVersion;// Offset=0x2 Size=0x2
    struct _KTHREAD * CurrentThread;// Offset=0x4 Size=0x4
    struct _KTHREAD * NextThread;// Offset=0x8 Size=0x4
    struct _KTHREAD * IdleThread;// Offset=0xc Size=0x4
    unsigned char LegacyNumber;// Offset=0x10 Size=0x1
    unsigned char NestingLevel;// Offset=0x11 Size=0x1
    unsigned short BuildType;// Offset=0x12 Size=0x2
    char CpuType;// Offset=0x14 Size=0x1
    char CpuID;// Offset=0x15 Size=0x1
    union // Size=0x2 (Id=0)
    {
        unsigned short CpuStep;// Offset=0x16 Size=0x2
        unsigned char CpuStepping;// Offset=0x16 Size=0x1
    };
    unsigned char CpuModel;// Offset=0x17 Size=0x1
    struct _KPROCESSOR_STATE ProcessorState;// Offset=0x18 Size=0x320
    struct _KNODE * ParentNode;// Offset=0x338 Size=0x4
    char * PriorityState;// Offset=0x33c Size=0x4
    unsigned long KernelReserved[14];// Offset=0x340 Size=0x38
    unsigned long HalReserved[16];// Offset=0x378 Size=0x40
    unsigned long CFlushSize;// Offset=0x3b8 Size=0x4
    unsigned char CoresPerPhysicalProcessor;// Offset=0x3bc Size=0x1
    unsigned char LogicalProcessorsPerCore;// Offset=0x3bd Size=0x1
    unsigned char CpuVendor;// Offset=0x3be Size=0x1
    unsigned char PrcbPad0[1];// Offset=0x3bf Size=0x1
    unsigned long MHz;// Offset=0x3c0 Size=0x4
    unsigned char GroupIndex;// Offset=0x3c4 Size=0x1
    unsigned char Group;// Offset=0x3c5 Size=0x1
    unsigned char PrcbPad05[2];// Offset=0x3c6 Size=0x2
    unsigned long GroupSetMember;// Offset=0x3c8 Size=0x4
    unsigned long Number;// Offset=0x3cc Size=0x4
    unsigned char ClockOwner;// Offset=0x3d0 Size=0x1
    union // Size=0x1 (Id=0)
    {
        unsigned char PendingTickFlags;// Offset=0x3d1 Size=0x1
        struct // Size=0x1 (Id=0)
        {
            unsigned char PendingTick:1;// Offset=0x3d1 Size=0x1 BitOffset=0x0 BitSize=0x1
            unsigned char PendingBackupTick:1;// Offset=0x3d1 Size=0x1 BitOffset=0x1 BitSize=0x1
        };
    };
    unsigned char PrcbPad10[70];// Offset=0x3d2 Size=0x46
    struct _KSPIN_LOCK_QUEUE LockQueue[17];// Offset=0x418 Size=0x88
    unsigned long InterruptCount;// Offset=0x4a0 Size=0x4
    unsigned long KernelTime;// Offset=0x4a4 Size=0x4
    unsigned long UserTime;// Offset=0x4a8 Size=0x4
    unsigned long DpcTime;// Offset=0x4ac Size=0x4
    unsigned long DpcTimeCount;// Offset=0x4b0 Size=0x4
    unsigned long InterruptTime;// Offset=0x4b4 Size=0x4
    unsigned long AdjustDpcThreshold;// Offset=0x4b8 Size=0x4
    unsigned long PageColor;// Offset=0x4bc Size=0x4
    unsigned char DebuggerSavedIRQL;// Offset=0x4c0 Size=0x1
    unsigned char NodeColor;// Offset=0x4c1 Size=0x1
    unsigned char DeepSleep;// Offset=0x4c2 Size=0x1
    unsigned char TbFlushListActive;// Offset=0x4c3 Size=0x1
    void * CachedStack;// Offset=0x4c4 Size=0x4
    unsigned long NodeShiftedColor;// Offset=0x4c8 Size=0x4
    unsigned long SecondaryColorMask;// Offset=0x4cc Size=0x4
    unsigned long DpcTimeLimit;// Offset=0x4d0 Size=0x4
    void * MmInternal;// Offset=0x4d4 Size=0x4
    union _KPRCBFLAG PrcbFlags;// Offset=0x4d8 Size=0x4
    void * SchedulerAssist;// Offset=0x4dc Size=0x4
    unsigned long CcFastReadNoWait;// Offset=0x4e0 Size=0x4
    unsigned long CcFastReadWait;// Offset=0x4e4 Size=0x4
    unsigned long CcFastReadNotPossible;// Offset=0x4e8 Size=0x4
    unsigned long CcCopyReadNoWait;// Offset=0x4ec Size=0x4
    unsigned long CcCopyReadWait;// Offset=0x4f0 Size=0x4
    unsigned long CcCopyReadNoWaitMiss;// Offset=0x4f4 Size=0x4
    long MmSpinLockOrdering;// Offset=0x4f8 Size=0x4
    long IoReadOperationCount;// Offset=0x4fc Size=0x4
    long IoWriteOperationCount;// Offset=0x500 Size=0x4
    long IoOtherOperationCount;// Offset=0x504 Size=0x4
    union _LARGE_INTEGER IoReadTransferCount;// Offset=0x508 Size=0x8
    union _LARGE_INTEGER IoWriteTransferCount;// Offset=0x510 Size=0x8
    union _LARGE_INTEGER IoOtherTransferCount;// Offset=0x518 Size=0x8
    unsigned long CcFastMdlReadNoWait;// Offset=0x520 Size=0x4
    unsigned long CcFastMdlReadWait;// Offset=0x524 Size=0x4
    unsigned long CcFastMdlReadNotPossible;// Offset=0x528 Size=0x4
    unsigned long CcMapDataNoWait;// Offset=0x52c Size=0x4
    unsigned long CcMapDataWait;// Offset=0x530 Size=0x4
    unsigned long CcPinMappedDataCount;// Offset=0x534 Size=0x4
    unsigned long CcPinReadNoWait;// Offset=0x538 Size=0x4
    unsigned long CcPinReadWait;// Offset=0x53c Size=0x4
    unsigned long CcMdlReadNoWait;// Offset=0x540 Size=0x4
    unsigned long CcMdlReadWait;// Offset=0x544 Size=0x4
    unsigned long CcLazyWriteHotSpots;// Offset=0x548 Size=0x4
    unsigned long CcLazyWriteIos;// Offset=0x54c Size=0x4
    unsigned long CcLazyWritePages;// Offset=0x550 Size=0x4
    unsigned long CcDataFlushes;// Offset=0x554 Size=0x4
    unsigned long CcDataPages;// Offset=0x558 Size=0x4
    unsigned long CcLostDelayedWrites;// Offset=0x55c Size=0x4
    unsigned long CcFastReadResourceMiss;// Offset=0x560 Size=0x4
    unsigned long CcCopyReadWaitMiss;// Offset=0x564 Size=0x4
    unsigned long CcFastMdlReadResourceMiss;// Offset=0x568 Size=0x4
    unsigned long CcMapDataNoWaitMiss;// Offset=0x56c Size=0x4
    unsigned long CcMapDataWaitMiss;// Offset=0x570 Size=0x4
    unsigned long CcPinReadNoWaitMiss;// Offset=0x574 Size=0x4
    unsigned long CcPinReadWaitMiss;// Offset=0x578 Size=0x4
    unsigned long CcMdlReadNoWaitMiss;// Offset=0x57c Size=0x4
    unsigned long CcMdlReadWaitMiss;// Offset=0x580 Size=0x4
    unsigned long CcReadAheadIos;// Offset=0x584 Size=0x4
    unsigned long KeAlignmentFixupCount;// Offset=0x588 Size=0x4
    unsigned long KeExceptionDispatchCount;// Offset=0x58c Size=0x4
    unsigned long KeSystemCalls;// Offset=0x590 Size=0x4
    unsigned long AvailableTime;// Offset=0x594 Size=0x4
    unsigned long PrcbPad22[2];// Offset=0x598 Size=0x8
    struct _PP_LOOKASIDE_LIST PPLookasideList[16];// Offset=0x5a0 Size=0x80
    struct _GENERAL_LOOKASIDE_POOL PPNxPagedLookasideList[32];// Offset=0x620 Size=0x900
    struct _GENERAL_LOOKASIDE_POOL PPNPagedLookasideList[32];// Offset=0xf20 Size=0x900
    struct _GENERAL_LOOKASIDE_POOL PPPagedLookasideList[32];// Offset=0x1820 Size=0x900
    long PacketBarrier;// Offset=0x2120 Size=0x4
    long ReverseStall;// Offset=0x2124 Size=0x4
    void * IpiFrame;// Offset=0x2128 Size=0x4
    unsigned char PrcbPad3[52];// Offset=0x212c Size=0x34
    void * CurrentPacket[3];// Offset=0x2160 Size=0xc
    unsigned long TargetSet;// Offset=0x216c Size=0x4
    void  ( * WorkerRoutine)(void * ,void * ,void * ,void * );// Offset=0x2170 Size=0x4
    unsigned long IpiFrozen;// Offset=0x2174 Size=0x4
    unsigned char PrcbPad4[40];// Offset=0x2178 Size=0x28
    unsigned long RequestSummary;// Offset=0x21a0 Size=0x4
    long TargetCount;// Offset=0x21a4 Size=0x4
    unsigned long long PrcbPad94[1];// Offset=0x21a8 Size=0x8
    unsigned long long TrappedSecurityDomain;// Offset=0x21b0 Size=0x8
    union // Size=0x1 (Id=0)
    {
        unsigned char BpbState;// Offset=0x21b8 Size=0x1
        struct // Size=0x1 (Id=0)
        {
            unsigned char BpbCpuIdle:1;// Offset=0x21b8 Size=0x1 BitOffset=0x0 BitSize=0x1
            unsigned char BpbFlushRsbOnTrap:1;// Offset=0x21b8 Size=0x1 BitOffset=0x1 BitSize=0x1
            unsigned char BpbIbpbOnReturn:1;// Offset=0x21b8 Size=0x1 BitOffset=0x2 BitSize=0x1
            unsigned char BpbIbpbOnTrap:1;// Offset=0x21b8 Size=0x1 BitOffset=0x3 BitSize=0x1
            unsigned char BpbReserved:4;// Offset=0x21b8 Size=0x1 BitOffset=0x4 BitSize=0x4
        };
    };
    union // Size=0x1 (Id=0)
    {
        unsigned char BpbFeatures;// Offset=0x21b9 Size=0x1
        struct // Size=0x1 (Id=0)
        {
            unsigned char BpbClearOnIdle:1;// Offset=0x21b9 Size=0x1 BitOffset=0x0 BitSize=0x1
            unsigned char BpbEnabled:1;// Offset=0x21b9 Size=0x1 BitOffset=0x1 BitSize=0x1
            unsigned char BpbSmep:1;// Offset=0x21b9 Size=0x1 BitOffset=0x2 BitSize=0x1
            unsigned char BpbFeaturesReserved:5;// Offset=0x21b9 Size=0x1 BitOffset=0x3 BitSize=0x5
        };
    };
    unsigned char BpbCurrentSpecCtrl;// Offset=0x21ba Size=0x1
    unsigned char BpbKernelSpecCtrl;// Offset=0x21bb Size=0x1
    unsigned char BpbNmiSpecCtrl;// Offset=0x21bc Size=0x1
    unsigned char BpbUserSpecCtrl;// Offset=0x21bd Size=0x1
    unsigned char PrcbPad49[2];// Offset=0x21be Size=0x2
    unsigned long ProcessorSignature;// Offset=0x21c0 Size=0x4
    unsigned long ProcessorFlags;// Offset=0x21c4 Size=0x4
    unsigned char PrcbPad50[8];// Offset=0x21c8 Size=0x8
    unsigned long InterruptLastCount;// Offset=0x21d0 Size=0x4
    unsigned long InterruptRate;// Offset=0x21d4 Size=0x4
    unsigned long DeviceInterrupts;// Offset=0x21d8 Size=0x4
    void * IsrDpcStats;// Offset=0x21dc Size=0x4
    struct _KDPC_DATA DpcData[2];// Offset=0x21e0 Size=0x30
    void * DpcStack;// Offset=0x2210 Size=0x4
    long MaximumDpcQueueDepth;// Offset=0x2214 Size=0x4
    unsigned long DpcRequestRate;// Offset=0x2218 Size=0x4
    unsigned long MinimumDpcRate;// Offset=0x221c Size=0x4
    unsigned long DpcLastCount;// Offset=0x2220 Size=0x4
    unsigned long PrcbLock;// Offset=0x2224 Size=0x4
    struct _KGATE DpcGate;// Offset=0x2228 Size=0x10
    unsigned char IdleState;// Offset=0x2238 Size=0x1
    unsigned char QuantumEnd;// Offset=0x2239 Size=0x1
    unsigned char DpcRoutineActive;// Offset=0x223a Size=0x1
    unsigned char IdleSchedule;// Offset=0x223b Size=0x1
    union // Size=0x2240 (Id=0)
    {
        long DpcRequestSummary;// Offset=0x223c Size=0x4
        short DpcRequestSlot[2];// Offset=0x223c Size=0x4
        short NormalDpcState;// Offset=0x223c Size=0x2
        short ThreadDpcState;// Offset=0x223e Size=0x2
        struct // Size=0x4 (Id=0)
        {
            unsigned long DpcNormalProcessingActive:1;// Offset=0x223c Size=0x4 BitOffset=0x0 BitSize=0x1
            unsigned long DpcNormalProcessingRequested:1;// Offset=0x223c Size=0x4 BitOffset=0x1 BitSize=0x1
            unsigned long DpcNormalThreadSignal:1;// Offset=0x223c Size=0x4 BitOffset=0x2 BitSize=0x1
            unsigned long DpcNormalTimerExpiration:1;// Offset=0x223c Size=0x4 BitOffset=0x3 BitSize=0x1
            unsigned long DpcNormalDpcPresent:1;// Offset=0x223c Size=0x4 BitOffset=0x4 BitSize=0x1
            unsigned long DpcNormalLocalInterrupt:1;// Offset=0x223c Size=0x4 BitOffset=0x5 BitSize=0x1
            unsigned long DpcNormalSpare:10;// Offset=0x223c Size=0x4 BitOffset=0x6 BitSize=0xa
            unsigned long DpcThreadActive:1;// Offset=0x223c Size=0x4 BitOffset=0x10 BitSize=0x1
            unsigned long DpcThreadRequested:1;// Offset=0x223c Size=0x4 BitOffset=0x11 BitSize=0x1
            unsigned long DpcThreadSpare:14;// Offset=0x223c Size=0x4 BitOffset=0x12 BitSize=0xe
        };
    };
    unsigned long LastTick;// Offset=0x2240 Size=0x4
    unsigned long PeriodicCount;// Offset=0x2244 Size=0x4
    unsigned long PeriodicBias;// Offset=0x2248 Size=0x4
    unsigned long ClockInterrupts;// Offset=0x224c Size=0x4
    unsigned long ReadyScanTick;// Offset=0x2250 Size=0x4
    unsigned char GroupSchedulingOverQuota;// Offset=0x2254 Size=0x1
    unsigned char ThreadDpcEnable;// Offset=0x2255 Size=0x1
    unsigned char PrcbPad41[6];// Offset=0x2256 Size=0x6
    struct _KTIMER_TABLE TimerTable;// Offset=0x2260 Size=0x1850
    unsigned long PrcbPad92[12];// Offset=0x3ab0 Size=0x30
    struct _KDPC CallDpc;// Offset=0x3ae0 Size=0x20
    long ClockKeepAlive;// Offset=0x3b00 Size=0x4
    unsigned char PrcbPad6[4];// Offset=0x3b04 Size=0x4
    long DpcWatchdogPeriod;// Offset=0x3b08 Size=0x4
    long DpcWatchdogCount;// Offset=0x3b0c Size=0x4
    long KeSpinLockOrdering;// Offset=0x3b10 Size=0x4
    unsigned long DpcWatchdogProfileCumulativeDpcThreshold;// Offset=0x3b14 Size=0x4
    unsigned long QueueIndex;// Offset=0x3b18 Size=0x4
    struct _SINGLE_LIST_ENTRY DeferredReadyListHead;// Offset=0x3b1c Size=0x4
    unsigned long ReadySummary;// Offset=0x3b20 Size=0x4
    long AffinitizedSelectionMask;// Offset=0x3b24 Size=0x4
    unsigned long WaitLock;// Offset=0x3b28 Size=0x4
    struct _LIST_ENTRY WaitListHead;// Offset=0x3b2c Size=0x8
    unsigned long ScbOffset;// Offset=0x3b34 Size=0x4
    unsigned long ReadyThreadCount;// Offset=0x3b38 Size=0x4
    unsigned long long StartCycles;// Offset=0x3b40 Size=0x8
    unsigned long long TaggedCyclesStart;// Offset=0x3b48 Size=0x8
    unsigned long long TaggedCycles[3];// Offset=0x3b50 Size=0x18
    unsigned long long CycleTime;// Offset=0x3b68 Size=0x8
    unsigned long long AffinitizedCycles;// Offset=0x3b70 Size=0x8
    unsigned long long ImportantCycles;// Offset=0x3b78 Size=0x8
    unsigned long long UnimportantCycles;// Offset=0x3b80 Size=0x8
    unsigned long long ReadyQueueExpectedRunTime;// Offset=0x3b88 Size=0x8
    unsigned long HighCycleTime;// Offset=0x3b90 Size=0x4
    unsigned long long Cycles[4][2];// Offset=0x3b98 Size=0x40
    unsigned long PrcbPad71;// Offset=0x3bd8 Size=0x4
    unsigned long DpcWatchdogSequenceNumber;// Offset=0x3bdc Size=0x4
    struct _LIST_ENTRY DispatcherReadyListHead[32];// Offset=0x3be0 Size=0x100
    void * ChainedInterruptList;// Offset=0x3ce0 Size=0x4
    long LookasideIrpFloat;// Offset=0x3ce4 Size=0x4
    struct _RTL_RB_TREE ScbQueue;// Offset=0x3ce8 Size=0x8
    struct _LIST_ENTRY ScbList;// Offset=0x3cf0 Size=0x8
    long MmPageFaultCount;// Offset=0x3cf8 Size=0x4
    long MmCopyOnWriteCount;// Offset=0x3cfc Size=0x4
    long MmTransitionCount;// Offset=0x3d00 Size=0x4
    long MmCacheTransitionCount;// Offset=0x3d04 Size=0x4
    long MmDemandZeroCount;// Offset=0x3d08 Size=0x4
    long MmPageReadCount;// Offset=0x3d0c Size=0x4
    long MmPageReadIoCount;// Offset=0x3d10 Size=0x4
    long MmCacheReadCount;// Offset=0x3d14 Size=0x4
    long MmCacheIoCount;// Offset=0x3d18 Size=0x4
    long MmDirtyPagesWriteCount;// Offset=0x3d1c Size=0x4
    long MmDirtyWriteIoCount;// Offset=0x3d20 Size=0x4
    long MmMappedPagesWriteCount;// Offset=0x3d24 Size=0x4
    long MmMappedWriteIoCount;// Offset=0x3d28 Size=0x4
    unsigned long CachedCommit;// Offset=0x3d2c Size=0x4
    unsigned long CachedResidentAvailable;// Offset=0x3d30 Size=0x4
    void * HyperPte;// Offset=0x3d34 Size=0x4
    unsigned char PrcbPad8[4];// Offset=0x3d38 Size=0x4
    unsigned char VendorString[13];// Offset=0x3d3c Size=0xd
    unsigned char InitialApicId;// Offset=0x3d49 Size=0x1
    unsigned char LogicalProcessorsPerPhysicalProcessor;// Offset=0x3d4a Size=0x1
    unsigned char PrcbPad9[1];// Offset=0x3d4b Size=0x1
    unsigned long long FeatureBits;// Offset=0x3d50 Size=0x8
    union _LARGE_INTEGER UpdateSignature;// Offset=0x3d58 Size=0x8
    unsigned long long IsrTime;// Offset=0x3d60 Size=0x8
    unsigned long long GenerationTarget;// Offset=0x3d68 Size=0x8
    struct _PROCESSOR_POWER_STATE PowerState;// Offset=0x3d70 Size=0x1a8
    struct _KDPC ForceIdleDpc;// Offset=0x3f18 Size=0x20
    unsigned long PrcbPad91[8];// Offset=0x3f38 Size=0x20
    struct _RTL_HASH_TABLE * DpcRuntimeHistoryHashTable;// Offset=0x3f58 Size=0x4
    struct _KDPC * DpcRuntimeHistoryHashTableCleanupDpc;// Offset=0x3f5c Size=0x4
    unsigned long long CurrentDpcRuntimeHistoryCached;// Offset=0x3f60 Size=0x8
    unsigned long long CurrentDpcStartTime;// Offset=0x3f68 Size=0x8
    void  ( * CurrentDpcRoutine)(struct _KDPC * ,void * ,void * ,void * );// Offset=0x3f70 Size=0x4
    unsigned long DpcWatchdogProfileSingleDpcThreshold;// Offset=0x3f74 Size=0x4
    struct _KDPC DpcWatchdogDpc;// Offset=0x3f78 Size=0x20
    struct _KTIMER DpcWatchdogTimer;// Offset=0x3f98 Size=0x28
    union _SLIST_HEADER HypercallPageList;// Offset=0x3fc0 Size=0x8
    void * HypercallCachedPages;// Offset=0x3fc8 Size=0x4
    void * VirtualApicAssist;// Offset=0x3fcc Size=0x4
    unsigned long long * StatisticsPage;// Offset=0x3fd0 Size=0x4
    struct _CACHE_DESCRIPTOR Cache[5];// Offset=0x3fd4 Size=0x3c
    unsigned long CacheCount;// Offset=0x4010 Size=0x4
    struct _KAFFINITY_EX PackageProcessorSet;// Offset=0x4014 Size=0x58
    unsigned long SharedReadyQueueMask;// Offset=0x406c Size=0x4
    struct _KSHARED_READY_QUEUE * SharedReadyQueue;// Offset=0x4070 Size=0x4
    unsigned long SharedQueueScanOwner;// Offset=0x4074 Size=0x4
    unsigned long CoreProcessorSet;// Offset=0x4078 Size=0x4
    unsigned long ScanSiblingMask;// Offset=0x407c Size=0x4
    unsigned long LLCMask;// Offset=0x4080 Size=0x4
    unsigned long CacheProcessorMask[5];// Offset=0x4084 Size=0x14
    unsigned long ScanSiblingIndex;// Offset=0x4098 Size=0x4
    void * WheaInfo;// Offset=0x409c Size=0x4
    void * EtwSupport;// Offset=0x40a0 Size=0x4
    union _SLIST_HEADER InterruptObjectPool;// Offset=0x40a8 Size=0x8
    void ** DpcWatchdogProfile;// Offset=0x40b0 Size=0x4
    void ** DpcWatchdogProfileCurrentEmptyCapture;// Offset=0x40b4 Size=0x4
    unsigned long PackageId;// Offset=0x40b8 Size=0x4
    unsigned long PteBitCache;// Offset=0x40bc Size=0x4
    unsigned long PteBitOffset;// Offset=0x40c0 Size=0x4
    unsigned long PrcbPad93;// Offset=0x40c4 Size=0x4
    struct _PROCESSOR_PROFILE_CONTROL_AREA * ProcessorProfileControlArea;// Offset=0x40c8 Size=0x4
    void * ProfileEventIndexAddress;// Offset=0x40cc Size=0x4
    struct _KDPC TimerExpirationDpc;// Offset=0x40d0 Size=0x20
    struct _SYNCH_COUNTERS SynchCounters;// Offset=0x40f0 Size=0xb8
    struct _FILESYSTEM_DISK_COUNTERS FsCounters;// Offset=0x41a8 Size=0x10
    struct _CONTEXT * Context;// Offset=0x41b8 Size=0x4
    unsigned long ContextFlagsInit;// Offset=0x41bc Size=0x4
    struct _XSAVE_AREA * ExtendedState;// Offset=0x41c0 Size=0x4
    struct _KENTROPY_TIMING_STATE EntropyTimingState;// Offset=0x41c4 Size=0x128
    void * IsrStack;// Offset=0x42ec Size=0x4
    struct _KINTERRUPT * VectorToInterruptObject[208];// Offset=0x42f0 Size=0x340
    struct _SINGLE_LIST_ENTRY AbSelfIoBoostsList;// Offset=0x4630 Size=0x4
    struct _SINGLE_LIST_ENTRY AbPropagateBoostsList;// Offset=0x4634 Size=0x4
    struct _KDPC AbDpc;// Offset=0x4638 Size=0x20
    struct _IOP_IRP_STACK_PROFILER IoIrpStackProfilerCurrent;// Offset=0x4658 Size=0x54
    struct _IOP_IRP_STACK_PROFILER IoIrpStackProfilerPrevious;// Offset=0x46ac Size=0x54
    struct _KTIMER_EXPIRATION_TRACE TimerExpirationTrace[16];// Offset=0x4700 Size=0x100
    unsigned long TimerExpirationTraceCount;// Offset=0x4800 Size=0x4
    void * ExSaPageArray;// Offset=0x4804 Size=0x4
    struct _XSAVE_AREA_HEADER * ExtendedSupervisorState;// Offset=0x4808 Size=0x4
    unsigned long PrcbPad100[9];// Offset=0x480c Size=0x24
    struct _KSHARED_READY_QUEUE LocalSharedReadyQueue;// Offset=0x4830 Size=0x140
    struct _REQUEST_MAILBOX * Mailbox;// Offset=0x4970 Size=0x4
    unsigned char PrcbPad[1468];// Offset=0x4974 Size=0x5bc
    unsigned long KernelDirectoryTableBase;// Offset=0x4f30 Size=0x4
    unsigned long EspBaseShadow;// Offset=0x4f34 Size=0x4
    unsigned long UserEspShadow;// Offset=0x4f38 Size=0x4
    unsigned long ShadowFlags;// Offset=0x4f3c Size=0x4
    unsigned long UserDS;// Offset=0x4f40 Size=0x4
    unsigned long UserES;// Offset=0x4f44 Size=0x4
    unsigned long UserFS;// Offset=0x4f48 Size=0x4
    void * EspIretd;// Offset=0x4f4c Size=0x4
    unsigned long RestoreSegOption;// Offset=0x4f50 Size=0x4
    unsigned long SavedEsi;// Offset=0x4f54 Size=0x4
    unsigned long PrcbShadowPad;// Offset=0x4f58 Size=0x4
    unsigned long TaskSwitchCount;// Offset=0x4f5c Size=0x4
    unsigned long DbgLogs[512];// Offset=0x4f60 Size=0x800
    unsigned long DbgCount;// Offset=0x5760 Size=0x4
    unsigned long PrcbPadRemainingPage[499];// Offset=0x5764 Size=0x7cc
    struct _REQUEST_MAILBOX RequestMailbox[1];// Offset=0x5f30 Size=0x20
};

struct _KPCR// Size=0x6070 (Id=41)
{
    union // Size=0x1c (Id=0)
    {
        struct _NT_TIB NtTib;// Offset=0x0 Size=0x1c
        struct _EXCEPTION_REGISTRATION_RECORD * Used_ExceptionList;// Offset=0x0 Size=0x4
        void * Used_StackBase;// Offset=0x4 Size=0x4
        unsigned long MxCsr;// Offset=0x8 Size=0x4
        void * TssCopy;// Offset=0xc Size=0x4
        unsigned long ContextSwitches;// Offset=0x10 Size=0x4
        unsigned long SetMemberCopy;// Offset=0x14 Size=0x4
        void * Used_Self;// Offset=0x18 Size=0x4
    };
    struct _KPCR * SelfPcr;// Offset=0x1c Size=0x4
    struct _KPRCB * Prcb;// Offset=0x20 Size=0x4
    unsigned char Irql;// Offset=0x24 Size=0x1
    unsigned long IRR;// Offset=0x28 Size=0x4
    unsigned long IrrActive;// Offset=0x2c Size=0x4
    unsigned long IDR;// Offset=0x30 Size=0x4
    void * KdVersionBlock;// Offset=0x34 Size=0x4
    struct _KIDTENTRY * IDT;// Offset=0x38 Size=0x4
    struct _KGDTENTRY * GDT;// Offset=0x3c Size=0x4
    struct _KTSS * TSS;// Offset=0x40 Size=0x4
    unsigned short MajorVersion;// Offset=0x44 Size=0x2
    unsigned short MinorVersion;// Offset=0x46 Size=0x2
    unsigned long SetMember;// Offset=0x48 Size=0x4
    unsigned long StallScaleFactor;// Offset=0x4c Size=0x4
    unsigned char SpareUnused;// Offset=0x50 Size=0x1
    unsigned char Number;// Offset=0x51 Size=0x1
    unsigned char Spare0;// Offset=0x52 Size=0x1
    unsigned char SecondLevelCacheAssociativity;// Offset=0x53 Size=0x1
    unsigned long VdmAlert;// Offset=0x54 Size=0x4
    unsigned long KernelReserved[14];// Offset=0x58 Size=0x38
    unsigned long SecondLevelCacheSize;// Offset=0x90 Size=0x4
    unsigned long HalReserved[16];// Offset=0x94 Size=0x40
    unsigned long InterruptMode;// Offset=0xd4 Size=0x4
    unsigned char Spare1;// Offset=0xd8 Size=0x1
    unsigned long KernelReserved2[17];// Offset=0xdc Size=0x44
    struct _KPRCB PrcbData;// Offset=0x120 Size=0x5f50
};
