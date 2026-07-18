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
