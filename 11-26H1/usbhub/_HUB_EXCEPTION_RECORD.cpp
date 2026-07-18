enum _HUB_EXCEPTION_CLASS
{
    HubExceptionInit=0,
    HubErr_TransactionFailure_Reset=1,
    CreatePdoFailure_Popup=2,
    CreateDeviceFailure_Popup=3,
    CreateDeviceFailure=4,
    CreateDeviceFailure_NoHubHandle=5,
    DeviceOvercurrent_Popup=6,
    InterruptPipeFailure_Reset=7,
    HubErr_GetPortStatusFailed=8,
    HubErr_BadControlData=9,
    HubErr_NoChangeBit=10,
    HubErr_PortResetFailed=11,
    HubErr_SetPortPowerFailed=12,
    HubErr_GetConfigDescriptorFailed=13,
    HubErr_GetHubDescriptorFailed=14,
    HubErr_GetHubDescriptorFailed_NoPorts=15,
    HubErr_GetDescriptorFailed=16,
    HubErr_GetStatusFailed=17,
    HubErr_HubInterfaceNotFound=18,
    HubErr_ResetPortFailed=19,
    HubErr_PortDisableFailed_Reset=20,
    HubErr_SetPortFeatureFailed=21,
    HubErr_PortResetTtFailed=22,
    HubErr_GetPortStatusInitFailed=23,
    HubErr_QueueChangeInitFailed=24,
    HubErr_BadBusIf=25,
    HubErr_NoHubBusIf=26,
    HubErr_NoUsbdiBusIf=27,
    Reset1Failure_Popup=28,
    Reset2Failure_Popup=29,
    InitializeDeviceFailure_Popup=30,
    InitializeDeviceFailure=31,
    SetupDeviceFailure_Popup=32,
    InvalidDeviceConfigDescriptor=33,
    HubErr_InvalidHubConfigDescriptor=34,
    NotEnoughPower_Popup=35,
    BadConfigDescriptor=36,
    BadSerialNumberString=37,
    BadUsbString=38,
    BadSerialNumberChars=39,
    DuplicateSerialNumber=40,
    UsbErr_InsufficientBandwidth_Popup=41,
    LegacyDevice_Popup=42,
    PowerErr_WarmStartFailed_Reset=43,
    PowerErr_ColdStartFailed_Reset=44,
    PowerErr_HubFailAfterSuspend=45,
    PowerErr_RootHubFailAfterSuspend=46,
    PowerErr_SetPortResumeFailed=47,
    PowerErr_GetPortStatusFailed=48,
    PowerErr_FailedWakeDisable=49,
    PowerErr_FailedWakeEnable=50,
    HubErr_SuspendPortFailed=51,
    PowerErr_FlushPortChangeFailed=52,
    PowerErr_PowerPortsFailed=53,
    PowerErr_PostResumeResetFailed=54,
    DebounceFailure=55,
    DropDevice=56,
    HubErr_StartDevFailedLower=57,
    FailedProductIdString=58,
    NullSerialNumberString=59,
    HubErr_PowerBit_Dropped=60,
    HubErr_Reset1BadEnable=61,
    HubErr_HardError_Reset=62,
    BadUsbString_LangId=63,
    HubErr_InvalidHubDeviceDescriptor=64,
    HubErr_FinishStartFailed=65,
    UsbdRestoreDevice_Failed=66,
    SyncResetDevice_Failed=67,
    ResetPdoPort_CallerNotPassiveLevel=68,
    ResetPdoPort_CallerNotInD0=69,
    ReplicantDetected=70,
    HubErr_HardResetFailed=71,
    HubErr_HubOverCurrentChangeDetected=72,
    HubErr_HubLocalPowerChangeDetected=73,
    HubErr_HubChangeDetected=74,
    HubErr_GlobalOvercurrent_Reset=75,
    ExcessiveDriverResetsDetected=76,
    DriverPortResetFailed=77,
    PowerErr_FailedGetStatusOnSuspend=78,
    PowerErr_SelectiveSuspendFailed=79,
    HubErr_Reset2BadEnable=80,
    PnpErr_Reset1Failure=81,
    PnpErr_Reset2Failure=82,
    HubErr_DescriptorParseError=83,
    PnpErr_InvalidMsOsDescriptor=84,
    PowerErr_FdoPowerFailure=85,
    PnpErr_FailedResetOnStart=86,
    HubErr_PnpDeviceStateError=87,
    PowerErr_PostHiberRestoreFailed=88,
    UsbErr_GetSNstringDescrptorFailed=89,
    GenErr_ApiValidationFailure=90,
    GenErr_UserIoctlFailed=91,
    GenErr_UserIoctlFailed_Unsupported=92,
    GenErr_UserIoctlFailed_InvalidIrql=93,
    GenErr_IoctlCycleFailed=94,
    GenErr_IoctlCycleFailed_InvalidIrql=95,
    GenErr_IoctlCycleDetected=96,
    PowerErr_MultiplePortsSignalledResume=97,
    HubErr_PortResetTtFailed_NoAddress=98,
    GenErr_WmiApiValidationFailure=99,
    PnpErr_LegacyDevice=100,
    PnpErr_PdoSymLinkFailed=101,
    PnpErr_MsOsDescriptor_NotSupported=102,
    PnpErr_PdoStartFailed=103,
    PnpErr_CreateDeviceFailure_GetTtFailed=104,
    HubErr_OvercurrentFalse=105,
    HubErr_OvercurrentIgnored=106,
    HubErr_OvercurrentClearFailed=107,
    HubErr_Overcurrent_AutoClear=108,
    PowerErr_ResumeFailedHubClassDs=109,
    PowerErr_ErrorOnUpstreamStatus=110,
    PowerErr_UpstreamPortDisabled=111,
    PowerErr_DeviceCycledPostResume=112,
    PowerErr_HardwareFailureOnWarmStart=113,
    PowerErr_DeviceUnexpectedlyLostPower=114,
    HubErr_DriverOvercurrent_Popup=115,
    HubErr_InterruptZeroBytes=116,
    HubErr_InvalidChangeBitReported=117,
    PowerErr_DeviceDisconnectOnSuspend=118,
    HubErr_SetPortIndicatorFailed=119,
    GenErr_AppliedDeviceFix=120,
    PnpErr_FailedResetOnQI=121,
    PnpErr_BadIdleIrpParameters=122,
    HubErr_SetUsbWakeFailed=123,
    PowerErr_PortResumeTimeout=124,
    PowerErr_ResumeTimeoutRestoreFailed=125,
    HubErr_HubParked=126,
    PowerErr_DeviceDisconnectOnResume=127,
    SsErr_FailedSshResumeOnPort=128,
    SsErr_FailedResumeOnPort=129,
    PdoFailureData=130,
    NestedHubs_Popup=131,
    HubErr_User_Reset=132,
    GenErr_AppliedHubFix=133,
    PowerErr_SyncResumePortFailed=134,
    PnpErr_InvalidContainerID=135,
    SsErr_FailedSshSuspendHub=136,
    SsErr_FailedSshResumeHub=137,
    PowerErr_ResumeOnResetFailed=138,
    HubErr_PortChangeStorm=139,
    UsbErr_GetBillboardStringDescrptorFailed=140,
    UsbErr_GetAlternateModeStringDescrptorFailed=141,
    ExceptionClassLast=142
};

struct _LIST_ENTRY// Size=0x10 (Id=5)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _unnamed_10// Size=0x8 (Id=10)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=11)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_10 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _HUB_EXCEPTION_RECORD// Size=0x258 (Id=478)
{
    unsigned long Sig;// Offset=0x0 Size=0x4
    unsigned long TotalLength;// Offset=0x4 Size=0x4
    struct _DEVICE_OBJECT * HubFdo;// Offset=0x8 Size=0x8
    enum _HUB_EXCEPTION_CLASS Class;// Offset=0x10 Size=0x4
    unsigned short PortNumber;// Offset=0x14 Size=0x2
    unsigned short Pad;// Offset=0x16 Size=0x2
    long UsbdStatus;// Offset=0x18 Size=0x4
    long NtStatus;// Offset=0x1c Size=0x4
    unsigned short DataLength;// Offset=0x20 Size=0x2
    unsigned char * Data;// Offset=0x28 Size=0x8
    struct _LIST_ENTRY ExrLink;// Offset=0x30 Size=0x10
    union _LARGE_INTEGER EventTime;// Offset=0x40 Size=0x8
    struct LOG_ENTRY64 DebugLog[16];// Offset=0x48 Size=0x200
    unsigned long Line;// Offset=0x248 Size=0x4
    unsigned char * SzFile;// Offset=0x250 Size=0x8
};
