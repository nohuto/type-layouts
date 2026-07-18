struct _LIST_ENTRY// Size=0x10 (Id=22)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _KAFFINITY_EX// Size=0xa8 (Id=528)
{
    unsigned short Count;// Offset=0x0 Size=0x2
    unsigned short Size;// Offset=0x2 Size=0x2
    unsigned long Reserved;// Offset=0x4 Size=0x4
    unsigned long long Bitmap[20];// Offset=0x8 Size=0xa0
};

struct _PPM_DRIVER_DISPATCH_TABLE// Size=0x110 (Id=497)
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
    long  ( * RegisterPerfStatesHv)(struct _PROCESSOR_PERF_STATES_HV * );// Offset=0x68 Size=0x8
    long  ( * RegisterPerfCapHv)(struct _PROCESSOR_PERF_CAP_HV * );// Offset=0x70 Size=0x8
    long  ( * RegisterIdleStatesHv)(struct _PROCESSOR_IDLE_STATES_HV * );// Offset=0x78 Size=0x8
    long  ( * RegisterPerfStatesCountersHv)(struct _PROCESSOR_PERF_STATES_COUNTERS_HV * );// Offset=0x80 Size=0x8
    long  ( * SetProcessorPep)(unsigned long ,void * );// Offset=0x88 Size=0x8
    long  ( * ParkPreferenceNotification)(void * ,struct _PEP_PPM_PARK_SELECTION_V2 * );// Offset=0x90 Size=0x8
    long  ( * ParkMaskNotification)(void * ,struct _PEP_PPM_PARK_MASK * );// Offset=0x98 Size=0x8
    long  ( * IdleSelectNotification)(void * ,struct _PEP_PPM_IDLE_SELECT * );// Offset=0xa0 Size=0x8
    long  ( * QueryPlatformStateNotification)(void * ,struct _PEP_PPM_QUERY_PLATFORM_STATE * ,unsigned char );// Offset=0xa8 Size=0x8
    long  ( * QueryCoordinatedDependencyNotification)(void * ,struct _PEP_PPM_QUERY_COORDINATED_DEPENDENCY * );// Offset=0xb0 Size=0x8
    long  ( * NotifyLpiCoordinatedStatesNotification)(void * ,struct _PEP_PPM_LPI_COORDINATED_STATES * );// Offset=0xb8 Size=0x8
    void  ( * RegisterEnergyEstimation)(void  ( * )(unsigned long ,unsigned long long ,unsigned long long ,unsigned long ,unsigned long long * ),void  ( * )(unsigned long ,unsigned char ,unsigned char ));// Offset=0xc0 Size=0x8
    long  ( * RequestProcessorHalt)(unsigned long ,void * ,long  ( * )(void * ));// Offset=0xc8 Size=0x8
    unsigned char  ( * GetHgsEnablementStatus)();// Offset=0xd0 Size=0x8
    void  ( * DispatchHgsInterrupt)();// Offset=0xd8 Size=0x8
    long  ( * ReadHiddenProcessorMsr)(unsigned long ,unsigned long ,unsigned long long * );// Offset=0xe0 Size=0x8
    long  ( * WriteHiddenProcessorMsr)(unsigned long ,unsigned long ,unsigned long long ,unsigned long long );// Offset=0xe8 Size=0x8
    long  ( * ReadHiddenProcessorIoPort)(unsigned long ,unsigned short ,unsigned short ,unsigned long * );// Offset=0xf0 Size=0x8
    long  ( * WriteHiddenProcessorIoPort)(unsigned long ,unsigned short ,unsigned short ,unsigned long ,unsigned long );// Offset=0xf8 Size=0x8
    unsigned long  ( * QueryPackageId)(unsigned long );// Offset=0x100 Size=0x8
    unsigned long  ( * QueryPackageProcessorCount)(unsigned long );// Offset=0x108 Size=0x8
};

struct _anonymous_31// Size=0x8 (Id=31)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=32)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _anonymous_31 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _GEN_ADDR// Size=0xc (Id=462)
{
    unsigned char AddressSpaceID;// Offset=0x0 Size=0x1
    unsigned char BitWidth;// Offset=0x1 Size=0x1
    unsigned char BitOffset;// Offset=0x2 Size=0x1
    unsigned char AccessSize;// Offset=0x3 Size=0x1
    union _LARGE_INTEGER Address;// Offset=0x4 Size=0x8
};

struct _PCC_INTERFACE_INTERNAL// Size=0x58 (Id=557)
{
    unsigned short Size;// Offset=0x0 Size=0x2
    unsigned short Version;// Offset=0x2 Size=0x2
    void * Context;// Offset=0x8 Size=0x8
    void  ( * InterfaceReference)(void * );// Offset=0x10 Size=0x8
    void  ( * InterfaceDereference)(void * );// Offset=0x18 Size=0x8
    unsigned long SubspaceId;// Offset=0x20 Size=0x4
    union _LARGE_INTEGER PhysicalAddress;// Offset=0x28 Size=0x8
    unsigned long PhysicalSize;// Offset=0x30 Size=0x4
    unsigned long long DoorbellWrite;// Offset=0x38 Size=0x8
    unsigned long long DoorbellPreserve;// Offset=0x40 Size=0x8
    struct _GEN_ADDR Doorbell;// Offset=0x48 Size=0xc
};

union _anonymous_611// Size=0x4 (Id=611)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long SciSupported:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long Reserved:31;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1f
    };
    unsigned long AsULong;// Offset=0x0 Size=0x4
};

struct _PCC_INTERFACE_STANDARD// Size=0x80 (Id=612)
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
    union _anonymous_611 Flags;// Offset=0x54 Size=0x4
    long  ( * AcquireSubspace)(void * );// Offset=0x58 Size=0x8
    long  ( * AcquireSubspaceAsync)(void * ,void  ( * )(long ,unsigned long long ),unsigned long long );// Offset=0x60 Size=0x8
    long  ( * ExecuteCommand)(void * ,unsigned char );// Offset=0x68 Size=0x8
    long  ( * ExecuteCommandAsync)(void * ,unsigned char ,void  ( * )(long ,unsigned long long ),unsigned long long );// Offset=0x70 Size=0x8
    long  ( * ReleaseSubspace)(void * );// Offset=0x78 Size=0x8
};

union _PROC_POWER_COORDINATES// Size=0x4 (Id=445)
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

struct _PROC_ENERGY_COUNTER// Size=0xc (Id=479)
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

struct _PROC_ENERGY_MODEL// Size=0x100 (Id=438)
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

struct GLOBALS// Size=0x7e8 (Id=412)
{
    unsigned long long PPMCapabilities;// Offset=0x0 Size=0x8
    unsigned long long PPMRegFlags;// Offset=0x8 Size=0x8
    unsigned long PPMOverrideFlags;// Offset=0x10 Size=0x4
    unsigned long ProcessorCount;// Offset=0x14 Size=0x4
    struct WDFWAITLOCK__ * Mutex;// Offset=0x18 Size=0x8
    struct WDFWAITLOCK__ * PepStateMutex;// Offset=0x20 Size=0x8
    struct _LIST_ENTRY DeviceHead;// Offset=0x28 Size=0x10
    struct _LIST_ENTRY PerfDomainHead;// Offset=0x38 Size=0x10
    struct _LIST_ENTRY PackageHead;// Offset=0x48 Size=0x10
    struct _LIST_ENTRY IdleDomainHead;// Offset=0x58 Size=0x10
    struct _LIST_ENTRY PccHead;// Offset=0x68 Size=0x10
    struct _KAFFINITY_EX ProcessorsAvailable;// Offset=0x78 Size=0xa8
    struct PPM_DRIVER_INTERFACE DrvInterface;// Offset=0x120 Size=0x100
    struct _PPM_DRIVER_DISPATCH_TABLE PpmDispatchTable;// Offset=0x220 Size=0x110
    struct _KAFFINITY_EX ProcessorsEnumerated;// Offset=0x330 Size=0xa8
    long  ( * RegisterIdleStates)(struct _FDO_DATA * );// Offset=0x3d8 Size=0x8
    long  ( * RegisterPStates)(struct _FDO_DATA * );// Offset=0x3e0 Size=0x8
    long  ( * RegisterPerfCap)(struct _FDO_DATA * );// Offset=0x3e8 Size=0x8
    long  ( * RegisterPerfFeedback)(struct _FDO_DATA * );// Offset=0x3f0 Size=0x8
    long  ( * RegisterLegacyPcc)(struct _FDO_DATA * );// Offset=0x3f8 Size=0x8
    long  ( * RegisterCpc)(struct _FDO_DATA * );// Offset=0x400 Size=0x8
    long  ( * RegisterPepPerf)(struct _FDO_DATA * );// Offset=0x408 Size=0x8
    long  ( * GetProcessorIndex)(struct _FDO_DATA * );// Offset=0x410 Size=0x8
    long  ( * RegisterPackage)(struct _FDO_DATA * );// Offset=0x418 Size=0x8
    struct _EVENT_DESCRIPTOR * SummaryEvent;// Offset=0x420 Size=0x8
    struct _EVENT_DESCRIPTOR * Summary2Event;// Offset=0x428 Size=0x8
    struct _EVENT_DESCRIPTOR * IdleStatesErrorEvent;// Offset=0x430 Size=0x8
    struct _EVENT_DESCRIPTOR * PerfStatesErrorEvent;// Offset=0x438 Size=0x8
    struct _EVENT_DESCRIPTOR * ThrottleStatesErrorEvent;// Offset=0x440 Size=0x8
    struct _EVENT_DESCRIPTOR * CapInfoEvent;// Offset=0x448 Size=0x8
    unsigned char SyntheticPsdAllowed;// Offset=0x450 Size=0x1
    enum <unnamed-enum-PerfStatesNative> PerfStatesOwner;// Offset=0x454 Size=0x4
    unsigned long HvDomainCount;// Offset=0x458 Size=0x4
    struct _PCC_INTERFACE_INTERNAL PccInterfaceInternal;// Offset=0x460 Size=0x58
    unsigned long Errata;// Offset=0x4b8 Size=0x4
    struct _PCC_INTERFACE_STANDARD PccInterface;// Offset=0x4c0 Size=0x80
    struct _PCC_SUBSPACE_REGISTRATION * PccSubspace;// Offset=0x540 Size=0x8
    unsigned long PccRegisteredProcessors;// Offset=0x548 Size=0x4
    void  ( * PccCallback)();// Offset=0x550 Size=0x8
    struct WDFSPINLOCK__ * PccMutex;// Offset=0x558 Size=0x8
    struct _IO_WORKITEM * PccCapWorker;// Offset=0x560 Size=0x8
    unsigned long PepRegisteredProcessors;// Offset=0x568 Size=0x4
    unsigned char PccCapUpdated;// Offset=0x56c Size=0x1
    unsigned char PccCapWorkerQueued;// Offset=0x56d Size=0x1
    unsigned char AssertsDisabled;// Offset=0x56e Size=0x1
    unsigned long CoordinatedStateCount;// Offset=0x570 Size=0x4
    struct _PLATFORM_IDLE_STATES * PlatformIdleStates;// Offset=0x578 Size=0x8
    struct _COORDINATED_IDLE_STATES * CoordinatedStates;// Offset=0x580 Size=0x8
    struct _COORDINATED_IDLE_STATES * LpiCoordinatedStates;// Offset=0x588 Size=0x8
    unsigned long * LpiStateIndexMapping;// Offset=0x590 Size=0x8
    struct _RUNTIME_LPI_STATE * LpiRuntimeState;// Offset=0x598 Size=0x8
    struct ACPI_PROCESSOR_CONTAINERS * ProcessorContainers;// Offset=0x5a0 Size=0x8
    struct _PREREGISTERED_VETO_LIST * VetoList;// Offset=0x5a8 Size=0x8
    struct _IO_WORKITEM * StateUpdateWorker;// Offset=0x5b0 Size=0x8
    unsigned char StateUpdateWorkerQueued;// Offset=0x5b8 Size=0x1
    unsigned long EfficiencyClasses;// Offset=0x5bc Size=0x4
    unsigned long ProcessorCounts[2];// Offset=0x5c0 Size=0x8
    struct _PROC_ENERGY_MODEL EnergyModels[2];// Offset=0x5c8 Size=0x200
    unsigned long EnergyEnabledProcessors;// Offset=0x7c8 Size=0x4
    long long QpcFrequency;// Offset=0x7d0 Size=0x8
    unsigned long long CycleCounterFrequency;// Offset=0x7d8 Size=0x8
    unsigned char ImplicitPlatformIdle;// Offset=0x7e0 Size=0x1
};
