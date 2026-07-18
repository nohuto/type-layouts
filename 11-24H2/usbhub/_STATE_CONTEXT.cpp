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

struct _LIST_ENTRY// Size=0x10 (Id=4)
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
