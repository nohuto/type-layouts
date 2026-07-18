struct PPM_DRIVER_INTERFACE// Size=0x178 (Id=676)
{
    unsigned long Version;// Offset=0x0 Size=0x4
    unsigned long Size;// Offset=0x4 Size=0x4
    unsigned long Flags;// Offset=0x8 Size=0x4
    struct PDC_INPUT_BUFFER * PdcBiosData;// Offset=0x10 Size=0x8
    struct OSC_INPUT_BUFFER * OscBiosData;// Offset=0x18 Size=0x8
    unsigned short PdcSize;// Offset=0x20 Size=0x2
    unsigned short OscSize;// Offset=0x22 Size=0x2
    long  ( * DeviceStart)(struct _FDO_DATA * );// Offset=0x28 Size=0x8
    long  ( * InitializeAcpiIdleStates)(struct _FDO_DATA * );// Offset=0x30 Size=0x8
    long  ( * DecodeVendorIdleState)(struct _FDO_DATA * ,struct _GEN_ADDR * ,unsigned long ,unsigned long ,union _HV_PPM_IDLE_STATE_CONFIG * ,unsigned char * ,unsigned char * ,struct _RUNTIME_IDLE_STATE * );// Offset=0x38 Size=0x8
    long  ( * ValidatePStates)(struct ACPI_CTRL_STATUS * ,struct ACPI_PSS * ,unsigned long * );// Offset=0x40 Size=0x8
    long  ( * SetPStateFFH)(unsigned long long ,unsigned long long ,unsigned long long ,unsigned long );// Offset=0x48 Size=0x8
    long  ( * SetTStateFFH)(unsigned long long ,unsigned long long ,unsigned long long ,unsigned long );// Offset=0x50 Size=0x8
    long  ( * SetPStateFFHHidden)(unsigned long ,unsigned long long ,unsigned long long ,unsigned long long ,unsigned long );// Offset=0x58 Size=0x8
    long  ( * SetTStateFFHHidden)(unsigned long ,unsigned long long ,unsigned long long ,unsigned long long ,unsigned long );// Offset=0x60 Size=0x8
    void  ( * SetHiddenProcessorCppcWorkaround)(unsigned long long ,struct _PERF_CONTROL_STATE_SELECTION * ,unsigned char ,unsigned char );// Offset=0x68 Size=0x8
    unsigned long  ( * PTStateFlagHandler)(unsigned long ,unsigned long );// Offset=0x70 Size=0x8
    void  ( * PStateFeedBack)(void * ,unsigned char ,unsigned long long * ,unsigned long long * );// Offset=0x78 Size=0x8
    void  ( * GetFFHThrottleState)(unsigned long long * );// Offset=0x80 Size=0x8
    void  ( * BoostPolicyHandler)(unsigned long long ,unsigned long );// Offset=0x88 Size=0x8
    void  ( * BoostModeHandler)(unsigned long long ,unsigned long );// Offset=0x90 Size=0x8
    long  ( * ValidateCPC)(struct ACPI_CPC * );// Offset=0x98 Size=0x8
    void  ( * )(void * ,unsigned char ,unsigned long long * ,unsigned long long * ) ( * GetCppcPerfFeedbackHandler)(struct ACPI_CPC * );// Offset=0xa0 Size=0x8
    unsigned char  ( * GetCppcResourcePriorityRegister)(struct ACPI_CPC * ,struct _CPC_RES_PRI_REG_DESC ** );// Offset=0xa8 Size=0x8
    unsigned char  ( * CheckEfficientThrottle)(struct ACPI_CPC * );// Offset=0xb0 Size=0x8
    long  ( * ConnectNativeInterrupt)(struct _FDO_DATA * );// Offset=0xb8 Size=0x8
    void  ( * ReConnectNativeInterrupt)();// Offset=0xc0 Size=0x8
    long  ( * GetNativeCppcPerfControlHandler)(struct _FDO_DATA * ,struct _CPC_RUNTIME_STATE * ,void  ( ** )(unsigned long long ,struct _PERF_CONTROL_STATE_SELECTION * ,unsigned char ,unsigned char ),void  ( ** )(unsigned long long ,struct _PERF_CONTROL_STATE_SELECTION * ,unsigned char ,unsigned char ),void  ( ** )(unsigned long long ,struct _PERF_CONTROL_STATE_SELECTION * ,unsigned char ,unsigned char ),unsigned long  ( ** )(unsigned long long ,unsigned long ,unsigned long ,unsigned long ,unsigned long ,unsigned long ,unsigned long ,unsigned long ,unsigned long * ,unsigned long long * ,unsigned long long * ),unsigned char * ,unsigned char * ,unsigned char * ,unsigned long * );// Offset=0xc8 Size=0x8
    void  ( * EnableNativeInterrupt)();// Offset=0xd0 Size=0x8
    void  ( * EnablePackageResourcePriority)();// Offset=0xd8 Size=0x8
    long  ( * HvConfigCppc)(struct _CPC_RUNTIME_STATE * );// Offset=0xe0 Size=0x8
    unsigned char ForceSingleEnergyClass;// Offset=0xe8 Size=0x1
    long  ( * InitEnergyCounters)();// Offset=0xf0 Size=0x8
    void  ( * UnInitEnergyCounters)();// Offset=0xf8 Size=0x8
    void  ( * ComputeEnergy)(unsigned long ,unsigned long long ,unsigned long long ,unsigned long ,unsigned long long * );// Offset=0x100 Size=0x8
    void  ( * SnapEnergyCounters)(unsigned long ,unsigned char ,unsigned char );// Offset=0x108 Size=0x8
    unsigned long long  ( * PctDiscoverPlatformCtrs)(struct _FDO_DATA * );// Offset=0x110 Size=0x8
    unsigned short  ( * PctSnapPlatformCtrs)(struct _FDO_DATA * ,unsigned long long );// Offset=0x118 Size=0x8
    enum ULONG  ( * PctEnumPlatfromCtr)(struct _FDO_DATA * ,enum ULONG ,unsigned long long );// Offset=0x120 Size=0x8
    long  ( * PctGetPlatformCtr)(struct _FDO_DATA * ,enum ULONG ,unsigned long long * ,unsigned long long * );// Offset=0x128 Size=0x8
    long  ( * PctGetPlatformCtrInfo)(enum ULONG ,wchar_t ** ,wchar_t ** ,unsigned long * );// Offset=0x130 Size=0x8
    unsigned long PStateFFHControlRegister;// Offset=0x138 Size=0x4
    unsigned long long PStateFFHControlMask;// Offset=0x140 Size=0x8
    unsigned long TStateFFHControlRegister;// Offset=0x148 Size=0x4
    unsigned long long TStateFFHControlMask;// Offset=0x150 Size=0x8
    long  ( * GetHwDebugRegisters)(struct _PROC_HW_DEBUG_REGISTER_DEFINITION_LIST * );// Offset=0x158 Size=0x8
    long  ( * InitMeasRegisters)(struct _FDO_DATA * );// Offset=0x160 Size=0x8
    long  ( * QueryMeasValues)(unsigned long ,unsigned long * ,void * ,unsigned long );// Offset=0x168 Size=0x8
    unsigned short  ( * RegisterResetOnD0Entry)(struct _FDO_DATA * );// Offset=0x170 Size=0x8
};
