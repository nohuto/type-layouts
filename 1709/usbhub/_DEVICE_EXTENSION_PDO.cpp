enum _PCQEV_STATUS
{
    PcqEv_Reset=10,
    PcqEv_Wait=20,
    PcqEv_Signal=30
};

struct _G_STATE_LOG_ENTRY// Size=0x20 (Id=182)
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

enum _PDO_IO_STATE_FLAG
{
    Pdo_UndefinedIo=0,
    Pdo_AllowIo=1,
    Pdo_FailIo=2
};

enum _DEVICE_POWER_STATE
{
    PowerDeviceUnspecified=0,
    PowerDeviceD0=1,
    PowerDeviceD1=2,
    PowerDeviceD2=3,
    PowerDeviceD3=4,
    PowerDeviceMaximum=5
};

enum _SYSTEM_POWER_STATE
{
    PowerSystemUnspecified=0,
    PowerSystemWorking=1,
    PowerSystemSleeping1=2,
    PowerSystemSleeping2=3,
    PowerSystemSleeping3=4,
    PowerSystemHibernate=5,
    PowerSystemShutdown=6,
    PowerSystemMaximum=7
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

struct _HGSL// Size=0x8 (Id=197)
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

struct _STATE_CONTEXT// Size=0xb0 (Id=180)
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

enum _HUB_PDO_SWPNP_STATE
{
    PDO_WaitPnpStart=100,
    PDO_WaitPnpStop=101,
    PDO_WaitPnpRemove=102,
    PDO_WaitPnpRestart=103
};

enum _HUB_PDO_POWER_STATE
{
    Pdo_D0=1,
    Pdo_WaitD0Worker=2,
    Pdo_WaitD0=3,
    Pdo_Dx=4,
    Pdo_WaitDx=5,
    Pdo_PowerFailure=6,
    Pdo_D0_ResumePending=7,
    Pdo_Dx_ResumeRequested=8
};

enum _USB_DEVICE_HANDLE_STATE
{
    PdoDevH_Init=0,
    PdoDevH_Invalid=1,
    PdoDevH_Valid=2
};

enum _USB_DEVICE_SPEED
{
    UsbLowSpeed=0,
    UsbFullSpeed=1,
    UsbHighSpeed=2,
    UsbSuperSpeed=3
};

union _USB_EXTENDED_PORT_ATTRIBUTES// Size=0x4 (Id=256)
{
    unsigned long ul;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long NoConnector:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long SharedUsb2:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long MiniA_Connector:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long Oem_Connector:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long DeviceNotRemovable:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long AcpiUpcValid:1;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1
        unsigned long AcpiPldValid:1;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1
        unsigned long Reserved:25;// Offset=0x0 Size=0x4 BitOffset=0x7 BitSize=0x19
    };
};

struct _UNICODE_STRING// Size=0x10 (Id=126)
{
    unsigned short Length;// Offset=0x0 Size=0x2
    unsigned short MaximumLength;// Offset=0x2 Size=0x2
    wchar_t * Buffer;// Offset=0x8 Size=0x8
};

struct _DISPATCHER_HEADER// Size=0x18 (Id=255)
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

struct _KEVENT// Size=0x18 (Id=19)
{
    struct _DISPATCHER_HEADER Header;// Offset=0x0 Size=0x18
};

struct _WMILIB_CONTEXT// Size=0x40 (Id=346)
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

struct _USB_DEVICE_DESCRIPTOR// Size=0x12 (Id=206)
{
    unsigned char bLength;// Offset=0x0 Size=0x1
    unsigned char bDescriptorType;// Offset=0x1 Size=0x1
    unsigned short bcdUSB;// Offset=0x2 Size=0x2
    unsigned char bDeviceClass;// Offset=0x4 Size=0x1
    unsigned char bDeviceSubClass;// Offset=0x5 Size=0x1
    unsigned char bDeviceProtocol;// Offset=0x6 Size=0x1
    unsigned char bMaxPacketSize0;// Offset=0x7 Size=0x1
    unsigned short idVendor;// Offset=0x8 Size=0x2
    unsigned short idProduct;// Offset=0xa Size=0x2
    unsigned short bcdDevice;// Offset=0xc Size=0x2
    unsigned char iManufacturer;// Offset=0xe Size=0x1
    unsigned char iProduct;// Offset=0xf Size=0x1
    unsigned char iSerialNumber;// Offset=0x10 Size=0x1
    unsigned char bNumConfigurations;// Offset=0x11 Size=0x1
};

union _USBHUB_PDO_FLAGS// Size=0x4 (Id=250)
{
    unsigned long ul;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long HsDeviceRunningAtFs:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long DisableIdleSupport:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long DeviceIsHub:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long SymbolicLink:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long DeviceInterface:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long DeviceIsComposite:1;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1
        unsigned long DeviceIsBillboard:1;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1
        unsigned long WmiRegistered:1;// Offset=0x0 Size=0x4 BitOffset=0x7 BitSize=0x1
        unsigned long UsbWakeupSupported:1;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x1
        unsigned long SerialNumber:1;// Offset=0x0 Size=0x4 BitOffset=0x9 BitSize=0x1
        unsigned long PnpValid:1;// Offset=0x0 Size=0x4 BitOffset=0xa BitSize=0x1
        unsigned long ExtPropertyInstalled:1;// Offset=0x0 Size=0x4 BitOffset=0xb BitSize=0x1
        unsigned long EnumerationFailed:1;// Offset=0x0 Size=0x4 BitOffset=0xc BitSize=0x1
        unsigned long ResumeSignal:1;// Offset=0x0 Size=0x4 BitOffset=0xd BitSize=0x1
        unsigned long NeedsReset:1;// Offset=0x0 Size=0x4 BitOffset=0xe BitSize=0x1
        unsigned long DeviceArmedForWake:1;// Offset=0x0 Size=0x4 BitOffset=0xf BitSize=0x1
        unsigned long DeviceReservedUxd:1;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x1
        unsigned long CyclePortPending:1;// Offset=0x0 Size=0x4 BitOffset=0x11 BitSize=0x1
        unsigned long HubRemoved:1;// Offset=0x0 Size=0x4 BitOffset=0x12 BitSize=0x1
        unsigned long DeviceIsSuperSpeedCapable:1;// Offset=0x0 Size=0x4 BitOffset=0x13 BitSize=0x1
        unsigned long AllowIdleIrpInD3:1;// Offset=0x0 Size=0x4 BitOffset=0x14 BitSize=0x1
        unsigned long DecorateSerialNumber:1;// Offset=0x0 Size=0x4 BitOffset=0x15 BitSize=0x1
        unsigned long D3ColdEnabled:1;// Offset=0x0 Size=0x4 BitOffset=0x16 BitSize=0x1
        unsigned long D3ColdSupportedInAcpi:1;// Offset=0x0 Size=0x4 BitOffset=0x17 BitSize=0x1
        unsigned long D3ColdWaitForReconnect:1;// Offset=0x0 Size=0x4 BitOffset=0x18 BitSize=0x1
        unsigned long ResetOnLastResume:1;// Offset=0x0 Size=0x4 BitOffset=0x19 BitSize=0x1
        unsigned long InD3Cold:1;// Offset=0x0 Size=0x4 BitOffset=0x1a BitSize=0x1
        unsigned long PortDisabled:1;// Offset=0x0 Size=0x4 BitOffset=0x1b BitSize=0x1
        unsigned long PortPaused:1;// Offset=0x0 Size=0x4 BitOffset=0x1c BitSize=0x1
        unsigned long ResumeTimeSet:1;// Offset=0x0 Size=0x4 BitOffset=0x1d BitSize=0x1
        unsigned long MsOs20AltEnumCmdSent:1;// Offset=0x0 Size=0x4 BitOffset=0x1e BitSize=0x1
    };
};

union _HUBPDO_CLEANUP_FLAGS// Size=0x4 (Id=301)
{
    unsigned long ul;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long WaitPdoIo:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long DisconnectFromHub:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long IoDeletePdo:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long ResetPortData:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long IoDeleted:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
    };
};

union _USB_DEVICE_FLAGS// Size=0x4 (Id=246)
{
    unsigned long ul;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long MsOsDescriptorVc:8;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x8
        unsigned long DevFlagsInitialized:1;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x1
        unsigned long QueryMsOs:1;// Offset=0x0 Size=0x4 BitOffset=0x9 BitSize=0x1
        unsigned long MsOsSupported:1;// Offset=0x0 Size=0x4 BitOffset=0xa BitSize=0x1
        unsigned long DisableSerialNumber:1;// Offset=0x0 Size=0x4 BitOffset=0xb BitSize=0x1
        unsigned long ResetOnResume:1;// Offset=0x0 Size=0x4 BitOffset=0xc BitSize=0x1
        unsigned long DisableOnSoftRemove:1;// Offset=0x0 Size=0x4 BitOffset=0xd BitSize=0x1
        unsigned long RequestConfigDescOnReset:1;// Offset=0x0 Size=0x4 BitOffset=0xe BitSize=0x1
        unsigned long SkipContainerIdQuery:1;// Offset=0x0 Size=0x4 BitOffset=0xf BitSize=0x1
        unsigned long DisableUASP:1;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x1
        unsigned long SkipBOSDescriptorQuery:1;// Offset=0x0 Size=0x4 BitOffset=0x11 BitSize=0x1
        unsigned long DualRoleDevice:1;// Offset=0x0 Size=0x4 BitOffset=0x12 BitSize=0x1
        unsigned long FailGetStatusRequest:1;// Offset=0x0 Size=0x4 BitOffset=0x13 BitSize=0x1
        unsigned long Reserved:11;// Offset=0x0 Size=0x4 BitOffset=0x14 BitSize=0xb
    };
};

struct _IO_CSQ// Size=0x40 (Id=252)
{
    unsigned long Type;// Offset=0x0 Size=0x4
    void  ( * CsqInsertIrp)(struct _IO_CSQ * ,struct _IRP * );// Offset=0x8 Size=0x8
    void  ( * CsqRemoveIrp)(struct _IO_CSQ * ,struct _IRP * );// Offset=0x10 Size=0x8
    struct _IRP *  ( * CsqPeekNextIrp)(struct _IO_CSQ * ,struct _IRP * ,void * );// Offset=0x18 Size=0x8
    void  ( * CsqAcquireLock)(struct _IO_CSQ * ,unsigned char * );// Offset=0x20 Size=0x8
    void  ( * CsqReleaseLock)(struct _IO_CSQ * ,unsigned char );// Offset=0x28 Size=0x8
    void  ( * CsqCompleteCanceledIrp)(struct _IO_CSQ * ,struct _IRP * );// Offset=0x30 Size=0x8
    void * ReservePointer;// Offset=0x38 Size=0x8
};

enum _USB_IDLE_IRP_STATE
{
    IdleIrp_NoIrp=0,
    IdleIrp_WaitWorker=1,
    IdleIrp_CB_Pending=2,
    IdleIrp_CB_Canceled=3,
    IdleIrp_CB_Complete=4,
    IdleExIrp_IdleReady=5
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

struct _HUB_TIMER_OBJECT// Size=0x50 (Id=249)
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

struct _USB_ID_STRING// Size=0x10 (Id=338)
{
    unsigned short LanguageId;// Offset=0x0 Size=0x2
    unsigned short Pad;// Offset=0x2 Size=0x2
    unsigned long LengthInBytes;// Offset=0x4 Size=0x4
    wchar_t * Buffer;// Offset=0x8 Size=0x8
};

enum _USB_VBUS_STATE
{
    Vbus_Off=0,
    Vbus_On=1,
    Vbus_Interrupted=2
};

struct _USB_INTERFACE_DESCRIPTOR// Size=0x9 (Id=349)
{
    unsigned char bLength;// Offset=0x0 Size=0x1
    unsigned char bDescriptorType;// Offset=0x1 Size=0x1
    unsigned char bInterfaceNumber;// Offset=0x2 Size=0x1
    unsigned char bAlternateSetting;// Offset=0x3 Size=0x1
    unsigned char bNumEndpoints;// Offset=0x4 Size=0x1
    unsigned char bInterfaceClass;// Offset=0x5 Size=0x1
    unsigned char bInterfaceSubClass;// Offset=0x6 Size=0x1
    unsigned char bInterfaceProtocol;// Offset=0x7 Size=0x1
    unsigned char iInterface;// Offset=0x8 Size=0x1
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

struct _KSEMAPHORE// Size=0x20 (Id=289)
{
    struct _DISPATCHER_HEADER Header;// Offset=0x0 Size=0x18
    long Limit;// Offset=0x18 Size=0x4
};

struct _GUID// Size=0x10 (Id=122)
{
    unsigned long Data1;// Offset=0x0 Size=0x4
    unsigned short Data2;// Offset=0x4 Size=0x2
    unsigned short Data3;// Offset=0x6 Size=0x2
    unsigned char Data4[8];// Offset=0x8 Size=0x8
};

struct _USB_HUB_DEVICE_UXD_SETTINGS// Size=0x44 (Id=241)
{
    unsigned long Version;// Offset=0x0 Size=0x4
    struct _GUID PnpGuid;// Offset=0x4 Size=0x10
    struct _GUID OwnerGuid;// Offset=0x14 Size=0x10
    unsigned long DeleteOnShutdown;// Offset=0x24 Size=0x4
    unsigned long DeleteOnReload;// Offset=0x28 Size=0x4
    unsigned long DeleteOnDisconnect;// Offset=0x2c Size=0x4
    unsigned long Reserved[5];// Offset=0x30 Size=0x14
};

struct _USB_PORT_PATH// Size=0x1c (Id=313)
{
    unsigned long PortPathDepth;// Offset=0x0 Size=0x4
    unsigned long PortPath[6];// Offset=0x4 Size=0x18
};

union _USB_DEVICE_SQM_PROPERTIES// Size=0x4 (Id=294)
{
    unsigned long AsUlong;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long Reserved1:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long Reserved2:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long Virtualized:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long IsOnXhci:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long HostSpecialFiles:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long ValidBOSDescriptor:1;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1
        unsigned long SupportsStreams:1;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1
        unsigned long SupportsMultipleConfigurations:1;// Offset=0x0 Size=0x4 BitOffset=0x7 BitSize=0x1
        unsigned long Reserved3:1;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x1
        unsigned long IsSuperSpeedCapable:1;// Offset=0x0 Size=0x4 BitOffset=0x9 BitSize=0x1
    };
};

enum _GLOBAL_LIST_ENTRY_STATE
{
    PdoNotInGlobalList=0,
    PdoInGlobalList=1,
    PdoParentHubGone=2
};

union _MSOS20_FLAGS// Size=0x4 (Id=312)
{
    unsigned long AsUlong32;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long DescriptorSetInfo:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long DescriptorSetHeader:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long AlternateEnumeration:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long ConfigurationSubset:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long FunctionSubset:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long CompatibleId:1;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1
        unsigned long RegistryProperty:1;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1
        unsigned long MinResumeTime:1;// Offset=0x0 Size=0x4 BitOffset=0x7 BitSize=0x1
        unsigned long ModelId:1;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x1
        unsigned long CcgpDevice:1;// Offset=0x0 Size=0x4 BitOffset=0x9 BitSize=0x1
    };
};

struct _MSOS20_INFO// Size=0x38 (Id=282)
{
    union _MSOS20_FLAGS Flags;// Offset=0x0 Size=0x4
    unsigned short BytesReturned;// Offset=0x4 Size=0x2
    unsigned char * EndOfDescriptorSet;// Offset=0x8 Size=0x8
    struct _MSOS20_DESCRIPTOR_SET_HEADER * DescriptorSet;// Offset=0x10 Size=0x8
    struct _MSOS20_FEATURE_COMPATIBLE_ID_DESCRIPTOR * CompatibleIdDescriptor;// Offset=0x18 Size=0x8
    struct _MSOS20_FEATURE_MINIMUM_RESUME_TIME_DESCRIPTOR * MinResumeTimeDescriptor;// Offset=0x20 Size=0x8
    struct _MSOS20_FEATURE_MODEL_ID_DESCRIPTOR * ModelIdDescriptor;// Offset=0x28 Size=0x8
    struct _MSOS20_FEATURE_CCGP_DEVICE_DESCRIPTOR * CcgpDeviceDescriptor;// Offset=0x30 Size=0x8
};

struct _MSOS20_DESCRIPTOR_SET_INFO// Size=0x8 (Id=268)
{
    unsigned long dwWindowsVersion;// Offset=0x0 Size=0x4
    unsigned short wLength;// Offset=0x4 Size=0x2
    unsigned char bMS_VendorCode;// Offset=0x6 Size=0x1
    unsigned char bAltEnumCmd;// Offset=0x7 Size=0x1
};

struct _D3COLD_SUPPORT_INTERFACE// Size=0x48 (Id=287)
{
    unsigned short Size;// Offset=0x0 Size=0x2
    unsigned short Version;// Offset=0x2 Size=0x2
    void * Context;// Offset=0x8 Size=0x8
    void  ( * InterfaceReference)(void * );// Offset=0x10 Size=0x8
    void  ( * InterfaceDereference)(void * );// Offset=0x18 Size=0x8
    void  ( * SetD3ColdSupport)(void * ,unsigned char );// Offset=0x20 Size=0x8
    long  ( * GetIdleWakeInfo)(void * ,enum _SYSTEM_POWER_STATE ,enum _DEVICE_WAKE_DEPTH * );// Offset=0x28 Size=0x8
    long  ( * GetD3ColdCapability)(void * ,unsigned char * );// Offset=0x30 Size=0x8
    long  ( * GetBusDriverD3ColdSupport)(void * ,unsigned char * );// Offset=0x38 Size=0x8
    void  ( * GetLastTransitionStatus)(void * ,enum _D3COLD_LAST_TRANSITION_STATUS * );// Offset=0x40 Size=0x8
};

struct _unnamed_130// Size=0x4 (Id=130)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned int MTPInitiator:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned int MTPResponder:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned int IpOverUsb:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned int VidStream:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned int Reserved:27;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1b
        unsigned int UcmIsPresent:1;// Offset=0x0 Size=0x4 BitOffset=0x1f BitSize=0x1
    };
};

union _USB_DUAL_ROLE_FEATURES// Size=0x4 (Id=131)
{
    unsigned long ul;// Offset=0x0 Size=0x4
    struct _unnamed_130 features;// Offset=0x0 Size=0x4
};

struct _DEVICE_EXTENSION_PDO// Size=0xbe8 (Id=164)
{
    unsigned long ExtensionType;// Offset=0x0 Size=0x4
    unsigned long PdoLogIdx;// Offset=0x4 Size=0x4
    unsigned long PwrLogIdx;// Offset=0x8 Size=0x4
    unsigned long PnpLogIdx;// Offset=0xc Size=0x4
    struct _G_STATE_LOG_ENTRY PdoLog[8];// Offset=0x10 Size=0x100
    struct _G_STATE_LOG_ENTRY PwrLog[8];// Offset=0x110 Size=0x100
    struct _G_STATE_LOG_ENTRY PnpLog[8];// Offset=0x210 Size=0x100
    enum _PDO_IO_STATE_FLAG IoState;// Offset=0x310 Size=0x4
    enum _DEVICE_POWER_STATE Pdo_Dx;// Offset=0x314 Size=0x4
    enum _SYSTEM_POWER_STATE Pdo_Sx;// Offset=0x318 Size=0x4
    void * CurrentPowerIrp[2];// Offset=0x320 Size=0x10
    void * CurrentPowerIrpStack[2];// Offset=0x330 Size=0x10
    unsigned long CurrentPowerIrpTag[2];// Offset=0x340 Size=0x8
    struct _DEVICE_OBJECT * Pdo;// Offset=0x348 Size=0x8
    struct _USB_START_FAILDATA * FailData;// Offset=0x350 Size=0x8
    struct _SSH_BUSY_HANDLE * EnumFailedBh;// Offset=0x358 Size=0x8
    struct _KEVENT * SyncDeviceResetEvent;// Offset=0x360 Size=0x8
    long SyncDeviceResetStatus;// Offset=0x368 Size=0x4
    struct _KTHREAD * SyncDeviceResetThread;// Offset=0x370 Size=0x8
    unsigned long PnpFuncHistoryIdx;// Offset=0x378 Size=0x4
    unsigned char PnpFuncHistory[16];// Offset=0x37c Size=0x10
    unsigned long PowerFuncHistoryIdx;// Offset=0x38c Size=0x4
    unsigned char PowerFuncHistory[16];// Offset=0x390 Size=0x10
    unsigned char PowerSubFuncHistory[16];// Offset=0x3a0 Size=0x10
    struct _STATE_CONTEXT PdoStateContext;// Offset=0x3b0 Size=0xb0
    enum _HUB_PDO_SWPNP_STATE CurrentPdoSwPnpState;// Offset=0x460 Size=0x4
    enum _HUB_PDO_HWPNP_STATE CurrentPdoHwPnpState;// Offset=0x464 Size=0x4
    enum _HUB_PDO_POWER_STATE CurrentPdoPowerState;// Offset=0x468 Size=0x4
    unsigned long PdoPnpDeviceState;// Offset=0x46c Size=0x4
    wchar_t * DeviceUsbRegPath;// Offset=0x470 Size=0x8
    enum _USB_DEVICE_HANDLE_STATE DeviceHandleState;// Offset=0x478 Size=0x4
    void * DeviceHandle;// Offset=0x480 Size=0x8
    enum _USB_DEVICE_SPEED Speed;// Offset=0x488 Size=0x4
    unsigned long CurrentPnpFunc;// Offset=0x48c Size=0x4
    unsigned long CurrentPowerFunc;// Offset=0x490 Size=0x4
    union _USB_EXTENDED_PORT_ATTRIBUTES PortAttributes;// Offset=0x494 Size=0x4
    struct _DEVICE_OBJECT * HubFdo;// Offset=0x498 Size=0x8
    enum _SYSTEM_POWER_STATE SystemWake;// Offset=0x4a0 Size=0x4
    struct _UNICODE_STRING SymbolicLinkName;// Offset=0x4a8 Size=0x10
    unsigned long long IoLock;// Offset=0x4b8 Size=0x8
    struct _LIST_ENTRY IoList;// Offset=0x4c0 Size=0x10
    struct _KEVENT IoRemoveEvent;// Offset=0x4d0 Size=0x18
    unsigned long IoRefCountNoRes;// Offset=0x4e8 Size=0x4
    struct _LIST_ENTRY LatchListHead;// Offset=0x4f0 Size=0x10
    unsigned long LatchCountNoRes;// Offset=0x500 Size=0x4
    struct _KEVENT LatchEvent;// Offset=0x508 Size=0x18
    struct _LIST_ENTRY PdoListLink;// Offset=0x520 Size=0x10
    struct _WMILIB_CONTEXT WmiLibInfo;// Offset=0x530 Size=0x40
    struct _USB_DEVICE_DESCRIPTOR DeviceDescriptor;// Offset=0x570 Size=0x12
    union _USBHUB_PDO_FLAGS PdoFlags;// Offset=0x584 Size=0x4
    union _HUBPDO_CLEANUP_FLAGS CleanupFlags;// Offset=0x588 Size=0x4
    unsigned short PortNumber;// Offset=0x58c Size=0x2
    union _USB_DEVICE_FLAGS DeviceFlags;// Offset=0x590 Size=0x4
    unsigned short PowerUpDelay;// Offset=0x594 Size=0x2
    long IdleStatus;// Offset=0x598 Size=0x4
    struct _LIST_ENTRY IdleIrpList;// Offset=0x5a0 Size=0x10
    struct _IO_CSQ IdleIrpCsq;// Offset=0x5b0 Size=0x40
    unsigned long long IdleIrpSpin;// Offset=0x5f0 Size=0x8
    enum _USB_IDLE_IRP_STATE IdleIrpState;// Offset=0x5f8 Size=0x4
    struct _HUB_TIMER_OBJECT IdleRetryTimer;// Offset=0x600 Size=0x50
    struct _HUB_TIMER_OBJECT D0WakeRetryTimer;// Offset=0x650 Size=0x50
    struct _HUB_TIMER_OBJECT DriverNotFoundTimer;// Offset=0x6a0 Size=0x50
    unsigned long IdleReadyState;// Offset=0x6f0 Size=0x4
    unsigned long IdleIrpLogIdx;// Offset=0x6f4 Size=0x4
    struct _G_STATE_LOG_ENTRY IdleIrpLog[8];// Offset=0x6f8 Size=0x100
    unsigned long long IdleIrpStateSpin;// Offset=0x7f8 Size=0x8
    struct _KEVENT IdleIrpCancelLock;// Offset=0x800 Size=0x18
    struct _USB_ID_STRING PnpDeviceId;// Offset=0x818 Size=0x10
    struct _USB_ID_STRING PnpHardwareId;// Offset=0x828 Size=0x10
    struct _USB_ID_STRING PnpCompatibleId;// Offset=0x838 Size=0x10
    struct _USB_ID_STRING SerialNumberId;// Offset=0x848 Size=0x10
    struct _USB_ID_STRING UniqueId;// Offset=0x858 Size=0x10
    struct _USB_ID_STRING ProductId;// Offset=0x868 Size=0x10
    struct _USB_ID_STRING SupportedLanguageIds;// Offset=0x878 Size=0x10
    struct _USB_ID_STRING GenericDevString;// Offset=0x888 Size=0x10
    struct _USB_ID_STRING FriendlyNameIdString;// Offset=0x898 Size=0x10
    struct _USB_ID_STRING TextLocationIdString;// Offset=0x8a8 Size=0x10
    wchar_t * PnPDeviceDescription;// Offset=0x8b8 Size=0x8
    unsigned long PnPDeviceDescriptionLength;// Offset=0x8c0 Size=0x4
    void * ReplicantPdo;// Offset=0x8c8 Size=0x8
    struct _LIST_ENTRY WakeIrpList;// Offset=0x8d0 Size=0x10
    struct _IO_CSQ WakeIrpCsq;// Offset=0x8e0 Size=0x40
    unsigned long long WakeIrpSpin;// Offset=0x920 Size=0x8
    long WakeIrpPending;// Offset=0x928 Size=0x4
    struct _KEVENT DeviceD0Event;// Offset=0x930 Size=0x18
    enum _USB_VBUS_STATE VbusState;// Offset=0x948 Size=0x4
    unsigned long HardErrorCount;// Offset=0x94c Size=0x4
    struct _USB_CONFIGURATION_DESCRIPTOR * CachedConfigDescriptor;// Offset=0x950 Size=0x8
    struct _USB_BOS_DESCRIPTOR * BosDescriptor;// Offset=0x958 Size=0x8
    struct _USB_DEVICE_CAPABILITY_BILLBOARD_DESCRIPTOR * BillboardDescriptor;// Offset=0x960 Size=0x8
    struct _UNICODE_STRING BillboardSymbolicLinkName;// Offset=0x968 Size=0x10
    unsigned char BillboardDeviceInterfaceCreated;// Offset=0x978 Size=0x1
    struct _USB_INTERFACE_DESCRIPTOR CompatIdInterfaceDescriptor;// Offset=0x979 Size=0x9
    wchar_t DeviceDescription[40];// Offset=0x982 Size=0x50
    struct _MS_EXT_CONFIG_DESC * MsExtConfigDesc;// Offset=0x9d8 Size=0x8
    union _LARGE_INTEGER Stat_PdoEnumeratedAt;// Offset=0x9e0 Size=0x8
    union _LARGE_INTEGER Stat_PdoCreatedAt;// Offset=0x9e8 Size=0x8
    union _LARGE_INTEGER Stat_Pdo_SetD0_StartAt;// Offset=0x9f0 Size=0x8
    union _LARGE_INTEGER Stat_Pdo_SetD0_CompleteAt;// Offset=0x9f8 Size=0x8
    struct _KSEMAPHORE UxdLock;// Offset=0xa00 Size=0x20
    struct _USB_HUB_DEVICE_UXD_SETTINGS UxdSettings;// Offset=0xa20 Size=0x44
    struct _UNICODE_STRING PhysicalDeviceObjectName;// Offset=0xa68 Size=0x10
    struct _USB_PORT_PATH PortPath;// Offset=0xa78 Size=0x1c
    struct _GUID ContainerID;// Offset=0xa94 Size=0x10
    unsigned char ContainerIDValid;// Offset=0xaa4 Size=0x1
    unsigned char DeviceSelectiveSuspended;// Offset=0xaa5 Size=0x1
    unsigned long InPathCount;// Offset=0xaa8 Size=0x4
    unsigned char IsBootDevice;// Offset=0xaac Size=0x1
    unsigned char ResetCompleteWithoutFailingIO;// Offset=0xaad Size=0x1
    unsigned long BootDeviceConnectChangeBitExpected;// Offset=0xab0 Size=0x4
    unsigned long BootDeviceConnectBitExpected;// Offset=0xab4 Size=0x4
    void * ExBootDeviceHandle;// Offset=0xab8 Size=0x8
    struct _KEVENT BootDeviceArrivalEvent;// Offset=0xac0 Size=0x18
    struct _IRP * PendingResetPortAsyncIrp;// Offset=0xad8 Size=0x8
    struct _IRP * PendingResetNotificationRequestIrp;// Offset=0xae0 Size=0x8
    unsigned long HibernateCount;// Offset=0xae8 Size=0x4
    union _USB_DEVICE_SQM_PROPERTIES SqmProperties;// Offset=0xaec Size=0x4
    unsigned long long GlobalListStateLock;// Offset=0xaf0 Size=0x8
    enum _GLOBAL_LIST_ENTRY_STATE GlobalListState;// Offset=0xaf8 Size=0x4
    unsigned long EnumFailureMsgId;// Offset=0xafc Size=0x4
    struct _MSOS20_INFO MsOs20Info;// Offset=0xb00 Size=0x38
    struct _MSOS20_DESCRIPTOR_SET_INFO CachedMsOs20DeviceInfo;// Offset=0xb38 Size=0x8
    struct _KEVENT DriverNotFoundLock;// Offset=0xb40 Size=0x18
    struct _KEVENT D3ColdReconnectEvent;// Offset=0xb58 Size=0x18
    struct _KEVENT D3ColdLock;// Offset=0xb70 Size=0x18
    long D3ColdReconnectTimeout;// Offset=0xb88 Size=0x4
    struct _D3COLD_SUPPORT_INTERFACE D3ColdFilter;// Offset=0xb90 Size=0x48
    union _USB_DUAL_ROLE_FEATURES UsbDualRoleFeatures;// Offset=0xbd8 Size=0x4
    unsigned long long UcmConnectorId;// Offset=0xbe0 Size=0x8
};
