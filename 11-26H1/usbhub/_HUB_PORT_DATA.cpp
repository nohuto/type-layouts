enum _HUB_PCQ_STATE
{
    Pcq_Pause=1,
    Pcq_Run_Idle=2,
    Pcq_Run_wBusy=3,
    Pcq_Run_wQueued=4,
    Pcq_Stop_wQueued=5,
    Pcq_Stop=6,
    Pcq_PortSuspended=7,
    Pcq_Suspend_wBusy=8,
    Pcq_Suspend_wQueued=9,
    Pcq_Suspend_wBusy_Signal=10,
    Pcq_Stop_Suspended=11,
    Pcq_Stop_wBusy=12,
    Pcq_Stop_wBusy_Signal=13,
    Pcq_Run_wBusy_Signal=14,
    Pcq_HW_Stop=15,
    Pcq_HW_Stop_wQueued=16,
    Pcq_HW_Stop_wBusy=17,
    Pcq_Wait_Resume=18,
    Pcq_Error=19,
    Pcq_Closed=20
};

enum _STATE_CONTEXT_TYPE
{
    HubCtx_Fdo=0,
    HubCtx_Pdo=1,
    HubCtx_PortData=2,
    HubCtx_Global=3,
    HubCtx_Api=4,
    HubCtx_SshApi=5,
    HubCtx_SshTimer=6,
    HubCtx_Overcurrent=7,
    HubCtx_Reset=8
};

enum _HUB_FDO_POWERSTATE
{
    FdoS0_D0=201,
    FdoWaitSxIoComplete_D0=202,
    FdoWaitSx_WaitDx=203,
    FdoWaitSx_WaitDxPoComplete=204,
    FdoSx_Dx=205,
    FdoSx_D0=206,
    FdoWaitS0IoComplete_D0=207,
    FdoWaitS0IoComplete_Dx=208,
    Fdo_WaitD0=209,
    Fdo_WaitD0Worker=210,
    Fdo_WaitD0PoComplete=211,
    Fdo_PowerFailure=212,
    Fdo_PowerFailureDisconnected=213
};

enum _HUB_FDO_EVENT
{
    Ev_ADD=1,
    Ev_IRP_MN_REMOVE=2,
    Ev_IRP_MN_S_REMOVE=3,
    Ev_IRP_MN_START=4,
    Ev_IRP_MN_STOP=5,
    Ev_ADD_ERROR=6,
    Ev_START_ERROR=7,
    Ev_RH_CALLBACK=8,
    Ev_NULL_EVENT=9,
    Ev_QBR=10,
    Ev_API=11,
    Ev_CB_TIMEOUT=12,
    Ev_ETW=13,
    Ev_SYSTEM_POWER=101,
    Ev_DEVICE_POWER=102,
    Ev_SET_POWER_SX=103,
    Ev_SET_POWER_S0=104,
    Ev_SET_POWER_D3=105,
    Ev_SET_POWER_D2=106,
    Ev_SET_POWER_D0=107,
    Ev_DX_POCOMPLETE=108,
    Ev_DX_IOCOMPLETE=109,
    Ev_D0_POCOMPLETE=110,
    Ev_D0_IOCOMPLETE=111,
    Ev_SX_IOCOMPLETE=112,
    Ev_S0_IOCOMPLETE=113,
    Ev_D0_WORKER=114,
    Ev_D0_WORKER_Warm=115,
    Ev_D0_WORKER_Cold=116,
    Ev_SX_IOCOMPLETE_ERROR=117,
    Ev_S0_IOCOMPLETE_ERROR=118,
    Ev_POREQUEST_ERROR=119,
    Ev_D0_POCOMPLETE_ERROR=120,
    Ev_DISCONNECTED=121,
    Ev_WAKE_POCOMPLETE=122,
    Ev_D0_IOCOMPLETE_ERROR=123,
    Ev_TEST_ERROR=124,
    Ev_WAKE_POCOMPLETE_ERROR=125,
    Ev_PDO_POWER=126,
    Ev_SET_POWER_S0_NoPM=127,
    Ev_SET_POWER_SX_NoPM=128,
    Ev_SET_POWER_S0_Internal=129,
    Ev_D0_WORKER_Complete=130,
    Ev_PO_REQUEST_D0_WORKER=131,
    Ev_D0_POCOMPLETE_QW_ERROR=132,
    Ev_IDLE_CHECK=133,
    Ev_DRIVER_RESET=134,
    Ev_IDLE_CB_WORKER=135,
    Ev_PDO_SURPRISE_REMOVE=136,
    Ev_PDO_REMOVE_DEVICE=137
};

enum _HUB_FDO_PNPSTATE
{
    FDO_WaitPnpAdd=1,
    FDO_WaitPnpStart=2,
    FDO_WaitPnpUnload=3,
    FDO_WaitPnpRemove=4,
    FDO_WaitPnpStop=5,
    FDO_WaitPnpStop_CB=6,
    FDO_WaitPnpRestart=7
};

enum _HARD_RESET_STATE
{
    HReset_Disabled=1,
    HReset_WaitReady=2,
    HReset_Queued=3,
    HReset_ResetStop=4,
    HReset_WaitDone=5,
    HReset_Paused=6,
    HReset_PausedWaitDone=7
};

enum _HARD_RESET_EVENT
{
    HRE_Enable=1,
    HRE_Disable=2,
    HRE_RequestReset=3,
    HRE_wRun=4,
    HRE_wResetSuccess=5,
    HRE_wResetFailed=6,
    HRE_wNoESD=7,
    HRE_wDone=8,
    HRE_UserRequestReset=9,
    HRE_Pause=10,
    HRE_Resume=11
};

enum _HUB_BUS_STATE
{
    BS_BusInit=1,
    BS_BusStop=2,
    BS_BusRun=3,
    BS_BusPause=4,
    BS_BusSuspend=5,
    BS_BusRemove=6
};

enum _HUB_BUS_EVENT
{
    BE_BusAdd=1,
    BE_BusRemove=2,
    BE_BusPnpStop=3,
    BE_BusPnpAsyncStart=4,
    BE_BusPnpStart=5,
    BE_BusSuspend=6,
    BE_RequestBusPause=7,
    BE_RequestBusResume=8,
    BE_BusPnpStartError=9,
    BE_RequestBusReset=10,
    BE_RequestDisconnect=11,
    BE_BusDeviceRemove=12
};

enum _HUB_PDO_HWPNP_EVENT
{
    PdoEv_PdoSurpriseRemove=1,
    PdoEv_RegisterPdo=2,
    PdoEv_Disconnect=3,
    PdoEv_ErrorDisconnect=4,
    PdoEv_BusPnpStop=5,
    PdoEv_PdoRemove=6,
    PdoEv_CreatePdo=7,
    PdoEv_QBR=8,
    PdoEv_QBR_Removed=9,
    PdoEv_BusPause=10,
    PdoEv_BusRemove=11,
    PdoEv_Internal=12,
    PdoEv_DeviceReset=13,
    PdoEv_DeviceCycle=14,
    PdoEv_DeviceResume=15,
    PdoEv_PortStatus=16,
    PdoEv_BusPnpFreeResources=17,
    PdoEv_PdoSurpriseRemove_NOT=18,
    PdoEv_PortSuspendAbortEnum=19,
    PdoEv_PdoSoftDisconnect1=20,
    PdoEv_PdoSoftDisconnect2=21,
    PdoEv_PdoSoftDisconnect3=22,
    PdoEv_PdoSoftDisconnect4=23,
    PdoEv_PceDisconnect=24,
    PdoEv_ETW=25,
    PdoEv_SShResume=26
};

enum _HUB_PDO_HWPNP_STATE
{
    Pdo_Created=1,
    Pdo_HwPresent=2,
    Pdo_PnpRefHwPresent=3,
    Pdo_PnpRefHwAbsent=4,
    Pdo_HwAbsent=5,
    Pdo_Deleted=6
};

enum _HUB_PCQ_EVENT
{
    PCE_Enable=1,
    PCE_Disable=2,
    PCE_Resume=3,
    PCE_QueueChange=4,
    PCE_wRun=5,
    PCE_wDone=6,
    PCE_wBusy=7,
    PCE_SoftDisconnect=8,
    PCE_BusReset=9,
    PCE_Suspend=10,
    PCE_BusDisconnect=11,
    PCE_HardwareWake=12,
    PCE_SD_Resume=13,
    PCE_ResumeTimeout=14,
    PCE_QueueDriverReset=15,
    PCE_wChange=16,
    PCE_HW_Stop=17,
    PCE_psSUSPEND=18,
    PCE_psPAUSED=19,
    PCE_Check=20,
    PCE_ResumeDone=21,
    PCE_Close=22,
    PCE_wChangeERROR=23
};

enum _HUB_PINDICATOR_EVENT
{
    EvPIND_Timeout=1,
    EvPIND_Disable=2,
    EvPIND_SetAuto=3,
    EvPIND_SetBlink=4,
    EvPIND_Enable=5
};

enum _SSH_HUB_EVENT
{
    SSH_Event_IdleTimer=1,
    SSH_Event_SuspendHubSucceeded=2,
    SSH_Event_SuspendHubFailed=3,
    SSH_Event_HardReset=4,
    SSH_Event_GetPortStatus=5,
    SSH_Event_ResumeHub=6,
    SSH_Event_ResumeHubComplete=7,
    SSH_Event_PropagateResume=8,
    SSH_Event_ResumeHubFailed=9
};

enum _BS_PAUSE_REASON
{
    PauseReason_None=1,
    PauseReason_SelectiveSuspend=2,
    PauseReason_SystemPower=3,
    PauseReason_PnPStop=4,
    PauseReason_AsyncStop=5,
    PauseReason_HardReset=6
};

struct _HGSL// Size=0x8 (Id=209)
{
    unsigned char Irql;// Offset=0x0 Size=0x1
    unsigned long Locked;// Offset=0x4 Size=0x4
};

enum _HUB_ISR_WORKER_STATE
{
    HubIsrWorker_NotQueued=0,
    HubIsrWorker_Queued=1
};

struct _LIST_ENTRY// Size=0x10 (Id=5)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _STATE_CONTEXT// Size=0xb0 (Id=192)
{
    unsigned long CtxSig;// Offset=0x0 Size=0x4
    enum _STATE_CONTEXT_TYPE Type;// Offset=0x4 Size=0x4
    struct _DEVICE_OBJECT * HubFdo;// Offset=0x8 Size=0x8
    void * Parent;// Offset=0x10 Size=0x8
    struct _KTHREAD * ScThread;// Offset=0x18 Size=0x8
    unsigned long FdoPwrSig;// Offset=0x20 Size=0x4
    unsigned long FdoPwrTag;// Offset=0x24 Size=0x4
    enum _HUB_FDO_POWERSTATE FdoPwrState;// Offset=0x28 Size=0x4
    enum _HUB_FDO_EVENT FdoPwrEvent;// Offset=0x2c Size=0x4
    unsigned long FdoPnpSig;// Offset=0x30 Size=0x4
    unsigned long FdoPnpTag;// Offset=0x34 Size=0x4
    enum _HUB_FDO_PNPSTATE FdoPnpState;// Offset=0x38 Size=0x4
    enum _HUB_FDO_EVENT FdoPnpEvent;// Offset=0x3c Size=0x4
    unsigned long HardResetSig;// Offset=0x40 Size=0x4
    enum _HARD_RESET_STATE HardResetState;// Offset=0x44 Size=0x4
    enum _HARD_RESET_EVENT HardResetEvent;// Offset=0x48 Size=0x4
    unsigned long BusSig;// Offset=0x4c Size=0x4
    enum _HUB_BUS_STATE BusState;// Offset=0x50 Size=0x4
    enum _HUB_BUS_EVENT BusEvent;// Offset=0x54 Size=0x4
    unsigned long PdoSig;// Offset=0x58 Size=0x4
    enum _HUB_PDO_HWPNP_EVENT PdoEvent;// Offset=0x5c Size=0x4
    enum _HUB_PDO_HWPNP_STATE PdoState;// Offset=0x60 Size=0x4
    unsigned long PcSig;// Offset=0x64 Size=0x4
    enum _HUB_PCQ_EVENT PcqEvent;// Offset=0x68 Size=0x4
    enum _HUB_PCQ_STATE PcqState;// Offset=0x6c Size=0x4
    unsigned long PindSig;// Offset=0x70 Size=0x4
    enum _HUB_PINDICATOR_EVENT PindEvent;// Offset=0x74 Size=0x4
    unsigned long SSH_Sig;// Offset=0x78 Size=0x4
    enum _SSH_HUB_EVENT SSH_Event;// Offset=0x7c Size=0x4
    enum _BS_PAUSE_REASON PauseReason;// Offset=0x80 Size=0x4
    struct _HGSL gLock;// Offset=0x84 Size=0x8
    long PCE_Close_stack;// Offset=0x8c Size=0x4
    long PCE_Suspend_stack;// Offset=0x90 Size=0x4
    long PortNumber;// Offset=0x94 Size=0x4
    enum _HUB_ISR_WORKER_STATE HubIsrWorkerState;// Offset=0x98 Size=0x4
    struct _LIST_ENTRY HubIsrListLink;// Offset=0xa0 Size=0x10
};

union _USB_HUB_HW_PORT_STATUS// Size=0x2 (Id=312)
{
    unsigned short us;// Offset=0x0 Size=0x2
    struct // Size=0x2 (Id=0)
    {
        unsigned short Connect:1;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0x1
        unsigned short Enable:1;// Offset=0x0 Size=0x2 BitOffset=0x1 BitSize=0x1
        unsigned short Suspend:1;// Offset=0x0 Size=0x2 BitOffset=0x2 BitSize=0x1
        unsigned short Overcurrent:1;// Offset=0x0 Size=0x2 BitOffset=0x3 BitSize=0x1
        unsigned short Reset:1;// Offset=0x0 Size=0x2 BitOffset=0x4 BitSize=0x1
        unsigned short Reserved1:3;// Offset=0x0 Size=0x2 BitOffset=0x5 BitSize=0x3
        unsigned short Power:1;// Offset=0x0 Size=0x2 BitOffset=0x8 BitSize=0x1
        unsigned short LowSpeed:1;// Offset=0x0 Size=0x2 BitOffset=0x9 BitSize=0x1
        unsigned short HighSpeed:1;// Offset=0x0 Size=0x2 BitOffset=0xa BitSize=0x1
        unsigned short Reserved2:5;// Offset=0x0 Size=0x2 BitOffset=0xb BitSize=0x5
    };
};

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

enum _USB_CONNECTION_STATUS
{
    NoDeviceConnected=0,
    DeviceConnected=1,
    DeviceFailedEnumeration=2,
    DeviceGeneralFailure=3,
    DeviceCausedOvercurrent=4,
    DeviceNotEnoughPower=5,
    DeviceNotEnoughBandwidth=6,
    DeviceHubNestedTooDeeply=7,
    DeviceInLegacyHub=8,
    DeviceEnumerating=9,
    DeviceReset=10
};

struct _DISPATCHER_HEADER// Size=0x18 (Id=334)
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

struct _KEVENT// Size=0x18 (Id=21)
{
    struct _DISPATCHER_HEADER Header;// Offset=0x0 Size=0x18
};

struct _unnamed_12// Size=0x8 (Id=12)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    unsigned long HighPart;// Offset=0x4 Size=0x4
};

union _ULARGE_INTEGER// Size=0x8 (Id=13)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    unsigned long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_12 u;// Offset=0x0 Size=0x8
    unsigned long long QuadPart;// Offset=0x0 Size=0x8
};

struct _KTIMER// Size=0x40 (Id=431)
{
    struct _DISPATCHER_HEADER Header;// Offset=0x0 Size=0x18
    union _ULARGE_INTEGER DueTime;// Offset=0x18 Size=0x8
    struct _LIST_ENTRY TimerListEntry;// Offset=0x20 Size=0x10
    struct _KDPC * Dpc;// Offset=0x30 Size=0x8
    unsigned short Processor;// Offset=0x38 Size=0x2
    unsigned char TimerType;// Offset=0x3a Size=0x1
    char TimerDifObjTracking;// Offset=0x3b Size=0x1
    unsigned long Period;// Offset=0x3c Size=0x4
};

struct _SINGLE_LIST_ENTRY// Size=0x8 (Id=6)
{
    struct _SINGLE_LIST_ENTRY * Next;// Offset=0x0 Size=0x8
};

struct _KDPC// Size=0x40 (Id=87)
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

enum _PORT_HW_PENDING_STATE
{
    PortHw_Waiting=0,
    PortHw_ResetPending=1,
    PortHw_SuspendPending=2,
    PortHw_ResumePending=3,
    PortHw_TimeoutPending=4
};

struct _PORT_CHANGE_LOG_ENTRY// Size=0x20 (Id=299)
{
    unsigned long CurrentState;// Offset=0x0 Size=0x4
    unsigned long Change;// Offset=0x4 Size=0x4
    void * Pdo;// Offset=0x8 Size=0x8
    unsigned short HwPortStatus;// Offset=0x10 Size=0x2
    unsigned char PortStatusBits;// Offset=0x12 Size=0x1
    unsigned char FlushFlag;// Offset=0x13 Size=0x1
    unsigned long UsbTimeIdx;// Offset=0x14 Size=0x4
    unsigned long FrameAge;// Offset=0x18 Size=0x4
    unsigned long ValidEntry;// Offset=0x1c Size=0x4
};

enum _PCQEV_STATUS
{
    PcqEv_Reset=10,
    PcqEv_Wait=20,
    PcqEv_Signal=30
};

struct _G_STATE_LOG_ENTRY// Size=0x20 (Id=194)
{
    unsigned long Event;// Offset=0x0 Size=0x4
    unsigned long CurrentState;// Offset=0x4 Size=0x4
    unsigned long NextState;// Offset=0x8 Size=0x4
    unsigned long Tag;// Offset=0xc Size=0x4
    enum _PCQEV_STATUS PcqEv_Suspend;// Offset=0x10 Size=0x4
    enum _PCQEV_STATUS PcqEv_Resume;// Offset=0x14 Size=0x4
    enum _PCQEV_STATUS PcqEv_ChDone;// Offset=0x18 Size=0x4
    enum _PCQEV_STATUS PcqEv_DriverReset;// Offset=0x1c Size=0x4
};

union _PORTDATA_FLAGS// Size=0x4 (Id=277)
{
    unsigned long ul;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long NoDebounce:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long ReSuspendPort:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long Reenumerate:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long Reserved:29;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1d
    };
};

enum _HUB_TIMEROBJ_STATE
{
    TimerObj_Disabled=0,
    TimerObj_Enabled=1,
    TimerObj_Busy=2
};

enum _HUB_TIMEROBJ_TYPE
{
    TimerObj_Static=0,
    TimerObj_Dynamic=1
};

struct _HUB_TIMER_OBJECT// Size=0x50 (Id=326)
{
    unsigned long Sig;// Offset=0x0 Size=0x4
    enum _HUB_TIMEROBJ_STATE State;// Offset=0x4 Size=0x4
    enum _HUB_TIMEROBJ_TYPE Type;// Offset=0x8 Size=0x4
    long ExpireTime;// Offset=0xc Size=0x4
    long MillisecsToExpire;// Offset=0x10 Size=0x4
    unsigned long Retry;// Offset=0x14 Size=0x4
    unsigned long PortNumber;// Offset=0x18 Size=0x4
    unsigned long Parameter1;// Offset=0x1c Size=0x4
    unsigned long Parameter2;// Offset=0x20 Size=0x4
    void * Context;// Offset=0x28 Size=0x8
    unsigned long  ( * TimeoutFunction)(struct _HUB_TIMER_OBJECT * ,struct _DEVICE_OBJECT * ,unsigned long ,void * ,unsigned long ,unsigned long );// Offset=0x30 Size=0x8
    struct _LIST_ENTRY EnableLink;// Offset=0x38 Size=0x10
    unsigned long Tag;// Offset=0x48 Size=0x4
};

enum _HUB_PINDICATOR_STATE
{
    Pindicator_BlinkOff=1,
    Pindicator_BlinkOn=2,
    Pindicator_Auto=3,
    Pindicator_Disabled=4
};

enum _USBHUB_FATAL_TIMEOUT_CODE
{
    Timeout_Not_Fatal=0,
    Timeout_SyncResumePort=1,
    Timeout_PCE_Suspend_Action0=2,
    Timeout_PCE_Suspend_Action1=3,
    Timeout_PCE_Suspend_Action2=4,
    Timeout_PCE_Suspend_Action3=5,
    Timeout_PCE_Disable_Action=6,
    Timeout_PCE_Close_Action=7,
    Timeout_SSP_Disable_Action=8,
    Timeout_SysPowerSx_Action=9,
    Timeout_ProcessPCQ_Action=10,
    Timeout_Not_Fatal_Process_Queue=11
};

struct _ACPI_UPC_PACKAGE// Size=0xc (Id=394)
{
    unsigned char PortIsConnectable;// Offset=0x0 Size=0x1
    unsigned char PortConnectorType;// Offset=0x1 Size=0x1
    unsigned long Reserved0;// Offset=0x4 Size=0x4
    unsigned long Reserved1;// Offset=0x8 Size=0x4
};

struct _ACPI_PLD_BUFFER// Size=0x10 (Id=177)
{
    struct // Size=0x10 (Id=0)
    {
        unsigned int Revision:7;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x7
        unsigned int IgnoreColor:1;// Offset=0x0 Size=0x4 BitOffset=0x7 BitSize=0x1
        unsigned int Color:24;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x18
        unsigned int Width:16;// Offset=0x4 Size=0x4 BitOffset=0x0 BitSize=0x10
        unsigned int Height:16;// Offset=0x4 Size=0x4 BitOffset=0x10 BitSize=0x10
        unsigned int UserVisible:1;// Offset=0x8 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned int Dock:1;// Offset=0x8 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned int Lid:1;// Offset=0x8 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned int Panel:3;// Offset=0x8 Size=0x4 BitOffset=0x3 BitSize=0x3
        unsigned int VerticalPosition:2;// Offset=0x8 Size=0x4 BitOffset=0x6 BitSize=0x2
        unsigned int HorizontalPosition:2;// Offset=0x8 Size=0x4 BitOffset=0x8 BitSize=0x2
        unsigned int Shape:4;// Offset=0x8 Size=0x4 BitOffset=0xa BitSize=0x4
        unsigned int GroupOrientation:1;// Offset=0x8 Size=0x4 BitOffset=0xe BitSize=0x1
        unsigned int GroupToken:8;// Offset=0x8 Size=0x4 BitOffset=0xf BitSize=0x8
        unsigned int GroupPosition:8;// Offset=0x8 Size=0x4 BitOffset=0x17 BitSize=0x8
        unsigned int Bay:1;// Offset=0x8 Size=0x4 BitOffset=0x1f BitSize=0x1
        unsigned int Ejectable:1;// Offset=0xc Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned int EjectionRequired:1;// Offset=0xc Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned int CabinetNumber:8;// Offset=0xc Size=0x4 BitOffset=0x2 BitSize=0x8
        unsigned int CardCageNumber:8;// Offset=0xc Size=0x4 BitOffset=0xa BitSize=0x8
        unsigned int Reserved:14;// Offset=0xc Size=0x4 BitOffset=0x12 BitSize=0xe
    };
};

struct _HUB_PORT_DATA// Size=0xb70 (Id=204)
{
    unsigned long Sig;// Offset=0x0 Size=0x4
    unsigned short PortNumber;// Offset=0x4 Size=0x2
    unsigned long Pcq_Busy;// Offset=0x8 Size=0x4
    enum _HUB_PCQ_STATE Pcq_State;// Offset=0xc Size=0x4
    struct _DEVICE_OBJECT * HubFdo;// Offset=0x10 Size=0x8
    struct _STATE_CONTEXT PdContext;// Offset=0x18 Size=0xb0
    struct _STATE_CONTEXT OvercurrentContext;// Offset=0xc8 Size=0xb0
    struct _STATE_CONTEXT * CurrentSc;// Offset=0x178 Size=0x8
    struct _KTHREAD * PcqKthread;// Offset=0x180 Size=0x8
    void * PnpPdo;// Offset=0x188 Size=0x8
    unsigned long CurrentState;// Offset=0x190 Size=0x4
    long ConnectCount;// Offset=0x194 Size=0x4
    long SpuriousChangeCount;// Offset=0x198 Size=0x4
    long DriverCycleCount;// Offset=0x19c Size=0x4
    long PdoLatched;// Offset=0x1a0 Size=0x4
    union _USB_HUB_HW_PORT_STATUS CurrentPortStatus;// Offset=0x1a4 Size=0x2
    enum _HUB_EXCEPTION_CLASS LastExceptionClass;// Offset=0x1a8 Size=0x4
    enum _USB_CONNECTION_STATUS ConnectionStatus;// Offset=0x1ac Size=0x4
    unsigned long LastPowerRequested;// Offset=0x1b0 Size=0x4
    unsigned long LastBandwidthRequested;// Offset=0x1b4 Size=0x4
    unsigned long long PortChangeListSpin;// Offset=0x1b8 Size=0x8
    unsigned long PortChangeListLock;// Offset=0x1c0 Size=0x4
    struct _LIST_ENTRY PortChangeList;// Offset=0x1c8 Size=0x10
    struct _KEVENT PortChangeListDone;// Offset=0x1d8 Size=0x18
    struct _KEVENT PortChangeListInsertEvent;// Offset=0x1f0 Size=0x18
    struct _KEVENT EnableDisableLock;// Offset=0x208 Size=0x18
    unsigned long EnumRetries;// Offset=0x220 Size=0x4
    struct _KTIMER ResetTimer;// Offset=0x228 Size=0x40
    struct _KDPC ResetTimerDpc;// Offset=0x268 Size=0x40
    void * ResetTimerPending;// Offset=0x2a8 Size=0x8
    void * OutOfBandwidthTimer;// Offset=0x2b0 Size=0x8
    enum _PORT_HW_PENDING_STATE PortHwPendingState;// Offset=0x2b8 Size=0x4
    struct _KTHREAD * PcqResumeKthread;// Offset=0x2c0 Size=0x8
    struct _KEVENT PortResumeEvent;// Offset=0x2c8 Size=0x18
    struct _KTHREAD * PcqSuspendKthread;// Offset=0x2e0 Size=0x8
    struct _KEVENT PortSuspendEvent;// Offset=0x2e8 Size=0x18
    struct _KEVENT ResetTimeoutEvent;// Offset=0x300 Size=0x18
    void * PausePending;// Offset=0x318 Size=0x8
    struct _KEVENT PortPausedEvent;// Offset=0x320 Size=0x18
    struct _KEVENT DriverResetEvent;// Offset=0x338 Size=0x18
    unsigned long TmResetStart;// Offset=0x350 Size=0x4
    unsigned long TmResetEnd;// Offset=0x354 Size=0x4
    unsigned long PcLogIdx;// Offset=0x358 Size=0x4
    unsigned long PcLogEntrySize;// Offset=0x35c Size=0x4
    struct _PORT_CHANGE_LOG_ENTRY PcLog[16];// Offset=0x360 Size=0x200
    struct _G_STATE_LOG_ENTRY PcqLog[32];// Offset=0x560 Size=0x400
    unsigned long PcqLogIdx;// Offset=0x960 Size=0x4
    unsigned long OvercurrentCounter;// Offset=0x964 Size=0x4
    union _PORTDATA_FLAGS PD_Flags;// Offset=0x968 Size=0x4
    unsigned long PortChangeWorkerState;// Offset=0x96c Size=0x4
    struct _KEVENT PortChangeWorkerDone;// Offset=0x970 Size=0x18
    long PortChangeWorkItemReference;// Offset=0x988 Size=0x4
    unsigned long long PortChangeWorkerSpin;// Offset=0x990 Size=0x8
    struct _IO_WORKITEM * PortChangeWorkItem;// Offset=0x998 Size=0x8
    struct _KEVENT PortChangeQueueLock;// Offset=0x9a0 Size=0x18
    struct _G_STATE_LOG_ENTRY PindLog[8];// Offset=0x9b8 Size=0x100
    struct _HUB_TIMER_OBJECT PindicatorTimer;// Offset=0xab8 Size=0x50
    enum _HUB_PINDICATOR_STATE Pindicator_State;// Offset=0xb08 Size=0x4
    unsigned long PindLogIdx;// Offset=0xb0c Size=0x4
    unsigned long PindicatorDutyCycle;// Offset=0xb10 Size=0x4
    unsigned short PindicatorLED;// Offset=0xb14 Size=0x2
    unsigned char ResumeTimeout;// Offset=0xb16 Size=0x1
    unsigned char ConnectChangeQueued;// Offset=0xb17 Size=0x1
    unsigned char ConnectChangeDispatched;// Offset=0xb18 Size=0x1
    unsigned char NeedsSoftConnectChange;// Offset=0xb19 Size=0x1
    enum _USBHUB_FATAL_TIMEOUT_CODE TimeoutCode;// Offset=0xb1c Size=0x4
    struct _ACPI_UPC_PACKAGE acpiUpcPackage;// Offset=0xb20 Size=0xc
    struct _ACPI_PLD_BUFFER acpiPldBuffer;// Offset=0xb2c Size=0x10
    long QueuedPortChangeCount;// Offset=0xb3c Size=0x4
    struct _SSH_BUSY_HANDLE * OvercurrentSshHandle;// Offset=0xb40 Size=0x8
    struct _KEVENT OvercurrentLock;// Offset=0xb48 Size=0x18
    unsigned long OvercurrentHubBusyRefCount;// Offset=0xb60 Size=0x4
    unsigned char OvercurrentPopup;// Offset=0xb64 Size=0x1
    unsigned long long UcmConnectorId;// Offset=0xb68 Size=0x8
};
