enum _PCQEV_STATUS
{
    PcqEv_Reset=10,
    PcqEv_Wait=20,
    PcqEv_Signal=30
};

struct _G_STATE_LOG_ENTRY// Size=0x20 (Id=179)
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

struct _DEBUG_LOG// Size=0x18 (Id=163)
{
    unsigned long LogIdx;// Offset=0x0 Size=0x4
    unsigned long LogSizeMask;// Offset=0x4 Size=0x4
    struct LOG_ENTRY64 * LogStart;// Offset=0x8 Size=0x8
    struct LOG_ENTRY64 * LogEnd;// Offset=0x10 Size=0x8
};

enum _BUS_RELATIONS_STATE
{
    BusRelationsReported=0,
    BusRelationsInvalid=1
};

struct _LIST_ENTRY// Size=0x10 (Id=4)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _DISPATCHER_HEADER// Size=0x18 (Id=220)
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

struct _KEVENT// Size=0x18 (Id=19)
{
    struct _DISPATCHER_HEADER Header;// Offset=0x0 Size=0x18
};

struct _IO_REMOVE_LOCK_COMMON_BLOCK// Size=0x20 (Id=335)
{
    unsigned char Removed;// Offset=0x0 Size=0x1
    unsigned char Reserved[3];// Offset=0x1 Size=0x3
    long IoCount;// Offset=0x4 Size=0x4
    struct _KEVENT RemoveEvent;// Offset=0x8 Size=0x18
};

struct _IO_REMOVE_LOCK// Size=0x20 (Id=278)
{
    struct _IO_REMOVE_LOCK_COMMON_BLOCK Common;// Offset=0x0 Size=0x20
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

struct _HGSL// Size=0x8 (Id=194)
{
    unsigned char Irql;// Offset=0x0 Size=0x1
    unsigned long Locked;// Offset=0x4 Size=0x4
};

enum _HUB_ISR_WORKER_STATE
{
    HubIsrWorker_NotQueued=0,
    HubIsrWorker_Queued=1
};

struct _STATE_CONTEXT// Size=0xb0 (Id=177)
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

struct _KSEMAPHORE// Size=0x20 (Id=347)
{
    struct _DISPATCHER_HEADER Header;// Offset=0x0 Size=0x18
    long Limit;// Offset=0x18 Size=0x4
};

enum _USB_DEVICE_TYPE
{
    Usb11Device=0,
    Usb20Device=1
};

enum _USB_DEVICE_SPEED
{
    UsbLowSpeed=0,
    UsbFullSpeed=1,
    UsbHighSpeed=2,
    UsbSuperSpeed=3
};

struct _USB_DEVICE_DESCRIPTOR// Size=0x12 (Id=203)
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

union _USBHUB_FDO_FLAGS// Size=0x4 (Id=291)
{
    unsigned long ul;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long HubIsRoot:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long WmiRegistered:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long HubBusIfReferenced:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long UsbdBusIfReferenced:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long HubHardResetPending:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long BusAdd:1;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1
        unsigned long HubIsTT:1;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1
        unsigned long MultiTTmode:1;// Offset=0x0 Size=0x4 BitOffset=0x7 BitSize=0x1
        unsigned long SSalloced:1;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x1
        unsigned long DeviceCaps:1;// Offset=0x0 Size=0x4 BitOffset=0x9 BitSize=0x1
        unsigned long HubAsyncInitCanceled:1;// Offset=0x0 Size=0x4 BitOffset=0xa BitSize=0x1
        unsigned long notused_11:1;// Offset=0x0 Size=0x4 BitOffset=0xb BitSize=0x1
        unsigned long ResetIrqPipe:1;// Offset=0x0 Size=0x4 BitOffset=0xc BitSize=0x1
        unsigned long HubExAdd:1;// Offset=0x0 Size=0x4 BitOffset=0xd BitSize=0x1
        unsigned long HubHwNotPresent:1;// Offset=0x0 Size=0x4 BitOffset=0xe BitSize=0x1
        unsigned long HighSpeedCapable:1;// Offset=0x0 Size=0x4 BitOffset=0xf BitSize=0x1
        unsigned long MultiTTsupported:1;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x1
        unsigned long ResumeSignalling:1;// Offset=0x0 Size=0x4 BitOffset=0x11 BitSize=0x1
        unsigned long BUS_ARM:1;// Offset=0x0 Size=0x4 BitOffset=0x12 BitSize=0x1
        unsigned long HWC_ARM:1;// Offset=0x0 Size=0x4 BitOffset=0x13 BitSize=0x1
        unsigned long EsdEnabled:1;// Offset=0x0 Size=0x4 BitOffset=0x14 BitSize=0x1
        unsigned long ForceSingleTt:1;// Offset=0x0 Size=0x4 BitOffset=0x15 BitSize=0x1
        unsigned long HubDescriptorValid:1;// Offset=0x0 Size=0x4 BitOffset=0x16 BitSize=0x1
        unsigned long BusIfSelectiveSuspendReferenced:1;// Offset=0x0 Size=0x4 BitOffset=0x17 BitSize=0x1
        unsigned long AllowWakeOnConnect:1;// Offset=0x0 Size=0x4 BitOffset=0x18 BitSize=0x1
        unsigned long DmTimerInit:1;// Offset=0x0 Size=0x4 BitOffset=0x19 BitSize=0x1
        unsigned long SystemWakeSource:1;// Offset=0x0 Size=0x4 BitOffset=0x1a BitSize=0x1
        unsigned long WinPE:1;// Offset=0x0 Size=0x4 BitOffset=0x1b BitSize=0x1
        unsigned long PowerOnOverCurrent:1;// Offset=0x0 Size=0x4 BitOffset=0x1c BitSize=0x1
        unsigned long BusIfMiniDumpReferenced:1;// Offset=0x0 Size=0x4 BitOffset=0x1d BitSize=0x1
        unsigned long HubInitialized:1;// Offset=0x0 Size=0x4 BitOffset=0x1e BitSize=0x1
        unsigned long BusIfForwardProgressReferenced:1;// Offset=0x0 Size=0x4 BitOffset=0x1f BitSize=0x1
    };
};

union _USBHUB_FDO_FLAGS2// Size=0x4 (Id=288)
{
    unsigned long ul;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long InAcpiNamespace:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long QueryPortStatusAfterSuspend:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
    };
};

union _USBHUB_ERRATA_FLAGS// Size=0x4 (Id=349)
{
    unsigned long ul;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long ResetTTOnCancel:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long NoClearTTBufferOnCancel:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
    };
};

enum _USBD_PIPE_TYPE
{
    UsbdPipeTypeControl=0,
    UsbdPipeTypeIsochronous=1,
    UsbdPipeTypeBulk=2,
    UsbdPipeTypeInterrupt=3
};

struct _USBD_PIPE_INFORMATION// Size=0x18 (Id=206)
{
    unsigned short MaximumPacketSize;// Offset=0x0 Size=0x2
    unsigned char EndpointAddress;// Offset=0x2 Size=0x1
    unsigned char Interval;// Offset=0x3 Size=0x1
    enum _USBD_PIPE_TYPE PipeType;// Offset=0x4 Size=0x4
    void * PipeHandle;// Offset=0x8 Size=0x8
    unsigned long MaximumTransferSize;// Offset=0x10 Size=0x4
    unsigned long PipeFlags;// Offset=0x14 Size=0x4
};

struct _WMILIB_CONTEXT// Size=0x40 (Id=344)
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

struct _USB_HUB_DESCRIPTOR// Size=0x47 (Id=268)
{
    unsigned char bDescriptorLength;// Offset=0x0 Size=0x1
    unsigned char bDescriptorType;// Offset=0x1 Size=0x1
    unsigned char bNumberOfPorts;// Offset=0x2 Size=0x1
    unsigned short wHubCharacteristics;// Offset=0x3 Size=0x2
    unsigned char bPowerOnToPowerGood;// Offset=0x5 Size=0x1
    unsigned char bHubControlCurrent;// Offset=0x6 Size=0x1
    unsigned char bRemoveAndPowerMask[64];// Offset=0x7 Size=0x40
};

enum _SSH_HUB_STATE
{
    SSH_State_HubActive=1,
    SSH_State_HubPendingSuspend=2,
    SSH_State_HubPendingResumeAfterSuspend=3,
    SSH_State_HubSuspended=4,
    SSH_State_HubPendingResume=5,
    SSH_State_HubFailedResume=6
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

struct _HUB_TIMER_OBJECT// Size=0x50 (Id=223)
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

enum _SSH_ENABLE_STATUS
{
    SSH_ENABLED_BY_DEFAULT=1,
    SSH_ENABLED_VIA_POWER_POLICY=2,
    SSH_DISABLED_VIA_POWER_POLICY=3,
    SSH_ENABLED_VIA_WMI=4,
    SSH_DISABLED_VIA_WMI=5,
    SSH_DISABLED_VIA_USBPORT=6
};

enum _HUB_DMTIMER_STATE
{
    HubDmTimer_Disabled=0,
    HubDmTimer_Started=1,
    HubDmTimer_Stopped=2
};

struct _SINGLE_LIST_ENTRY// Size=0x8 (Id=6)
{
    struct _SINGLE_LIST_ENTRY * Next;// Offset=0x0 Size=0x8
};

struct _KDPC// Size=0x40 (Id=88)
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

struct _KTIMER// Size=0x40 (Id=342)
{
    struct _DISPATCHER_HEADER Header;// Offset=0x0 Size=0x18
    union _ULARGE_INTEGER DueTime;// Offset=0x18 Size=0x8
    struct _LIST_ENTRY TimerListEntry;// Offset=0x20 Size=0x10
    struct _KDPC * Dpc;// Offset=0x30 Size=0x8
    unsigned long Processor;// Offset=0x38 Size=0x4
    unsigned long Period;// Offset=0x3c Size=0x4
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

enum _USB_VBUS_STATE
{
    Vbus_Off=0,
    Vbus_On=1,
    Vbus_Interrupted=2
};

struct _USB_BUS_INTERFACE_HUB_V9// Size=0x148 (Id=147)
{
    unsigned short Size;// Offset=0x0 Size=0x2
    unsigned short Version;// Offset=0x2 Size=0x2
    void * BusContext;// Offset=0x8 Size=0x8
    void  ( * InterfaceReference)(void * );// Offset=0x10 Size=0x8
    void  ( * InterfaceDereference)(void * );// Offset=0x18 Size=0x8
    long  ( * CreateUsbDevice)(void * ,void ** ,void * ,unsigned short ,unsigned short ,struct _USB_CD_ERROR_INFORMATION * ,unsigned short );// Offset=0x20 Size=0x8
    long  ( * InitializeUsbDevice)(void * ,void * ,struct _USB_ID_ERROR_INFORMATION * );// Offset=0x28 Size=0x8
    long  ( * GetUsbDescriptors)(void * ,void * ,unsigned char * ,unsigned long * ,unsigned char * ,unsigned long * );// Offset=0x30 Size=0x8
    long  ( * RemoveUsbDevice)(void * ,void * ,unsigned long );// Offset=0x38 Size=0x8
    long  ( * RestoreUsbDevice)(void * ,void * ,void * );// Offset=0x40 Size=0x8
    long  ( * GetPortHackFlags)(void * ,unsigned long * );// Offset=0x48 Size=0x8
    long  ( * QueryDeviceInformation)(void * ,void * ,void * ,unsigned long ,unsigned long * );// Offset=0x50 Size=0x8
    long  ( * GetControllerInformation)(void * ,void * ,unsigned long ,unsigned long * );// Offset=0x58 Size=0x8
    long  ( * ControllerSelectiveSuspend)(void * ,unsigned char );// Offset=0x60 Size=0x8
    long  ( * GetExtendedHubInformation)(void * ,struct _DEVICE_OBJECT * ,void * ,unsigned long ,unsigned long * );// Offset=0x68 Size=0x8
    long  ( * GetRootHubSymbolicName)(void * ,void * ,unsigned long ,unsigned long * );// Offset=0x70 Size=0x8
    void *  ( * GetDeviceBusContext)(void * ,void * );// Offset=0x78 Size=0x8
    long  ( * Initialize20Hub)(void * ,void * ,unsigned long );// Offset=0x80 Size=0x8
    long  ( * RootHubInitNotification)(void * ,void * ,void  ( * )(void * ));// Offset=0x88 Size=0x8
    void  ( * FlushTransfers)(void * ,void * );// Offset=0x90 Size=0x8
    void  ( * SetDeviceHandleData)(void * ,void * ,struct _DEVICE_OBJECT * );// Offset=0x98 Size=0x8
    unsigned char  ( * HubIsRoot)(void * ,void * );// Offset=0xa0 Size=0x8
    void  ( * AcquireBusSemaphore)(void * );// Offset=0xa8 Size=0x8
    void  ( * ReleaseBusSemaphore)(void * );// Offset=0xb0 Size=0x8
    unsigned long  ( * CaculatePipeBandwidth)(void * ,struct _USBD_PIPE_INFORMATION * ,enum _USB_DEVICE_SPEED );// Offset=0xb8 Size=0x8
    void  ( * SetBusSystemWakeMode)(void * ,unsigned long );// Offset=0xc0 Size=0x8
    void  ( * SetDeviceFlag)(void * ,struct _GUID * ,void * ,unsigned long );// Offset=0xc8 Size=0x8
    long  ( * HubTestPoint)(void * ,void * ,unsigned long ,void * );// Offset=0xd0 Size=0x8
    long  ( * GetDevicePerformanceInfo)(void * ,void * ,void * ,unsigned long ,unsigned long * );// Offset=0xd8 Size=0x8
    long  ( * WaitAsyncPowerUp)(void * );// Offset=0xe0 Size=0x8
    long  ( * GetDeviceAddress)(void * ,void * ,unsigned short * );// Offset=0xe8 Size=0x8
    long  ( * RefDeviceHandle)(void * ,void * ,void * ,unsigned long );// Offset=0xf0 Size=0x8
    void  ( * DerefDeviceHandle)(void * ,void * ,void * ,unsigned long );// Offset=0xf8 Size=0x8
    unsigned long  ( * SetDeviceHandleIdleReadyState)(void * ,void * ,unsigned long );// Offset=0x100 Size=0x8
    long  ( * CreateUsbDeviceV7)(void * ,void ** ,void * ,unsigned short ,struct _USB_PORT_PATH * ,struct _USB_CD_ERROR_INFORMATION * ,unsigned short ,struct _DEVICE_OBJECT * ,struct _UNICODE_STRING * );// Offset=0x108 Size=0x8
    long  ( * GetContainerIdForPort)(void * ,unsigned short ,struct _GUID * );// Offset=0x110 Size=0x8
    void  ( * SetContainerIdForPort)(void * ,unsigned short ,struct _GUID * );// Offset=0x118 Size=0x8
    long  ( * AbortAllDevicePipes)(void * ,void * );// Offset=0x120 Size=0x8
    void  ( * SetDeviceErrataFlag)(void * ,void * ,unsigned long );// Offset=0x128 Size=0x8
    unsigned short  ( * GetDebugPortNumber)(void * );// Offset=0x130 Size=0x8
    void  ( * SetMsOs20Support)(void * ,void * ,struct _USB_DEVICE_DESCRIPTOR * ,unsigned char );// Offset=0x138 Size=0x8
    void  ( * SetClearRootPortResumeTime)(void * ,void * ,unsigned char ,unsigned char );// Offset=0x140 Size=0x8
};

struct _USB_BUS_INTERFACE_USBDI_V3// Size=0x60 (Id=207)
{
    unsigned short Size;// Offset=0x0 Size=0x2
    unsigned short Version;// Offset=0x2 Size=0x2
    void * BusContext;// Offset=0x8 Size=0x8
    void  ( * InterfaceReference)(void * );// Offset=0x10 Size=0x8
    void  ( * InterfaceDereference)(void * );// Offset=0x18 Size=0x8
    void  ( * GetUSBDIVersion)(void * ,struct _USBD_VERSION_INFORMATION * ,unsigned long * );// Offset=0x20 Size=0x8
    long  ( * QueryBusTime)(void * ,unsigned long * );// Offset=0x28 Size=0x8
    long  ( * SubmitIsoOutUrb)(void * ,struct _URB * );// Offset=0x30 Size=0x8
    long  ( * QueryBusInformation)(void * ,unsigned long ,void * ,unsigned long * ,unsigned long * );// Offset=0x38 Size=0x8
    unsigned char  ( * IsDeviceHighSpeed)(void * );// Offset=0x40 Size=0x8
    long  ( * EnumLogEntry)(void * ,unsigned long ,unsigned long ,unsigned long ,unsigned long );// Offset=0x48 Size=0x8
    long  ( * QueryBusTimeEx)(void * ,unsigned long * );// Offset=0x50 Size=0x8
    long  ( * QueryControllerType)(void * ,unsigned long * ,unsigned short * ,unsigned short * ,unsigned char * ,unsigned char * ,unsigned char * ,unsigned char * );// Offset=0x58 Size=0x8
};

struct _USB_BUS_INTERFACE_HUB_MINIDUMP// Size=0x28 (Id=199)
{
    unsigned short Size;// Offset=0x0 Size=0x2
    unsigned short Version;// Offset=0x2 Size=0x2
    void * BusContext;// Offset=0x8 Size=0x8
    void  ( * InterfaceReference)(void * );// Offset=0x10 Size=0x8
    void  ( * InterfaceDereference)(void * );// Offset=0x18 Size=0x8
    void  ( * SetUsbPortMiniDumpFlags)(void * );// Offset=0x20 Size=0x8
};

struct _USB_BUS_INTERFACE_HUB_SELECTIVE_SUSPEND// Size=0x30 (Id=200)
{
    unsigned short Size;// Offset=0x0 Size=0x2
    unsigned short Version;// Offset=0x2 Size=0x2
    void * BusContext;// Offset=0x8 Size=0x8
    void  ( * InterfaceReference)(void * );// Offset=0x10 Size=0x8
    void  ( * InterfaceDereference)(void * );// Offset=0x18 Size=0x8
    long  ( * SuspendHub)(struct _DEVICE_OBJECT * );// Offset=0x20 Size=0x8
    long  ( * ResumeHub)(struct _DEVICE_OBJECT * );// Offset=0x28 Size=0x8
};

struct _USB_BUS_INTERFACE_HUB_FORWARD_PROGRESS// Size=0x40 (Id=209)
{
    unsigned short Size;// Offset=0x0 Size=0x2
    unsigned short Version;// Offset=0x2 Size=0x2
    void * BusContext;// Offset=0x8 Size=0x8
    void  ( * InterfaceReference)(void * );// Offset=0x10 Size=0x8
    void  ( * InterfaceDereference)(void * );// Offset=0x18 Size=0x8
    struct USB_WORKITEM_HANDLE__ *  ( * AllocateWorkItem)(struct _DEVICE_OBJECT * ,unsigned char );// Offset=0x20 Size=0x8
    void  ( * FreeWorkItem)(struct USB_WORKITEM_HANDLE__ * );// Offset=0x28 Size=0x8
    void  ( * QueueWorkItem)(struct _DEVICE_OBJECT * ,struct USB_WORKITEM_HANDLE__ * ,void  ( * )(void * ,void * ,struct _IO_WORKITEM * ),enum _WORK_QUEUE_TYPE ,void * ,unsigned char );// Offset=0x30 Size=0x8
    void  ( * DeferIrpProcessing)(struct _DEVICE_OBJECT * ,void  ( * )(struct _DEVICE_OBJECT * ,struct _IRP * ),struct _IRP * );// Offset=0x38 Size=0x8
};

enum _HUB_WAKE_STATE
{
    HUB_WAKESTATE_UNINITIALIZED=0,
    HUB_WAKESTATE_DISARMED=1,
    HUB_WAKESTATE_WAITING=2,
    HUB_WAKESTATE_WAITING_CANCELLED=3,
    HUB_WAKESTATE_ARMED=4,
    HUB_WAKESTATE_ARMING_CANCELLED=5,
    HUB_WAKESTATE_COMPLETING=7
};

struct _DEVICE_CAPABILITIES// Size=0x40 (Id=280)
{
    unsigned short Size;// Offset=0x0 Size=0x2
    unsigned short Version;// Offset=0x2 Size=0x2
    struct // Size=0x4 (Id=0)
    {
        unsigned long DeviceD1:1;// Offset=0x4 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long DeviceD2:1;// Offset=0x4 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long LockSupported:1;// Offset=0x4 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long EjectSupported:1;// Offset=0x4 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long Removable:1;// Offset=0x4 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long DockDevice:1;// Offset=0x4 Size=0x4 BitOffset=0x5 BitSize=0x1
        unsigned long UniqueID:1;// Offset=0x4 Size=0x4 BitOffset=0x6 BitSize=0x1
        unsigned long SilentInstall:1;// Offset=0x4 Size=0x4 BitOffset=0x7 BitSize=0x1
        unsigned long RawDeviceOK:1;// Offset=0x4 Size=0x4 BitOffset=0x8 BitSize=0x1
        unsigned long SurpriseRemovalOK:1;// Offset=0x4 Size=0x4 BitOffset=0x9 BitSize=0x1
        unsigned long WakeFromD0:1;// Offset=0x4 Size=0x4 BitOffset=0xa BitSize=0x1
        unsigned long WakeFromD1:1;// Offset=0x4 Size=0x4 BitOffset=0xb BitSize=0x1
        unsigned long WakeFromD2:1;// Offset=0x4 Size=0x4 BitOffset=0xc BitSize=0x1
        unsigned long WakeFromD3:1;// Offset=0x4 Size=0x4 BitOffset=0xd BitSize=0x1
        unsigned long HardwareDisabled:1;// Offset=0x4 Size=0x4 BitOffset=0xe BitSize=0x1
        unsigned long NonDynamic:1;// Offset=0x4 Size=0x4 BitOffset=0xf BitSize=0x1
        unsigned long WarmEjectSupported:1;// Offset=0x4 Size=0x4 BitOffset=0x10 BitSize=0x1
        unsigned long NoDisplayInUI:1;// Offset=0x4 Size=0x4 BitOffset=0x11 BitSize=0x1
        unsigned long Reserved1:1;// Offset=0x4 Size=0x4 BitOffset=0x12 BitSize=0x1
        unsigned long WakeFromInterrupt:1;// Offset=0x4 Size=0x4 BitOffset=0x13 BitSize=0x1
        unsigned long Reserved:12;// Offset=0x4 Size=0x4 BitOffset=0x14 BitSize=0xc
    };
    unsigned long Address;// Offset=0x8 Size=0x4
    unsigned long UINumber;// Offset=0xc Size=0x4
    enum _DEVICE_POWER_STATE DeviceState[7];// Offset=0x10 Size=0x1c
    enum _SYSTEM_POWER_STATE SystemWake;// Offset=0x2c Size=0x4
    enum _DEVICE_POWER_STATE DeviceWake;// Offset=0x30 Size=0x4
    unsigned long D1Latency;// Offset=0x34 Size=0x4
    unsigned long D2Latency;// Offset=0x38 Size=0x4
    unsigned long D3Latency;// Offset=0x3c Size=0x4
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

struct _HUB_GLOBAL_UXD_SETTINGS// Size=0x10 (Id=306)
{
    unsigned long DeleteOnShutdown;// Offset=0x0 Size=0x4
    unsigned long DeleteOnReload;// Offset=0x4 Size=0x4
    unsigned long DeleteOnDisconnect;// Offset=0x8 Size=0x4
    unsigned long Enable;// Offset=0xc Size=0x4
};

struct _USB_TOPOLOGY_ADDRESS// Size=0x20 (Id=225)
{
    unsigned long PciBusNumber;// Offset=0x0 Size=0x4
    unsigned long PciDeviceNumber;// Offset=0x4 Size=0x4
    unsigned long PciFunctionNumber;// Offset=0x8 Size=0x4
    unsigned long Reserved;// Offset=0xc Size=0x4
    unsigned short RootHubPortNumber;// Offset=0x10 Size=0x2
    unsigned short HubPortNumber[5];// Offset=0x12 Size=0xa
    unsigned short Reserved2;// Offset=0x1c Size=0x2
};

enum _POWER_SAVER_MODE
{
    power_undefined=0,
    power_pincher=1,
    power_perf=2
};

struct _DEVICE_EXTENSION_HUB// Size=0x14a0 (Id=146)
{
    unsigned long ExtensionType;// Offset=0x0 Size=0x4
    unsigned long PadToOffset8;// Offset=0x4 Size=0x4
    struct _USBHUB_TRIAGE_INFO * UsbhubTriageInfo;// Offset=0x8 Size=0x8
    unsigned long CurrentPowerFunc;// Offset=0x10 Size=0x4
    unsigned long CurrentPnpFunc;// Offset=0x14 Size=0x4
    unsigned long FdoLogIdx;// Offset=0x18 Size=0x4
    struct _G_STATE_LOG_ENTRY FdoLog[8];// Offset=0x1c Size=0x100
    struct _G_STATE_LOG_ENTRY PwrLog[8];// Offset=0x11c Size=0x100
    struct _G_STATE_LOG_ENTRY BusLog[8];// Offset=0x21c Size=0x100
    unsigned long Pad;// Offset=0x31c Size=0x4
    void * Compatible_HubDescriptorPointer;// Offset=0x320 Size=0x8
    struct _COMPAT_PORT_DATA * Compatible_PortData;// Offset=0x328 Size=0x8
    unsigned long TrapEnable;// Offset=0x330 Size=0x4
    unsigned long TrapEvent;// Offset=0x334 Size=0x4
    unsigned long TrapPort;// Offset=0x338 Size=0x4
    unsigned long PwrLogIdx;// Offset=0x33c Size=0x4
    unsigned long BusLogIdx;// Offset=0x340 Size=0x4
    void * CurrentPowerIrp[2];// Offset=0x348 Size=0x10
    void * CurrentPowerIrpStack[2];// Offset=0x358 Size=0x10
    unsigned long CurrentPowerIrpTag[2];// Offset=0x368 Size=0x8
    struct _DEBUG_LOG Log;// Offset=0x370 Size=0x18
    enum _BUS_RELATIONS_STATE BusRelationsState;// Offset=0x388 Size=0x4
    struct _HUB_POWER_CONTEXT * CurrentFdoPwrCtx;// Offset=0x390 Size=0x8
    unsigned long ResetLogIdx;// Offset=0x398 Size=0x4
    struct _G_STATE_LOG_ENTRY ResetLog[8];// Offset=0x39c Size=0x100
    struct _IO_WORKITEM * HardResetWorkItem;// Offset=0x4a0 Size=0x8
    struct _DEVICE_OBJECT * PhysicalDeviceObject;// Offset=0x4a8 Size=0x8
    struct _DEVICE_OBJECT * FunctionalDeviceObject;// Offset=0x4b0 Size=0x8
    struct _DEVICE_OBJECT * TopOfStackDeviceObject;// Offset=0x4b8 Size=0x8
    struct _DEVICE_OBJECT * TopOfBusStack;// Offset=0x4c0 Size=0x8
    struct _IO_REMOVE_LOCK RemoveLock;// Offset=0x4c8 Size=0x20
    long myDO_DEVICE_INITIALIZING;// Offset=0x4e8 Size=0x4
    long PowerFailureStatus;// Offset=0x4ec Size=0x4
    unsigned long PnpFuncHistoryIdx;// Offset=0x4f0 Size=0x4
    unsigned char PnpFuncHistory[16];// Offset=0x4f4 Size=0x10
    unsigned long PowerFuncHistoryIdx;// Offset=0x504 Size=0x4
    unsigned char PowerFuncHistory[16];// Offset=0x508 Size=0x10
    unsigned char PowerSubFuncHistory[16];// Offset=0x518 Size=0x10
    void * CurrentResetContext;// Offset=0x528 Size=0x8
    void * CurrentFdoPnpContext;// Offset=0x530 Size=0x8
    void * CurrentBusStateContext;// Offset=0x538 Size=0x8
    void * CurrentFdoPwrContext;// Offset=0x540 Size=0x8
    void * PnpThread;// Offset=0x548 Size=0x8
    enum _HUB_FDO_PNPSTATE CurrentFdoPnpState;// Offset=0x550 Size=0x4
    long  ( * PnpStateHandler)(struct _STATE_CONTEXT * ,enum _HUB_FDO_EVENT );// Offset=0x558 Size=0x8
    unsigned long HubNumber;// Offset=0x560 Size=0x4
    struct _STATE_CONTEXT SyncPnpStateCtx;// Offset=0x568 Size=0xb0
    struct _STATE_CONTEXT AsyncPnpStateCtx;// Offset=0x618 Size=0xb0
    struct _STATE_CONTEXT ApiStateCtx;// Offset=0x6c8 Size=0xb0
    struct _STATE_CONTEXT SspApiStateCtx;// Offset=0x778 Size=0xb0
    struct _STATE_CONTEXT SspTimerStateCtx;// Offset=0x828 Size=0xb0
    struct _STATE_CONTEXT HardResetCtx;// Offset=0x8d8 Size=0xb0
    enum _HUB_BUS_STATE CurrentBusState;// Offset=0x988 Size=0x4
    struct _KSEMAPHORE BusStateLock;// Offset=0x990 Size=0x20
    unsigned char ReferenceListOpen;// Offset=0x9b0 Size=0x1
    struct _KEVENT HubReferenceEvent;// Offset=0x9b8 Size=0x18
    struct _LIST_ENTRY ObjReferenceList;// Offset=0x9d0 Size=0x10
    unsigned long ObjRefCountNoRes;// Offset=0x9e0 Size=0x4
    enum _USB_DEVICE_TYPE DeviceType;// Offset=0x9e4 Size=0x4
    enum _USB_DEVICE_SPEED DeviceSpeed;// Offset=0x9e8 Size=0x4
    struct _USB_DEVICE_DESCRIPTOR DeviceDescriptor;// Offset=0x9ec Size=0x12
    union _USBHUB_FDO_FLAGS FdoFlags;// Offset=0xa00 Size=0x4
    union _USBHUB_FDO_FLAGS2 FdoFlags2;// Offset=0xa04 Size=0x4
    union _USBHUB_ERRATA_FLAGS ErrataFlags;// Offset=0xa08 Size=0x4
    unsigned long PnpDeviceState;// Offset=0xa0c Size=0x4
    struct _KEVENT Evnt_FdoAsyncStart;// Offset=0xa10 Size=0x18
    struct _KEVENT PnpQcapsComplete;// Offset=0xa28 Size=0x18
    void * ConfigurationHandle;// Offset=0xa40 Size=0x8
    struct _USBD_PIPE_INFORMATION IrqPipeInformation;// Offset=0xa48 Size=0x18
    unsigned long IrqErrorCount;// Offset=0xa60 Size=0x4
    struct _IRP * IrqIrp;// Offset=0xa68 Size=0x8
    struct _URB * IrqUrb;// Offset=0xa70 Size=0x8
    unsigned char * IrqBuffer;// Offset=0xa78 Size=0x8
    struct _KEVENT IrqDoneEvent;// Offset=0xa80 Size=0x18
    long IrqCancelFlag;// Offset=0xa98 Size=0x4
    struct _HUB_TIMER_OBJECT * IsrRetryTimer;// Offset=0xaa0 Size=0x8
    struct _HUB_TIMER_OBJECT * ResetIrqPipeRetryTimer;// Offset=0xaa8 Size=0x8
    long InISR;// Offset=0xab0 Size=0x4
    long IsrWorkerReference;// Offset=0xab4 Size=0x4
    struct _KEVENT HubIsrWorkerDone;// Offset=0xab8 Size=0x18
    struct _HUB_TIMER_OBJECT * HubInitTimeoutTimer;// Offset=0xad0 Size=0x8
    struct _HUB_TIMER_OBJECT * HubInitRetryTimer;// Offset=0xad8 Size=0x8
    struct _LIST_ENTRY WorkItemListHead;// Offset=0xae0 Size=0x10
    unsigned long long WorkItemListSpin;// Offset=0xaf0 Size=0x8
    enum _HARD_RESET_STATE HardResetState;// Offset=0xaf8 Size=0x4
    struct _KSEMAPHORE HardResetLock;// Offset=0xb00 Size=0x20
    struct _KEVENT HardResetDoneEvent;// Offset=0xb20 Size=0x18
    struct _WMILIB_CONTEXT WmiLibInfo;// Offset=0xb38 Size=0x40
    struct _USB_HUB_DESCRIPTOR HubDescriptor;// Offset=0xb78 Size=0x47
    unsigned char PortPowerSwitched;// Offset=0xbbf Size=0x1
    unsigned char PortIndicators;// Offset=0xbc0 Size=0x1
    unsigned char PerPortOvercurrent;// Offset=0xbc1 Size=0x1
    unsigned char OvercurrentDetected;// Offset=0xbc2 Size=0x1
    unsigned long TT_ThinkTime;// Offset=0xbc4 Size=0x4
    union _USB_EXTENDED_PORT_ATTRIBUTES * ExtendedPortAttributes;// Offset=0xbc8 Size=0x8
    struct _USB_ACPI_ATTRIBUTES * AcpiAttributes;// Offset=0xbd0 Size=0x8
    unsigned long MilliampsPowerPerPort;// Offset=0xbd8 Size=0x4
    unsigned long PortPower_Registry;// Offset=0xbdc Size=0x4
    unsigned long PortPower_CfgDescriptor;// Offset=0xbe0 Size=0x4
    unsigned long PortPower_DeviceStatus;// Offset=0xbe4 Size=0x4
    unsigned long PortPower_HubStatus;// Offset=0xbe8 Size=0x4
    unsigned long NumberOfPorts;// Offset=0xbec Size=0x4
    struct _HUB_PORT_DATA * PortData;// Offset=0xbf0 Size=0x8
    unsigned long long UsbEnumLockSpin;// Offset=0xbf8 Size=0x8
    unsigned long UsbEnumLockPort;// Offset=0xc00 Size=0x4
    void * UsbEnumLockContext;// Offset=0xc08 Size=0x8
    struct _SSH_BUSY_HANDLE * EnumLockSshHandle;// Offset=0xc10 Size=0x8
    long UsbEnumerationLock;// Offset=0xc18 Size=0x4
    struct _LIST_ENTRY SshBusyListHead;// Offset=0xc20 Size=0x10
    unsigned long SshBusyRefCountNoRes;// Offset=0xc30 Size=0x4
    enum _SSH_HUB_STATE SSH_State;// Offset=0xc34 Size=0x4
    struct _KSEMAPHORE SSH_Lock;// Offset=0xc38 Size=0x20
    struct _KSEMAPHORE SSH_BusyListLock;// Offset=0xc58 Size=0x20
    struct _STATE_CONTEXT * SSH_CurrentSC;// Offset=0xc78 Size=0x8
    struct _HUB_TIMER_OBJECT SSH_Timer;// Offset=0xc80 Size=0x50
    enum _SSH_ENABLE_STATUS SSH_EnabledStatus;// Offset=0xcd0 Size=0x4
    struct _SSH_BUSY_HANDLE * BusBusyHandle;// Offset=0xcd8 Size=0x8
    struct _SSH_BUSY_HANDLE * SshDisabledBusyHandle;// Offset=0xce0 Size=0x8
    struct _SSH_BUSY_HANDLE * SshSxBusyHandle;// Offset=0xce8 Size=0x8
    struct _SSH_BUSY_HANDLE * SshPortsBusyHandle;// Offset=0xcf0 Size=0x8
    unsigned long PortBusyMask[4];// Offset=0xcf8 Size=0x10
    struct _KEVENT SshBusyListLock;// Offset=0xd08 Size=0x18
    struct _KEVENT SshEnableDisableLock;// Offset=0xd20 Size=0x18
    struct _KEVENT SSH_ResumeEvent;// Offset=0xd38 Size=0x18
    unsigned char SSH_HubActivity;// Offset=0xd50 Size=0x1
    unsigned char BusyListEnabled;// Offset=0xd51 Size=0x1
    unsigned long SSH_InterfaceCount;// Offset=0xd54 Size=0x4
    unsigned char SSH_FailedToSuspend;// Offset=0xd58 Size=0x1
    unsigned long LocationInterfaceCount;// Offset=0xd5c Size=0x4
    struct _IRP * IdleReadyIrp;// Offset=0xd60 Size=0x8
    struct _KEVENT SSH_WorkerDoneEvent;// Offset=0xd68 Size=0x18
    unsigned long SSH_LogIdx;// Offset=0xd80 Size=0x4
    struct _G_STATE_LOG_ENTRY SSH_Log[8];// Offset=0xd84 Size=0x100
    unsigned long long DevHandleSpin;// Offset=0xe88 Size=0x8
    unsigned long long TimerObjSpin;// Offset=0xe90 Size=0x8
    enum _HUB_DMTIMER_STATE DmTimerState;// Offset=0xe98 Size=0x4
    struct _LIST_ENTRY DmTimerListHead;// Offset=0xea0 Size=0x10
    struct _KEVENT DmTimerEvent;// Offset=0xeb0 Size=0x18
    struct _KDPC DmTimerDpc;// Offset=0xec8 Size=0x40
    struct _KTIMER DmKtimer;// Offset=0xf08 Size=0x40
    unsigned long DmTimerLogIdx;// Offset=0xf48 Size=0x4
    struct _G_STATE_LOG_ENTRY DmTimerLog[8];// Offset=0xf4c Size=0x100
    enum _HUB_FDO_POWERSTATE CurrentFdoPwrState;// Offset=0x104c Size=0x4
    unsigned long long LockPdoD0List;// Offset=0x1050 Size=0x8
    unsigned char PendingPdoD0ListEnabled;// Offset=0x1058 Size=0x1
    struct _LIST_ENTRY PendingPdoD0List;// Offset=0x1060 Size=0x10
    enum _DEVICE_POWER_STATE Fdo_Dx;// Offset=0x1070 Size=0x4
    enum _SYSTEM_POWER_STATE Fdo_Sx;// Offset=0x1074 Size=0x4
    enum _USB_VBUS_STATE HubVbusState;// Offset=0x1078 Size=0x4
    struct _USB_BUS_INTERFACE_HUB_V9 HubBusInterface;// Offset=0x1080 Size=0x148
    struct _USB_BUS_INTERFACE_USBDI_V3 UsbdBusInterface;// Offset=0x11c8 Size=0x60
    struct _USB_BUS_INTERFACE_HUB_MINIDUMP HubMiniDumpInterface;// Offset=0x1228 Size=0x28
    struct _USB_BUS_INTERFACE_HUB_SELECTIVE_SUSPEND HubSSInterface;// Offset=0x1250 Size=0x30
    struct _USB_BUS_INTERFACE_HUB_FORWARD_PROGRESS HubFPInterface;// Offset=0x1280 Size=0x40
    unsigned short UsbdBusifVersion;// Offset=0x12c0 Size=0x2
    struct _LIST_ENTRY PdoPresentListHead;// Offset=0x12c8 Size=0x10
    struct _LIST_ENTRY PdoRemovedListHead;// Offset=0x12d8 Size=0x10
    struct _LIST_ENTRY PdoAbsentListHead;// Offset=0x12e8 Size=0x10
    struct _LIST_ENTRY ExceptionList;// Offset=0x12f8 Size=0x10
    unsigned long long ExceptionListSpin;// Offset=0x1308 Size=0x8
    long ExceptionCounter;// Offset=0x1310 Size=0x4
    enum _HUB_WAKE_STATE HubWakeState;// Offset=0x1314 Size=0x4
    struct _IRP * PendingWakeIrp;// Offset=0x1318 Size=0x8
    struct _KEVENT PendingWakeIrpEvent;// Offset=0x1320 Size=0x18
    struct _KEVENT IoctlLock;// Offset=0x1338 Size=0x18
    unsigned long long PortResetSpin;// Offset=0x1350 Size=0x8
    unsigned long HardErrorRetryCount;// Offset=0x1358 Size=0x4
    struct _KSEMAPHORE FdoPnpStateLock;// Offset=0x1360 Size=0x20
    struct _DEVICE_CAPABILITIES DeviceCapabilities;// Offset=0x1380 Size=0x40
    unsigned long long FdoPwrStateLock;// Offset=0x13c0 Size=0x8
    unsigned char FdoPwrLockIrql;// Offset=0x13c8 Size=0x1
    union _LARGE_INTEGER Stat_SyncResumeStartAt;// Offset=0x13d0 Size=0x8
    union _LARGE_INTEGER Stat_SyncResumeCompleteAt;// Offset=0x13d8 Size=0x8
    union _LARGE_INTEGER Stat_AsyncResumeStartAt;// Offset=0x13e0 Size=0x8
    union _LARGE_INTEGER Stat_AsyncResumeCompleteAt;// Offset=0x13e8 Size=0x8
    union _LARGE_INTEGER Stat_SyncPnpStartAt;// Offset=0x13f0 Size=0x8
    union _LARGE_INTEGER Stat_AsyncPnpStartAt;// Offset=0x13f8 Size=0x8
    struct _KSEMAPHORE PindicatorLock;// Offset=0x1400 Size=0x20
    struct _LIST_ENTRY FdoOmniLink;// Offset=0x1420 Size=0x10
    unsigned long long SyncDeviceResetSpin;// Offset=0x1430 Size=0x8
    struct _HUB_GLOBAL_UXD_SETTINGS GlobalUxdSettings;// Offset=0x1438 Size=0x10
    struct _USB_TOPOLOGY_ADDRESS TopologyAddress;// Offset=0x1448 Size=0x20
    unsigned long HcHcdiOptionFlags;// Offset=0x1468 Size=0x4
    unsigned short HcPciVendorId;// Offset=0x146c Size=0x2
    unsigned short HcPciDeviceId;// Offset=0x146e Size=0x2
    unsigned char HcPciClass;// Offset=0x1470 Size=0x1
    unsigned char HcPciSubClass;// Offset=0x1471 Size=0x1
    unsigned char HcPciRevisionId;// Offset=0x1472 Size=0x1
    unsigned char HcPciProgIf;// Offset=0x1473 Size=0x1
    enum _POWER_SAVER_MODE PowerSaverMode;// Offset=0x1474 Size=0x4
    unsigned long PowerCbRegistered;// Offset=0x1478 Size=0x4
    void * PowerCbHandle;// Offset=0x1480 Size=0x8
    unsigned long IdleTimeoutInMilliSeconds;// Offset=0x1488 Size=0x4
    long HubResetRequestCount;// Offset=0x148c Size=0x4
    long HubConcurrentResetCount;// Offset=0x1490 Size=0x4
    unsigned char IsBootDevice;// Offset=0x1494 Size=0x1
    struct _IRP * ResetNotificationRequestIrp;// Offset=0x1498 Size=0x8
    struct LOG_ENTRY64 DebugLogEntries[0];
};
