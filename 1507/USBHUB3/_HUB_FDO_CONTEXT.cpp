union _HUB_FLAGS// Size=0x4 (Id=620)
{
    unsigned long AsUlong32;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long IsTtHub:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long IsMultiTtHub:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long PerPortPower:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long PortPortOverCurrent:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long NoOverCurrentProtection:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long Initialized:1;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1
        unsigned long Configured:1;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1
        unsigned long SelectiveSuspendNotSupportedByParentStack:1;// Offset=0x0 Size=0x4 BitOffset=0x7 BitSize=0x1
        unsigned long WakeOnConnect:1;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x1
        unsigned long ArmedForWake:1;// Offset=0x0 Size=0x4 BitOffset=0x9 BitSize=0x1
        unsigned long WaitWakeQueued:1;// Offset=0x0 Size=0x4 BitOffset=0xa BitSize=0x1
        unsigned long ResetTTOnCancel:1;// Offset=0x0 Size=0x4 BitOffset=0xb BitSize=0x1
        unsigned long NoClearTTBufferOnCancel:1;// Offset=0x0 Size=0x4 BitOffset=0xc BitSize=0x1
        unsigned long PowerOnPortsOnStart:1;// Offset=0x0 Size=0x4 BitOffset=0xd BitSize=0x1
        unsigned long WdfPowerReferencePending:1;// Offset=0x0 Size=0x4 BitOffset=0xe BitSize=0x1
        unsigned long DisableLpm:1;// Offset=0x0 Size=0x4 BitOffset=0xf BitSize=0x1
        unsigned long DisableUsb20HardwareLpm:1;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x1
        unsigned long CanAcquirePowerReference:1;// Offset=0x0 Size=0x4 BitOffset=0x11 BitSize=0x1
        unsigned long InAcpiNamespace:1;// Offset=0x0 Size=0x4 BitOffset=0x12 BitSize=0x1
        unsigned long AddDelayAfterResetComplete:1;// Offset=0x0 Size=0x4 BitOffset=0x13 BitSize=0x1
        unsigned long IgnoreU0InDisconnected:1;// Offset=0x0 Size=0x4 BitOffset=0x14 BitSize=0x1
        unsigned long IgnoreEnabledInSSInactive:1;// Offset=0x0 Size=0x4 BitOffset=0x15 BitSize=0x1
        unsigned long IsInBootOrPagingPath:1;// Offset=0x0 Size=0x4 BitOffset=0x16 BitSize=0x1
        unsigned long DisableSuperSpeed:1;// Offset=0x0 Size=0x4 BitOffset=0x17 BitSize=0x1
        unsigned long IgnoreEnabledInReset:1;// Offset=0x0 Size=0x4 BitOffset=0x18 BitSize=0x1
        unsigned long DisableSelectiveSuspendForIntegratedHub:1;// Offset=0x0 Size=0x4 BitOffset=0x19 BitSize=0x1
        unsigned long S0IdleConfigured:1;// Offset=0x0 Size=0x4 BitOffset=0x1a BitSize=0x1
        unsigned long PowerReferenceAcquiredDueToGlobalSetting:1;// Offset=0x0 Size=0x4 BitOffset=0x1b BitSize=0x1
        unsigned long DisallowU2AcceptOnlyWithU1AcceptAndInitiate:1;// Offset=0x0 Size=0x4 BitOffset=0x1c BitSize=0x1
        unsigned long OvercurrentDetected:1;// Offset=0x0 Size=0x4 BitOffset=0x1d BitSize=0x1
        unsigned long DisableOnSoftRemove:1;// Offset=0x0 Size=0x4 BitOffset=0x1e BitSize=0x1
        unsigned long ConvertPollingToComplianceOnStart:1;// Offset=0x0 Size=0x4 BitOffset=0x1f BitSize=0x1
    };
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

union _USB_20_PORT_STATUS// Size=0x2 (Id=642)
{
    unsigned short AsUshort16;// Offset=0x0 Size=0x2
    struct // Size=0x2 (Id=0)
    {
        unsigned short CurrentConnectStatus:1;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0x1
        unsigned short PortEnabledDisabled:1;// Offset=0x0 Size=0x2 BitOffset=0x1 BitSize=0x1
        unsigned short Suspend:1;// Offset=0x0 Size=0x2 BitOffset=0x2 BitSize=0x1
        unsigned short OverCurrent:1;// Offset=0x0 Size=0x2 BitOffset=0x3 BitSize=0x1
        unsigned short Reset:1;// Offset=0x0 Size=0x2 BitOffset=0x4 BitSize=0x1
        unsigned short L1:1;// Offset=0x0 Size=0x2 BitOffset=0x5 BitSize=0x1
        unsigned short Reserved0:2;// Offset=0x0 Size=0x2 BitOffset=0x6 BitSize=0x2
        unsigned short PortPower:1;// Offset=0x0 Size=0x2 BitOffset=0x8 BitSize=0x1
        unsigned short LowSpeedDeviceAttached:1;// Offset=0x0 Size=0x2 BitOffset=0x9 BitSize=0x1
        unsigned short HighSpeedDeviceAttached:1;// Offset=0x0 Size=0x2 BitOffset=0xa BitSize=0x1
        unsigned short PortTestMode:1;// Offset=0x0 Size=0x2 BitOffset=0xb BitSize=0x1
        unsigned short PortIndicatorControl:1;// Offset=0x0 Size=0x2 BitOffset=0xc BitSize=0x1
        unsigned short Reserved1:3;// Offset=0x0 Size=0x2 BitOffset=0xd BitSize=0x3
    };
};

union _USB_30_PORT_STATUS// Size=0x2 (Id=568)
{
    unsigned short AsUshort16;// Offset=0x0 Size=0x2
    struct // Size=0x2 (Id=0)
    {
        unsigned short CurrentConnectStatus:1;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0x1
        unsigned short PortEnabledDisabled:1;// Offset=0x0 Size=0x2 BitOffset=0x1 BitSize=0x1
        unsigned short Reserved0:1;// Offset=0x0 Size=0x2 BitOffset=0x2 BitSize=0x1
        unsigned short OverCurrent:1;// Offset=0x0 Size=0x2 BitOffset=0x3 BitSize=0x1
        unsigned short Reset:1;// Offset=0x0 Size=0x2 BitOffset=0x4 BitSize=0x1
        unsigned short PortLinkState:4;// Offset=0x0 Size=0x2 BitOffset=0x5 BitSize=0x4
        unsigned short PortPower:1;// Offset=0x0 Size=0x2 BitOffset=0x9 BitSize=0x1
        unsigned short NegotiatedDeviceSpeed:3;// Offset=0x0 Size=0x2 BitOffset=0xa BitSize=0x3
        unsigned short Reserved1:3;// Offset=0x0 Size=0x2 BitOffset=0xd BitSize=0x3
    };
};

union _USB_PORT_STATUS// Size=0x2 (Id=491)
{
    unsigned short AsUshort16;// Offset=0x0 Size=0x2
    union _USB_20_PORT_STATUS Usb20PortStatus;// Offset=0x0 Size=0x2
    union _USB_30_PORT_STATUS Usb30PortStatus;// Offset=0x0 Size=0x2
};

union _USB_20_PORT_CHANGE// Size=0x2 (Id=577)
{
    unsigned short AsUshort16;// Offset=0x0 Size=0x2
    struct // Size=0x2 (Id=0)
    {
        unsigned short ConnectStatusChange:1;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0x1
        unsigned short PortEnableDisableChange:1;// Offset=0x0 Size=0x2 BitOffset=0x1 BitSize=0x1
        unsigned short SuspendChange:1;// Offset=0x0 Size=0x2 BitOffset=0x2 BitSize=0x1
        unsigned short OverCurrentIndicatorChange:1;// Offset=0x0 Size=0x2 BitOffset=0x3 BitSize=0x1
        unsigned short ResetChange:1;// Offset=0x0 Size=0x2 BitOffset=0x4 BitSize=0x1
        unsigned short Reserved2:11;// Offset=0x0 Size=0x2 BitOffset=0x5 BitSize=0xb
    };
};

union _USB_30_PORT_CHANGE// Size=0x2 (Id=576)
{
    unsigned short AsUshort16;// Offset=0x0 Size=0x2
    struct // Size=0x2 (Id=0)
    {
        unsigned short ConnectStatusChange:1;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0x1
        unsigned short Reserved2:2;// Offset=0x0 Size=0x2 BitOffset=0x1 BitSize=0x2
        unsigned short OverCurrentIndicatorChange:1;// Offset=0x0 Size=0x2 BitOffset=0x3 BitSize=0x1
        unsigned short ResetChange:1;// Offset=0x0 Size=0x2 BitOffset=0x4 BitSize=0x1
        unsigned short BHResetChange:1;// Offset=0x0 Size=0x2 BitOffset=0x5 BitSize=0x1
        unsigned short PortLinkStateChange:1;// Offset=0x0 Size=0x2 BitOffset=0x6 BitSize=0x1
        unsigned short PortConfigErrorChange:1;// Offset=0x0 Size=0x2 BitOffset=0x7 BitSize=0x1
        unsigned short Reserved3:8;// Offset=0x0 Size=0x2 BitOffset=0x8 BitSize=0x8
    };
};

union _USB_PORT_CHANGE// Size=0x2 (Id=556)
{
    unsigned short AsUshort16;// Offset=0x0 Size=0x2
    union _USB_20_PORT_CHANGE Usb20PortChange;// Offset=0x0 Size=0x2
    union _USB_30_PORT_CHANGE Usb30PortChange;// Offset=0x0 Size=0x2
};

union _USB_PORT_STATUS_AND_CHANGE// Size=0x4 (Id=480)
{
    unsigned long AsUlong32;// Offset=0x0 Size=0x4
    union _USB_PORT_STATUS PortStatus;// Offset=0x0 Size=0x2
    union _USB_PORT_CHANGE PortChange;// Offset=0x2 Size=0x2
};

enum _MAX_PORT_POWER
{
    MaxPortPowerInvalid=0,
    MaxPortPower100Milliamps=100,
    MaxPortPower500Milliamps=500
};

enum _CONTROLLER_TYPE
{
    ControllerTypeXhci=0,
    ControllerTypeSoftXhci=1
};

struct _HUBUCX_ROOTHUB_INFO// Size=0x28 (Id=616)
{
    unsigned long Size;// Offset=0x0 Size=0x4
    enum _CONTROLLER_TYPE ControllerType;// Offset=0x4 Size=0x4
    unsigned short NumberOf20Ports;// Offset=0x8 Size=0x2
    unsigned short NumberOf30Ports;// Offset=0xa Size=0x2
    unsigned short MaxU1ExitLatency;// Offset=0xc Size=0x2
    unsigned short MaxU2ExitLatency;// Offset=0xe Size=0x2
    void * UsbdInterruptPipeHandle;// Offset=0x10 Size=0x8
    char VendorId[5];// Offset=0x18 Size=0x5
    char DeviceId[5];// Offset=0x1d Size=0x5
    char RevisionId[5];// Offset=0x22 Size=0x5
};

struct _HUB_INFORMATION// Size=0x80 (Id=535)
{
    union _HUB_FLAGS HubFlags;// Offset=0x0 Size=0x4
    unsigned short NumberOfPorts;// Offset=0x4 Size=0x2
    unsigned short HubAddress;// Offset=0x6 Size=0x2
    unsigned short HubResetCount;// Offset=0x8 Size=0x2
    unsigned short HubTimedResetRecoveryCount;// Offset=0xa Size=0x2
    unsigned long HubResetRecoveryCount;// Offset=0xc Size=0x4
    union _LARGE_INTEGER FirstHubResetRecoveryTimeStamp;// Offset=0x10 Size=0x8
    union _USB_PORT_STATUS_AND_CHANGE LastHubResetPortStatus;// Offset=0x18 Size=0x4
    unsigned short HubGetDescriptorCount;// Offset=0x1c Size=0x2
    void * HubConfigurationHandle;// Offset=0x20 Size=0x8
    unsigned short InterruptPipeMaxPacketSize;// Offset=0x28 Size=0x2
    enum _MAX_PORT_POWER MaxPortPower;// Offset=0x2c Size=0x4
    unsigned long HubNumber;// Offset=0x30 Size=0x4
    struct _HUBUCX_ROOTHUB_INFO RootHubInfo;// Offset=0x38 Size=0x28
    struct _ROOTHUB_20PORT_INFO ** RootHub20PortInfoPointerArray;// Offset=0x60 Size=0x8
    struct _ROOTHUB_30PORT_INFO_EX ** RootHub30PortInfoPointerArray;// Offset=0x68 Size=0x8
    unsigned short NumberOf20Ports;// Offset=0x70 Size=0x2
    unsigned short First20PortNumber;// Offset=0x72 Size=0x2
    unsigned short Last20PortNumber;// Offset=0x74 Size=0x2
    unsigned short NumberOf30Ports;// Offset=0x76 Size=0x2
    unsigned short First30PortNumber;// Offset=0x78 Size=0x2
    unsigned short Last30PortNumber;// Offset=0x7a Size=0x2
    unsigned long SuperSpeedPlusIsochBurstCount;// Offset=0x7c Size=0x4
};

enum _USB_DEVICE_SPEED
{
    UsbLowSpeed=0,
    UsbFullSpeed=1,
    UsbHighSpeed=2,
    UsbSuperSpeed=3
};

struct _USB_TOPOLOGY_ADDRESS// Size=0x20 (Id=560)
{
    unsigned long PciBusNumber;// Offset=0x0 Size=0x4
    unsigned long PciDeviceNumber;// Offset=0x4 Size=0x4
    unsigned long PciFunctionNumber;// Offset=0x8 Size=0x4
    unsigned long Reserved;// Offset=0xc Size=0x4
    unsigned short RootHubPortNumber;// Offset=0x10 Size=0x2
    unsigned short HubPortNumber[5];// Offset=0x12 Size=0xa
    unsigned short Reserved2;// Offset=0x1c Size=0x2
};

struct _HUB_PARENT_INTERFACE// Size=0x88 (Id=428)
{
    unsigned short Size;// Offset=0x0 Size=0x2
    unsigned short Version;// Offset=0x2 Size=0x2
    void * Context;// Offset=0x8 Size=0x8
    void  ( * InterfaceReference)(void * );// Offset=0x10 Size=0x8
    void  ( * InterfaceDereference)(void * );// Offset=0x18 Size=0x8
    unsigned char HubDepth;// Offset=0x20 Size=0x1
    struct UCXUSBDEVICE__ * Hub;// Offset=0x28 Size=0x8
    enum _USB_DEVICE_SPEED HubSpeed;// Offset=0x30 Size=0x4
    unsigned char IsHubWakeCapable;// Offset=0x34 Size=0x1
    unsigned char IsEnhancedSuperSpeed;// Offset=0x35 Size=0x1
    unsigned char  ( * WasHubResetOnResume)(void * );// Offset=0x38 Size=0x8
    unsigned char  ( * WasDeviceProgrammingLostOnResume)(void * );// Offset=0x40 Size=0x8
    void * ConnectorId;// Offset=0x48 Size=0x8
    unsigned short First30PortToMap;// Offset=0x50 Size=0x2
    unsigned short Last30PortToMap;// Offset=0x52 Size=0x2
    void  ( * GetHubSymbolicLinkName)(void * ,struct _UNICODE_STRING * );// Offset=0x58 Size=0x8
    struct _USB_TOPOLOGY_ADDRESS HubTopologyAddress;// Offset=0x60 Size=0x20
    void * HubFdoContext;// Offset=0x80 Size=0x8
};

struct _HUB_CONTROLLERSTACK_INTERFACE// Size=0xe8 (Id=335)
{
    unsigned short Size;// Offset=0x0 Size=0x2
    unsigned short Version;// Offset=0x2 Size=0x2
    void * Context;// Offset=0x8 Size=0x8
    void  ( * InterfaceReference)(void * );// Offset=0x10 Size=0x8
    void  ( * InterfaceDereference)(void * );// Offset=0x18 Size=0x8
    struct UCXUSBDEVICE__ * Hub;// Offset=0x20 Size=0x8
    struct USB_HUB_CONTEXT__ * HubContext;// Offset=0x28 Size=0x8
    void  ( * ClearTTBuffer)(struct USB_HUB_CONTEXT__ * ,struct USB_DEVICE_CONTEXT__ * ,struct UCXENDPOINT__ * ,unsigned long ,unsigned long );// Offset=0x30 Size=0x8
    long  ( * UsbDeviceCreate)(struct UCXUSBDEVICE__ * ,struct _USBDEVICE_INFO * ,struct UCXUSBDEVICE__ ** );// Offset=0x38 Size=0x8
    void  ( * UsbDeviceDelete)(struct UCXUSBDEVICE__ * ,struct UCXUSBDEVICE__ * );// Offset=0x40 Size=0x8
    void  ( * UsbDeviceDisconnect)(struct UCXUSBDEVICE__ * ,unsigned long );// Offset=0x48 Size=0x8
    void  ( * UsbDeviceSetPdoInformation)(struct UCXUSBDEVICE__ * ,struct UCXUSBDEVICE__ * ,struct _DEVICE_OBJECT * );// Offset=0x50 Size=0x8
    long  ( * DefaultEndpointCreate)(struct UCXUSBDEVICE__ * ,struct UCXUSBDEVICE__ * ,unsigned long ,struct UCXENDPOINT__ ** );// Offset=0x58 Size=0x8
    void  ( * Address0OwnershipRelease)(struct UCXUSBDEVICE__ * ,struct UCXUSBDEVICE__ * );// Offset=0x60 Size=0x8
    long  ( * EndpointCreate)(struct UCXUSBDEVICE__ * ,struct UCXUSBDEVICE__ * ,struct _USB_ENDPOINT_DESCRIPTOR * ,unsigned long ,struct _USB_SUPERSPEED_ENDPOINT_COMPANION_DESCRIPTOR * ,struct UCXENDPOINT__ ** );// Offset=0x68 Size=0x8
    void  ( * EndpointDelete)(struct UCXUSBDEVICE__ * ,struct UCXUSBDEVICE__ * ,struct UCXENDPOINT__ * );// Offset=0x70 Size=0x8
    void  ( * EndpointExposedToClient)(struct UCXENDPOINT__ * );// Offset=0x78 Size=0x8
    void *  ( * EndpointGetUsbdPipeHandle)(struct UCXENDPOINT__ * );// Offset=0x80 Size=0x8
    unsigned long  ( * EndpointGetMaximumTransferSize)(struct UCXENDPOINT__ * );// Offset=0x88 Size=0x8
    void * UsbDeviceGetPerformanceInfo;// Offset=0x90 Size=0x8
    struct _UCX_FORWARD_PROGRESS_WORKITEM *  ( * ForwardProgressWorkItemAllocate)(struct UCXUSBDEVICE__ * ,struct _DEVICE_OBJECT * ,unsigned long );// Offset=0x98 Size=0x8
    void  ( * ForwardProgressWorkItemDelete)(struct _UCX_FORWARD_PROGRESS_WORKITEM * );// Offset=0xa0 Size=0x8
    void  ( * ForwardProgressWorkItemEnqueue)(struct _UCX_FORWARD_PROGRESS_WORKITEM * ,void  ( * )(struct _DEVICE_OBJECT * ,void * ,struct _UCX_FORWARD_PROGRESS_WORKITEM * ),void * ,enum UCX_FORWARD_PROGRESS_ENQUEUE_OPTIONS );// Offset=0xa8 Size=0x8
    void  ( * ForwardProgressWorkItemFlush)(struct _UCX_FORWARD_PROGRESS_WORKITEM * );// Offset=0xb0 Size=0x8
    void  ( * ClearTTBufferComplete)(struct UCXUSBDEVICE__ * ,struct UCXENDPOINT__ * );// Offset=0xb8 Size=0x8
    void  ( * NoPingResponse)(struct USB_HUB_CONTEXT__ * ,struct USB_DEVICE_CONTEXT__ * );// Offset=0xc0 Size=0x8
    unsigned char  ( * IsDeviceDisconnected)(struct UCXUSBDEVICE__ * );// Offset=0xc8 Size=0x8
    unsigned char  ( * AreSuperspeedStreamsSupported)(struct UCXUSBDEVICE__ * );// Offset=0xd0 Size=0x8
    long  ( * ControllerStopIdleSynchronous)(struct UCXUSBDEVICE__ * ,struct _CONTROLLER_STOP_IDLE_CONTEXT * );// Offset=0xd8 Size=0x8
    void  ( * ControllerResumeIdle)(struct UCXUSBDEVICE__ * ,struct _CONTROLLER_STOP_IDLE_CONTEXT * );// Offset=0xe0 Size=0x8
};

struct _USB_BUS_INTERFACE_USBDI_V3// Size=0x60 (Id=396)
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

struct _DEVICE_CAPABILITIES// Size=0x40 (Id=489)
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

union _CONTROLLER_FLAGS// Size=0x4 (Id=586)
{
    unsigned long AsUlong32;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long SuperSpeedStreamsSupported:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
    };
};

union _USB_HUB_STATUS// Size=0x2 (Id=657)
{
    unsigned short AsUshort16;// Offset=0x0 Size=0x2
    struct // Size=0x2 (Id=0)
    {
        unsigned short LocalPowerLost:1;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0x1
        unsigned short OverCurrent:1;// Offset=0x0 Size=0x2 BitOffset=0x1 BitSize=0x1
        unsigned short Reserved:14;// Offset=0x0 Size=0x2 BitOffset=0x2 BitSize=0xe
    };
};

union _USB_HUB_CHANGE// Size=0x2 (Id=660)
{
    unsigned short AsUshort16;// Offset=0x0 Size=0x2
    struct // Size=0x2 (Id=0)
    {
        unsigned short LocalPowerChange:1;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0x1
        unsigned short OverCurrentChange:1;// Offset=0x0 Size=0x2 BitOffset=0x1 BitSize=0x1
        unsigned short Reserved:14;// Offset=0x0 Size=0x2 BitOffset=0x2 BitSize=0xe
    };
};

union _USB_HUB_STATUS_AND_CHANGE// Size=0x4 (Id=623)
{
    unsigned long AsUlong32;// Offset=0x0 Size=0x4
    union _USB_HUB_STATUS HubStatus;// Offset=0x0 Size=0x2
    union _USB_HUB_CHANGE HubChange;// Offset=0x2 Size=0x2
};

enum _USB_HUB_FEATURE_SELECTOR
{
    C_HUB_LOCAL_POWER=0,
    C_HUB_OVER_CURRENT=1
};

enum _HSM_EVENT
{
    HsmEventNull=1000,
    HsmEventContinueIfNoSubState=1001,
    HsmEventConfigurationFailure=2006,
    HsmEventConfigurationSuccess=2010,
    HsmEventDevicePowerReferencesAcquired=2014,
    HsmEventDevicePowerReferencesReleased=2018,
    HsmEventDeviceStopAfterSuspendAcked=2022,
    HsmEventFDOD0Entry=2007,
    HsmEventFDOD0EntryFromSx=2011,
    HsmEventFDOD0Exit=2015,
    HsmEventFDOD0ExitFinal=2019,
    HsmEventFDODeviceAdd=2023,
    HsmEventFDODeviceCleanup=2027,
    HsmEventFDOPrepareHardware=2031,
    HsmEventFDOReleaseHardware=2035,
    HsmEventHubConfigurationFailure=2009,
    HsmEventHubConfigurationSuccess=2013,
    HsmEventHubError=2026,
    HsmEventHubFatalError=2017,
    HsmEventHubIgnoreError=2021,
    HsmEventHubLocalPowerGood=2025,
    HsmEventHubLocalPowerLost=2029,
    HsmEventHubOverCurrent=2033,
    HsmEventHubOverCurrentCleared=2037,
    HsmEventInterruptTransferFailure=2030,
    HsmEventInterruptTransferSuccess=2034,
    HsmEventIoctlFailure=2038,
    HsmEventIoctlSuccess=2042,
    HsmEventNo=2041,
    HsmEventOperationFailure=2045,
    HsmEventOperationPending=2049,
    HsmEventOperationSuccess=2053,
    HsmEventPDORequestGetPortStatus=2039,
    HsmEventPortEnableInterruptTransfer=2046,
    HsmEventPortInterruptReferencesReleased=2050,
    HsmEventPortPowerReferencesAcquired=2054,
    HsmEventPortPowerReferencesReleased=2058,
    HsmEventPortResetReferencesReleased=2062,
    HsmEventPrepareForUpStreamReset=2043,
    HsmEventResetHub=2047,
    HsmEventResetHubComplete=2066,
    HsmEventResetHubFailed=2070,
    HsmEventResetHubFailedOnRemoval=2074,
    HsmEventResetInterruptPipeFailure=2012,
    HsmEventResetInterruptPipeSuccess=2016,
    HsmEventResetRegistrationComplete=2078,
    HsmEventResetUnregistrationComplete=2082,
    HsmEventTimerFired=2086,
    HsmEventTransferFailure=2004,
    HsmEventTransferSuccess=2008,
    HsmEventUpstreamResetComplete=2090,
    HsmEventYes=2057
};

union _USB_DEVICE_STATUS// Size=0x2 (Id=423)
{
    unsigned short AsUshort16;// Offset=0x0 Size=0x2
    struct // Size=0x2 (Id=0)
    {
        unsigned short SelfPowered:1;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0x1
        unsigned short RemoteWakeup:1;// Offset=0x0 Size=0x2 BitOffset=0x1 BitSize=0x1
        unsigned short U1Enable:1;// Offset=0x0 Size=0x2 BitOffset=0x2 BitSize=0x1
        unsigned short U2Enable:1;// Offset=0x0 Size=0x2 BitOffset=0x3 BitSize=0x1
        unsigned short LtmEnable:1;// Offset=0x0 Size=0x2 BitOffset=0x4 BitSize=0x1
        unsigned short Reserved:11;// Offset=0x0 Size=0x2 BitOffset=0x5 BitSize=0xb
    };
};

struct _URB_HEADER// Size=0x18 (Id=539)
{
    unsigned short Length;// Offset=0x0 Size=0x2
    unsigned short Function;// Offset=0x2 Size=0x2
    long Status;// Offset=0x4 Size=0x4
    void * UsbdDeviceHandle;// Offset=0x8 Size=0x8
    unsigned long UsbdFlags;// Offset=0x10 Size=0x4
};

struct _URB_HCD_AREA// Size=0x40 (Id=485)
{
    void * Reserved8[8];// Offset=0x0 Size=0x40
};

struct _URB_CONTROL_TRANSFER_EX// Size=0x88 (Id=621)
{
    struct _URB_HEADER Hdr;// Offset=0x0 Size=0x18
    void * PipeHandle;// Offset=0x18 Size=0x8
    unsigned long TransferFlags;// Offset=0x20 Size=0x4
    unsigned long TransferBufferLength;// Offset=0x24 Size=0x4
    void * TransferBuffer;// Offset=0x28 Size=0x8
    struct _MDL * TransferBufferMDL;// Offset=0x30 Size=0x8
    unsigned long Timeout;// Offset=0x38 Size=0x4
    struct _URB_HCD_AREA hca;// Offset=0x40 Size=0x40
    unsigned char SetupPacket[8];// Offset=0x80 Size=0x8
};

struct _URB_PIPE_REQUEST// Size=0x28 (Id=630)
{
    struct _URB_HEADER Hdr;// Offset=0x0 Size=0x18
    void * PipeHandle;// Offset=0x18 Size=0x8
    unsigned long Reserved;// Offset=0x20 Size=0x4
};

struct _CONTROL_REQUEST// Size=0xa8 (Id=504)
{
    struct WDFREQUEST__ * WdfRequest;// Offset=0x0 Size=0x8
    unsigned long NumberOfBytes;// Offset=0x8 Size=0x4
    struct _IRP * Irp;// Offset=0x10 Size=0x8
    union // Size=0x88 (Id=0)
    {
        struct _URB_CONTROL_TRANSFER_EX Urb;// Offset=0x18 Size=0x88
        struct _URB_PIPE_REQUEST PipeUrb;// Offset=0x18 Size=0x28
        unsigned long UsbdFlags;// Offset=0xa0 Size=0x4
    };
};

struct _URB_BULK_OR_INTERRUPT_TRANSFER// Size=0x80 (Id=363)
{
    struct _URB_HEADER Hdr;// Offset=0x0 Size=0x18
    void * PipeHandle;// Offset=0x18 Size=0x8
    unsigned long TransferFlags;// Offset=0x20 Size=0x4
    unsigned long TransferBufferLength;// Offset=0x24 Size=0x4
    void * TransferBuffer;// Offset=0x28 Size=0x8
    struct _MDL * TransferBufferMDL;// Offset=0x30 Size=0x8
    struct _URB * UrbLink;// Offset=0x38 Size=0x8
    struct _URB_HCD_AREA hca;// Offset=0x40 Size=0x40
};

struct _RTL_BITMAP// Size=0x10 (Id=14)
{
    unsigned long SizeOfBitMap;// Offset=0x0 Size=0x4
    unsigned long * Buffer;// Offset=0x8 Size=0x8
};

struct _HUB_INTERRUPT_REQUEST// Size=0xb8 (Id=383)
{
    struct WDFREQUEST__ * WdfRequest;// Offset=0x0 Size=0x8
    struct _URB_BULK_OR_INTERRUPT_TRANSFER Urb;// Offset=0x8 Size=0x80
    void * UsbdInterruptPipeHandle;// Offset=0x88 Size=0x8
    unsigned char NoChangesInLastInterrupt;// Offset=0x90 Size=0x1
    unsigned long * StatusChangeBitMap;// Offset=0x98 Size=0x8
    unsigned short MaxStatusChangeBitMapSize;// Offset=0xa0 Size=0x2
    unsigned short CurrentStatusChangeBitMapSize;// Offset=0xa2 Size=0x2
    struct _RTL_BITMAP StatusChangeBitMapHeader;// Offset=0xa8 Size=0x10
};

struct _LIST_ENTRY// Size=0x10 (Id=5)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _DISPATCHER_HEADER// Size=0x18 (Id=369)
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

struct _USB_HUB_DESCRIPTOR// Size=0x47 (Id=589)
{
    unsigned char bDescriptorLength;// Offset=0x0 Size=0x1
    unsigned char bDescriptorType;// Offset=0x1 Size=0x1
    unsigned char bNumberOfPorts;// Offset=0x2 Size=0x1
    unsigned short wHubCharacteristics;// Offset=0x3 Size=0x2
    unsigned char bPowerOnToPowerGood;// Offset=0x5 Size=0x1
    unsigned char bHubControlCurrent;// Offset=0x6 Size=0x1
    unsigned char bRemoveAndPowerMask[64];// Offset=0x7 Size=0x40
};

struct _USB_30_HUB_DESCRIPTOR// Size=0xc (Id=597)
{
    unsigned char bLength;// Offset=0x0 Size=0x1
    unsigned char bDescriptorType;// Offset=0x1 Size=0x1
    unsigned char bNumberOfPorts;// Offset=0x2 Size=0x1
    unsigned short wHubCharacteristics;// Offset=0x3 Size=0x2
    unsigned char bPowerOnToPowerGood;// Offset=0x5 Size=0x1
    unsigned char bHubControlCurrent;// Offset=0x6 Size=0x1
    unsigned char bHubHdrDecLat;// Offset=0x7 Size=0x1
    unsigned short wHubDelay;// Offset=0x8 Size=0x2
    unsigned short DeviceRemovable;// Offset=0xa Size=0x2
};

union _HUB_DESCRIPTOR// Size=0x47 (Id=508)
{
    union // Size=0x47 (Id=0)
    {
        struct _USB_HUB_DESCRIPTOR Hub20Descriptor;// Offset=0x0 Size=0x47
        struct _USB_30_HUB_DESCRIPTOR Hub30Descriptor;// Offset=0x0 Size=0xc
    };
};

enum _PSM_EVENT
{
    PsmEventNull=1000,
    PsmEventContinueIfNoSubState=1001,
    PsmEventTimerFired=1002,
    PsmEventDeviceDetached=3006,
    PsmEventDevicePrepareForHibernation=3007,
    PsmEventDeviceRequestCycle=3011,
    PsmEventDeviceRequestDisable=3015,
    PsmEventDeviceRequestDisableSuperSpeed=3019,
    PsmEventDeviceRequestReset=3023,
    PsmEventDeviceRequestResume=3027,
    PsmEventDeviceRequestSuspend=3031,
    PsmEventDeviceRequestWarmReset=3035,
    PsmEventDeviceSetU1Timeout=3039,
    PsmEventDeviceSetU2Timeout=3043,
    PsmEventHubReset=3010,
    PsmEventHubResume=3014,
    PsmEventHubResumeInS0=3018,
    PsmEventHubResumeWithReset=3022,
    PsmEventHubStart=3026,
    PsmEventHubStatusChange=3030,
    PsmEventHubStop=3034,
    PsmEventHubSurpriseRemove=3038,
    PsmEventHubSuspend=3042,
    PsmEventNo=3005,
    PsmEventObjectCleanup=3046,
    PsmEventOperationFailure=3009,
    PsmEventOperationSuccess=3013,
    PsmEventPortConnectChange=3017,
    PsmEventPortCycleOnError=3021,
    PsmEventPortDisableAndCycleOnError=3025,
    PsmEventPortDisabled=3029,
    PsmEventPortEnabledOnConnectError=3033,
    PsmEventPortEnabledWhileResetError=3037,
    PsmEventPortError=3041,
    PsmEventPortErrorWithChange=3045,
    PsmEventPortIgnoreError=3049,
    PsmEventPortLinkStateError=3053,
    PsmEventPortNeedsReset=3057,
    PsmEventPortNoChange=3061,
    PsmEventPortOverCurrent=3065,
    PsmEventPortOverCurrentCleared=3069,
    PsmEventPortResetComplete=3073,
    PsmEventPortResetHubOnError=3077,
    PsmEventPortResetInProgress=3081,
    PsmEventPortResetPollingTimerFired=3004,
    PsmEventPortResumed=3085,
    PsmEventTransferFailure=3008,
    PsmEventTransferSuccess=3012,
    PsmEventUserInitiatedResetOnOverCurrent=3054,
    PsmEventYes=3089
};

enum _DSM_EVENT
{
    DsmEventNull=1000,
    DsmEventContinueIfNoSubState=1001,
    DsmEventTimerFired=1002,
    DsmEventBootResetTimerFired=4007,
    DsmEventClientRequestCycle=4011,
    DsmEventClientRequestIdle=4015,
    DsmEventClientRequestOpenOrCloseStreams=4019,
    DsmEventClientRequestReset=4023,
    DsmEventClientRequestResetPipe=4027,
    DsmEventClientRequestSelectConfiguration=4031,
    DsmEventClientRequestSelectNullConfiguration=4035,
    DsmEventClientRequestSetInterface=4039,
    DsmEventClientRequestSyncClearStall=4043,
    DsmEventClientRequestSyncResetPipe=4047,
    DsmEventDeviceDisableUState=4009,
    DsmEventDeviceEnableUState=4013,
    DsmEventDeviceFailEnumeration=4017,
    DsmEventDeviceHotReset=4021,
    DsmEventDeviceIgnoreError=4025,
    DsmEventDeviceNoReset=4029,
    DsmEventDeviceRenumerateOnHubResume=4033,
    DsmEventDeviceResumed=4037,
    DsmEventDeviceResumedOnHubResume=4041,
    DsmEventDeviceRetryEnum=4045,
    DsmEventDeviceSuspendedOnHubResume=4049,
    DsmEventDeviceWarmReset=4053,
    DsmEventFDORequestGetDescriptor=4051,
    DsmEventHubResume=4006,
    DsmEventHubResumeInS0=4010,
    DsmEventHubResumeWithReset=4014,
    DsmEventHubStart=4018,
    DsmEventHubStop=4022,
    DsmEventHubStopAfterSuspend=4026,
    DsmEventHubStopWithReferenceAcquired=4057,
    DsmEventHubSuspend=4030,
    DsmEventLPMPowerSettingChange=4055,
    DsmEventNo=4061,
    DsmEventNoPingResponseError=4059,
    DsmEventOperationFailure=4065,
    DsmEventOperationFailureWithDeviceEnabled=4069,
    DsmEventOperationPending=4073,
    DsmEventOperationSuccess=4077,
    DsmEventPDOCleanup=4063,
    DsmEventPDOD0Entry=4067,
    DsmEventPDOD0Exit=4071,
    DsmEventPDOD0ExitFinal=4075,
    DsmEventPDOInstallMSOSExt=4091,
    DsmEventPDOPrepareForHibernation=4079,
    DsmEventPDOPreStart=4095,
    DsmEventPDOReportedMissing=4083,
    DsmEventPortAttachDevice=4034,
    DsmEventPortDetachDevice=4038,
    DsmEventPortDetachDeviceWithDeviceEnabled=4081,
    DsmEventPortDisabled=4042,
    DsmEventPortDisabledOnHubSuspend=4085,
    DsmEventPortFailed=4046,
    DsmEventPortReAttachDevice=4050,
    DsmEventPortResetComplete=4054,
    DsmEventPortResetFailedDueToPendingSuspend=4058,
    DsmEventPortResetTimedOut=4062,
    DsmEventPortResumed=4066,
    DsmEventPortResumedFromD3Cold=4070,
    DsmEventPortResumeFailedDueToPendingSuspend=4074,
    DsmEventPortResumeTimedOut=4078,
    DsmEventPortStateDisabled=4082,
    DsmEventPortStateEnabled=4086,
    DsmEventPortStateEnabledOnReconnect=4090,
    DsmEventPortStateSuspended=4094,
    DsmEventPortSuspended=4098,
    DsmEventPortTimeoutUpdated=4102,
    DsmEventQueryDeviceText=4087,
    DsmEventTransferFailure=4004,
    DsmEventTransferStall=4008,
    DsmEventTransferSuccess=4012,
    DsmEventUCXClientRequestComplete=4016,
    DsmEventUCXIoctlFailure=4020,
    DsmEventUCXIoctlFailureDueToExitLatencyTooLarge=4024,
    DsmEventUCXIoctlSuccess=4028,
    DsmEventYes=4089
};

union _EVENT// Size=0x4 (Id=497)
{
    unsigned long EventAsUlong;// Offset=0x0 Size=0x4
    enum _HSM_EVENT HsmEvent;// Offset=0x0 Size=0x4
    enum _PSM_EVENT PsmEvent;// Offset=0x0 Size=0x4
    enum _DSM_EVENT DsmEvent;// Offset=0x0 Size=0x4
};

enum _GENERIC_STATE
{
    GenericStateIgnored=1000,
    GenericStateEmptySubState=1001,
    GenericStateNull=1002
};

enum _HSM_STATE
{
    HsmStateIgnored=1000,
    HsmStateEmptySubState=1001,
    HsmStateNull=1002,
    HsmStateCompleteWithStatusFailed=1003,
    HsmStateRequestPortCycle=1004,
    HsmStateSignalQueryDeviceTextEvent=1005,
    HsmStateCompleteFDORequestWithStatusFailed=1006,
    HsmStateCompleteGetPortStatusWithInternalError=1007,
    HsmStateCompleteGetPortStatusWithNoSuchDevice=1008,
    HsmStateWaitingForAddDevice=2000,
    HsmStateAcquiringWdfPowerReferenceInitialD0Entry=2001,
    HsmStateAcquiringWdfPowerReferenceOnInterrupt=2002,
    HsmStateAcquiringWdfPowerReferenceOnInterruptFailureAndCheckingIfRootHub=2003,
    HsmStateAcquiringWdfPowerReferenceOnReset=2004,
    HsmStateAcquiringWdfPowerReferenceOnResumeInSX=2005,
    HsmStateAcquiringWdfReferenceOnResumeInS0=2006,
    HsmStateBugcheckingSystemOnExcessiveResetsForHubInBootPath=2007,
    HsmStateCancellingInterruptTransferOnReset=2008,
    HsmStateCancellingInterruptTransferOnStop=2009,
    HsmStateCancellingInterruptTransferOnSuspend=2010,
    HsmStateCheckIfThereIsAValidHubChange=2011,
    HsmStateCheckingForUnexpectedPowerLoss=2012,
    HsmStateCheckingIfHubIsInBootPath=2013,
    HsmStateCheckingIfResetByParent=2014,
    HsmStateCheckingIfResetByParentWithResetPending=2015,
    HsmStateCheckingIfResetRecoveryHasBeenInvokedTooManyTimes=2016,
    HsmStateCheckingPSMInterruptReferencesOnReset=2017,
    HsmStateCheckingPSMInterruptReferencesOnResetInNoInterrupt=2018,
    HsmStateCheckingPSMInterruptReferencesOnResetInNoInterruptOnFatalError=2019,
    HsmStateCheckingPSMInterruptReferencesOnStop=2020,
    HsmStateCheckingPSMInterruptReferencesOnStopInNoInterrupt=2021,
    HsmStateCheckingPSMInterruptReferencesOnSuspend=2022,
    HsmStateCheckingPSMInterruptReferencesOnSxInNoInterrupt=2023,
    HsmStateCheckOverCurrentBit=2024,
    HsmStateCompletingPDORequestForGetPortStatus=2025,
    HsmStateCompletingPDORequestForGetPortStatusFromConfigWithIntTransfer=2026,
    HsmStateCompletingPDORequestForGetPortStatusFromConfigWithIntTransferWithNoSuchDevice=2027,
    HsmStateCompletingPDORequestForGetPortStatusInSuspended=2028,
    HsmStateCompletingPDORequestForGetPortStatusWithNoSuchDevice=2029,
    HsmStateConfiguredWithIntTransfer=2030,
    HsmStateConfiguredWithoutInterruptTransfer=2031,
    HsmStateConfiguring=2032,
    HsmStateConfiguringHubAfterReset=2033,
    HsmStateConfiguringHubAfterResetOnSystemResume=2034,
    HsmStateCreatingChildPSMs=2035,
    HsmStateErrorOnWaitingForOvercurrentClear=2036,
    HsmStateGettingAdditionalConfigInfo=2037,
    HsmStateGettingHubPortStatus=2038,
    HsmStateGettingHubPortStatusForLostChanges=2039,
    HsmStateGettingOverCurrentBitStatus=2040,
    HsmStateGettingPortStatusOnPDORequest=2041,
    HsmStateGettingPortStatusOnPDORequestFromConfigWithIntTransfer=2042,
    HsmStateHasResetCountReachedMaximum=2043,
    HsmStateHasResetPipeCountReachedMaximum=2044,
    HsmStateHubStatusError=2045,
    HsmStateInitializingResetCount=2046,
    HsmStateIsItHubChange=2047,
    HsmStateLoggingHubWasReset=2048,
    HsmStateNotifyingHubResetToPortsOnReset=2049,
    HsmStateNotifyingHubResetToPortsOnResetOnFatalError=2050,
    HsmStateNotifyingHubResetToPortsOnResetOnResume=2051,
    HsmStateNotifyingHubResumeInS0ToDevices=2052,
    HsmStateNotifyingHubResumeToDevices=2053,
    HsmStateNotifyingHubResumeWithResetToDevices=2054,
    HsmStateNotifyingHubResumeWithResetToDevicesOnFailure=2055,
    HsmStateNotifyingHubStopToDevices=2056,
    HsmStateNotifyingHubStopToDevicesOnSuspriseRemove=2057,
    HsmStateNotifyingHubStopToPorts=2058,
    HsmStateNotifyingHubStopToPortsOnFatalError=2059,
    HsmStateNotifyingHubStopToPortsOnReset=2060,
    HsmStateQueryingForHubHackFlags=2061,
    HsmStateQueueingFakeStatusChangeOnResumeInS0=2062,
    HsmStateQueueingHubStatusForLostChanges=2063,
    HsmStateQueueingPortStatusChangeEvents=2064,
    HsmStateQueuingHubChange=2065,
    HsmStateReConfiguring=2066,
    HsmStateReportingErrorToPnp=2067,
    HsmStateReportingReStartFailure=2068,
    HsmStateReportingStartFailure=2069,
    HsmStateResettingHub=2070,
    HsmStateResettingHubOnResume=2071,
    HsmStateResettingInterruptPipeOnFailure=2072,
    HsmStateSendingAckForHubChange=2073,
    HsmStateSendingInterruptTransfer=2074,
    HsmStateSendingInterruptTransferAfterResettingPipe=2075,
    HsmStateSignalingPnPPowerEventOnPendingStop=2076,
    HsmStateSignalingPnPPowerEventOnStart=2077,
    HsmStateSignalingPnPPowerEventOnStop=2078,
    HsmStateSignallingPnpPowerEventForSuspended=2079,
    HsmStateSignallingPnpPowerEventInUnconfigured=2080,
    HsmStateStartingTimerForResetRetry=2081,
    HsmStateStopped=2082,
    HsmStateSupriseRemoved=2083,
    HsmStateSuspended=2084,
    HsmStateSuspendedInRecycle=2085,
    HsmStateSuspendedWithPendingReset=2086,
    HsmStateUnblockingResumeOnHubResetFailure=2087,
    HsmStateUnblockResumeWaitingForStop=2088,
    HsmStateUnconfigured=2089,
    HsmStateWaitingForD0Entry=2090,
    HsmStateWaitingForDevicesToAcquireReferenceOnStart=2091,
    HsmStateWaitingForDevicesToReleaseReferenceOnD0ExitFinalFromReset=2092,
    HsmStateWaitingForDevicesToReleaseReferenceOnSuspend=2093,
    HsmStateWaitingForEnableInterruptsOnReset=2094,
    HsmStateWaitingForEnableInterruptsOnStop=2095,
    HsmStateWaitingForEnableInterruptsOnSx=2096,
    HsmStateWaitingForInterruptReferencesReleasedOnFatalError=2097,
    HsmStateWaitingForInterruptReferencesReleasedOnReset=2098,
    HsmStateWaitingForInterruptReferencesReleasedOnStop=2099,
    HsmStateWaitingForInterruptReferencesReleasedOnSuspend=2100,
    HsmStateWaitingForOvercurrentToClear=2101,
    HsmStateWaitingForPortsToAcquireReferenceOnResume=2102,
    HsmStateWaitingForPortsToAcquireReferenceOnResumeInS0=2103,
    HsmStateWaitingForPortsToAcquireReferenceOnResumeWithReset=2104,
    HsmStateWaitingForPortsToAcquireReferenceOnStart=2105,
    HsmStateWaitingForPortsToAcquireReferencePostReset=2106,
    HsmStateWaitingForPortsToReleaseReferenceOnReset=2107,
    HsmStateWaitingForPortsToReleaseReferenceOnResetOnResume=2108,
    HsmStateWaitingForPortsToReleaseReferenceOnStop=2109,
    HsmStateWaitingForPortsToReleaseReferenceOnSuspend=2110,
    HsmStateWaitingForPSMInterruptReferencesOnReset=2111,
    HsmStateWaitingForPSMInterruptReferencesOnStop=2112,
    HsmStateWaitingForPSMInterruptReferencesOnSuspend=2113,
    HsmStateWaitingForReleaseHardware=2114,
    HsmStateWaitingForReleaseHardwareOnReStartFailure=2115,
    HsmStateWaitingForReleaseHardwareOnStartFailure=2116,
    HsmStateWaitingForResetRetryTimer=2117,
    HsmStateWaitingForStop=2118,
    HsmStateWaitingToBeDeleted=2119,
    HsmStateCheckingBytesReturnedInHubConfigDescriptor=2120,
    HsmStateCheckingIfHubDescriptorRetryCountExceededMax=2121,
    HsmStateConfiguringAfterSetConfig=2122,
    HsmStateGettingHubConfigurationDescriptorWithDefaultLength=2123,
    HsmStateGettingHubConfigurationDescriptorWithReturnedLength=2124,
    HsmStateGettingHubDescriptor=2125,
    HsmStateGettingHubStatus=2126,
    HsmStateInitializingHubDescriptorRetryCount=2127,
    HsmStateReturningConfigurationFailure=2128,
    HsmStateReturningConfigurationSuccess=2129,
    HsmStateSettingHubConfiguration=2130,
    HsmStateUpdatingHubInfoInUCX=2131,
    HsmStateValidatingAndParsingHubDescriptor=2132,
    HsmStateValidatingAndParsingHubPowerStatus=2133,
    HsmStateValidatingHubConfigurationDescriptor=2134,
    HsmStateWaitingForHubDescriptorRetryTimer=2135,
    HsmStateGettingRootHub20PortsInfo=2136,
    HsmStateGettingRootHub30PortsInfo=2137,
    HsmStateGettingRootHubInfo=2138,
    HsmStateReturningConfigurationFailureForRootHub=2139,
    HsmStateReturningConfigurationSuccessForRootHub=2140,
    HsmStateGettingAdditionalInfoFromParent=2141,
    HsmStateReturningOperationFailure=2142,
    HsmStateReturningOperationSuccess=2143,
    HsmStateGettingHubDescriptorToCheckForPowerLoss=2144,
    HsmStateReturningOperationFailureInCheckingForPowerLoss=2145,
    HsmStateReturningOperationSuccessInCheckingForPowerLoss=2146,
    HsmStateReturningOperationFailureInSettingHubDepth=2147,
    HsmStateReturningOperationSuccessInSettingHubDepth=2148,
    HsmStateSettingHubDepth=2149
};

enum _PSM20_STATE
{
    Psm20StateIgnored=1000,
    Psm20StateEmptySubState=1001,
    Psm20StateNull=1002,
    Psm20StateCompleteWithStatusFailed=1003,
    Psm20StateRequestPortCycle=1004,
    Psm20StateSignalQueryDeviceTextEvent=1005,
    Psm20StateCompleteFDORequestWithStatusFailed=1006,
    Psm20StateCompleteGetPortStatusWithInternalError=1007,
    Psm20StateCompleteGetPortStatusWithNoSuchDevice=1008,
    Psm20StateCompletePdoPreStart=1009,
    Psm20StateSignalPnpPowerEvent=1010,
    Psm20StatePoweredOffDisconnected=3000,
    Psm20StateAcquiringInterruptReferenceOnHSMInDisabled=3001,
    Psm20StateAcquiringInterruptReferenceOnHSMInEnabled=3002,
    Psm20StateAcquiringInterruptReferenceOnResuming=3003,
    Psm20StateAcquiringPowerReferenceFromPoweredOffDisabledInS0=3004,
    Psm20StateAcquiringPowerReferenceFromPoweredOffDisconnectedInS0=3005,
    Psm20StateAcquiringPowerReferenceFromPoweredOffSuspendedInS0=3006,
    Psm20StateCancellingDisableOnHubStopSuspend=3007,
    Psm20StateCancellingDisablingPortOnPortCycleOnHubStop=3008,
    Psm20StateCancellingDisablingPortOnPortCycleWithTimerOnHubStop=3009,
    Psm20StateCancellingQueryPortStatus=3010,
    Psm20StateCancellingResetOnSurpriseRemove=3011,
    Psm20StateCancellingSetPortPower=3012,
    Psm20StateCheckingIfConnectBitOne=3013,
    Psm20StateCheckingIfPersistentOvercurrent=3014,
    Psm20StateConnectedDisabled=3015,
    Psm20StateConnectedEnabled=3016,
    Psm20StateCreatingDevice=3017,
    Psm20StateDetachingDeviceFromPortOnCycleOnHubStop=3018,
    Psm20StateDetachingDeviceFromPortOnDisconnect=3019,
    Psm20StateDetachingDeviceFromPortOnDisconnectWithTimer=3020,
    Psm20StateDetachingDeviceFromPortOnOverCurrent=3021,
    Psm20StateDetachingDeviceFromPortOnOverCurrentClear=3022,
    Psm20StateDetachingDeviceFromPortOnOverCurrentClearWithTimer=3023,
    Psm20StateDetachingDeviceFromPortOnOverCurrentWithTimer=3024,
    Psm20StateDetachingDeviceFromPortOnPortCycle=3025,
    Psm20StateDetachingDeviceOnCleanup=3026,
    Psm20StateDetachingDeviceOnDisableAndCycle=3027,
    Psm20StateDetachingDeviceOnHubReset=3028,
    Psm20StateDetachingDeviceOnPortCycleWithTimer=3029,
    Psm20StateDetachingDeviceOnPortDisableAndCycleWithTimer=3030,
    Psm20StateDisablingOnHubSuspendWithTimer=3031,
    Psm20StateDisablingPortBeforeConnecting=3032,
    Psm20StateDisablingPortOnCycle=3033,
    Psm20StateDisablingPortOnDeviceRequest=3034,
    Psm20StateDisablingPortOnHubSuspend=3035,
    Psm20StateDisablingPortOnPortCycleWithTimer=3036,
    Psm20StateDisablingPortOnTimeOut=3037,
    Psm20StateDisconnected=3038,
    Psm20StateErrorOnAcquringReferenceOnHubResume=3039,
    Psm20StateErrorOnConnectedDisabled=3040,
    Psm20StateErrorOnConnectedEnabled=3041,
    Psm20StateErrorOnDisconnected=3042,
    Psm20StateErrorOnIssuingResetComplete=3043,
    Psm20StateErrorOnResettingEnabled=3044,
    Psm20StateErrorOnResettingPort=3045,
    Psm20StateErrorOnStartingAndAcquiringReferenceOnHubResumeFromDisabled=3046,
    Psm20StateErrorOnStoppingTimerOnDisconnect=3047,
    Psm20StateErrorOnStoppingTimerOnOverCurrent=3048,
    Psm20StateErrorOnStoppingTimerOnOverCurrentClear=3049,
    Psm20StateErrorOnStoppingTimerOnPortCycle=3050,
    Psm20StateErrorOnSuspended=3051,
    Psm20StateErrorOnWaitingForCompanionPort=3052,
    Psm20StateErrorOnWaitingForDebounce=3053,
    Psm20StateErrorOnWaitingForDSMResumeResponse=3054,
    Psm20StateErrorOnWaitingForOldDeviceToCleanup=3055,
    Psm20StateErrorOnWaitingForOverCurrentClear=3056,
    Psm20StateErrorOnWaitingForResumeComplete=3057,
    Psm20StateErrorOnWaitingForResumeRecoveryTimer=3058,
    Psm20StateErrorOnWaitingForResumeTimerToFlush=3059,
    Psm20StateFlushingStaleDeviceEvents=3060,
    Psm20StateFlushingUserResetForOverCurrentOnHubStopSuspend=3061,
    Psm20StateFlushingUserResetForOverCurrentOnOverCurrentClear=3062,
    Psm20StateInitiatingResetPort=3063,
    Psm20StateInitiatingResume=3064,
    Psm20StateIsItBootDevice=3065,
    Psm20StateIsOldDevicePresent=3066,
    Psm20StateIssuingAttachDeviceToPort=3067,
    Psm20StateIssuingDetachDeviceOnCycleFromPoweredOffDisabledOrSuspended=3068,
    Psm20StateIssuingDisabledToDSMFromDisabled=3069,
    Psm20StateIssuingHubReset=3070,
    Psm20StateIssuingHubResetFromDisconnected=3071,
    Psm20StateIssuingHubResetOnDisableFailure=3072,
    Psm20StateIssuingHubResetWhenWaitingForDSMResumeResponse=3073,
    Psm20StateIssuingHubResetWhileHubSuspend=3074,
    Psm20StateIssuingHubResetWithPendingTimer=3075,
    Psm20StateIssuingHubResetWithTimer=3076,
    Psm20StateIssuingHubResetWithTimerOnHubSuspend=3077,
    Psm20StateIssuingHubResetWithTimerWhileHubSuspend=3078,
    Psm20StateIssuingPortDisabledToDevice=3079,
    Psm20StateIssuingPortDisableFailedToDevice=3080,
    Psm20StateIssuingReAttachDeviceToBootDevice=3081,
    Psm20StateIssuingResetFailedDuetoPendingHubSuspendToDSMInDisabled=3082,
    Psm20StateIssuingResetFailedDuetoPendingHubSuspendToDSMInEnabled=3083,
    Psm20StateIssuingResumedToDeviceSM=3084,
    Psm20StateIssuingSuspendedToDeviceSM=3085,
    Psm20StateNotifyingUserAboutPersistentOverCurrent=3086,
    Psm20StatePoweredOffDisabled=3087,
    Psm20StatePoweredOffSuspended=3088,
    Psm20StateQueryingPortStatusOnOverCurrent=3089,
    Psm20StateQueueingPortFailureToDSMOnSuspend=3090,
    Psm20StateQueueingPortResumeFailedDueToPendingSuspend=3091,
    Psm20StateQueueingPortResumeTimedOut=3092,
    Psm20StateQueueingStateDisabledOnHubResumeFromDisabled=3093,
    Psm20StateQueueingStateDisabledToDeviceSM=3094,
    Psm20StateQueueingStateDisabledToDeviceSMOnResetHub=3095,
    Psm20StateQueueingStateEnabledToDeviceSM=3096,
    Psm20StateQueueingStateSuspendedToDeviceSM=3097,
    Psm20StateQueueingStateSuspendedToDeviceSMOnIgnoreError=3098,
    Psm20StateReleasingInterruptReferenceAndIssuingPortResetTimedOutToDSM=3099,
    Psm20StateReleasingInterruptReferenceAndStoppingTimer=3100,
    Psm20StateReleasingInterruptReferenceOnResetTransferFailure=3101,
    Psm20StateReleasingInterruptReferenceOnSuccessfulReset=3102,
    Psm20StateReleasingPowerReferenceonPoweredOffDisabled=3103,
    Psm20StateReleasingPowerReferenceonPoweredOffDisconnected=3104,
    Psm20StateReleasingResetReferenceOnDeviceRemoval=3105,
    Psm20StateResettingEnabled=3106,
    Psm20StateSettingPortPowerOnOverCurrent=3107,
    Psm20StateStartingAndAcquiringReferenceOnHubResume=3108,
    Psm20StateStartingAndAcquiringReferenceOnHubResumeFromDisabled=3109,
    Psm20StateStartingAndAcquiringReferenceOnHubStart=3110,
    Psm20StateStartingAndAcquiringReferenceOnHubStartFromDisabled=3111,
    Psm20StateStartingAndAcquiringReferenceOnWarmResume=3112,
    Psm20StateStartingOverCurrentTimer=3113,
    Psm20StateStartingResetTimer=3114,
    Psm20StateStartingResumeRecoveryTimer=3115,
    Psm20StateStartingResumeTimer=3116,
    Psm20StateStoppingResumeTimer=3117,
    Psm20StateStoppingTimerAndQueueingHubResetInDisconnected=3118,
    Psm20StateStoppingTimerOnDisconnect=3119,
    Psm20StateStoppingTimerOnHubStopSuspendInDisconnected=3120,
    Psm20StateStoppingTimerOnOverCurrent=3121,
    Psm20StateStoppingTimerOnOverCurrentClear=3122,
    Psm20StateStoppingTimerOnPortCycle=3123,
    Psm20StateStoppingTimerOnResetComplete=3124,
    Psm20StateSuspended=3125,
    Psm20StateSuspending=3126,
    Psm20StateWaitingForDebounce=3127,
    Psm20StateWaitingForDisableCompleteOnHubSuspend=3128,
    Psm20StateWaitingForDisableCompleteWithTimerOnHubSuspend=3129,
    Psm20StateWaitingForDSMResumeResponse=3130,
    Psm20StateWaitingForDSMResumeResponseOnHubStop=3131,
    Psm20StateWaitingForHubStopSuspend=3132,
    Psm20StateWaitingForHubStopSuspendInDisconnected=3133,
    Psm20StateWaitingForHubStopSuspendOnAttachFailure=3134,
    Psm20StateWaitingForHubStopSuspendOrTimer=3135,
    Psm20StateWaitingForOldDeviceToDetach=3136,
    Psm20StateWaitingForOverCurrentClear=3137,
    Psm20StateWaitingForResetComplete=3138,
    Psm20StateWaitingForResetTimerToFlush=3139,
    Psm20StateWaitingForResumeComplete=3140,
    Psm20StateWaitingForResumeRecoveryTimer=3141,
    Psm20StateWaitingForResumeTimerToFlush=3142,
    Psm20StateWaitingForTimerOnResetInDisconnected=3143,
    Psm20StateWaitingForTimerToFlushOnDisconnect=3144,
    Psm20StateWaitingForTimerToFlushOnHubStopSuspend=3145,
    Psm20StateWaitingForTimerToFlushOnHubStopSuspendInDisconnected=3146,
    Psm20StateWaitingForTimerToFlushOnOverCurrent=3147,
    Psm20StateWaitingForTimerToFlushOnOverCurrentClear=3148,
    Psm20StateWaitingForTimerToFlushOnPortCycle=3149,
    Psm20StateWaitingForUserResetOnOverCurrent=3150,
    Psm20StateWaitingToBeDeleted=3151,
    Psm20StateAckingPortChange=3152,
    Psm20StateCheckIfThereIsAPortChange=3153,
    Psm20StateCheckIfThereIsAPortChangeOnPortStatus=3154,
    Psm20StateEnablingInterruptsAndGettingPortEvent=3155,
    Psm20StateGettingPortStatus=3156,
    Psm20StateInitializingCumulativePortChangeBits=3157,
    Psm20StateIssuingHubResetOnControlTransferFailure=3158,
    Psm20StateQueueingEnableInterruptTransferOnPortChange=3159,
    Psm20StateWaitingForPortChangeEvent=3160,
    Psm20StateAcquiringPortReferenceOnStart=3161,
    Psm20StateGettingPortLostChangesOnStart=3162,
    Psm20StateGettingPortStatusOnStart=3163,
    Psm20StateIssuingHubResetOnControlTransferFailureOnStart=3164,
    Psm20StatePoweringOnPortOnStart=3165,
    Psm20StateQueueingEnableInterruptTransferOnStart=3166,
    Psm20StateWaitingForPortPowerOnTimerOnStart=3167,
    Psm20StateAckingConnectChangeOnResume=3168,
    Psm20StateAckingPortChangeWhileWaitingForReconnect=3169,
    Psm20StateAcquiringPortReferenceOnResume=3170,
    Psm20StateAcquiringPortReferenceOnResumeInFailure=3171,
    Psm20StateCheckIfThereIsAPortChangeOnPortStatusWhileWaitingForReconnect=3172,
    Psm20StateCheckingIfConnectBitChangeSetOnResume=3173,
    Psm20StateCheckingIfConnectBitIsOneOnChangeWhileWaitingForReconnect=3174,
    Psm20StateCheckingIfDeviceDisconnectedOnResume=3175,
    Psm20StateCheckingIfDeviceDisconnectedOnResumeAfterWaiting=3176,
    Psm20StateEnablingInterruptsWaitingForReconnect=3177,
    Psm20StateGettingPortLostChangesOnStartOnResume=3178,
    Psm20StateGettingPortStatusOnResume=3179,
    Psm20StateGettingPortStatusOnResumeAfterWaiting=3180,
    Psm20StateGettingPortStatusWhileWaitingForReconnect=3181,
    Psm20StateInitializingCumulativePortChangeBitsWhileWaitingForReconnect=3182,
    Psm20StateIssuingHubResetOnControlTransferFailureOnResume=3183,
    Psm20StatePoweringOnPortOnResume=3184,
    Psm20StateQueueingEnableInterruptTransferOnResume=3185,
    Psm20StateQueueingStateDisabledOnFailure=3186,
    Psm20StateResettingHubOnFailureWhileWaitingForReconnect=3187,
    Psm20StateReturningHubStopOnResume=3188,
    Psm20StateStartingTimerForAllowingReconnect=3189,
    Psm20StateStoppingReconnectTimerOnDeviceConnect=3190,
    Psm20StateStoppingReconnectTimerOnHubStop=3191,
    Psm20StateWaitingForDeviceToReconnect=3192,
    Psm20StateWaitingForPortPowerOnTimerOnResume=3193,
    Psm20StateWaitingForReconnectTimerToFlushOnHubStop=3194,
    Psm20StateAckingPortChangeInSuspended=3195,
    Psm20StateAcquiringPowerReferenceOnHubS0IdleInD3Cold=3196,
    Psm20StateCheckIfThereIsAPortChangeAfterInitialGetPortStatusOnSuspended=3197,
    Psm20StateCheckIfThereIsAPortChangeOnSuspended=3198,
    Psm20StateCheckingIfDeviceIsConnectedAfterHubResumeInD3Cold=3199,
    Psm20StateCheckingIfDeviceIsConnectedOnConnectChangeForD3Cold=3200,
    Psm20StateCheckingIfDeviceIsConnectedOnPortChangeInD3Cold=3201,
    Psm20StateCheckingIfDeviceIsConnectedOnPortChangeInD3ColdOnResume=3202,
    Psm20StateCheckingIfDeviceIsConnectedOnPortChangInD3ColdOnResume=3203,
    Psm20StateCheckingIsD3ColdIsEnabled=3204,
    Psm20StateGettingPortChangeEventInSuspended=3205,
    Psm20StateGettingPortChangeOnResumeFromD3ColdSuspended=3206,
    Psm20StateGettingPortStatusInSuspended=3207,
    Psm20StateInitializingCumulativePortChangeBitsInSuspended=3208,
    Psm20StateIssuingHubResetOnControlTransferFailureInSuspended=3209,
    Psm20StatePoweredOffOnHubSuspendFromD3Cold=3210,
    Psm20StatePoweringOnResumeFromD3ColdSuspended=3211,
    Psm20StateQueueingDisabledToDSMOnReconnectFromD3Cold=3212,
    Psm20StateQueueingEnableInterruptTransferOnPortChangeForSuspended=3213,
    Psm20StateQueueingPortStateDisabledOnHubResumeInD3Cold=3214,
    Psm20StateQueueingResumeToDSMFromSuspended=3215,
    Psm20StateReEnablingInterruptsOnConnectChangeInSuspended=3216,
    Psm20StateReEnablingInterruptsOnErrorInSuspended=3217,
    Psm20StateReEnablingInterruptsOnOverCurrentClearedInSuspended=3218,
    Psm20StateReEnablingInterruptsOnOverCurrentInSuspended=3219,
    Psm20StateReleasingPowerReferenceOnHubS0IdleInD3Cold=3220,
    Psm20StateReturningHubStopFromSuspendedInD3Cold=3221,
    Psm20StateReturningHubSuspendFromSuspendedInD3Cold=3222,
    Psm20StateReturningPortConnectChangeFromSuspended=3223,
    Psm20StateReturningPortErrorFromSuspended=3224,
    Psm20StateReturningPortOverCurrentClearedFromSuspended=3225,
    Psm20StateReturningPortOverCurrentFromSuspended=3226,
    Psm20StateReturningPortResumedFromD3Cold=3227,
    Psm20StateReturningPortResumedFromSuspended=3228,
    Psm20StateStartingDebounceTimerOnResumeFromD3Cold=3229,
    Psm20StateStartingDebounceTimerOnResumeFromD3ColdOnResume=3230,
    Psm20StateStartingTimerForAllowingReconnectOnResumingFromD3Cold=3231,
    Psm20StateStoppingDebounceTimerInD3Cold=3232,
    Psm20StateStoppingDebounceTimerInD3ColdOnResume=3233,
    Psm20StateStoppingReconnectTimerOnDeviceReAttachAfterD3Cold=3234,
    Psm20StateStoppingReconnectTimerOnHubStopInD3Cold=3235,
    Psm20StateStoppingReconnectTimerOnOvercurrentClearedInD3Cold=3236,
    Psm20StateStoppingReconnectTimerOnOvercurrentInD3Cold=3237,
    Psm20StateWaitingForDebounceTimerOnReconnectInD3Cold=3238,
    Psm20StateWaitingForDebounceTimerOnReconnectInD3ColdOnResume=3239,
    Psm20StateWaitingForDebounceTimerToFlushOnHubStop=3240,
    Psm20StateWaitingForDebounceTimerToFlushOnHubStopOnResume=3241,
    Psm20StateWaitingForDebounceTimerToFlushOnHubSuspend=3242,
    Psm20StateWaitingForDebounceTimerToFlushOnPortChangeInD3Cold=3243,
    Psm20StateWaitingForDebounceTimerToFlushOnPortChangeInD3ColdOnResume=3244,
    Psm20StateWaitingForDeviceRequestResumeOnD3Cold=3245,
    Psm20StateWaitingForDeviceToReconnectOnResumeFromD3Cold=3246,
    Psm20StateWaitingForPortChangeEventInD3Cold=3247,
    Psm20StateWaitingForPortChangeEventInSuspended=3248,
    Psm20StateWaitingForReconnectTimerToFlushOnHubStopInD3Cold=3249,
    Psm20StateWaitingForReconnectTimerToFlushOnOvercurrentClearedInD3Cold=3250,
    Psm20StateWaitingForReconnectTimerToFlushOnOvercurrentInD3Cold=3251,
    Psm20StateWaitingForReconnectTimerToFlushOnReattachAfterD3Cold=3252,
    Psm20StateWaitingForResumeRecoveryTimerOnResumeInSuspended=3253,
    Psm20StateAckingPortChangeInInWaitingForStopSuspend=3254,
    Psm20StateCheckIfThereIsAPortChangeInInWaitingForStopSuspend=3255,
    Psm20StateGettingPortStatusInWaitingForStopSuspend=3256,
    Psm20StateQueueingEnableInterruptTransferInWaitingForStopSuspend=3257,
    Psm20StateQueueingPortEventFailureToDSM=3258,
    Psm20StateWaitingForDevicePortEvents=3259,
    Psm20StateAckingPortChangeInInWaitingForStopSuspendInDisconnected=3260,
    Psm20StateCheckIfThereIsAPortChangeInInWaitingForStopSuspendInDisconnected=3261,
    Psm20StateGettingPortStatusInWaitingForStopSuspendInDisconnected=3262,
    Psm20StateQueueingEnableInterruptTransferInWaitingForStopSuspendInDisconnected=3263,
    Psm20StateWaitingForDevicePortEventsInDisconnected=3264
};

enum _PSM30_STATE
{
    Psm30StateIgnored=1000,
    Psm30StateEmptySubState=1001,
    Psm30StateNull=1002,
    Psm30StateCompleteWithStatusFailed=1003,
    Psm30StateRequestPortCycle=1004,
    Psm30StateSignalQueryDeviceTextEvent=1005,
    Psm30StateCompleteFDORequestWithStatusFailed=1006,
    Psm30StateCompleteGetPortStatusWithInternalError=1007,
    Psm30StateCompleteGetPortStatusWithNoSuchDevice=1008,
    Psm30StateCompletePdoPreStart=1009,
    Psm30StateSignalPnpPowerEvent=1010,
    Psm30StatePoweredOffDisconnected=5000,
    Psm30StateAcquiringInterruptReferenceOnHSMInDisabled=5001,
    Psm30StateAcquiringInterruptReferenceOnHSMInEnabled=5002,
    Psm30StateAcquiringInterruptReferenceOnHSMInEnabledOnWarmReset=5003,
    Psm30StateAcquiringInterruptReferenceOnHSMOnResetRequest=5004,
    Psm30StateAcquiringInterruptReferenceOnResuming=5005,
    Psm30StateAcquiringPowerReferenceAfterDisablingSuperSpeed=5006,
    Psm30StateAcquiringPowerReferenceonPoweredOffConnectedErrorInS0=5007,
    Psm30StateAcquiringPowerReferenceonPoweredOffDisconnectedInS0=5008,
    Psm30StateAcquiringPowerReferenceonPoweredOffSuspendedInS0=5009,
    Psm30StateAcquiringReferenceInConnectedWithResetNeeded=5010,
    Psm30StateCancellingResetOnSurpriseRemove=5011,
    Psm30StateCancellingSetPortPower=5012,
    Psm30StateCheckingIfADeviceIsPresent=5013,
    Psm30StateCheckingIfDebounceIsNeeded=5014,
    Psm30StateCheckingIfLinkStateIsU0=5015,
    Psm30StateCheckingIfPersistentOvercurrent=5016,
    Psm30StateCheckingIfSuperSpeedShouldBeDisabled=5017,
    Psm30StateCheckingIsD3ColdIsEnabled=5018,
    Psm30StateConnectedEnabled=5019,
    Psm30StateConnectedError=5020,
    Psm30StateCreatingDevice=5021,
    Psm30StateCreatingDeviceInConnectedWithResetInProgress=5022,
    Psm30StateCreatingDeviceInConnectedWithResetNeeded=5023,
    Psm30StateDetachingDeviceFromPortOnDisconnect=5024,
    Psm30StateDetachingDeviceFromPortOnDisconnectOnTimedOut=5025,
    Psm30StateDetachingDeviceFromPortOnDisconnectWithTimer=5026,
    Psm30StateDetachingDeviceFromPortOnOverCurrent=5027,
    Psm30StateDetachingDeviceFromPortOnOverCurrentClear=5028,
    Psm30StateDetachingDeviceFromPortOnOverCurrentClearOnTimedOut=5029,
    Psm30StateDetachingDeviceFromPortOnOverCurrentClearWithTimer=5030,
    Psm30StateDetachingDeviceFromPortOnOverCurrentOnTimedOut=5031,
    Psm30StateDetachingDeviceFromPortOnOverCurrentWithTimer=5032,
    Psm30StateDetachingDeviceFromPortOnPortCycle=5033,
    Psm30StateDetachingDeviceOnCleanup=5034,
    Psm30StateDisablingSuperSpeedOnPortForUnsupportedHubs=5035,
    Psm30StateDisablingSuperSpeedOnPortOnDeviceRequest=5036,
    Psm30StateDisconnected=5037,
    Psm30StateDisconnectedSuperSpeedDisabled=5038,
    Psm30StateDoesDeviceSupportsReAttach=5039,
    Psm30StateDoesDeviceSupportsReAttachWithResetInProgress=5040,
    Psm30StateDoesDeviceSupportsReAttachWithResetNeeded=5041,
    Psm30StateEnablingSuperSpeedOnStopSuspend=5042,
    Psm30StateEnablingSuperSpeedOnTimerExpiration=5043,
    Psm30StateFlushingStaleDeviceEvents=5044,
    Psm30StateFlushingStaleDeviceEventsWithResetInProgress=5045,
    Psm30StateFlushingStaleDeviceEventsWithResetNeeded=5046,
    Psm30StateFlushingUserResetForOverCurrentOnHubStopSuspend=5047,
    Psm30StateFlushingUserResetForOverCurrentOnOverCurrentClear=5048,
    Psm30StateGettingPortChangeOnStartResumeFromConnectedError=5049,
    Psm30StateGettingPortStatusOnResetTimeout=5050,
    Psm30StateGettingPortStatusOnResumeRequest=5051,
    Psm30StateGettingPortStatusOnResumeTimeout=5052,
    Psm30StateInitiatingResetPort=5053,
    Psm30StateInitiatingResume=5054,
    Psm30StateInitiatingWarmResetPort=5055,
    Psm30StateIsDeviceInU0OnResumeRequest=5056,
    Psm30StateIsDeviceInU0OnResumeTimeout=5057,
    Psm30StateIsOldDevicePresent=5058,
    Psm30StateIsOldDevicePresentInConnectedWithResetNeeded=5059,
    Psm30StateIsOldDevicePresentWithResetInProgress=5060,
    Psm30StateIssuingAttachDeviceToDsm=5061,
    Psm30StateIssuingAttachDeviceWithResetToDsm=5062,
    Psm30StateIssuingAttachDeviceWithResetToDsmWithResetInProgress=5063,
    Psm30StateIssuingDetachDeviceOnCycleFromPoweredOffDisabled=5064,
    Psm30StateIssuingDisabledToDSMFromDisabled=5065,
    Psm30StateIssuingHubReset=5066,
    Psm30StateIssuingHubResetFromDisconnected=5067,
    Psm30StateIssuingHubResetOnDisableFailure=5068,
    Psm30StateIssuingHubResetOnTimedOut=5069,
    Psm30StateIssuingHubResetWithPendingTimer=5070,
    Psm30StateIssuingHubResetWithTimer=5071,
    Psm30StateIssuingPortDisabledToDevice=5072,
    Psm30StateIssuingPortDisableFailedToDevice=5073,
    Psm30StateIssuingPortFailedToDSMOnLinkStateError=5074,
    Psm30StateIssuingPortResetTimedOutToDSM=5075,
    Psm30StateIssuingReAttachDeviceToBootDevice=5076,
    Psm30StateIssuingReAttachDeviceToBootDeviceWithResetInProgress=5077,
    Psm30StateIssuingResetFailedDuetoPendingHubSuspendToDSMInDisabled=5078,
    Psm30StateIssuingResetFailedDuetoPendingHubSuspendToDSMInEnabled=5079,
    Psm30StateIssuingResetFailedDuetoPendingHubSuspendToDSMWhileResetInProgress=5080,
    Psm30StateIssuingResumedToDeviceSM=5081,
    Psm30StateIssuingSuspendedToDeviceSM=5082,
    Psm30StateNotifyingUserAboutPersistentOverCurrent=5083,
    Psm30StatePoweredOffConnectedError=5084,
    Psm30StatePoweredOffConnectedWithResetNeededAndDeviceDetached=5085,
    Psm30StatePoweredOffSuspended=5086,
    Psm30StateQueueingPortFailureToDSMOnTransferFailure=5087,
    Psm30StateQueueingPortFailureToDSMOnTransferFailureForLpmTimeout=5088,
    Psm30StateQueueingPortResumeFailedDueToPendingSuspend=5089,
    Psm30StateQueueingPortResumeTimedOut=5090,
    Psm30StateQueueingPortTimeoutUpdatedToDSM=5091,
    Psm30StateQueueStateDisabledToDSMOnStartFromConnectedError=5092,
    Psm30StateReleasingInterruptReferenceAfterResetFailure=5093,
    Psm30StateReleasingInterruptReferenceAndStoppingTimer=5094,
    Psm30StateReleasingInterruptReferenceOnResetTransferFailure=5095,
    Psm30StateReleasingInterruptReferenceOnResumed=5096,
    Psm30StateReleasingInterruptReferenceOnSuccessfulReset=5097,
    Psm30StateReleasingInterruptReferenceOnTransferFailureInResuming=5098,
    Psm30StateReleasingPortPowerReferenceInSuperSpeedDisabled=5099,
    Psm30StateReleasingPowerReferenceonPoweredOffConnectedWithResetNeeded=5100,
    Psm30StateReleasingPowerReferenceonPoweredOffDisabled=5101,
    Psm30StateReleasingPowerReferenceonPoweredOffDisconnected=5102,
    Psm30StateReleasingResetReferenceInDisconnected=5103,
    Psm30StateReleasingResetReferenceInSuperSpeedDisabled=5104,
    Psm30StateReleasingResetReferenceOnDeviceRemoval=5105,
    Psm30StateResettingHubAndFlushingUserInitiatedResetOnOverCurrent=5106,
    Psm30StateSettingPortPowerOnOverCurrent=5107,
    Psm30StateSettingRemotWakeMask=5108,
    Psm30StateSettingRemotWakeMaskInDisconected=5109,
    Psm30StateSettingU1TImeOut=5110,
    Psm30StateSettingU2TImeOut=5111,
    Psm30StateStartingAndAcquiringReferenceOnHubStart=5112,
    Psm30StateStartingAndAcquiringReferenceOnSystemResume=5113,
    Psm30StateStartingDisableSuperSpeedTimer=5114,
    Psm30StateStartingOverCurrentTimer=5115,
    Psm30StateStartingResumeTimer=5116,
    Psm30StateStoppingDisableSuperSpeedTimer=5117,
    Psm30StateStoppingResumeTimer=5118,
    Psm30StateStoppingTimerAndQueueingHubResetInDisconnected=5119,
    Psm30StateStoppingTimerOnDisconnect=5120,
    Psm30StateStoppingTimerOnOverCurrent=5121,
    Psm30StateStoppingTimerOnOverCurrentClear=5122,
    Psm30StateStoppingTimerOnResetComplete=5123,
    Psm30StateSuperSpeedDisabled=5124,
    Psm30StateSuperSpeedDisabledStopped=5125,
    Psm30StateSuspended=5126,
    Psm30StateSuspendedDisabled=5127,
    Psm30StateSuspendedInD3Cold=5128,
    Psm30StateSuspending=5129,
    Psm30StateSuspendingPortOnDisableRequest=5130,
    Psm30StateSuspendingPortOnHubSuspend=5131,
    Psm30StateWaitingForDebounceTimer=5132,
    Psm30StateWaitingForHubStopSuspend=5133,
    Psm30StateWaitingForHubStopSuspendInDisconnected=5134,
    Psm30StateWaitingForHubStopSuspendOnAttachFailure=5135,
    Psm30StateWaitingForHubStopSuspendOnAttachWithResetFailure=5136,
    Psm30StateWaitingForHubStopSuspendOrTimer=5137,
    Psm30StateWaitingForOldDeviceToDetach=5138,
    Psm30StateWaitingForOldDeviceToDetachInConnectedWithResetNeeded=5139,
    Psm30StateWaitingForOldDeviceToDetachWithResetInProgress=5140,
    Psm30StateWaitingForOverCurrentClear=5141,
    Psm30StateWaitingForResetComplete=5142,
    Psm30StateWaitingForResetRequestFromDSMWithResetInPorgress=5143,
    Psm30StateWaitingForResetTimerToFlush=5144,
    Psm30StateWaitingForResumeComplete=5145,
    Psm30StateWaitingForResumeTimerToFlush=5146,
    Psm30StateWaitingForSuperSpeedDisableTimerToFlush=5147,
    Psm30StateWaitingForTimerOnResetInDisconnected=5148,
    Psm30StateWaitingForTimerToFlushOnDisconnect=5149,
    Psm30StateWaitingForTimerToFlushOnHubStopSuspend=5150,
    Psm30StateWaitingForTimerToFlushOnHubStopSuspendInDisconnected=5151,
    Psm30StateWaitingForTimerToFlushOnOverCurrent=5152,
    Psm30StateWaitingForTimerToFlushOnOverCurrentClear=5153,
    Psm30StateWaitingForUserResetOnOverCurrent=5154,
    Psm30StateWaitingToBeDeleted=5155,
    Psm30StateAckingPortChange=5156,
    Psm30StateCheckIfThereIsAPortChange=5157,
    Psm30StateCheckIfThereIsAPortChangeOnGetPortStatus=5158,
    Psm30StateEnablingInterruptsAndGettingPortEvent=5159,
    Psm30StateEnablingInterruptsOnFailure=5160,
    Psm30StateGettingPortStatus=5161,
    Psm30StateInitializingCumulativePortChangeBits=5162,
    Psm30StateReturningPortResetHubOnError=5163,
    Psm30StateAckingPortChangeInNoChange=5164,
    Psm30StateCheckIfThereIsAPortChangeInNoChange=5165,
    Psm30StateCheckIfThereIsAPortChangeOnGetPortStatusInNoChange=5166,
    Psm30StateEnablingInterruptsAndGettingPortEventInNoChange=5167,
    Psm30StateGettingPortStatusInNoChange=5168,
    Psm30StateInitializingCumulativePortChangeBitsInNoChange=5169,
    Psm30StateReturningPortResetHubOnErrorInNoChange=5170,
    Psm30StateAckingPortChangeOnStartResume=5171,
    Psm30StateAcquiringPortReferenceAndGettingPortEvent=5172,
    Psm30StateAcquiringPortReferenceOnFailure=5173,
    Psm30StateCheckIfThereIsAPortChangeOnStartResume=5174,
    Psm30StateCheckIfThereIsAPortChangeOnStartResumeOnGetPortStatus=5175,
    Psm30StateGettingPortStatusOnStartResume=5176,
    Psm30StateInitializingCumulativePortChangeBitsOnStartResume=5177,
    Psm30StateReturningPortResetHubOnErrorOnStartResume=5178,
    Psm30StateGettingPortChange=5179,
    Psm30StateReturningConnectChangeOnLinkError=5180,
    Psm30StateReturningPortResetHubOnErrorInPortChangeHandler=5181,
    Psm30StateWaitingForPortChangeEvent=5182,
    Psm30StateAcquiringPortReferenceOnTransferFailure=5183,
    Psm30StateCheckingIfPortIsPoweredOnStart=5184,
    Psm30StateCheckingIfPowerOnStartHackIsPresent=5185,
    Psm30StateGettingPortStatusOnStart=5186,
    Psm30StateGettingPortStatusOnStartBeforePoweringOn=5187,
    Psm30StatePoweringOnPortOnStart=5188,
    Psm30StateReturningPortConnectChangeOnLinkErrorOnStart=5189,
    Psm30StateReturningPortResetHubOnErrorOnStart=5190,
    Psm30StateWaitingForPortPowerOnTimerOnStart=5191,
    Psm30StateCheckingIfDeviceIsStillConnectedOnResume=5192,
    Psm30StateGettingPortStatusOnResume=5193,
    Psm30StateGettingPortStatusOnResumeAfterWaiting=5194,
    Psm30StateQueueingStateDisabledOnConnectChangeOnResume=5195,
    Psm30StateQueueingStateDisabledOnFailure=5196,
    Psm30StateQueueingStateDisabledOnResetInProgress=5197,
    Psm30StateQueueingStateEnabledOnResume=5198,
    Psm30StateQueueingStateSuspendedOnResume=5199,
    Psm30StateReturningHubStopOnResume=5200,
    Psm30StateReturningPortConnectChange=5201,
    Psm30StateReturningPortNeedsResetOnResume=5202,
    Psm30StateReturningPortOperationSuccessOnResume=5203,
    Psm30StateReturningPortResetHubOnErrorOnResume=5204,
    Psm30StateReturningPortResetInProgressOnResume=5205,
    Psm30StateReturningPortResumedOnResume=5206,
    Psm30StateStartingTimerForAllowingReconnect=5207,
    Psm30StateStoppingReconnectTimerOnHubStatusChange=5208,
    Psm30StateStoppingReconnectTimerOnHubStop=5209,
    Psm30StateWaitingForDeviceToReconnect=5210,
    Psm30StateWaitingForReconnectTimerToFlushOnHubStatusChange=5211,
    Psm30StateWaitingForReconnectTimerToFlushOnHubStop=5212,
    Psm30StateGettingPortStatusInResuming=5213,
    Psm30StateReturningConnectChangeOnLinkErrorInResuming=5214,
    Psm30StateReturningPortResetHubOnErrorInResuming=5215,
    Psm30StateWaitingForPortChangeEventInResuming=5216,
    Psm30StateGettingPortStatusInWaitingForStopSuspend=5217,
    Psm30StateQueueingPortEventFailureToDSM=5218,
    Psm30StateWaitingForDevicePortEvents=5219,
    Psm30StateGettingPortStatusInWaitingForStopSuspendInDisconnected=5220,
    Psm30StateWaitingForDevicePortEventsInDisconnected=5221,
    Psm30StateCheckingIfLinkIsInU0AfterResetPolling=5222,
    Psm30StateCheckingIfResetCompletionRequiresPolling=5223,
    Psm30StateGettingPortStatusInReset=5224,
    Psm30StateGettingPortStatusInResetAfterPollingInterval=5225,
    Psm30StateReturningPortResetCompleted=5226,
    Psm30StateReturningPortResetHubOnErrorInReset=5227,
    Psm30StateWaitingForPollingIntervalForResetCompletion=5228,
    Psm30StateWaitingForPortChangeEventInReset=5229,
    Psm30StateCheckingIfBootDeviceIsConnected=5230,
    Psm30StateCheckingIfParentHubIsArmedForWake=5231,
    Psm30StateDisablingRemoteWakeOnPort=5232,
    Psm30StateEnablingRemoteWakeOnPort=5233,
    Psm30StateIssuingHubResetOnRemoteWakeMaskFailure=5234,
    Psm30StateReturningOperationSucessFromArmingForWake=5235,
    Psm30StateAcquiringPowerReferenceOnHubResumeInD3Cold=5236,
    Psm30StateCheckingIfDeviceIsConnectedOnConnectChangeForD3Cold=5237,
    Psm30StateCheckingIfDeviceIsConnectedOnPortChangeInD3Cold=5238,
    Psm30StateCheckingIfDeviceIsConnectedOnPortChangInD3ColdOnResume=5239,
    Psm30StatePoweredOffOnHubSuspendFromD3Cold=5240,
    Psm30StateQueueingEnabledToDSMOnReconnectAfterResumeRequestFromD3Cold=5241,
    Psm30StateQueueingEnabledToDSMOnReconnectFromD3Cold=5242,
    Psm30StateQueueingStateSuspendedOnHubResumeInD3Cold=5243,
    Psm30StateReleasingPowerReferenceOnHubS0IdleInD3Cold=5244,
    Psm30StateReturningConnectChangeFromD3Cold=5245,
    Psm30StateReturningHubStopFromSuspendedInD3Cold=5246,
    Psm30StateReturningOverCurrentClearedFromD3Cold=5247,
    Psm30StateReturningOverCurrentFromD3Cold=5248,
    Psm30StateReturningPortResetHubOnErrorFromD3Cold=5249,
    Psm30StateReturningPortResumedFromD3Cold=5250,
    Psm30StateStartingTimerForAllowingReconnectOnResumingFromD3Cold=5251,
    Psm30StateStoppingReconnectTimerOnDeviceReAttachAfterD3Cold=5252,
    Psm30StateStoppingReconnectTimerOnHubStopInD3Cold=5253,
    Psm30StateStoppingReconnectTimerOnOvercurrentClearedInD3Cold=5254,
    Psm30StateStoppingReconnectTimerOnOvercurrentInD3Cold=5255,
    Psm30StateStoppingReconnectTimerOnResetHubErrorInD3Cold=5256,
    Psm30StateWaitingForDeviceRequestResumeOnD3Cold=5257,
    Psm30StateWaitingForDeviceToReconnectOnResumeFromD3Cold=5258,
    Psm30StateWaitingForPortChangeEventInD3Cold=5259,
    Psm30StateWaitingForReconnectTimerToFlushOnHubStopInD3Cold=5260,
    Psm30StateWaitingForReconnectTimerToFlushOnOvercurrentClearedInD3Cold=5261,
    Psm30StateWaitingForReconnectTimerToFlushOnOvercurrentInD3Cold=5262,
    Psm30StateWaitingForReconnectTimerToFlushOnReattachAfterD3Cold=5263,
    Psm30StateWaitingForReconnectTimerToFlushOnResetHubErrorInD3Cold=5264
};

enum _DSM_STATE
{
    DsmStateIgnored=1000,
    DsmStateEmptySubState=1001,
    DsmStateNull=1002,
    DsmStateCompleteWithStatusFailed=1003,
    DsmStateRequestPortCycle=1004,
    DsmStateSignalQueryDeviceTextEvent=1005,
    DsmStateCompleteFDORequestWithStatusFailed=1006,
    DsmStateCompleteGetPortStatusWithInternalError=1007,
    DsmStateCompleteGetPortStatusWithNoSuchDevice=1008,
    DsmStateCompletePdoPreStart=1009,
    DsmStateSignalPnpPowerEvent=1010,
    DsmStateWaitingForPortAttach=4000,
    DsmStateAckingD0ForFaultyClientDrivers=4001,
    DsmStateAckingHubStopAfterSuspendFromStoppedState=4002,
    DsmStateAckingPdoPreStart=4003,
    DsmStateAckingPdoPreStartFromStoppedEnabled=4004,
    DsmStateAckingQueryResourcesInConfiguredD0=4005,
    DsmStateAckingStopAfterSuspendOnDetach=4006,
    DsmStateAcquiringPowerReferenceOnHubOnAttach=4007,
    DsmStateAcquiringPowerReferenceOnHubStart=4008,
    DsmStateBugcheckingSystemOnBootDeviceEnumerationFailure=4009,
    DsmStateCheckIfDeviceCanBeDisabledOnDriverNotFound=4010,
    DsmStateCheckingForZeroBwPipeOnClientClearStall=4011,
    DsmStateCheckingForZeroBwPipeOnClientResetPipe=4012,
    DsmStateCheckingForZeroBwPipeOnClientSyncResetPipe=4013,
    DsmStateCheckingIfBootDeviceOnD0Exit=4014,
    DsmStateCheckingIfBootDeviceOnDetach=4015,
    DsmStateCheckingIfBootDeviceOnReset=4016,
    DsmStateCheckingIfDeviceHasReceivedFirstStart=4017,
    DsmStateCheckingIfDeviceHasReceivedFirstStartInUncoonfigured=4018,
    DsmStateCheckingIfDeviceShouldBeDisabled=4019,
    DsmStateCheckingIfItIsIsochronousEndpoint=4020,
    DsmStateCleaningUpAnyExistingConfigurationOnStart=4021,
    DsmStateClearingEndpointHaltOnClientClearStall=4022,
    DsmStateClearingEndpointHaltOnClientResetPipe=4023,
    DsmStateClearingFailIoFlagOnSuccessfulRecovery=4024,
    DsmStateCompletingClientRequestInConfigured=4025,
    DsmStateCompletingClientRequestInConfiguredWithLastStatus=4026,
    DsmStateCompletingClientRequestInConfiguredWithSpecialFile=4027,
    DsmStateCompletingClientRequestInUnconfigured=4028,
    DsmStateCompletingClientRequestInUnConfiguredWithLastStatus=4029,
    DsmStateCompletingClientRequestOnDetachInConfigured=4030,
    DsmStateCompletingClientRequestOnDetachInDisabled=4031,
    DsmStateCompletingClientRequestOnDetachWithDeviceProgrammed=4032,
    DsmStateCompletingClientRequestOnFailureInConfigured=4033,
    DsmStateCompletingClientRequestOnFailureInDisabled=4034,
    DsmStateCompletingClientRequestOnFailureInUnconfigured=4035,
    DsmStateCompletingClientUnconfigureRequest=4036,
    DsmStateCompletingClientUnconfigureRequestWithFailure=4037,
    DsmStateCompletingD0EntryInConfigured=4038,
    DsmStateCompletingD0EntryInConfiguredWithSpecialFile=4039,
    DsmStateCompletingD0EntryInConfiguredWithSpecialFileOnDetach=4040,
    DsmStateCompletingD0EntryInConfiguredWithSpecialFileOnDetachWithDeviceEnabled=4041,
    DsmStateCompletingD0EntryInUnconfigured=4042,
    DsmStateCompletingD0EntryOnDetachWithSpecialFile=4043,
    DsmStateCompletingD0ExitAfterHubSuspend=4044,
    DsmStateCompletingD0ExitOnSuspendFailure=4045,
    DsmStateCompletingDeviceCleanup=4046,
    DsmStateCompletingHubStopAfterSuspend=4047,
    DsmStateCompletingHubStopWithPortOff=4048,
    DsmStateCompletingPDOCleanupForUnknownDevice=4049,
    DsmStateCompletingPdoExitFinalOnDetach=4050,
    DsmStateCompletingPdoExitFinalOnDetachOnDeviceReportedMissing=4051,
    DsmStateCompletingPdoReStartOnDetach=4052,
    DsmStateCompletingPdoReStartOnDetachWithDeviceEnabled=4053,
    DsmStateCompletingPdoReStartOnOperationFailure=4054,
    DsmStateCompletingPnpEventOnDetachInConfigured=4055,
    DsmStateCompletingPnpEventOnDetachInDisabled=4056,
    DsmStateCompletingPnpEventOnDetachInUnConfigured=4057,
    DsmStateCompletingPnpEventOnDetachWhileRenumeratingOnResume=4058,
    DsmStateCompletingPnpEventOnFailureInDisabledWithPortOff=4059,
    DsmStateCompletingPnpEventOnFailureWithEndpointsToBeDeleted=4060,
    DsmStateConfiguredInD0=4061,
    DsmStateConfiguredResumingOnHubResume=4062,
    DsmStateConfiguredSuspended=4063,
    DsmStateConfiguredSuspendedOnHubSuspend=4064,
    DsmStateConfiguredSuspendedWithSpecialFile=4065,
    DsmStateConfiguredSuspending=4066,
    DsmStateConfiguredSuspendingOnHubSuspend=4067,
    DsmStateConfiguredSuspendingWithSpecialFile=4068,
    DsmStateConfiguringDeviceFromCachedInformation=4069,
    DsmStateConfiguringDeviceFromCachedInformationOnHubResume=4070,
    DsmStateConfiguringDeviceFromCachedInformationOnResume=4071,
    DsmStateConfiguringDeviceFromCachedInformationOnResumeWithSpecialFile=4072,
    DsmStateConfiguringDeviceFromCachedInformationWithSpecialFile=4073,
    DsmStateConfiguringOnSelectConfiguration=4074,
    DsmStateCyclingPortOnRenumerationOfUnknownDevice=4075,
    DsmStateD0EntryForUnknownDevice=4076,
    DsmStateDeConfiguringDeviceOnClientRequest=4077,
    DsmStateDeConfiguringDeviceOnClientRequestFromUnconfigured=4078,
    DsmStateDeletingDefaultEndpointAndDeviceOnDetachDuringEnum=4079,
    DsmStateDeletingDeviceAndDefaultEndpointOnCleanup=4080,
    DsmStateDeletingDeviceAndDefaultEndpointOnCleanupAfterDetach=4081,
    DsmStateDeletingDeviceAndDefaultEndpointOnCleanupWithPortOff=4082,
    DsmStateDeletingEndpoinstAndDeviceOnDetachOnCleanup=4083,
    DsmStateDeletingEndpointsAndDeviceOnOnCleanup=4084,
    DsmStateDeporgrammingAllEndpointsOnCleanupFromEnumeratedConfigured=4085,
    DsmStateDeporgrammingAllEndpointsOnHubStopFromEnumeratedConfigured=4086,
    DsmStateDeprogrammingAllEndpointsOnHubSuspendFromEnumeratedConfigured=4087,
    DsmStateDetachedAndDeprogrammedWithResetPending=4088,
    DsmStateDetachedWithResetPending=4089,
    DsmStateDeviceDetachedAndDeporgrammedWithSpecialFile=4090,
    DsmStateDeviceDetachedWithSpecialFile=4091,
    DsmStateDisablingBackPortInEnumeratedUnknown=4092,
    DsmStateDisablingBackPortInWaitingForD0EntryForFailedDevice=4093,
    DsmStateDisablingDeviceAndDefaultEndpointInControllerOnDetachDuringEnum=4094,
    DsmStateDisablingDeviceAndDefaultEndpointOnDetachOnHubStart=4095,
    DsmStateDisablingDeviceAndDefaultEndpointOnEnumFailureOnHubStart=4096,
    DsmStateDisablingDeviceAndDefaultEpInControllerOFailureWithPortOff=4097,
    DsmStateDisablingDeviceAndDefaultEpInControllerOnCleanupWithPortOff=4098,
    DsmStateDisablingDeviceAndDefaultEpInControllerOnD0ExitOnDetachWithPDOMissing=4099,
    DsmStateDisablingDeviceAndDefaultEpInControllerOnDetach=4100,
    DsmStateDisablingDeviceAndDefaultEpInControllerOnDetachOnHubStopWithPDOMissing=4101,
    DsmStateDisablingDeviceAndDefaultEpInControllerOnDetachOnPDOCleaupWithPDOMissing=4102,
    DsmStateDisablingDeviceAndDefaultEpInControllerOnHubStopAfterSuspend=4103,
    DsmStateDisablingDeviceAndDefaultEpInControllerOnHubStopAfterSuspendOnDetach=4104,
    DsmStateDisablingDeviceAndDefaultEpInControllerOnHubStopOnDetach=4105,
    DsmStateDisablingDeviceInControllerOnCleanup=4106,
    DsmStateDisablingDeviceInControllerOnDetachOnCleanup=4107,
    DsmStateDisablingDeviceInControllerOnEnumFailureOnPdoPreStart=4108,
    DsmStateDisablingDeviceInControllerOnEnumFailureOnRestart=4109,
    DsmStateDisablingDeviceInControllerOnHubStopFromStoppedEnabled=4110,
    DsmStateDisablingDeviceInControllerOnHubStopInStopped=4111,
    DsmStateDisablingDeviceInControllerOnHubStopInSuspended=4112,
    DsmStateDisablingDeviceInControllerOnPDOStop=4113,
    DsmStateDisablingDeviceInControllerOnRenumerationWhileSuspended=4114,
    DsmStateDisablingDeviceInControllerOnStartTimeout=4115,
    DsmStateDisablingEndpointsInControllerOHubStopAfterSuspendOnDetach=4116,
    DsmStateDisablingEndpointsInControllerOHubStopOnDetach=4117,
    DsmStateDisablingEndpointsInControllerOnCleanupWithPortOff=4118,
    DsmStateDisablingEndpointsInControllerOnClientRequest=4119,
    DsmStateDisablingEndpointsInControllerOnD0ExitOnDetach=4120,
    DsmStateDisablingEndpointsInControllerOnD0ExitOnDetachWithPDOMissing=4121,
    DsmStateDisablingEndpointsInControllerOnDetachOnHubStopWithPDOMissing=4122,
    DsmStateDisablingEndpointsInControllerOnDetachOnPDOCleanupWithPDOMissing=4123,
    DsmStateDisablingEndpointsInControllerOnFailureWithPortOff=4124,
    DsmStateDisablingEndpointsInControllerOnHubStopAfterSuspend=4125,
    DsmStateDisablingEndpointsInControllerOnRenumerationWhileSuspended=4126,
    DsmStateDisablingEndpointsInControllerOnStop=4127,
    DsmStateDisablingEndpointsOnDetachWithSpecialFile=4128,
    DsmStateDisablingEndpointsOnDetachWithSpecialFileAndResetPending=4129,
    DsmStateDisablingEndpointsOnFailureWithSpecialFile=4130,
    DsmStateDisablingPortOnFailureInUnConfigured=4131,
    DsmStateDisablingPortOnHubStop=4132,
    DsmStateDisablingPortOnHubStopFromStoppedEnabled=4133,
    DsmStateDisablingPortOnPdoCleanup=4134,
    DsmStateDisablingPortOnPDOStop=4135,
    DsmStateDisablingPortOnStartTimeout=4136,
    DsmStateEnumeratedAsFailedUnknown=4137,
    DsmStateEnumerating=4138,
    DsmStateFlushingPD0D0ExitFinalInConfigured=4139,
    DsmStateFlushingPD0D0ExitFinalInUnConfigured=4140,
    DsmStateFowardingStreamsRequestToUcxInConfigured=4141,
    DsmStateFowardingStreamsRequestToUcxInConfiguredSuspended=4142,
    DsmStateFowardingStreamsRequestToUcxInConfiguredSuspendedWithSpecialFile=4143,
    DsmStateFowardingStreamsRequestToUcxInDeviceDetachedAndDeporgrammedWithSpecialFile=4144,
    DsmStateFowardingStreamsRequestToUcxInDeviceDetachedWithSpecialFile=4145,
    DsmStateFowardingStreamsRequestToUcxInStopEnabled=4146,
    DsmStateFowardingStreamsRequestToUcxInStopped=4147,
    DsmStateFowardingStreamsRequestToUcxInStoppedWithHubSuspended=4148,
    DsmStateFowardingStreamsRequestToUcxInUnconfiguredInD0=4149,
    DsmStateFowardingStreamsRequestToUcxInUnconfiguredSuspended=4150,
    DsmStateFowardingStreamsRequestToUcxInWaitingForDetachorResetWithDeviceDeprogrammed=4151,
    DsmStateFowardingStreamsRequestToUcxInWaitingForDetatchorReset=4152,
    DsmStateGettingMatchingPipeHandleOnClientClearStall=4153,
    DsmStateGettingMatchingPipeHandleOnClientResetPipe=4154,
    DsmStateGettingMatchingPipeHandleOnClientSyncResetPipe=4155,
    DsmStateIssuingDeviceDetachedToPSMOnDetach=4156,
    DsmStateIssuingPortCycleAndCompletingClientRequestOnEnumFailue=4157,
    DsmStateIssuingPortCycleAndSingalingPnpEventOnEnumFailueFromConfigured=4158,
    DsmStateIssuingPortCycleOnEnumFailureOnHubResume=4159,
    DsmStateIssuingPortCycleOnFailueWithEndpointsToBeDeleted=4160,
    DsmStateNotifyingDeviceDisconnectedOnDetach=4161,
    DsmStateNotifyingDeviceDisconnectedOnDetachWithSpecialFile=4162,
    DsmStatePreparingEndpointAndInterfaceListsOnClientReset=4163,
    DsmStatePreparingEndpointAndInterfaceListsOnClientResetWithSpecialFile=4164,
    DsmStatePreparingEndpointAndInterfaceListsOnResetAfterHubResume=4165,
    DsmStatePreparingEndpointAndInterfaceListsOnResetAfterResume=4166,
    DsmStatePreparingEndpointAndInterfaceListsOnResetAfterResumeWithSpecialFile=4167,
    DsmStatePreparingEndpointAndInterfaceListsOnSelectConfiguration=4168,
    DsmStatePreparingEndpointAndInterfaceListsOnSelectConfigurationFromConfigured=4169,
    DsmStatePurgingDeviceIoOnDetachInConfigured=4170,
    DsmStatePurgingDeviceIoOnHubSuspend=4171,
    DsmStatePurgingDeviceIoOnHubSuspendFromSuspending=4172,
    DsmStatePurgingDeviceIoOnPrepareForHibernate=4173,
    DsmStateQueryingDescriptorForFdoRequestFromConfigured=4174,
    DsmStateQueryingDescriptorForFdoRequestFromStoppedEnumerated=4175,
    DsmStateQueryingDescriptorForFdoRequestFromUnConfigured=4176,
    DsmStateQueryingDeviceTextStringFromConfigured=4177,
    DsmStateQueryingDeviceTextStringFromStoppedEnumerated=4178,
    DsmStateQueryingDeviceTextStringFromUnConfigured=4179,
    DsmStateQueueingAttachFailureToPort=4180,
    DsmStateQueueingAttachSuccessToPort=4181,
    DsmStateQueueingDeviceDetachedToPsmForBootDeviceInUnconfigured=4182,
    DsmStateQueueingDeviceDetachedToPsmForBootDeviceWithResetPending=4183,
    DsmStateQueueingDeviceDetachedToPsmForBootDeviceWithResetPendingAndDeviceDeprogrammed=4184,
    DsmStateQueueingPrepareForHiberToPSM=4185,
    DsmStateReDisablingPortAfterHubResume=4186,
    DsmStateReEnumeratingOnClientRequestInConfigured=4187,
    DsmStateReEnumeratingOnClientRequestInConfiguredWithSpecialFile=4188,
    DsmStateReEnumeratingOnClientRequestInUnconfigured=4189,
    DsmStateReEnumeratingOnClientRequestOnReattach=4190,
    DsmStateReEnumeratingOnClientRequestOnReattachWithDeviceDeprogrammed=4191,
    DsmStateReEnumeratingOnHubResumeInConfigured=4192,
    DsmStateReEnumeratingOnHubResumeInUnConfigured=4193,
    DsmStateReEnumeratingOnHubStart=4194,
    DsmStateReEnumeratingOnPdoPreStartWhileEnabled=4195,
    DsmStateReEnumeratingOnPdoStart=4196,
    DsmStateReEnumeratingOnPdoStartWhileEnabled=4197,
    DsmStateReEnumeratingOnResumeInConfigured=4198,
    DsmStateReEnumeratingOnResumeInConfiguredWithSpecialFile=4199,
    DsmStateReEnumeratingOnResumeInUnConfigured=4200,
    DsmStateRegisteringWithHSM=4201,
    DsmStateReleasingDevicePowerReferenceOnStopAfterDetach=4202,
    DsmStateReleasingPowerReferenceOnDetachInConfigured=4203,
    DsmStateReleasingPowerReferenceOnHubOnDetach=4204,
    DsmStateReleasingPowerReferenceOnHubOnDetachOnEnumSuccess=4205,
    DsmStateReleasingPowerReferenceOnHubOnEnumerationFailure=4206,
    DsmStateReleasingPowerReferenceOnHubStopSuspend=4207,
    DsmStateReleasingPowerReferenceOnHubSuspendStopOnDetach=4208,
    DsmStateReleasingPowerReferenceOnPortFailureInHubStopSuspend=4209,
    DsmStateReleasingPowerReferenceOnSuspendFailureInConfigured=4210,
    DsmStateReleasingPowerReferenceOnSuspendFailureInUnConfigured=4211,
    DsmStateRemovingDeviceInfoFromGlobalListOnCleanup=4212,
    DsmStateRemovingDeviceInfoFromGlobalListOnCleanupOnDetachInConfigured=4213,
    DsmStateRemovingDeviceInfoFromGlobalListOnCleanupOnDetachInUnConfigured=4214,
    DsmStateRemovingDeviceInfoFromGlobalListOnCleanUpOnHubStopOnDetach=4215,
    DsmStateRemovingDeviceInfoFromGlobalListOnDeviceReportedMissing=4216,
    DsmStateRemovingDeviceInfoFromGlobalListOnReportedMissingOnHubStopOnDetach=4217,
    DsmStateReportingDeviceMissing=4218,
    DsmStateReportingDeviceToPnp=4219,
    DsmStateReportingFailedDeviceAsMissing=4220,
    DsmStateReportingFailedUnknownDeviceToPnp=4221,
    DsmStateRequestingCyclePortAndCompletingPnpEventOnFailureInUnconfigured=4222,
    DsmStateRequestingPortCycleOnErrorFromConfigured=4223,
    DsmStateResettingPipeInUCXOnClientReset=4224,
    DsmStateResettingPipeInUCXOnClientSyncResetPipe=4225,
    DsmStateResumingOnHubResumeInStopped=4226,
    DsmStateSettingConfigurationInformationInClientRequest=4227,
    DsmStateSettingDeviceInterface=4228,
    DsmStateSettingExitLatencyAdjustmentOnNoPingResponseError=4229,
    DsmStateSettingFailIoFlagOnClientReset=4230,
    DsmStateSettingForceResetOnRenumFlag=4231,
    DsmStateSettingInterfaceInformationInClientRequest=4232,
    DsmStateSettingLPMValuesInConfiguredOnSettingChange=4233,
    DsmStateSettingLPMValuesInStoppedEnabled=4234,
    DsmStateSettingLPMValuesInUnConfiguredOnSettingChange=4235,
    DsmStateSignalingPnpPowerEventOnDetachDuringRenumOnRestart=4236,
    DsmStateSignalingPnpPowerEventOnStop=4237,
    DsmStateSignalingPnpPowerEventOnStopEnable=4238,
    DsmStateSignallingPnpEventOnHubSuspendFromUnconfiguredSuspending=4239,
    DsmStateStartingDeviceIoOnHubResume=4240,
    DsmStateStopped=4241,
    DsmStateStoppedEnabled=4242,
    DsmStateStoppedEnumerated=4243,
    DsmStateStoppedEnumeratedConfiguredForFaultyClients=4244,
    DsmStateStoppedEnumeratedWithHubSuspended=4245,
    DsmStateStoppedWithHubSuspended=4246,
    DsmStateSuspendingOnHubSuspendInStopped=4247,
    DsmStateUnConfiguredInD0=4248,
    DsmStateUnConfiguredResumingOnHubResume=4249,
    DsmStateUnconfiguredSuspended=4250,
    DsmStateUnConfiguredSuspendedOnHubSuspend=4251,
    DsmStateUnconfiguredSuspending=4252,
    DsmStateUnConfiguredSuspendingOnHubSuspend=4253,
    DsmStateUnregisteringWithHSMOnDetachAfterCleanup=4254,
    DsmStateUnregisteringWithHsmOnDetachOnDeviceReportedMissing=4255,
    DsmStateUnregsiteringWithHsmOnDetach=4256,
    DsmStateUnregsiteringWithHSMOnDetachOnPDOCleaupWithPDOMissing=4257,
    DsmStateValidatingSelectConfigUrbFromConfigured=4258,
    DsmStateValidatingSelectConfigUrbFromUnConfigured=4259,
    DsmStateValidatingSelectInterfaceUrbFromConfigured=4260,
    DsmStateWaitingForD0EntryForFailedDevice=4261,
    DsmStateWaitingForDetachOrRemove=4262,
    DsmStateWaitingForDetachOrRemoveInConfigured=4263,
    DsmStateWaitingForDetachOrRemoveInDisabledWithPortOff=4264,
    DsmStateWaitingForDetachOrRemoveInUnConfigured=4265,
    DsmStateWaitingForDetachOrRemoveWithPortOff=4266,
    DsmStateWaitingForDetachOrReset=4267,
    DsmStateWaitingForDetachOrResetWithDeviceDeporgrammed=4268,
    DsmStateWaitingForDetachOrToBeDeleted=4269,
    DsmStateWaitingForDetachOrToBeDeletedWithPortOff=4270,
    DsmStateWaitingForDisableCompleteOnHubStopFromStoppedEnabled=4271,
    DsmStateWaitingForPDOD0ExitOnDetachInConfigured=4272,
    DsmStateWaitingForPDOD0ExitOnDetachInUnConfigured=4273,
    DsmStateWaitingForPDOReportedMissing=4274,
    DsmStateWaitingForPortResumeResponseOnStop=4275,
    DsmStateWaitingForPortResumeResponseOnSuspend=4276,
    DsmStateWaitingForRemoveOnDetach=4277,
    DsmStateWaitingForRemoveOrReprotedMissingOnHubStopOnDetach=4278,
    DsmStateWaitingForReportedMissingOnDetachInConfigured=4279,
    DsmStateWaitingForReportedMissingOnDetachInUnConfigured=4280,
    DsmStateWaitingToBeDeleted=4281,
    DsmStateQueryingLanguageSpecificProductIdString=4282,
    DsmStateReturningOperationSuccessInQueryingProductId=4283,
    DsmStateSignalingDeviceQueryTextEvent=4284,
    DsmStateValidatingLanguageSpecificProductIdString=4285,
    DsmStateAcquiringAddressZeroOwnershipInEnum=4286,
    DsmStateAcquiringPowerReferenceOnStartInEnum=4287,
    DsmStateCancellingAcquiringAddress0OnDetachInEnum=4288,
    DsmStateCancellingRetryTimerOnDetachInEnum=4289,
    DsmStateCancellingRetryTimerOnStopSuspendInEnum=4290,
    DsmStateCheckingIfDevicePDChargingPolicySupported=4291,
    DsmStateCheckingIfEnumRetryReachedMaximumInEnum=4292,
    DsmStateCheckingIfEnumRetryReachedMaximumInEnumWithAddr0Ownership=4293,
    DsmStateClearingDeviceProgrammingLostFlagOnEnum=4294,
    DsmStateDeletingDefaultEndpointAndDeviceFromUCXOnDetachInEnumeratingAfterAddr=4295,
    DsmStateDeletingDefaultEndpointAndDeviceFromUCXOnFailureInEnum=4296,
    DsmStateDeletingDefaultEndpointAndDeviceOnPostAddressFailureInEnum=4297,
    DsmStateDeletingDefaultEndpointAndDeviceOnStopSuspendAfterAddressInEnum=4298,
    DsmStateDeletingDeviceAndDefaultEndpointOnDetachWithAddress0OwnershipInEnum=4299,
    DsmStateDeletingDeviceAndDefaultEndpointOnStopSuspendWithAddress0OwnershipInEnum=4300,
    DsmStateDisablingDeviceInControllerOnDetachInEnumeratingAfterAddr=4301,
    DsmStateDisablingDeviceInControllerOnDetachWithAddress0OwnershipInEnum=4302,
    DsmStateDisablingDeviceInControllerOnPostAddressEnumFailureInEnum=4303,
    DsmStateDisablingDeviceInControllerOnSetAddressFailureInEnum=4304,
    DsmStateDisablingDeviceInControllerOnStopSuspendAfterAddressInEnum=4305,
    DsmStateDisablingDeviceInControllerOnStopSuspendWithAddress0OwnershipInEnum=4306,
    DsmStateDisablingOnEnumAfterFailureInEnum=4307,
    DsmStateDisablingOnEnumAfterFailureInEnumWithAddress0Ownership=4308,
    DsmStateDisablingOnStopSuspendInEnum=4309,
    DsmStateDisablingOnStopSuspendInEnumWithAddress0Ownership=4310,
    DsmStateDisablingOnStopSuspendOnIoctlFailureInEnum=4311,
    DsmStateEnumeratingAfterAddressInEnum=4312,
    DsmStateEnumeratingAtAddressZeroInEnum=4313,
    DsmStateInitializingEnumRetryCountInEnum=4314,
    DsmStateReleasingAddressZeroOwnershipInEnum=4315,
    DsmStateReleasingAddressZeroOwnershipOnDetach=4316,
    DsmStateReleasingAddressZeroOwnershipOnDetachInEnum=4317,
    DsmStateReleasingAddressZeroOwnershipOnEnumFailure=4318,
    DsmStateReleasingAddressZeroOwnershipOnStopSuspend=4319,
    DsmStateReleasingAddressZeroOwnershipOnStopSuspendInEnum=4320,
    DsmStateReleasingPowerReferenceInEnum=4321,
    DsmStateReturningOperationFailureInEnum=4322,
    DsmStateReturningOperationSuccessInEnum=4323,
    DsmStateReturningPortDetachDeviceInEnum=4324,
    DsmStateSettingDevicePDChargingPolicy=4325,
    DsmStateSettingLPMValues=4326,
    DsmStateSettingNonZeroAddressInEnum=4327,
    DsmStateStartingTimerForEnumRetryInEnum=4328,
    DsmStateStartingTimerForEnumRetryInEnumWithAddr0Ownership=4329,
    DsmStateStoppedSuspendedInEnum=4330,
    DsmStateUpdatingDeviceInformationInEnum=4331,
    DsmStateWaitingForDisableCompleteOnStopSuspendAfterFailureInEnum=4332,
    DsmStateWaitingForDisableCompleteOnStopSuspendInEnum=4333,
    DsmStateWaitingForDisableCompleteOnStopSuspendInEnumWithAddress0Ownership=4334,
    DsmStateWaitingForTimerToFlushOnDetachInEnum=4335,
    DsmStateWaitingForTimerToFlushOnStopSuspendInEnum=4336,
    DsmStateWaitingForUCXIoctlOnDetachInEnum=4337,
    DsmStateWaitingForUCXIoctlOnStopSuspendInEnum=4338,
    DsmStateCheckingIfFirstEnumTry=4339,
    DsmStateCheckingIfSecondResetIsNeeded=4340,
    DsmStateCreatingUCXDefaultEndpoint=4341,
    DsmStateCreatingUCXDevice=4342,
    DsmStateDeletingUCXDefaultEndpointAndDeviceOnDetach=4343,
    DsmStateDeletingUCXDefaultEndpointAndDeviceOnStop=4344,
    DsmStateDeletingUCXDefaultEndpointAndDeviceOnSuspend=4345,
    DsmStateDeletingUCXDefaultEndpointOnOperationFailure=4346,
    DsmStateDeletingUCXDeviceOnOperationFailure=4347,
    DsmStateDisablingDeviceInUCXOnDetach=4348,
    DsmStateDisablingDeviceInUCXOnOperationFailure=4349,
    DsmStateDisablingDeviceInUCXOnStop=4350,
    DsmStateDisablingDeviceInUCXOnSuspend=4351,
    DsmStateDisablingPortOnHubStopInEnumAtAddr0=4352,
    DsmStateDisablingPortOnHubSuspendInEnumAtAddr0=4353,
    DsmStateEnablingDeviceInUCX=4354,
    DsmStateGettingDeviceDescriptorInEnumAtZero=4355,
    DsmStateLoggingReset1TimeoutInEnumAtZero=4356,
    DsmStateLoggingReset2TimeoutInEnumAtZero=4357,
    DsmStateNotifyingDeviceResetToUCXAfterReset2=4358,
    DsmStateResetting1=4359,
    DsmStateResetting2=4360,
    DsmStateReturningDeviceOperationFailureInEnumAtZero=4361,
    DsmStateReturningDeviceOperationSuccessInEnumAtZero=4362,
    DsmStateReturningHubStopInEnumAtZero=4363,
    DsmStateReturningHubSuspendInEnumAtZero=4364,
    DsmStateReturningPortDetachDeviceInEnumAtZero=4365,
    DsmStateSettingSpeedFlagFor20Devices=4366,
    DsmStateStoppingTimerOnHubStopInEnumAtZero=4367,
    DsmStateStoppingTimerOnHubSuspendInEnumAtZero=4368,
    DsmStateStoppingTimerOnPortDetachInEnumAtZero=4369,
    DsmStateUpdatingDefaultEndpointMaxPacketSizeInEnum=4370,
    DsmStateValidatingDeviceDescriptorInEnumAtZero=4371,
    DsmStateWaitingForPortReset1OrDisableOnHubStopInEnumAtZero=4372,
    DsmStateWaitingForPortReset1OrDisableOnHubSuspendInEnumAtZero=4373,
    DsmStateWaitingForPortReset2OnHubStopInEnumAtZero=4374,
    DsmStateWaitingForPortReset2OnHubSuspendInEnumAtZero=4375,
    DsmStateWaitingForPostReset1Timer=4376,
    DsmStateWaitingForPostReset2ExtendedTimer=4377,
    DsmStateWaitingForPostReset2Timer=4378,
    DsmStateWaitingForStopSuspendOnReset1InEnumAtZero=4379,
    DsmStateWaitingForStopSuspendOnReset2InEnumAtZero=4380,
    DsmStateWaitingForTimerOnHubStopInEnumAtZero=4381,
    DsmStateWaitingForTimerOnHubSuspendInEnumAtZero=4382,
    DsmStateWaitingForTimerOnPortDetachInEnumAtZero=4383,
    DsmStateCreatingUCXDefaultEndpointFor30=4384,
    DsmStateCreatingUCXDevice30=4385,
    DsmStateDeletingUCXDefaultEndpointOnOperationFailureFor30=4386,
    DsmStateDeletingUCXDefaultEndpointOnOperationFailureFor30OnDetach=4387,
    DsmStateDeletingUCXDefaultEndpointOnOperationFailureFor30OnHubStop=4388,
    DsmStateDeletingUCXDefaultEndpointOnOperationFailureFor30OnHubSuspend=4389,
    DsmStateDeletingUCXDeviceOnOperationFailureFor30=4390,
    DsmStateDeletingUCXDeviceOnOperationFailureFor30OnDetach=4391,
    DsmStateDeletingUCXDeviceOnOperationFailureFor30OnHubStop=4392,
    DsmStateDeletingUCXDeviceOnOperationFailureFor30OnHubSuspend=4393,
    DsmStateEnablingDeviceInUCXFor30=4394,
    DsmStateResettingDeviceInEnumeration=4395,
    DsmStateReturningDetachInPreAddressEnumFor30=4396,
    DsmStateReturningDeviceOperationFailureInPreAddressEnumFor30=4397,
    DsmStateReturningDeviceOperationSuccessInPreAddressEnumFor30=4398,
    DsmStateReturningHubStopInPreAddressEnumFor30=4399,
    DsmStateReturningHubSuspendInPreAddressEnumFor30=4400,
    DsmStateSetting30Speed=4401,
    DsmStateCancellingControlTransferOnDetachInEnumAfterAddr=4402,
    DsmStateCancellingControlTransferOnHubStopInEnumAfterAddr=4403,
    DsmStateCancellingControlTransferOnHubSuspendInEnumAfterAddr=4404,
    DsmStateCheckingBytesReturnedInConfigDescriptor=4405,
    DsmStateCheckingIfAltEnumCmdCached=4406,
    DsmStateCheckingIfSuperSpeedNeedsToBeDisabled=4407,
    DsmStateDiasablingSuperSpeed=4408,
    DsmStateGettingConfigurationDescriptorWithDefaultLength=4409,
    DsmStateGettingConfigurationDescriptorWithReturnedLength=4410,
    DsmStateGettingDeviceDescriptorAfterAddressing=4411,
    DsmStateGettingRemainingDescriptorsAfterConfigDescriptor=4412,
    DsmStateQueryingRegistryValuesForDevice=4413,
    DsmStateReturningHubStopInEnumAfterAddr=4414,
    DsmStateReturningHubSuspendInEnumAfterAddr=4415,
    DsmStateReturningOperationFailureInEnumAfterAddr=4416,
    DsmStateReturningOperationSuccessInEnumAfterAddr=4417,
    DsmStateReturningPortDeviceDetachInEnumAfterAddr=4418,
    DsmStateSendingAltEnumCmdInEnumAfterAddr=4419,
    DsmStateSettingVersionFlagInEnumerating=4420,
    DsmStateValidatingConfigurationDescriptor=4421,
    DsmStateValidatingDeviceDescriptorAfterAddressing=4422,
    DsmStateCancellingControlTransferOnDetachInRemainingDescriptors=4423,
    DsmStateCancellingControlTransferOnHubStopInRemainingDescriptors=4424,
    DsmStateCancellingControlTransferOnHubSuspendInRemainingDescriptors=4425,
    DsmStateCheckingIfIProductIdStringDescriptorShouldBeQueried=4426,
    DsmStateCheckingIfIProductIsZero=4427,
    DsmStateGettingBosDescriptorSet=4428,
    DsmStateGettingDeviceQualifierDescriptorsAndCheckingForSpeedMismatch=4429,
    DsmStateGettingLanguageIdStringDescriptor=4430,
    DsmStateGettingMSOSAndSerialNumberDescriptor=4431,
    DsmStateGettingProductIdStringDescriptor=4432,
    DsmStateReturningErrorResponseOnLanguageIdQuery=4433,
    DsmStateReturningErrorResponseOnProductStringQuery=4434,
    DsmStateReturningHubStopInRemainingDescriptors=4435,
    DsmStateReturningHubSuspendInRemainingDescriptors=4436,
    DsmStateReturningOperationFailureInRemainingDescriptors=4437,
    DsmStateReturningOperationSuccessInRemainingDescriptors=4438,
    DsmStateReturningPortDeviceDetachInRemainingDescriptors=4439,
    DsmStateValidatingLanguageIdStringDescriptor=4440,
    DsmStateValidatingProductIdStringDescriptor=4441,
    DsmStateCheckingIfDeviceSupportsContainerId=4442,
    DsmStateCheckingIfIgnoreHWSerNumIsSet=4443,
    DsmStateCheckingIfMSOSContainerIdDescriptorIsSupported=4444,
    DsmStateCheckingIfMSOSDescriptorShouldBeQueried=4445,
    DsmStateCheckingIfMSOSExtendedConfigDescriptorIsSupported=4446,
    DsmStateCheckingIfSerialNumberStringIndexIsZero=4447,
    DsmStateGettingMSOSContainerIdDescriptor=4448,
    DsmStateGettingMSOSContainerIdHeaderDescriptor=4449,
    DsmStateGettingMSOSDescriptor=4450,
    DsmStateGettingMSOSExtendedDescriptor=4451,
    DsmStateGettingMSOSExtendedDescriptorHeader=4452,
    DsmStateGettingSerialNumberStringDescriptor=4453,
    DsmStateMarkDeviceAsNotSupportingMSOSDescriptor=4454,
    DsmStateMarkDeviceAsSupportingMSOSDescriptor=4455,
    DsmStateMarkingDeviceAsNotSupportingContainerId=4456,
    DsmStateMarkingDeviceAsNotSupportingContainerIdBasedOnMSOSDescriptor=4457,
    DsmStateReturningErrorResponseOnContainerIdHeaderQuery=4458,
    DsmStateReturningErrorResponseOnContainerIdQuery=4459,
    DsmStateReturningErrorResponseOnMSOSExtendedHeaderQuery=4460,
    DsmStateReturningErrorResponseOnMSOSExtendedQuery=4461,
    DsmStateReturningErrorResponseOnMSOSQuery=4462,
    DsmStateReturningErrorResponseOnSerialNumberQuery=4463,
    DsmStateReturningOperationFailureInGettingDescriptorsForGreaterThan1x=4464,
    DsmStateReturningOperationSuccessInGettingDescriptorsForGreaterThan1x=4465,
    DsmStateValidatingMSOSContainerIdDescriptor=4466,
    DsmStateValidatingMSOSContainerIdHeaderDescriptor=4467,
    DsmStateValidatingMSOSDescriptor=4468,
    DsmStateValidatingMSOSExtendedConfigDescriptor=4469,
    DsmStateValidatingMSOSExtendedConfigDescriptorHeader=4470,
    DsmStateValidatingSerialNumberStringDescriptor=4471,
    DsmStateCheckingIfIgnoreHWSerNumIsSetFor1xDevice=4472,
    DsmStateCheckingIfSerialNumberStringIndexIsZeroFor1xDevice=4473,
    DsmStateGettingSerialNumberStringDescriptorFor1xDevice=4474,
    DsmStateReturningErrorResponseOnSerialNumberQueryFor1xDevice=4475,
    DsmStateReturningOperationFailureInGettingSerialNumberFor1x=4476,
    DsmStateReturningOperationSuccessInGettingSerialNumberFor1x=4477,
    DsmStateValidatingSerialNumberStringDescriptorFor1xDevice=4478,
    DsmStateCheckingIfWaitRequiredAfterSetAddress=4479,
    DsmStateReturningHubStopInSettingAddress=4480,
    DsmStateReturningHubSuspendInSettingAddress=4481,
    DsmStateReturningOperationFailureInSettingAddress=4482,
    DsmStateReturningOperationSuccessInSettingAddress=4483,
    DsmStateReturningPortDetachDeviceInSettingAddress=4484,
    DsmStateSettingNonZeroAddress=4485,
    DsmStateStoppingTimerOnHubStopInSettingAddress=4486,
    DsmStateStoppingTimerOnHubSuspendInSettingAddress=4487,
    DsmStateStoppingTimerOnPortDetachInSettingAddress=4488,
    DsmStateWaitingForTimerAfterSetAddress=4489,
    DsmStateWaitingForTimerOnHubStopInSettingAddress=4490,
    DsmStateWaitingForTimerOnHubSuspendInSettingAddress=4491,
    DsmStateWaitingForTimerOnPortDetachInSettingAddress=4492,
    DsmStateCheckingBytesReturnedInAlternateConfigDescriptor=4493,
    DsmStateCheckingIfAltEnumCommandNeeded=4494,
    DsmStateCheckingIfAlternateBOSDescriptorQueryShouldBeSkipped=4495,
    DsmStateCheckingIfAlternateModeStringDescriptorShouldBeQueried=4496,
    DsmStateCheckingIfBillboardStringDescriptorShouldBeQueried=4497,
    DsmStateCheckingIfBOSDescriptorQueryShouldBeSkipped=4498,
    DsmStateCheckingIfCompleteAlternateBOSDescriptorWasRetrieved=4499,
    DsmStateCheckingIfCompleteBOSDescriptorWasRetrieved=4500,
    DsmStateCheckingIfDualRoleFeaturesSupported=4501,
    DsmStateGetMsOs20DescriptorSet=4502,
    DsmStateGettingAlternateBOSDescriptor=4503,
    DsmStateGettingAlternateBOSDescriptorHeader=4504,
    DsmStateGettingAlternateConfigurationDescriptorWithDefaultLength=4505,
    DsmStateGettingAlternateConfigurationDescriptorWithReturnedLength=4506,
    DsmStateGettingAlternateDeviceDescriptor=4507,
    DsmStateGettingAlternateModeStringDescriptor=4508,
    DsmStateGettingBillboardStringDescriptor=4509,
    DsmStateGettingBOSDescriptor=4510,
    DsmStateGettingBOSDescriptorHeader=4511,
    DsmStateIsMsOs20DescriptorSupported=4512,
    DsmStateQueryingRegistryValuesForAlternateDeviceEnumeration=4513,
    DsmStateReturningErrorResponseOnBOSDescriptorHeaderQuery=4514,
    DsmStateReturningErrorResponseOnBOSDescriptorQuery=4515,
    DsmStateReturningOperationFailureInGettingBOSDescriptor=4516,
    DsmStateReturningOperationSuccessInGettingBOSDescriptor=4517,
    DsmStateSendingMsOs20AlternateEnumerationCommand=4518,
    DsmStateSendingUsbFeaturesVendorCmd=4519,
    DsmStateSettingVersionFlagInAlternateEnumeration=4520,
    DsmStateValidatingAlternateBOSDescriptor=4521,
    DsmStateValidatingAlternateBOSDescriptorHeader=4522,
    DsmStateValidatingAlternateConfigurationDescriptor=4523,
    DsmStateValidatingAlternateDeviceDescriptor=4524,
    DsmStateValidatingAndLoggingAlternateModeStringDescriptor=4525,
    DsmStateValidatingAndLoggingBillboardStringDescriptor=4526,
    DsmStateValidatingBOSDescriptor=4527,
    DsmStateValidatingBOSDescriptorHeader=4528,
    DsmStateValidatingMsOs20DescriptorSetIfPresent=4529,
    DsmStateGettingDeviceQualifierDescriptor=4530,
    DsmStateReturningErrorResponseOnDeviceQualifierQuery=4531,
    DsmStateReturningOperationSuccessInCheckingFor20FullSpeed=4532,
    DsmStateValidatingDeviceQualifierDescriptor=4533,
    DsmStateAddingDeviceToGlobalChildList=4534,
    DsmStateCheckingIfAddDeviceToGlobalListRetryCountExceededLimit=4535,
    DsmStateCreatingChildPDOAndReportingToPnp=4536,
    DsmStateDiscardSerialNumber=4537,
    DsmStateInitializingAddDeviceToGlobalListRetryCount=4538,
    DsmStateRequestingDeviceCycleInReportingToPnp=4539,
    DsmStateReturningOperationSuccessInReportingToPnp=4540,
    DsmStateReturningPortDetachDevice=4541,
    DsmStateStoppingTimerAndRequestingCycleOnStopSuspend=4542,
    DsmStateStoppingTimerOnDetachInReportingToPnp=4543,
    DsmStateWaitingForDetachInReportingToPnp=4544,
    DsmStateWaitingForDetachOrTimerInReportingToPnp=4545,
    DsmStateWaitingForDuplicateDeviceToGoAway=4546,
    DsmStateWaitingForTimerToFlushOnDetachInReportingToPnp=4547,
    DsmStateCreatingUnknownChildPDOAndReportingToPnp=4548,
    DsmStateMarkingUnknownDeviceAsFailed=4549,
    DsmStateRequestingDeviceCycleForUnknownDevice=4550,
    DsmStateReturningOperationSuccessInReportingUnknownDevice=4551,
    DsmStateReturningPortDetachDeviceInReportingUnknownDevice=4552,
    DsmStateAckingResumed=4553,
    DsmStateAcquiringPowerReferenceInEnabled=4554,
    DsmStateAcquiringPowerReferenceInSuspended=4555,
    DsmStateAcquiringPowerReferenceInSuspendedOnResumeWithReset=4556,
    DsmStateAcquiringPowerReferenceOnHubResume=4557,
    DsmStateAcquiringPowerReferenceOnHubResumeWithReenumRequired=4558,
    DsmStateAcquiringPowerReferenceOnHubResumeWtihReset=4559,
    DsmStateAcquiringPowerReferenceOnResumeInS0=4560,
    DsmStateCheckingIfDeviceNeedsResetOnResumeInSxOnEnabled=4561,
    DsmStateCheckingIfDeviceNeedsResetOnResumeInSxOnSuspended=4562,
    DsmStateCompletingUnexpectedD0ExitInHubSuspended=4563,
    DsmStateDisabledOrFailedInHubSuspend=4564,
    DsmStateDisablingPortOnPortEnabledInPendingHubStop=4565,
    DsmStateReleasingReferenceOnHubSuspendAfterPSMSyncUp=4566,
    DsmStateReleasingReferenceOnHubSuspendAfterPSMSyncUpInDisabledOrFailed=4567,
    DsmStateReleasingReferenceOnHubSuspendOnDetachAfterPSMSyncUp=4568,
    DsmStateResumingBeforeResetting=4569,
    DsmStateReturningDeviceRenumerationOnHubResume=4570,
    DsmStateReturningDeviceResumedOnHubResume=4571,
    DsmStateReturningDeviceSuspendedOnHubResume=4572,
    DsmStateReturningHubStopWithReferenceAcquiredInHubSuspended=4573,
    DsmStateReturningPortDetach=4574,
    DsmStateSuspendedInHubSuspend=4575,
    DsmStateSuspendingPortOnPortEnabledInPendingHubSuspend=4576,
    DsmStateWaitingForHubResumeInEnabled=4577,
    DsmStateWaitingForHubResumeInSuspended=4578,
    DsmStateWaitingForHubResumeWithRenumRequired=4579,
    DsmStateWaitingForPSMSyncUp=4580,
    DsmStateWaitingForPSMSyncUpOnPendingStop=4581,
    DsmStateWaitingForPSMSyncUpOnPendingSuspend=4582,
    DsmStateWaitingForPSMSyncUpOnResumeWithReset=4583,
    DsmStateWaitingForResumeResponseFromPortOnHubStop=4584,
    DsmStateWaitingForResumeResponseFromPortOnHubSuspend=4585,
    DsmStateAcquiringAddressZeroOwnershipOnRenum=4586,
    DsmStateAcquiringPowerReferenceOnStartInReEnum=4587,
    DsmStateCancellingAcquiringAddress0OnDetachOnRenum=4588,
    DsmStateCancellingRetryTimerOnDetachOnRenum=4589,
    DsmStateCancellingRetryTimerOnStopSuspendOnRenum=4590,
    DsmStateCheckingIfAltEnumCmdNeededInReenum=4591,
    DsmStateCheckingIfDevicePDChargingPolicySupportedInReEnum=4592,
    DsmStateCheckingIfDevicePorgrammingWasLosttInUnconfigured=4593,
    DsmStateCheckingIfDeviceProgrammingWasLosttInConfigured=4594,
    DsmStateCheckingIfEnumRetryReachedMaximumOnRenum=4595,
    DsmStateCheckingIfEnumRetryReachedMaximumOnRenumWithAddress0Ownership=4596,
    DsmStateCheckingIfEnumRetryReachedMaximumWithDeviceDisabledOnRenum=4597,
    DsmStateCheckingIfItIsBootDeviceOnIdComparisionFailure=4598,
    DsmStateCheckingIfRequestConfigDescOnResetIsSet=4599,
    DsmStateCheckingIfSerialNumberShouldBeCompared=4600,
    DsmStateClearingDeviceLostProgammingFlagOnRestart=4601,
    DsmStateClearingDeviceProgrammingLostFlagOnRenum=4602,
    DsmStateComparingDeviceOnReEnumeration=4603,
    DsmStateComparingSerialNumberOnReEnumeration=4604,
    DsmStateDeconfiguringEndpointsInControllerBeforeRenumerating=4605,
    DsmStateDisablingDeviceInControllerOnStopSuspendOnRenum=4606,
    DsmStateDisablingDeviceInControllerOnStopSuspendOnRenumWithAddress0Ownership=4607,
    DsmStateDisablingOnEnumAfterFailureInReEnum=4608,
    DsmStateDisablingOnEnumAfterFailureInReEnumWithAddress0Ownership=4609,
    DsmStateDisablingOnEnumAfterFailureWithDeviceDisabledInReEnum=4610,
    DsmStateEnablingDeviceInControllerInRenum=4611,
    DsmStateEnumeratingAtAddressZeroOnRenum=4612,
    DsmStateGettingConfigDescriptorWhileRenuemrating=4613,
    DsmStateGettingDeviceDescriptorOnRenum=4614,
    DsmStateGettingSerialNumberStringDescriptorWhileRenuemrating=4615,
    DsmStateInitializingEnumRetryCountInReEnumDuringResetInConfigured=4616,
    DsmStateInitializingEnumRetryCountInReEnumDuringResetInUnConfigured=4617,
    DsmStateInitializingEnumRetryCountInReEnumDuringRestart=4618,
    DsmStatePurgingDeviceTreeIoOnReEnumerationInConfigured=4619,
    DsmStatePurgingDeviceTreeIoOnReEnumerationInUnConfigured=4620,
    DsmStatePurgingIoOnEnumAfterFailureInReEnum=4621,
    DsmStatePurgingIoOnEnumAfterFailureInReEnumWithAddress0Ownership=4622,
    DsmStateReleasingAddressZeroOwnershipOnDetachOnEnumFailure=4623,
    DsmStateReleasingAddressZeroOwnershipOnDetachWithDeviceEnabledOnRenum=4624,
    DsmStateReleasingAddressZeroOwnershipOnDetachWithTimer=4625,
    DsmStateReleasingAddressZeroOwnershipOnEnumFailureInRenum=4626,
    DsmStateReleasingAddressZeroOwnershipOnRenum=4627,
    DsmStateReleasingAddressZeroOwnershipOnStopSuspendOnEnumFailure=4628,
    DsmStateReleasingAddressZeroOwnershipOnStopSuspendOnRenum=4629,
    DsmStateReleasingAddressZeroOwnershipOnStopSuspendWithTimer=4630,
    DsmStateReleasingPowerReferenceOnRenum=4631,
    DsmStateReturningOperationFailureOnRenum=4632,
    DsmStateReturningOperationFailureWithDeviceEnabledOnRenum=4633,
    DsmStateReturningOperationSuccessOnRenum=4634,
    DsmStateReturningPortDetachDeviceOnRenum=4635,
    DsmStateReturningPortDetachDeviceWithDeviceEnabledOnRenum=4636,
    DsmStateSendingMsOs20AltEnumCmdOnReenum=4637,
    DsmStateSettingDevicePDChargingPolicyInReEnum=4638,
    DsmStateSettingLPMValuesInReEnum=4639,
    DsmStateSettingNonZeroAddressOnRenum=4640,
    DsmStateStartingTimerForEnumRetryOnRenum=4641,
    DsmStateStartingTimerForEnumRetryOnRenumWithAddress0Ownership=4642,
    DsmStateStoppedSuspendedOnRenum=4643,
    DsmStateWaitingForDetachAfterWrongDeviceDetectedOnBootDevicePort=4644,
    DsmStateWaitingForDisableCompleteOnStopSuspendAfterFailureInReEnum=4645,
    DsmStateWaitingForDisableCompleteOnStopSuspendOnRenum=4646,
    DsmStateWaitingForDisableCompleteOnStopSuspendWithDeviceDisabledAfterFailureInReEnum=4647,
    DsmStateWaitingForTimerToFlushOnDetachOnRenum=4648,
    DsmStateWaitingForTimerToFlushOnStopSuspendOnRenum=4649,
    DsmStateWaitingForUCXIoctlOnDetachOnRenum=4650,
    DsmStateWaitingForUCXIoctlOnStopSuspend=4651,
    DsmStateCheckingIfAnyAlternateInterfaceLeft=4652,
    DsmStateConfiguringDevice=4653,
    DsmStateCreatingNewEndpoints=4654,
    DsmStateDeconfiguringEndpointsInControllerForDeviceConfiguration=4655,
    DsmStateDeletingEndpointsForOldConfiguration=4656,
    DsmStateMarkingAnyEndpointsToBeEnableAsDisabled=4657,
    DsmStateProgrammingEndpointsAndSettingLPMValuesrForDeviceConfiguration=4658,
    DsmStateProgrammingEndpointsInControllerForDeviceConfigurationFor20Devices=4659,
    DsmStateReturningOperationFailureInReConfiguring=4660,
    DsmStateReturningOperationSuccessInReConfiguring=4661,
    DsmStateSettingDeviceInterfaceInConfiguring=4662,
    DsmStateDisablingPortOnHubSuspendInCleanup=4663,
    DsmStateFlushingHubPowerDownEvents=4664,
    DsmStateFlushingHubPowerUpEvents=4665,
    DsmStateFlushingHubStopAfterSuspendEvent=4666,
    DsmStateFlushingPnpEvents=4667,
    DsmStateFowardingStreamsRequestToUcxInWaitingForDevicePortEvents=4668,
    DsmStateReleasingPowerReferenceOnHubSuspendInCleanup=4669,
    DsmStateReturningPortDetachDeviceFromIgnoringDevicePort=4670,
    DsmStateReturningPortDisabledOnHubSuspendInCleanup=4671,
    DsmStateWaitingForDevicePortEvents=4672,
    DsmStateFlushingHubPowerDownEventsWithPortOff=4673,
    DsmStateFlushingHubPowerUpEventsWithPortOff=4674,
    DsmStateFlushingHubStopAfterSuspendEventWithPortOff=4675,
    DsmStateFlushingPnpEventsWithPortOff=4676,
    DsmStateFowardingStreamsRequestToUcxInWaitingForDevicePortEventsWithPortOff=4677,
    DsmStateWaitingForDevicePortEventsWithPortOff=4678,
    DsmStateDisablingPortOnHubSuspendForFailedDevice=4679,
    DsmStateFailedDeviceHubSuspended=4680,
    DsmStateFlushingHubPowerDownEventsForFailedDevice=4681,
    DsmStateFlushingHubPowerUpEventsForFailedDevice=4682,
    DsmStateFlushingHubStopAfterSuspendEventForFailedDevice=4683,
    DsmStateFlushingPnpEventsForFailedDevice=4684,
    DsmStateReleasingPowerReferenceOnDetachForFailedDevice=4685,
    DsmStateReturningPortDetachDeviceForFailedDevice=4686,
    DsmStateWaitingForDevicePortEventsForFailedDevice=4687,
    DsmStateFlushingHubStartResumeEvent=4688,
    DsmStateFlushingHubSuspendEvent=4689,
    DsmStateFlushingPnpEventExceptStop=4690,
    DsmStateFowardingStreamsRequestToUcxInWaitingForDevicePortEventsExceptStop=4691,
    DsmStateWaitingForDevicePortEventsExceptStop=4692,
    DsmStateFlushingHubResumeEventForBootDevice=4693,
    DsmStateFlushingHubSuspendEventForBootDevice=4694,
    DsmStateFlushingPnpEventsForBootDevice=4695,
    DsmStateWaitingForDeviceHubEventsForBootDevice=4696,
    DsmStateAckingPortEventInD3Cold=4697,
    DsmStateAckingPortResumed=4698,
    DsmStateCheckingIfDeviceArmedForWakeOnResume=4699,
    DsmStateCheckingIfDeviceNeedsResetOnResumeInS0=4700,
    DsmStateCheckingIfDeviceShouldBeDisarmedForWakeOnResume=4701,
    DsmStateCheckingIfResetOnLastResumeFlagIsSet=4702,
    DsmStateCheckingIfResetOnLastResumeFlagIsSetOnSuspended=4703,
    DsmStateCompletingD0EntryOnDetach=4704,
    DsmStateCompletingD0EntryOnPortFailure=4705,
    DsmStateDisabledAfterD3Cold=4706,
    DsmStateDisablingOnHubSuspendNeedingRenumeration=4707,
    DsmStateDisablingPortOnStopFromSuspended=4708,
    DsmStateDisarmingDeviceForWakeOnD0Entry=4709,
    DsmStateDisarmingDeviceForWakeOnPortResumed=4710,
    DsmStatePurgingDeviceIoOnHubSuspendWhileWaitingForD0Entry=4711,
    DsmStatePurgingDeviceIoOnHubSuspendWhileWaitingForD0EntryOnHwWake=4712,
    DsmStateReleasingPowerReferenceOnDetachWhileSuspending=4713,
    DsmStateReleasingPowerReferenceOnDetachWhileWaitingForHubSuspend=4714,
    DsmStateReleasingPowerReferenceOnPortFailureWhileWaitingForHubSuspend=4715,
    DsmStateResumingFromSelectiveSuspend=4716,
    DsmStateReturningDetachDevice=4717,
    DsmStateReturningDeviceResumed=4718,
    DsmStateReturningHubStopFromSuspended=4719,
    DsmStateReturningPortFailureOnResume=4720,
    DsmStateReturningRenumerateDeviceOnResume=4721,
    DsmStateSettingResetOnLastResumeDueToD3Cold=4722,
    DsmStateSettingResetOnLastResumeFlagForPDO=4723,
    DsmStateSettingResetOnLastResumeFlagForPDOAfterD3Cold=4724,
    DsmStateStartingDeviceIoOnDeviceResumeOnHwWake=4725,
    DsmStateStartingDeviceIoOnDeviceResumeOnSwWake=4726,
    DsmStateSuspended=4727,
    DsmStateSuspendedWithHubSuspended=4728,
    DsmStateSuspendedWithHubSuspendedInD3Cold=4729,
    DsmStateSuspendingBackUnarmedDevice=4730,
    DsmStateSuspendingWakeArmedDeviceOnHubSuspend=4731,
    DsmStateWaitingForD0EntryOnHwWake=4732,
    DsmStateWaitingForD0EntryOnPendingRenumerate=4733,
    DsmStateWaitingForSuspendCompleteOnHubSuspend=4734,
    DsmStateAbortingDeviceIoInSuspendingBeforeArmingForWakeFailure=4735,
    DsmStateArmingDeviceForWake=4736,
    DsmStateCheckingIfDeviceArmedForWakeOnSuspending=4737,
    DsmStateCompletingWaitWakeOnDetachDuringSuspending=4738,
    DsmStateCompletingWaitWakeOnSuspendFailure=4739,
    DsmStatePurgingDeviceIoInSuspending=4740,
    DsmStatePurgingDeviceIoInSuspendingAfterArmingForWake=4741,
    DsmStatePurgingDeviceIoInSuspendingAfterArmingForWakeFailure=4742,
    DsmStateReturningOperationFailureInSuspending=4743,
    DsmStateReturningOperationSuccessInSuspending=4744,
    DsmStateReturningPortDetachDeviceInSuspending=4745,
    DsmStateReturningUnexpectedHubSuspendInSuspending=4746,
    DsmStateSuspending=4747,
    DsmStateSuspendingPortOnFailureInSuspending=4748,
    DsmStateSuspendingWithArmedForWake=4749,
    DsmStateWaitingForPortResponseOnHubSuspend=4750,
    DsmStateCreatingNewEndpointsInSettingInterface=4751,
    DsmStateDeletingEndpointsForNewInterfaceOnFailure=4752,
    DsmStateDeletingEndpointsForOldInterface=4753,
    DsmStateDeletingEndpointsForOldInterfaceOnFailure=4754,
    DsmStateDisablingEndpointsForTheCurrentInterface=4755,
    DsmStateDisablingEndpointsForTheNewInterfaceOnFailure=4756,
    DsmStatePreparingEndpointAndInterfaceListsOnSelectInterface=4757,
    DsmStateProgrammingEndpointsAndSettingLPMValuesInSettingInterface=4758,
    DsmStateProgrammingEndpointsInControllerInSettingInterfaceFor20Devices=4759,
    DsmStateReturningOperationFailureInSettingInterface=4760,
    DsmStateReturningOperationSuccessInSettingInterface=4761,
    DsmStateSettingDeviceInterfaceInSettingInterface=4762,
    DsmStateSettingDeviceInterfaceInSettingInterfaceOnFailureForCompat=4763,
    DsmStateCheckingIfDeviceSpeedChanged=4764,
    DsmStateCheckingIfFirstEnumTryInRenum=4765,
    DsmStateGettingDeviceDescriptorInReEnumAtZero=4766,
    DsmStateLoggingReset1TimeoutInReEnumAtZero=4767,
    DsmStateLoggingReset2TimeoutInReEnum=4768,
    DsmStateNotifyingDeviceResetToUCXAfterReset1InRenum=4769,
    DsmStateNotifyingDeviceResetToUCXAfterReset2InRenum=4770,
    DsmStateResetting1InRenum=4771,
    DsmStateResetting2InRenum=4772,
    DsmStateReturningDeviceOperationFailureInReEnumAtZero=4773,
    DsmStateReturningDeviceOperationSuccessInReEnumAtZero=4774,
    DsmStateReturningHubStopInReEnumAtZero=4775,
    DsmStateReturningHubSuspendInReEnumAtZero=4776,
    DsmStateReturningPortDetachDeviceInReEnumAtZero=4777,
    DsmStateStoppingTimerOnHubStopInReEnumAtZero=4778,
    DsmStateStoppingTimerOnHubSuspendInReEnumAtZero=4779,
    DsmStateStoppingTimerOnPortDetachInReEnumAtZero=4780,
    DsmStateValidatingDeviceDescriptorInReEnumAtZero=4781,
    DsmStateWaitingForPortResetOnHubStopInReEnumAtZero=4782,
    DsmStateWaitingForPortResetOnHubSuspendInReEnumAtZero=4783,
    DsmStateWaitingForPostReset1TimerInRenum=4784,
    DsmStateWaitingForPostReset2ExtendedTimerInRenum=4785,
    DsmStateWaitingForPostReset2TimerInRenum=4786,
    DsmStateWaitingForStopSuspendOnReset1InReEnumAtZero=4787,
    DsmStateWaitingForTimerOnHubStopInReEnumAtZero=4788,
    DsmStateWaitingForTimerOnHubSuspendInReEnumAtZero=4789,
    DsmStateWaitingForTimerOnPortDetachInReEnumAtZero=4790,
    DsmStateCheckingIfFirstReEnumTryFor30Device=4791,
    DsmStateDeterminingPortResetTypeRequired=4792,
    DsmStateLoggingResetTimeoutInResettingFor30=4793,
    DsmStateNotifyingDeviceResetToUCXInResettingFor30=4794,
    DsmStateQueueingHotPortResetFor30=4795,
    DsmStateQueueingWarmPortResetFor30=4796,
    DsmStateReturningDeviceOperationFailureInResettingFor30=4797,
    DsmStateReturningDeviceOperationSuccessInInResettingFor30=4798,
    DsmStateReturningHubStopInResettingFor30=4799,
    DsmStateReturningHubSuspendInResettingFor30=4800,
    DsmStateReturningPortDetachDeviceInResettingFor30=4801,
    DsmStateStartingPostResetTimerFor30=4802,
    DsmStateStoppingTimerOnHubStopInResettingFor30=4803,
    DsmStateStoppingTimerOnHubSuspendInResettingFor30=4804,
    DsmStateStoppingTimerOnPortDetachInResettingFor30=4805,
    DsmStateWaitingForPortResetCompleteFor30=4806,
    DsmStateWaitingForPortResetOnHubStopInResettingFor30=4807,
    DsmStateWaitingForPortResetOnHubSuspendInResettingFor30=4808,
    DsmStateWaitingForStopSuspendOnReset1InResettingFor30=4809,
    DsmStateWaitingForTimerOnHubStopInResettingFor30=4810,
    DsmStateWaitingForTimerOnHubSuspendInResettingFor30=4811,
    DsmStateWaitingForTimerOnPortDetachInResettingFor30=4812,
    DsmStateAllocatingBufferForMsOsExtendedPropertyDescriptor=4813,
    DsmStateCheckingIfMsOs20RegistryValuesShouldBeInstalled=4814,
    DsmStateCheckingIfMSOSExtendedPropertyDescriptorShouldBeQueried=4815,
    DsmStateFreeingBufferAllocatedForMSOSExtendedProperty=4816,
    DsmStateGettingMSOSExtendedPropertyDescriptor=4817,
    DsmStateGettingMSOSExtendedPropertyDescriptorHeader=4818,
    DsmStateInstallingMsOs20RegistryValues=4819,
    DsmStateSettingExtPropDescSemaphoreForMsOs2=4820,
    DsmStateSettingExtPropDescSemaphoreRegistryFlag=4821,
    DsmStateSignalingPnpEventForMSOSExtInstall=4822,
    DsmStateValidatingMSOSExtendedPropertyDescriptor=4823,
    DsmStateValidatingMSOSExtendedPropertyDescriptorHeader=4824,
    DsmStateWaitingForInstallMSOSExt=4825,
    DsmStateWritingCustomPropertiesInRegistry=4826,
    DsmStateCheckingIfSetIsochDelayShouldBeSkipped=4827,
    DsmStateCheckingIfSetSelShouldBeSkipped=4828,
    DsmStateReturningOperationFailureInSettingLPMValues=4829,
    DsmStateReturningOperationSuccessInSettingLPMValues=4830,
    DsmStateSettingSEL=4831,
    DsmStateSetttingIsochDelay=4832,
    DsmStateCheckingIfEnableU1NeedsToBeUpdated=4833,
    DsmStateCheckingIfEnableU2NeedsToBeUpdated=4834,
    DsmStateCheckingIfEndpointsNeedToBeConfiguredAfterDecreasingExitLatency=4835,
    DsmStateCheckingIfEndpointsNeedToBeProgrammedAfterIncreasingLatency=4836,
    DsmStateCheckingIfEndpointsToBeDisabled=4837,
    DsmStateCheckingIfEndpointsToBeDisabledOnDetach=4838,
    DsmStateCheckingIfExitLatencyNeedsToBeDecreased=4839,
    DsmStateCheckingIfExitLatencyNeedsToBeIncreased=4840,
    DsmStateCheckingIfU1TimeoutNeedsToBeChanged=4841,
    DsmStateCheckingIfU2TimeoutNeedsToBeChanged=4842,
    DsmStateComputingU1U2TimeoutsAndExitLatency=4843,
    DsmStateDisablingEndpointsOnConfigFailure=4844,
    DsmStateDisablingEndpointsOnConfigFailureOnDetach=4845,
    DsmStateDisablingU1=4846,
    DsmStateDisablingU1U2OnExitLatencyTooLargeError=4847,
    DsmStateDisablingU2=4848,
    DsmStateEnablingU1=4849,
    DsmStateEnablingU2=4850,
    DsmStateInitializingU1U2Flags=4851,
    DsmStateProgrammingEndpointsInControllerAfterDecreasingExitLatency=4852,
    DsmStateProgrammingEndpointsInControllerAfterIncreasingExitLatency=4853,
    DsmStateQueuingSetU1TimeoutToPsm=4854,
    DsmStateQueuingSetU2TimeoutToPsm=4855,
    DsmStateReturningOperationFailureInUpdatingLPMValues=4856,
    DsmStateReturningOperationSuccessInUpdatingLPMValues=4857,
    DsmStateReturningPortDetachDeviceInUpdatingLPMValues=4858,
    DsmStateUpdatingDeviceExitLatencyInTheControllerAfterDecreasingExitLatency=4859,
    DsmStateUpdatingDeviceExitLatencyInTheControllerAfterIncreasingExitLatency=4860,
    DsmStateUpdatingDeviceStatusToU1Disabled=4861,
    DsmStateUpdatingDeviceStatusToU1Enabled=4862,
    DsmStateUpdatingDeviceStatusToU2Disabled=4863,
    DsmStateUpdatingDeviceStatusToU2Enabled=4864,
    DsmStateComputingLPMTimeoutValuesInUnconfigured=4865,
    DsmStateQueuingSetU2TimeoutToPsmForEnumeratedDevice=4866,
    DsmStateReturningOperationFailureInUpdatingLPMValuesInUnconfigured=4867,
    DsmStateReturningOperationSuccessInUpdatingLPMValuesInUnconfigured=4868,
    DsmStateGettingRemoteWakeCapability=4869,
    DsmStateReturningOperationFailureInGettingRemoteWakeCap=4870,
    DsmStateReturningOperationSuccessInGettingRemoteWakeCap=4871,
    DsmStateValidatingInterfaceStatusForRemoteWake=4872,
    DsmStateCheckingIf20LPMShouldBeEnabled=4873,
    DsmStateReturningOperationSuccessInSetting20LPMValues=4874,
    DsmStateWaitingFor20LpmUpdateIoctlToComplete=4875
};

union _STATE// Size=0x4 (Id=393)
{
    unsigned long StateAsUlong;// Offset=0x0 Size=0x4
    enum _GENERIC_STATE GenericState;// Offset=0x0 Size=0x4
    enum _HSM_STATE HsmState;// Offset=0x0 Size=0x4
    enum _PSM20_STATE Psm20State;// Offset=0x0 Size=0x4
    enum _PSM30_STATE Psm30State;// Offset=0x0 Size=0x4
    enum _DSM_STATE DsmState;// Offset=0x0 Size=0x4
};

struct _STATE_LOG// Size=0xc (Id=490)
{
    union _EVENT Event;// Offset=0x0 Size=0x4
    union _STATE State;// Offset=0x4 Size=0x4
    unsigned long Depth;// Offset=0x8 Size=0x4
};

struct _EVENT_QUEUE// Size=0x44 (Id=649)
{
    union _EVENT Events[16];// Offset=0x0 Size=0x40
    unsigned char QueueHead;// Offset=0x40 Size=0x1
    unsigned char QueueTail;// Offset=0x41 Size=0x1
};

struct _GUID// Size=0x10 (Id=62)
{
    unsigned long Data1;// Offset=0x0 Size=0x4
    unsigned short Data2;// Offset=0x4 Size=0x2
    unsigned short Data3;// Offset=0x6 Size=0x2
    unsigned char Data4[8];// Offset=0x8 Size=0x8
};

struct _SM_CONTEXT// Size=0x420 (Id=474)
{
    struct _STATE_LOG StateHistory[64];// Offset=0x0 Size=0x300
    union _EVENT EventHistory[16];// Offset=0x300 Size=0x40
    unsigned char StateHistoryIndex;// Offset=0x340 Size=0x1
    unsigned char EventHistoryIndex;// Offset=0x341 Size=0x1
    unsigned long long StateMachineLock;// Offset=0x348 Size=0x8
    unsigned char StateMachineRunning;// Offset=0x350 Size=0x1
    union _STATE CurrentState[7];// Offset=0x354 Size=0x1c
    unsigned long CurrentStateDepth;// Offset=0x370 Size=0x4
    struct _EVENT_QUEUE EventQueue;// Offset=0x374 Size=0x44
    unsigned long SubSmFlags;// Offset=0x3b8 Size=0x4
    void * ParentContext;// Offset=0x3c0 Size=0x8
    void  ( * AddEvent)(void * ,unsigned long );// Offset=0x3c8 Size=0x8
    struct _STATE_ENTRY ** StateTable;// Offset=0x3d0 Size=0x8
    unsigned long StartIndex;// Offset=0x3d8 Size=0x4
    struct _UCX_FORWARD_PROGRESS_WORKITEM * SmWorker;// Offset=0x3e0 Size=0x8
    struct _HUB_FDO_CONTEXT * HubFdoContext;// Offset=0x3e8 Size=0x8
    unsigned char NeedsForwardProgress;// Offset=0x3f0 Size=0x1
    struct _GUID CurrentActivityId;// Offset=0x3f4 Size=0x10
    struct UCXUSBDEVICE__ * ParentHandle;// Offset=0x408 Size=0x8
    struct _EX_TIMER * Timer;// Offset=0x410 Size=0x8
    unsigned char WaitingForTimerFired;// Offset=0x418 Size=0x1
    unsigned char DebugBreakOnStateTransition;// Offset=0x419 Size=0x1
};

union _HSM_MUX_FLAGS// Size=0x4 (Id=584)
{
    unsigned long AsUlong32;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long InterruptReferenceReleasePending:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long FailInterruptReferenceAcquired:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long HubResetEnabled:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long FailDsmRegistration:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long HubResetInProgress:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
    };
};

struct _HSM_MUX_CONTEXT// Size=0x50 (Id=511)
{
    unsigned long long MuxLock;// Offset=0x0 Size=0x8
    unsigned long OutstandingPortChanges;// Offset=0x8 Size=0x4
    unsigned long OutstandingPnPOperations;// Offset=0xc Size=0x4
    unsigned long OutstandingResetOperations;// Offset=0x10 Size=0x4
    unsigned long NumberOfInterruptReferencesHeld;// Offset=0x14 Size=0x4
    unsigned long NumberOfPowerReferencesHeld;// Offset=0x18 Size=0x4
    unsigned long NumberOfDevicePowerReferencesHeld;// Offset=0x1c Size=0x4
    union _HSM_MUX_FLAGS HubMuxFlags;// Offset=0x20 Size=0x4
    unsigned long NumberOfPSMs;// Offset=0x24 Size=0x4
    struct _LIST_ENTRY PSMListHead;// Offset=0x28 Size=0x10
    unsigned long NumberOfDSMs;// Offset=0x38 Size=0x4
    struct _LIST_ENTRY DSMListHead;// Offset=0x40 Size=0x10
};

struct _USB_RESET_FLAGS// Size=0x4 (Id=550)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long ControllerProgrammingLost:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long DevicePowerCycled:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
    };
};

struct _USB_DEVICE_DESCRIPTOR// Size=0x12 (Id=407)
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

union _PARENT_HUB_FLAGS// Size=0x4 (Id=510)
{
    unsigned long AsUlong32;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long DisableLpmForAllDownstreamDevices:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long HubIsHighSpeedCapable:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
    };
};

struct _HUB_INFO_FROM_PARENT// Size=0x48 (Id=487)
{
    struct _DEVICE_OBJECT * IoTarget;// Offset=0x0 Size=0x8
    struct _USB_DEVICE_DESCRIPTOR DeviceDescriptor;// Offset=0x8 Size=0x12
    unsigned short U1ExitLatency;// Offset=0x1a Size=0x2
    unsigned short U2ExitLatency;// Offset=0x1c Size=0x2
    unsigned short ExitLatencyOfSlowestLinkForU1;// Offset=0x1e Size=0x2
    unsigned char DepthOfSlowestLinkForU1;// Offset=0x20 Size=0x1
    unsigned short ExitLatencyOfSlowestLinkForU2;// Offset=0x22 Size=0x2
    unsigned char DepthOfSlowestLinkForU2;// Offset=0x24 Size=0x1
    unsigned short HostInitiatedU1ExitLatency;// Offset=0x26 Size=0x2
    unsigned short HostInitiatedU2ExitLatency;// Offset=0x28 Size=0x2
    unsigned char TotalHubDepth;// Offset=0x2a Size=0x1
    unsigned short TotalTPPropogationDelay;// Offset=0x2c Size=0x2
    union _PARENT_HUB_FLAGS HubFlags;// Offset=0x30 Size=0x4
    union _USB_DEVICE_CAPABILITY_SUPERSPEEDPLUS_SPEED * SublinkSpeedAttr;// Offset=0x38 Size=0x8
    unsigned long SublinkSpeedAttrCount;// Offset=0x40 Size=0x4
};

struct _UNICODE_STRING// Size=0x10 (Id=135)
{
    unsigned short Length;// Offset=0x0 Size=0x2
    unsigned short MaximumLength;// Offset=0x2 Size=0x2
    unsigned short * Buffer;// Offset=0x8 Size=0x8
};

enum _WDF_POWER_DEVICE_STATE
{
    WdfPowerDeviceInvalid=0,
    WdfPowerDeviceD0=1,
    WdfPowerDeviceD1=2,
    WdfPowerDeviceD2=3,
    WdfPowerDeviceD3=4,
    WdfPowerDeviceD3Final=5,
    WdfPowerDevicePrepareForHibernation=6,
    WdfPowerDeviceMaximum=7
};

struct _HUB_FDO_CONTEXT// Size=0x9e0 (Id=327)
{
    struct _USBHUB3_TRIAGE_INFO * Usbhub3TriageInfo;// Offset=0x0 Size=0x8
    unsigned long Reserved;// Offset=0x8 Size=0x4
    unsigned char QueryPortStatusForDebugging;// Offset=0xc Size=0x1
    struct WDFDEVICE__ * HubFdoDevice;// Offset=0x10 Size=0x8
    struct _DEVICE_OBJECT * HubPdo;// Offset=0x18 Size=0x8
    struct WDFIOTARGET__ * RootHubIoTarget;// Offset=0x20 Size=0x8
    struct _HUB_INFORMATION HubInformation;// Offset=0x28 Size=0x80
    struct _HUB_PARENT_INTERFACE HubParentInterface;// Offset=0xa8 Size=0x88
    struct _HUB_CONTROLLERSTACK_INTERFACE HubControllerStackInterface;// Offset=0x130 Size=0xe8
    struct _USB_BUS_INTERFACE_USBDI_V3 UsbdBusInterface;// Offset=0x218 Size=0x60
    struct _DEVICE_CAPABILITIES DeviceCapabilities;// Offset=0x278 Size=0x40
    union _CONTROLLER_FLAGS ControllerFlags;// Offset=0x2b8 Size=0x4
    union _USB_HUB_STATUS_AND_CHANGE HubStatusAndChange;// Offset=0x2bc Size=0x4
    union _USB_HUB_STATUS_AND_CHANGE OldHubStatusAndChange;// Offset=0x2c0 Size=0x4
    enum _USB_HUB_FEATURE_SELECTOR CurrentFeatureSelector;// Offset=0x2c4 Size=0x4
    enum _HSM_EVENT CurrentHubChangeEvent;// Offset=0x2c8 Size=0x4
    union _USB_DEVICE_STATUS HubDeviceStatus;// Offset=0x2cc Size=0x2
    struct _CONTROL_REQUEST HubControlRequest;// Offset=0x2d0 Size=0xa8
    struct _HUB_INTERRUPT_REQUEST StatusChangeInterruptRequest;// Offset=0x378 Size=0xb8
    struct _KEVENT PnPPowerEvent;// Offset=0x430 Size=0x18
    long PnPPowerStatus;// Offset=0x448 Size=0x4
    union _HUB_DESCRIPTOR HubDescriptor;// Offset=0x44c Size=0x47
    struct _USB_CONFIGURATION_DESCRIPTOR * ConfigurationDescriptor;// Offset=0x498 Size=0x8
    struct _SM_CONTEXT HsmContext;// Offset=0x4a0 Size=0x420
    struct _HSM_MUX_CONTEXT MuxContext;// Offset=0x8c0 Size=0x50
    struct WDFQUEUE__ * DeviceControlQueue;// Offset=0x910 Size=0x8
    struct _USB_RESET_FLAGS ResetFlags;// Offset=0x918 Size=0x4
    struct _GUID CurrentActivityId;// Offset=0x91c Size=0x10
    struct _LIST_ENTRY ListEntry;// Offset=0x930 Size=0x10
    struct _HUB_INFO_FROM_PARENT HubInfoFromParent;// Offset=0x940 Size=0x48
    struct RECORDER_LOG__ * IfrLog;// Offset=0x988 Size=0x8
    struct WDFREQUEST__ * PdoGetPortStatusRequest;// Offset=0x990 Size=0x8
    struct WDFWMIINSTANCE__ * WmiNotificationHandle;// Offset=0x998 Size=0x8
    struct _UNICODE_STRING HubSymbolicLinkNameUnicode;// Offset=0x9a0 Size=0x10
    void * SelectiveSuspendSetting;// Offset=0x9b0 Size=0x8
    void * SelectiveSuspendTimeoutPowerSetting;// Offset=0x9b8 Size=0x8
    unsigned long CurrentIdleTimeout;// Offset=0x9c0 Size=0x4
    struct _PORT_CONTEXT * GetPortStatusTargetPortContext;// Offset=0x9c8 Size=0x8
    unsigned long HardwareVerifierFlags;// Offset=0x9d0 Size=0x4
    unsigned long HubFailureMsgId;// Offset=0x9d4 Size=0x4
    enum _WDF_POWER_DEVICE_STATE CurrentWdfPowerDeviceState;// Offset=0x9d8 Size=0x4
    unsigned short OldwTotalLength;// Offset=0x9dc Size=0x2
};
