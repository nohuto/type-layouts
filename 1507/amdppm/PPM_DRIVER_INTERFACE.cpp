struct PPM_DRIVER_INTERFACE// Size=0xd0 (Id=398)
{
    unsigned long Version;// Offset=0x0 Size=0x4
    unsigned long Size;// Offset=0x4 Size=0x4
    unsigned long Flags;// Offset=0x8 Size=0x4
    struct PDC_INPUT_BUFFER * PdcBiosData;// Offset=0x10 Size=0x8
    struct OSC_INPUT_BUFFER * OscBiosData;// Offset=0x18 Size=0x8
    unsigned short PdcSize;// Offset=0x20 Size=0x2
    unsigned short OscSize;// Offset=0x22 Size=0x2
    long  ( * DeviceStart)(struct _FDO_DATA * );// Offset=0x28 Size=0x8
    long  ( * InitializeCStates)(struct _FDO_DATA * );// Offset=0x30 Size=0x8
    long  ( * DecodeCState)(struct _FDO_DATA * ,struct ACPI_CST_STATE * ,union _HV_X64_PPM_IDLE_STATE_CONFIG * ,unsigned char * ,struct _RUNTIME_IDLE_STATE * );// Offset=0x38 Size=0x8
    long  ( * ValidatePStates)(struct ACPI_CTRL_STATUS * ,struct ACPI_PSS * ,unsigned long * );// Offset=0x40 Size=0x8
    long  ( * SetPStateFFH)(unsigned long long ,unsigned long long ,unsigned long long );// Offset=0x48 Size=0x8
    long  ( * SetTStateFFH)(unsigned long long ,unsigned long long ,unsigned long long );// Offset=0x50 Size=0x8
    void  ( * PStateFeedBack)(void * ,unsigned char ,unsigned long long * ,unsigned long long * );// Offset=0x58 Size=0x8
    void  ( * GetFFHThrottleState)(unsigned long long * );// Offset=0x60 Size=0x8
    void  ( * BoostPolicyHandler)(unsigned long long ,unsigned long );// Offset=0x68 Size=0x8
    void  ( * BoostModeHandler)(unsigned long long ,unsigned long );// Offset=0x70 Size=0x8
    unsigned char  ( * CheckEfficientThrottle)(struct ACPI_CPC * );// Offset=0x78 Size=0x8
    long  ( * ConnectNativeInterrupt)(struct _FDO_DATA * );// Offset=0x80 Size=0x8
    void  ( * EnableNativeInterrupt)();// Offset=0x88 Size=0x8
    long  ( * InitEnergyCounters)();// Offset=0x90 Size=0x8
    void  ( * UnInitEnergyCounters)();// Offset=0x98 Size=0x8
    void  ( * ComputeEnergy)(unsigned long long * ,unsigned long long * ,unsigned long * ,unsigned long long * );// Offset=0xa0 Size=0x8
    void  ( * SnapEnergyCounters)(unsigned long ,unsigned char ,unsigned char );// Offset=0xa8 Size=0x8
    unsigned long PStateFFHControlRegister;// Offset=0xb0 Size=0x4
    unsigned long long PStateFFHControlMask;// Offset=0xb8 Size=0x8
    unsigned long TStateFFHControlRegister;// Offset=0xc0 Size=0x4
    unsigned long long TStateFFHControlMask;// Offset=0xc8 Size=0x8
};
