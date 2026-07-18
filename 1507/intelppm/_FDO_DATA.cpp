struct _LIST_ENTRY// Size=0x10 (Id=20)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _ACPI_INTERFACE_STANDARD// Size=0x58 (Id=488)
{
    unsigned short Size;// Offset=0x0 Size=0x2
    unsigned short Version;// Offset=0x2 Size=0x2
    void * Context;// Offset=0x8 Size=0x8
    void  ( * InterfaceReference)(void * );// Offset=0x10 Size=0x8
    void  ( * InterfaceDereference)(void * );// Offset=0x18 Size=0x8
    long  ( * GpeConnectVector)(struct _DEVICE_OBJECT * ,unsigned long ,enum _KINTERRUPT_MODE ,unsigned char ,unsigned char  ( * )(void * ,void * ),void * ,void * );// Offset=0x20 Size=0x8
    long  ( * GpeDisconnectVector)(void * );// Offset=0x28 Size=0x8
    long  ( * GpeEnableEvent)(struct _DEVICE_OBJECT * ,void * );// Offset=0x30 Size=0x8
    long  ( * GpeDisableEvent)(struct _DEVICE_OBJECT * ,void * );// Offset=0x38 Size=0x8
    long  ( * GpeClearStatus)(struct _DEVICE_OBJECT * ,void * );// Offset=0x40 Size=0x8
    long  ( * RegisterForDeviceNotifications)(struct _DEVICE_OBJECT * ,void  ( * )(void * ,unsigned long ),void * );// Offset=0x48 Size=0x8
    void  ( * UnregisterForDeviceNotifications)(struct _DEVICE_OBJECT * ,void  ( * )(void * ,unsigned long ));// Offset=0x50 Size=0x8
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

struct _GEN_ADDR// Size=0xc (Id=436)
{
    unsigned char AddressSpaceID;// Offset=0x0 Size=0x1
    unsigned char BitWidth;// Offset=0x1 Size=0x1
    unsigned char BitOffset;// Offset=0x2 Size=0x1
    unsigned char AccessSize;// Offset=0x3 Size=0x1
    union _LARGE_INTEGER Address;// Offset=0x4 Size=0x8
};

struct _WMILIB_CONTEXT// Size=0x40 (Id=479)
{
    unsigned long GuidCount;// Offset=0x0 Size=0x4
    struct _WMIGUIDREGINFO * GuidList;// Offset=0x8 Size=0x8
    long  ( * QueryWmiRegInfo)(struct _DEVICE_OBJECT * ,unsigned long * ,struct _UNICODE_STRING * ,struct _UNICODE_STRING ** ,struct _UNICODE_STRING * ,struct _DEVICE_OBJECT ** );// Offset=0x10 Size=0x8
    long  ( * QueryWmiDataBlock)(struct _DEVICE_OBJECT * ,struct _IRP * ,unsigned long ,unsigned long ,unsigned long ,unsigned long * ,unsigned long ,unsigned char * );// Offset=0x18 Size=0x8
    long  ( * SetWmiDataBlock)(struct _DEVICE_OBJECT * ,struct _IRP * ,unsigned long ,unsigned long ,unsigned long ,unsigned char * );// Offset=0x20 Size=0x8
    long  ( * SetWmiDataItem)(struct _DEVICE_OBJECT * ,struct _IRP * ,unsigned long ,unsigned long ,unsigned long ,unsigned long ,unsigned char * );// Offset=0x28 Size=0x8
    long  ( * ExecuteWmiMethod)(struct _DEVICE_OBJECT * ,struct _IRP * ,unsigned long ,unsigned long ,unsigned long ,unsigned long ,unsigned long ,unsigned char * );// Offset=0x30 Size=0x8
    long  ( * WmiFunctionControl)(struct _DEVICE_OBJECT * ,struct _IRP * ,unsigned long ,enum _WMIENABLEDISABLECONTROL ,unsigned char );// Offset=0x38 Size=0x8
};

struct _DISPATCHER_HEADER// Size=0x18 (Id=339)
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
        unsigned char Timer2Reserved1;// Offset=0x2 Size=0x1
        unsigned char Timer2Reserved2;// Offset=0x3 Size=0x1
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
};

struct _unnamed_8// Size=0x8 (Id=8)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    unsigned long HighPart;// Offset=0x4 Size=0x4
};

union _ULARGE_INTEGER// Size=0x8 (Id=9)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    unsigned long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_8 u;// Offset=0x0 Size=0x8
    unsigned long long QuadPart;// Offset=0x0 Size=0x8
};

struct _KTIMER// Size=0x40 (Id=475)
{
    struct _DISPATCHER_HEADER Header;// Offset=0x0 Size=0x18
    union _ULARGE_INTEGER DueTime;// Offset=0x18 Size=0x8
    struct _LIST_ENTRY TimerListEntry;// Offset=0x20 Size=0x10
    struct _KDPC * Dpc;// Offset=0x30 Size=0x8
    unsigned long Processor;// Offset=0x38 Size=0x4
    unsigned long Period;// Offset=0x3c Size=0x4
};

struct _SINGLE_LIST_ENTRY// Size=0x8 (Id=21)
{
    struct _SINGLE_LIST_ENTRY * Next;// Offset=0x0 Size=0x8
};

struct _KDPC// Size=0x40 (Id=122)
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
};

struct _CAP_LOG_STATE// Size=0x98 (Id=371)
{
    struct _KTIMER Timer;// Offset=0x0 Size=0x40
    struct _KDPC Dpc;// Offset=0x40 Size=0x40
    union _LARGE_INTEGER CapDuration;// Offset=0x80 Size=0x8
    unsigned long PpcChanges;// Offset=0x88 Size=0x4
    unsigned long TpcChanges;// Offset=0x8c Size=0x4
    unsigned long PccCapChanges;// Offset=0x90 Size=0x4
    unsigned char TimerQueued;// Offset=0x94 Size=0x1
};

struct _FDO_DATA// Size=0x478 (Id=334)
{
    struct _DEVICE_OBJECT * Self;// Offset=0x0 Size=0x8
    struct _DEVICE_OBJECT * Pdo;// Offset=0x8 Size=0x8
    struct WDFIOTARGET__ * DefaultTarget;// Offset=0x10 Size=0x8
    struct _FILE_OBJECT * FileObject;// Offset=0x18 Size=0x8
    struct _LIST_ENTRY DeviceLink;// Offset=0x20 Size=0x10
    unsigned long InitialApicID;// Offset=0x30 Size=0x4
    unsigned long AcpiID;// Offset=0x34 Size=0x4
    unsigned long NtNumber;// Offset=0x38 Size=0x4
    unsigned int LpIndex;// Offset=0x3c Size=0x4
    unsigned char ResumeFromSleep;// Offset=0x40 Size=0x1
    unsigned char Revision;// Offset=0x41 Size=0x1
    unsigned char Spare[1];// Offset=0x42 Size=0x1
    struct OSC_OUTPUT_BUFFER * OscOutput;// Offset=0x48 Size=0x8
    struct _ACPI_INTERFACE_STANDARD AcpiInterfaces;// Offset=0x50 Size=0x58
    struct _GEN_ADDR PBlkAddress;// Offset=0xa8 Size=0xc
    unsigned long long MonitorAddress;// Offset=0xb8 Size=0x8
    struct WDFWAITLOCK__ * AcpiObjectLock;// Offset=0xc0 Size=0x8
    struct _PTSTATES_RUNTIME_STATE * PTStatesRuntimeState;// Offset=0xc8 Size=0x8
    struct _FEEDBACK_RUNTIME_STATE * FeedbackRuntimeState;// Offset=0xd0 Size=0x8
    struct _PCC_RUNTIME_STATE * PccRuntimeState;// Offset=0xd8 Size=0x8
    struct _CPC_RUNTIME_STATE * CpcRuntimeState;// Offset=0xe0 Size=0x8
    unsigned long long DrvCapabilities;// Offset=0xe8 Size=0x8
    unsigned long long PPMFound;// Offset=0xf0 Size=0x8
    unsigned long long PPMEnabled;// Offset=0xf8 Size=0x8
    unsigned long PPMFeatureFlags;// Offset=0x100 Size=0x4
    long  ( * SetPState)(unsigned long long ,unsigned long long ,unsigned long long );// Offset=0x108 Size=0x8
    long  ( * SetTState)(unsigned long long ,unsigned long long ,unsigned long long );// Offset=0x110 Size=0x8
    void  ( * PStateFeedback)(void * ,unsigned char ,unsigned long long * ,unsigned long long * );// Offset=0x118 Size=0x8
    void  ( * GetFFHThrottleState)(unsigned long long * );// Offset=0x120 Size=0x8
    void  ( * SetBoostPolicy)(unsigned long long ,unsigned long );// Offset=0x128 Size=0x8
    void  ( * SetBoostMode)(unsigned long long ,unsigned long );// Offset=0x130 Size=0x8
    struct _PROC_ENERGY_ESTIMATION_PARAMS * EstimationParams;// Offset=0x138 Size=0x8
    long long QpcFrequency;// Offset=0x140 Size=0x8
    unsigned char EfficiencyClass;// Offset=0x148 Size=0x1
    unsigned long long HighestPerformance;// Offset=0x150 Size=0x8
    unsigned long long NominalPerformance;// Offset=0x158 Size=0x8
    unsigned long long LowestNonlinearPerformance;// Offset=0x160 Size=0x8
    unsigned long long LowestPerformance;// Offset=0x168 Size=0x8
    struct ACPI_CTRL_STATUS PCT;// Offset=0x170 Size=0x18
    struct ACPI_PSS * PSS;// Offset=0x188 Size=0x8
    struct ACPI_PSS * XPSS;// Offset=0x190 Size=0x8
    unsigned long PPC;// Offset=0x198 Size=0x4
    struct ACPI_xSD * PSD;// Offset=0x1a0 Size=0x8
    struct ACPI_CTRL_STATUS PTC;// Offset=0x1a8 Size=0x18
    struct ACPI_TSS * TSS;// Offset=0x1c0 Size=0x8
    unsigned long TPC;// Offset=0x1c8 Size=0x4
    struct ACPI_xSD * TSD;// Offset=0x1d0 Size=0x8
    struct ACPI_CST * CST;// Offset=0x1d8 Size=0x8
    struct _ACPI_CSD * CSD;// Offset=0x1e0 Size=0x8
    struct ACPI_xSD * XSD;// Offset=0x1e8 Size=0x8
    struct _PERF_DOMAIN_ENTRY * PerfDomain;// Offset=0x1f0 Size=0x8
    struct _LIST_ENTRY PerfDomainLink;// Offset=0x1f8 Size=0x10
    struct ACPI_PCCP * Pccp;// Offset=0x208 Size=0x8
    struct ACPI_CPC * CPC;// Offset=0x210 Size=0x8
    struct _WMILIB_CONTEXT WmiLibInfo;// Offset=0x218 Size=0x40
    struct WMI_EVENT AcpiNotify80;// Offset=0x258 Size=0x10
    struct WMI_EVENT AcpiNotify81;// Offset=0x268 Size=0x10
    struct WMI_EVENT AcpiNotify82;// Offset=0x278 Size=0x10
    struct _RUNTIME_IDLE_STATES * RuntimeIdleStates;// Offset=0x288 Size=0x8
    unsigned char IdleStatesInitilized;// Offset=0x290 Size=0x1
    struct _IDLE_STATE_ENTRIES * IdleStateEntries;// Offset=0x298 Size=0x8
    unsigned long ThermalCap;// Offset=0x2a0 Size=0x4
    unsigned long PccCap;// Offset=0x2a4 Size=0x4
    union _LARGE_INTEGER CapStart;// Offset=0x2a8 Size=0x8
    union _LARGE_INTEGER CapDuration;// Offset=0x2b0 Size=0x8
    unsigned long PpcChanges;// Offset=0x2b8 Size=0x4
    unsigned long TpcChanges;// Offset=0x2bc Size=0x4
    unsigned long PccCapChanges;// Offset=0x2c0 Size=0x4
    struct _CAP_LOG_STATE CapQuickLog;// Offset=0x2c8 Size=0x98
    struct _CAP_LOG_STATE CapLongLog;// Offset=0x360 Size=0x98
    struct _PROCESSOR_PACKAGE * Package;// Offset=0x3f8 Size=0x8
    struct _LIST_ENTRY PackageLink;// Offset=0x400 Size=0x10
    unsigned long FeaturesPresent;// Offset=0x410 Size=0x4
    unsigned long FeaturesAccessed;// Offset=0x414 Size=0x4
    unsigned long FeaturesInvalidated;// Offset=0x418 Size=0x4
    struct POHANDLE__ * FxHandle;// Offset=0x420 Size=0x8
    unsigned long PepFeedbackCounterCount;// Offset=0x428 Size=0x4
    unsigned long PepIdleStateCount;// Offset=0x42c Size=0x4
    unsigned char PepPerformanceSupported;// Offset=0x430 Size=0x1
    unsigned char PepParkingSupported;// Offset=0x431 Size=0x1
    struct _PEP_PPM_QUERY_IDLE_STATES * PepIdleStates;// Offset=0x438 Size=0x8
    struct _PEP_PPM_QUERY_IDLE_STATES_V2 * PepIdleStatesV2;// Offset=0x440 Size=0x8
    struct _UNICODE_STRING * IdleStateNames;// Offset=0x448 Size=0x8
    struct _IO_WORKITEM * IdleStateUpdateWorkItem;// Offset=0x450 Size=0x8
    unsigned char IdleStatesWorkerQueued;// Offset=0x458 Size=0x1
    unsigned char IdleStateUpdates;// Offset=0x459 Size=0x1
    struct _PEP_PERFORMANCE_STATE * PepPerfStates;// Offset=0x460 Size=0x8
    struct _PEP_PERF_RUNTIME_STATE * PepPerfRuntimeState;// Offset=0x468 Size=0x8
    struct ACPI_xSD * PepDomain;// Offset=0x470 Size=0x8
};
