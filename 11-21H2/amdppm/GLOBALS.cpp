struct _LIST_ENTRY// Size=0x10 (Id=37)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _KAFFINITY_EX// Size=0x108 (Id=64)
{
    unsigned short Count;// Offset=0x0 Size=0x2
    unsigned short Size;// Offset=0x2 Size=0x2
    unsigned long Reserved;// Offset=0x4 Size=0x4
    union // Size=0x8 (Id=0)
    {
        unsigned long long Bitmap[1];// Offset=0x8 Size=0x8
        unsigned long long StaticBitmap[32];// Offset=0x8 Size=0x100
    };
};

struct _PPM_DRIVER_DISPATCH_TABLE// Size=0x110 (Id=528)
{
    unsigned long InterfaceVersion;// Offset=0x0 Size=0x4
    long  ( * RegisterPerfStates)(struct _PROCESSOR_PERF_STATES * );// Offset=0x8 Size=0x8
    void  ( * UpdatePerfStates)(struct _PROCESSOR_PERF_STATES_UPDATE * );// Offset=0x10 Size=0x8
    long  ( * RegisterPerfCap)(struct _PROCESSOR_CAP * );// Offset=0x18 Size=0x8
    long  ( * RegisterSpmSettings)(void * );// Offset=0x20 Size=0x8
    long  ( * RegisterIdleStates)(struct _PROCESSOR_IDLE_STATES_EX * );// Offset=0x28 Size=0x8
    long  ( * RegisterIdleDomains)(struct _PROCESSOR_IDLE_DOMAINS * );// Offset=0x30 Size=0x8
    long  ( * RegisterPlatformStates)(struct _PLATFORM_IDLE_STATES * );// Offset=0x38 Size=0x8
    long  ( * RegisterCoordinatedStates)(struct _COORDINATED_IDLE_STATES * );// Offset=0x40 Size=0x8
    long  ( * RegisterVetoList)(struct _PREREGISTERED_VETO_LIST * );// Offset=0x48 Size=0x8
    long  ( * RemoveVetoBias)();// Offset=0x50 Size=0x8
    long  ( * UpdateProcessorIdleVeto)(struct _PROCESSOR_IDLE_VETO * );// Offset=0x58 Size=0x8
    long  ( * UpdatePlatformIdleVeto)(struct _PLATFORM_IDLE_VETO * );// Offset=0x60 Size=0x8
    long  ( * RegisterIdleStatesHv)(struct _PROCESSOR_IDLE_STATES_HV * );// Offset=0x68 Size=0x8
    long  ( * RegisterPerfStatesCountersHv)(struct _PROCESSOR_PERF_STATES_COUNTERS_HV * );// Offset=0x70 Size=0x8
    long  ( * SetProcessorPep)(unsigned long ,void * );// Offset=0x78 Size=0x8
    long  ( * ParkPreferenceNotification)(void * ,struct _PEP_PPM_PARK_SELECTION_V2 * );// Offset=0x80 Size=0x8
    long  ( * ParkMaskNotification)(void * ,struct _PEP_PPM_PARK_MASK * );// Offset=0x88 Size=0x8
    long  ( * IdleSelectNotification)(void * ,struct _PEP_PPM_IDLE_SELECT * );// Offset=0x90 Size=0x8
    long  ( * QueryPlatformStateNotification)(void * ,struct _PEP_PPM_QUERY_PLATFORM_STATE * ,unsigned char );// Offset=0x98 Size=0x8
    long  ( * QueryCoordinatedDependencyNotification)(void * ,struct _PEP_PPM_QUERY_COORDINATED_DEPENDENCY * );// Offset=0xa0 Size=0x8
    long  ( * NotifyLpiCoordinatedStatesNotification)(void * ,struct _PEP_PPM_LPI_COORDINATED_STATES * );// Offset=0xa8 Size=0x8
    void  ( * RegisterEnergyEstimation)(void  ( * )(unsigned long ,unsigned long long ,unsigned long long ,unsigned long ,unsigned long long * ),void  ( * )(unsigned long ,unsigned char ,unsigned char ));// Offset=0xb0 Size=0x8
    long  ( * RequestProcessorHalt)(unsigned long ,void * ,long  ( * )(void * ));// Offset=0xb8 Size=0x8
    unsigned char  ( * GetHgsEnablementStatus)();// Offset=0xc0 Size=0x8
    void  ( * DispatchHgsInterrupt)();// Offset=0xc8 Size=0x8
    long  ( * ReadHiddenProcessorMsr)(unsigned long ,unsigned long ,unsigned long long * );// Offset=0xd0 Size=0x8
    long  ( * WriteHiddenProcessorMsr)(unsigned long ,unsigned long ,unsigned long long ,unsigned long long );// Offset=0xd8 Size=0x8
    long  ( * ReadHiddenProcessorIoPort)(unsigned long ,unsigned short ,unsigned short ,unsigned long * );// Offset=0xe0 Size=0x8
    long  ( * WriteHiddenProcessorIoPort)(unsigned long ,unsigned short ,unsigned short ,unsigned long ,unsigned long );// Offset=0xe8 Size=0x8
    unsigned long  ( * QueryPackageId)(unsigned long );// Offset=0xf0 Size=0x8
    unsigned long  ( * QueryPackageProcessorCount)(unsigned long );// Offset=0xf8 Size=0x8
    unsigned char  ( * QueryHvHwpPerfSupport)();// Offset=0x100 Size=0x8
    void  ( * SetHvLpHwpRequest)(unsigned long ,unsigned long long );// Offset=0x108 Size=0x8
};

union _unnamed_630// Size=0x4 (Id=630)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long PlatformInterrupt:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long Reserved:31;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1f
    };
    unsigned long AsULong;// Offset=0x0 Size=0x4
};

struct _PCC_INTERFACE_STANDARD// Size=0x80 (Id=631)
{
    unsigned short Size;// Offset=0x0 Size=0x2
    unsigned short Version;// Offset=0x2 Size=0x2
    void * Context;// Offset=0x8 Size=0x8
    void  ( * InterfaceReference)(void * );// Offset=0x10 Size=0x8
    void  ( * InterfaceDereference)(void * );// Offset=0x18 Size=0x8
    unsigned long SubspaceId;// Offset=0x20 Size=0x4
    long  ( * PlatformNotify)(void * );// Offset=0x28 Size=0x8
    void * NotifyContext;// Offset=0x30 Size=0x8
    void * Handle;// Offset=0x38 Size=0x8
    unsigned long NominalLatency;// Offset=0x40 Size=0x4
    unsigned long MaximumPeriodicRate;// Offset=0x44 Size=0x4
    void * Subspace;// Offset=0x48 Size=0x8
    unsigned long SubspaceSize;// Offset=0x50 Size=0x4
    union _unnamed_630 Flags;// Offset=0x54 Size=0x4
    long  ( * AcquireSubspace)(void * );// Offset=0x58 Size=0x8
    long  ( * AcquireSubspaceAsync)(void * ,void  ( * )(long ,unsigned long long ),unsigned long long );// Offset=0x60 Size=0x8
    long  ( * ExecuteCommand)(void * ,unsigned char );// Offset=0x68 Size=0x8
    long  ( * ExecuteCommandAsync)(void * ,unsigned char ,void  ( * )(long ,unsigned long long ),unsigned long long );// Offset=0x70 Size=0x8
    long  ( * ReleaseSubspace)(void * );// Offset=0x78 Size=0x8
};

struct _DISPATCHER_HEADER// Size=0x18 (Id=496)
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

struct _KEVENT// Size=0x18 (Id=73)
{
    struct _DISPATCHER_HEADER Header;// Offset=0x0 Size=0x18
};

struct _CPC_COMMAND_COMPLETION// Size=0x18 (Id=571)
{
    long PendingCompletions;// Offset=0x0 Size=0x4
    void  ( * CompletionCallback)();// Offset=0x8 Size=0x8
    unsigned char FinalizePccTransaction;// Offset=0x10 Size=0x1
};

union _PROC_POWER_COORDINATES// Size=0x4 (Id=462)
{
    unsigned long PowerCoordinates;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long FrequencyPercent:8;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x8
        unsigned long PowerEnvelope:24;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x18
    };
};

enum _KPROFILE_SOURCE
{
    ProfileTime=0,
    ProfileAlignmentFixup=1,
    ProfileTotalIssues=2,
    ProfilePipelineDry=3,
    ProfileLoadInstructions=4,
    ProfilePipelineFrozen=5,
    ProfileBranchInstructions=6,
    ProfileTotalNonissues=7,
    ProfileDcacheMisses=8,
    ProfileIcacheMisses=9,
    ProfileCacheMisses=10,
    ProfileBranchMispredictions=11,
    ProfileStoreInstructions=12,
    ProfileFpInstructions=13,
    ProfileIntegerInstructions=14,
    Profile2Issue=15,
    Profile3Issue=16,
    Profile4Issue=17,
    ProfileSpecialInstructions=18,
    ProfileTotalCycles=19,
    ProfileIcacheIssues=20,
    ProfileDcacheAccesses=21,
    ProfileMemoryBarrierCycles=22,
    ProfileLoadLinkedIssues=23,
    ProfileMaximum=24
};

struct _PROC_ENERGY_COUNTER// Size=0xc (Id=511)
{
    union // Size=0x4 (Id=0)
    {
        unsigned long CounterId;// Offset=0x0 Size=0x4
        enum _KPROFILE_SOURCE ProfileSource;// Offset=0x0 Size=0x4
    };
    union // Size=0x4 (Id=0)
    {
        unsigned long CounterType;// Offset=0x4 Size=0x4
        struct // Size=0x4 (Id=0)
        {
            unsigned long MachineSpecificCounter:1;// Offset=0x4 Size=0x4 BitOffset=0x0 BitSize=0x1
            unsigned long Reserved:15;// Offset=0x4 Size=0x4 BitOffset=0x1 BitSize=0xf
            unsigned long CounterDescriptor:16;// Offset=0x4 Size=0x4 BitOffset=0x10 BitSize=0x10
        };
    };
    union // Size=0x4 (Id=0)
    {
        unsigned long FactorDWord;// Offset=0x8 Size=0x4
        float FactorFloat;// Offset=0x8 Size=0x4
    };
};

struct _PROC_ENERGY_MODEL// Size=0x100 (Id=452)
{
    unsigned long PowerEnvelope;// Offset=0x0 Size=0x4
    union // Size=0x4 (Id=0)
    {
        unsigned long PowerCurveMetadata;// Offset=0x4 Size=0x4
        struct // Size=0x4 (Id=0)
        {
            unsigned long UsePowerCurve:1;// Offset=0x4 Size=0x4 BitOffset=0x0 BitSize=0x1
            unsigned long PointCount:7;// Offset=0x4 Size=0x4 BitOffset=0x1 BitSize=0x7
            unsigned long Reserved:24;// Offset=0x4 Size=0x4 BitOffset=0x8 BitSize=0x18
        };
    };
    union _PROC_POWER_COORDINATES PowerCurve[8];// Offset=0x8 Size=0x20
    unsigned long NumberOfCounters;// Offset=0x28 Size=0x4
    struct _PROC_ENERGY_COUNTER EnergyCounters[16];// Offset=0x2c Size=0xc0
    void  ( * ComputeEnergy)(unsigned long ,unsigned long long ,unsigned long long ,unsigned long ,unsigned long long * );// Offset=0xf0 Size=0x8
    void  ( * SnapEnergyCounters)(unsigned long ,unsigned char ,unsigned char );// Offset=0xf8 Size=0x8
};

enum _PROCESSOR_PRESENCE
{
    ProcessorPresenceNt=0,
    ProcessorPresenceHv=1,
    ProcessorPresenceHidden=2
};

struct _PROC_HW_DEBUG_REGISTER_DEFINITION_LIST// Size=0x10 (Id=513)
{
    unsigned char Count;// Offset=0x0 Size=0x1
    struct _PROC_HW_DEBUG_REGISTER_DEFINITION * Registers;// Offset=0x8 Size=0x8
};

struct GLOBALS// Size=0x910 (Id=423)
{
    unsigned long long PPMCapabilities;// Offset=0x0 Size=0x8
    unsigned long long PPMRegFlags;// Offset=0x8 Size=0x8
    unsigned long PPMOverrideFlags;// Offset=0x10 Size=0x4
    unsigned long ProcessorCount;// Offset=0x14 Size=0x4
    struct WDFWAITLOCK__ * Mutex;// Offset=0x18 Size=0x8
    struct WDFWAITLOCK__ * DeviceStartMutex;// Offset=0x20 Size=0x8
    struct WDFWAITLOCK__ * PepStateMutex;// Offset=0x28 Size=0x8
    struct WDFWAITLOCK__ * HwDebugMutex;// Offset=0x30 Size=0x8
    struct _LIST_ENTRY HwDebugRegisterGroups[2];// Offset=0x38 Size=0x20
    struct _LIST_ENTRY DeviceHead;// Offset=0x58 Size=0x10
    struct _LIST_ENTRY PerfDomainHead;// Offset=0x68 Size=0x10
    struct _LIST_ENTRY PackageHead;// Offset=0x78 Size=0x10
    struct _LIST_ENTRY IdleDomainHead;// Offset=0x88 Size=0x10
    struct _LIST_ENTRY PccHead;// Offset=0x98 Size=0x10
    struct _KAFFINITY_EX ProcessorsAvailable;// Offset=0xa8 Size=0x108
    struct PPM_DRIVER_INTERFACE DrvInterface;// Offset=0x1b0 Size=0x140
    struct _PPM_DRIVER_DISPATCH_TABLE PpmDispatchTable;// Offset=0x2f0 Size=0x110
    struct _KAFFINITY_EX ProcessorsEnumerated;// Offset=0x400 Size=0x108
    long  ( * RegisterIdleStates)(struct _FDO_DATA * );// Offset=0x508 Size=0x8
    long  ( * RegisterPStates)(struct _FDO_DATA * );// Offset=0x510 Size=0x8
    long  ( * RegisterPerfCap)(struct _FDO_DATA * );// Offset=0x518 Size=0x8
    long  ( * RegisterPerfFeedback)(struct _FDO_DATA * );// Offset=0x520 Size=0x8
    long  ( * RegisterLegacyPcc)(struct _FDO_DATA * );// Offset=0x528 Size=0x8
    long  ( * RegisterCpc)(struct _FDO_DATA * );// Offset=0x530 Size=0x8
    long  ( * RegisterPepPerf)(struct _FDO_DATA * );// Offset=0x538 Size=0x8
    long  ( * GetProcessorIndex)(struct _FDO_DATA * );// Offset=0x540 Size=0x8
    long  ( * RegisterPackage)(struct _FDO_DATA * );// Offset=0x548 Size=0x8
    long  ( * RegisterHiddenProcessorIdleStates)(struct _FDO_DATA * );// Offset=0x550 Size=0x8
    unsigned char SyntheticPsdAllowed;// Offset=0x558 Size=0x1
    enum <unnamed-enum-PerfStatesNative> PerfStatesOwner;// Offset=0x55c Size=0x4
    unsigned char PerfCounterReadOptimize;// Offset=0x560 Size=0x1
    unsigned long Errata;// Offset=0x564 Size=0x4
    struct _PCC_INTERFACE_STANDARD PccInterface;// Offset=0x568 Size=0x80
    struct _KEVENT PccSubspacesMutableEvent;// Offset=0x5e8 Size=0x18
    struct WDFSPINLOCK__ * PccSubspacesSpinLock;// Offset=0x600 Size=0x8
    struct WDFWAITLOCK__ * PccSubspacesMutex;// Offset=0x608 Size=0x8
    struct _LIST_ENTRY PccSubspaces;// Offset=0x610 Size=0x10
    unsigned long PccSubspaceCount;// Offset=0x620 Size=0x4
    unsigned long PccRegisteredProcessors;// Offset=0x624 Size=0x4
    struct WDFSPINLOCK__ * PccMutex;// Offset=0x628 Size=0x8
    struct _IO_WORKITEM * PccCapWorker;// Offset=0x630 Size=0x8
    unsigned long PepRegisteredProcessors;// Offset=0x638 Size=0x4
    unsigned char PccCapUpdated;// Offset=0x63c Size=0x1
    unsigned char PccCapWorkerQueued;// Offset=0x63d Size=0x1
    struct _CPC_COMMAND_COMPLETION CpcCmdCompletion;// Offset=0x640 Size=0x18
    unsigned char AssertsDisabled;// Offset=0x658 Size=0x1
    unsigned long CoordinatedStateCount;// Offset=0x65c Size=0x4
    struct _PLATFORM_IDLE_STATES * PlatformIdleStates;// Offset=0x660 Size=0x8
    struct _COORDINATED_IDLE_STATES * CoordinatedStates;// Offset=0x668 Size=0x8
    struct _COORDINATED_IDLE_STATES * LpiCoordinatedStates;// Offset=0x670 Size=0x8
    unsigned long * LpiStateIndexMapping;// Offset=0x678 Size=0x8
    struct _RUNTIME_LPI_STATE * LpiRuntimeState;// Offset=0x680 Size=0x8
    struct ACPI_PROCESSOR_CONTAINERS * ProcessorContainers;// Offset=0x688 Size=0x8
    struct _PREREGISTERED_VETO_LIST * VetoList;// Offset=0x690 Size=0x8
    struct _IO_WORKITEM * StateUpdateWorker;// Offset=0x698 Size=0x8
    unsigned char StateUpdateWorkerQueued;// Offset=0x6a0 Size=0x1
    unsigned long EfficiencyClasses;// Offset=0x6a4 Size=0x4
    unsigned long ProcessorCounts[2];// Offset=0x6a8 Size=0x8
    struct _PROC_ENERGY_MODEL EnergyModels[2];// Offset=0x6b0 Size=0x200
    unsigned long EnergyEnabledProcessors;// Offset=0x8b0 Size=0x4
    unsigned long HwDebugEnabledProcessors;// Offset=0x8b4 Size=0x4
    long long QpcFrequency;// Offset=0x8b8 Size=0x8
    unsigned long long CycleCounterFrequency;// Offset=0x8c0 Size=0x8
    enum _PROCESSOR_PRESENCE HiddenProcessorPresence;// Offset=0x8c8 Size=0x4
    unsigned long ProcessorCountIncludingHidden;// Offset=0x8cc Size=0x4
    unsigned char SkipHiddenProcessorPoFxRegistration;// Offset=0x8d0 Size=0x1
    unsigned char ImplicitPlatformIdle;// Offset=0x8d1 Size=0x1
    struct _PROC_HW_DEBUG_REGISTER_DEFINITION_LIST RegisteryDebugRegisters[2];// Offset=0x8d8 Size=0x20
    unsigned long MeasurementCapabilities;// Offset=0x8f8 Size=0x4
    unsigned long MeasurementRegisterGroupTypes;// Offset=0x8fc Size=0x4
    struct _LIST_ENTRY MeasurementRegisterGroups;// Offset=0x900 Size=0x10
};
