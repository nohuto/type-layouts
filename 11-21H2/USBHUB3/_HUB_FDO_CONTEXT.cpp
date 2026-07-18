union _HUB_FLAGS// Size=0x4 (Id=730)
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

union _HUB_FLAGS_EXT// Size=0x4 (Id=677)
{
    unsigned long AsUlong32;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long DisableSelectiveSuspend:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long ReprogramDeviceContextOnD3ColdExit:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long NeedsSDM845HighSpeedEnumWorkaround:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long DisableU1:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long RootHubInD0UntilIdleResiliency:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long SupportsTunneling:1;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1
        unsigned long HandleOverCurrentOnResume:1;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1
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

union _USB_20_PORT_STATUS// Size=0x2 (Id=756)
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

union _USB_30_PORT_STATUS// Size=0x2 (Id=745)
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

union _USB_PORT_STATUS// Size=0x2 (Id=615)
{
    unsigned short AsUshort16;// Offset=0x0 Size=0x2
    union _USB_20_PORT_STATUS Usb20PortStatus;// Offset=0x0 Size=0x2
    union _USB_30_PORT_STATUS Usb30PortStatus;// Offset=0x0 Size=0x2
};

union _USB_20_PORT_CHANGE// Size=0x2 (Id=739)
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

union _USB_30_PORT_CHANGE// Size=0x2 (Id=723)
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

union _USB_PORT_CHANGE// Size=0x2 (Id=680)
{
    unsigned short AsUshort16;// Offset=0x0 Size=0x2
    union _USB_20_PORT_CHANGE Usb20PortChange;// Offset=0x0 Size=0x2
    union _USB_30_PORT_CHANGE Usb30PortChange;// Offset=0x0 Size=0x2
};

union _USB_PORT_STATUS_AND_CHANGE// Size=0x4 (Id=663)
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

struct _HUBUCX_ROOTHUB_INFO// Size=0x18 (Id=766)
{
    unsigned long Size;// Offset=0x0 Size=0x4
    enum _CONTROLLER_TYPE ControllerType;// Offset=0x4 Size=0x4
    unsigned short NumberOf20Ports;// Offset=0x8 Size=0x2
    unsigned short NumberOf30Ports;// Offset=0xa Size=0x2
    unsigned short MaxU1ExitLatency;// Offset=0xc Size=0x2
    unsigned short MaxU2ExitLatency;// Offset=0xe Size=0x2
    void * UsbdInterruptPipeHandle;// Offset=0x10 Size=0x8
};

struct _HUB_INFORMATION// Size=0x80 (Id=637)
{
    union _HUB_FLAGS HubFlags;// Offset=0x0 Size=0x4
    union _HUB_FLAGS_EXT HubFlagsExt;// Offset=0x4 Size=0x4
    unsigned short NumberOfPorts;// Offset=0x8 Size=0x2
    unsigned short HubAddress;// Offset=0xa Size=0x2
    unsigned short HubResetCount;// Offset=0xc Size=0x2
    unsigned short HubTimedResetRecoveryCount;// Offset=0xe Size=0x2
    unsigned long HubResetRecoveryCount;// Offset=0x10 Size=0x4
    union _LARGE_INTEGER FirstHubResetRecoveryTimeStamp;// Offset=0x18 Size=0x8
    union _USB_PORT_STATUS_AND_CHANGE LastHubResetPortStatus;// Offset=0x20 Size=0x4
    unsigned short HubGetDescriptorCount;// Offset=0x24 Size=0x2
    void * HubConfigurationHandle;// Offset=0x28 Size=0x8
    unsigned short InterruptPipeMaxPacketSize;// Offset=0x30 Size=0x2
    enum _MAX_PORT_POWER MaxPortPower;// Offset=0x34 Size=0x4
    unsigned long HubNumber;// Offset=0x38 Size=0x4
    struct _HUBUCX_ROOTHUB_INFO RootHubInfo;// Offset=0x40 Size=0x18
    struct _ROOTHUB_20PORT_INFO ** RootHub20PortInfoPointerArray;// Offset=0x58 Size=0x8
    struct _ROOTHUB_30PORT_INFO_EX ** RootHub30PortInfoPointerArray;// Offset=0x60 Size=0x8
    unsigned short NumberOf20Ports;// Offset=0x68 Size=0x2
    unsigned short First20PortNumber;// Offset=0x6a Size=0x2
    unsigned short Last20PortNumber;// Offset=0x6c Size=0x2
    unsigned short NumberOf30Ports;// Offset=0x6e Size=0x2
    unsigned short First30PortNumber;// Offset=0x70 Size=0x2
    unsigned short Last30PortNumber;// Offset=0x72 Size=0x2
    unsigned long SuperSpeedPlusIsochBurstCount;// Offset=0x74 Size=0x4
    unsigned long HubFWUpdateProtocol;// Offset=0x78 Size=0x4
};

enum _UCX_CONTROLLER_PARENT_BUS_TYPE
{
    UcxControllerParentBusTypeCustom=0,
    UcxControllerParentBusTypePci=1,
    UcxControllerParentBusTypeAcpi=2,
    UcxControllerParentBusTypeMaUsb=3
};

struct _UCX_CONTROLLER_PCI_INFORMATION// Size=0x18 (Id=736)
{
    unsigned long VendorId;// Offset=0x0 Size=0x4
    unsigned long DeviceId;// Offset=0x4 Size=0x4
    unsigned short RevisionId;// Offset=0x8 Size=0x2
    unsigned long BusNumber;// Offset=0xc Size=0x4
    unsigned long DeviceNumber;// Offset=0x10 Size=0x4
    unsigned long FunctionNumber;// Offset=0x14 Size=0x4
};

struct _UCX_CONTROLLER_ACPI_INFORMATION// Size=0xf (Id=421)
{
    char VendorId[5];// Offset=0x0 Size=0x5
    char DeviceId[5];// Offset=0x5 Size=0x5
    char RevisionId[5];// Offset=0xa Size=0x5
};

struct _UCX_CONTROLLER_MAUSB_INFORMATION// Size=0x18 (Id=779)
{
    struct _UNICODE_STRING * ManufacturerNameString;// Offset=0x0 Size=0x8
    struct _UNICODE_STRING * ModelNameString;// Offset=0x8 Size=0x8
    struct _UNICODE_STRING * ModelNumberString;// Offset=0x10 Size=0x8
};

struct _UCX_CONTROLLER_INFO// Size=0x20 (Id=646)
{
    enum _UCX_CONTROLLER_PARENT_BUS_TYPE Type;// Offset=0x0 Size=0x4
    union // Size=0x18 (Id=0)
    {
        struct _UCX_CONTROLLER_PCI_INFORMATION Pci;// Offset=0x8 Size=0x18
        struct _UCX_CONTROLLER_ACPI_INFORMATION Acpi;// Offset=0x8 Size=0xf
        struct _UCX_CONTROLLER_MAUSB_INFORMATION MaUsb;// Offset=0x8 Size=0x18
    };
};

enum _USB_DEVICE_SPEED
{
    UsbLowSpeed=0,
    UsbFullSpeed=1,
    UsbHighSpeed=2,
    UsbSuperSpeed=3
};

struct _USB_TOPOLOGY_ADDRESS// Size=0x20 (Id=671)
{
    unsigned long PciBusNumber;// Offset=0x0 Size=0x4
    unsigned long PciDeviceNumber;// Offset=0x4 Size=0x4
    unsigned long PciFunctionNumber;// Offset=0x8 Size=0x4
    unsigned long Reserved;// Offset=0xc Size=0x4
    unsigned short RootHubPortNumber;// Offset=0x10 Size=0x2
    unsigned short HubPortNumber[5];// Offset=0x12 Size=0xa
    unsigned short Reserved2;// Offset=0x1c Size=0x2
};

struct _HUB_PARENT_INTERFACE// Size=0x88 (Id=610)
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

struct _HUB_CONTROLLERSTACK_INTERFACE// Size=0x100 (Id=360)
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
    void  ( * ControllerGetInfo)(struct UCXUSBDEVICE__ * ,struct _UCX_CONTROLLER_INFO * );// Offset=0xe8 Size=0x8
    union _LARGE_INTEGER  ( * UsbDeviceGetLastTransferTimestamp)(struct UCXUSBDEVICE__ * ,struct UCXUSBDEVICE__ * );// Offset=0xf0 Size=0x8
    void  ( * EndpointSetPriority)(struct UCXUSBDEVICE__ * ,struct UCXUSBDEVICE__ * ,struct UCXENDPOINT__ * ,enum _UCX_ENDPOINT_CHARACTERISTIC_PRIORITY );// Offset=0xf8 Size=0x8
};

struct _USB_BUS_INTERFACE_USBDI_V3// Size=0x60 (Id=544)
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
    long  ( * QueryControllerType)(void * ,unsigned long * ,wchar_t * ,wchar_t * ,unsigned char * ,unsigned char * ,unsigned char * ,unsigned char * );// Offset=0x58 Size=0x8
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

struct _DEVICE_CAPABILITIES// Size=0x40 (Id=458)
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
        unsigned long SecureDevice:1;// Offset=0x4 Size=0x4 BitOffset=0x14 BitSize=0x1
        unsigned long ChildOfVgaEnabledBridge:1;// Offset=0x4 Size=0x4 BitOffset=0x15 BitSize=0x1
        unsigned long DecodeIoOnBoot:1;// Offset=0x4 Size=0x4 BitOffset=0x16 BitSize=0x1
        unsigned long Reserved:9;// Offset=0x4 Size=0x4 BitOffset=0x17 BitSize=0x9
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

union _CONTROLLER_FLAGS// Size=0x4 (Id=679)
{
    unsigned long AsUlong32;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long SuperSpeedStreamsSupported:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
    };
};

struct _GUID// Size=0x10 (Id=66)
{
    unsigned long Data1;// Offset=0x0 Size=0x4
    unsigned short Data2;// Offset=0x4 Size=0x2
    unsigned short Data3;// Offset=0x6 Size=0x2
    unsigned char Data4[8];// Offset=0x8 Size=0x8
};

union _USB_HUB_STATUS// Size=0x2 (Id=611)
{
    unsigned short AsUshort16;// Offset=0x0 Size=0x2
    struct // Size=0x2 (Id=0)
    {
        unsigned short LocalPowerLost:1;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0x1
        unsigned short OverCurrent:1;// Offset=0x0 Size=0x2 BitOffset=0x1 BitSize=0x1
        unsigned short Reserved:14;// Offset=0x0 Size=0x2 BitOffset=0x2 BitSize=0xe
    };
};

union _USB_HUB_CHANGE// Size=0x2 (Id=523)
{
    unsigned short AsUshort16;// Offset=0x0 Size=0x2
    struct // Size=0x2 (Id=0)
    {
        unsigned short LocalPowerChange:1;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0x1
        unsigned short OverCurrentChange:1;// Offset=0x0 Size=0x2 BitOffset=0x1 BitSize=0x1
        unsigned short Reserved:14;// Offset=0x0 Size=0x2 BitOffset=0x2 BitSize=0xe
    };
};

union _USB_HUB_STATUS_AND_CHANGE// Size=0x4 (Id=511)
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
    HsmEventTimerFired=1002,
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
    HsmEventNext=2061,
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
    HsmEventRetry=2065,
    HsmEventTransferFailure=2004,
    HsmEventTransferSuccess=2008,
    HsmEventUpstreamResetComplete=2090,
    HsmEventYes=2057
};

union _USB_DEVICE_STATUS// Size=0x2 (Id=439)
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

struct _URB_HEADER// Size=0x18 (Id=754)
{
    unsigned short Length;// Offset=0x0 Size=0x2
    unsigned short Function;// Offset=0x2 Size=0x2
    long Status;// Offset=0x4 Size=0x4
    void * UsbdDeviceHandle;// Offset=0x8 Size=0x8
    unsigned long UsbdFlags;// Offset=0x10 Size=0x4
};

struct _URB_HCD_AREA// Size=0x40 (Id=732)
{
    void * Reserved8[8];// Offset=0x0 Size=0x40
};

struct _URB_CONTROL_TRANSFER_EX// Size=0x88 (Id=438)
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

struct _URB_PIPE_REQUEST// Size=0x28 (Id=741)
{
    struct _URB_HEADER Hdr;// Offset=0x0 Size=0x18
    void * PipeHandle;// Offset=0x18 Size=0x8
    unsigned long Reserved;// Offset=0x20 Size=0x4
};

struct _CONTROL_REQUEST// Size=0xa8 (Id=485)
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

struct _URB_BULK_OR_INTERRUPT_TRANSFER// Size=0x80 (Id=668)
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

struct _HUB_INTERRUPT_REQUEST// Size=0xb8 (Id=604)
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

struct _LIST_ENTRY// Size=0x10 (Id=4)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _DISPATCHER_HEADER// Size=0x18 (Id=536)
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

struct _USB_HUB_DESCRIPTOR// Size=0x47 (Id=700)
{
    unsigned char bDescriptorLength;// Offset=0x0 Size=0x1
    unsigned char bDescriptorType;// Offset=0x1 Size=0x1
    unsigned char bNumberOfPorts;// Offset=0x2 Size=0x1
    unsigned short wHubCharacteristics;// Offset=0x3 Size=0x2
    unsigned char bPowerOnToPowerGood;// Offset=0x5 Size=0x1
    unsigned char bHubControlCurrent;// Offset=0x6 Size=0x1
    unsigned char bRemoveAndPowerMask[64];// Offset=0x7 Size=0x40
};

struct _USB_30_HUB_DESCRIPTOR// Size=0xc (Id=716)
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

union _HUB_DESCRIPTOR// Size=0x47 (Id=650)
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
    PsmEventTimerFiredCritical=3016,
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
    DsmEventPDOInstallMSOSExt=4091,
    DsmEventPDOPrepareForHibernation=4079,
    DsmEventPDOPreStart=4095,
    DsmEventPDORemoved=4099,
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

union _EVENT// Size=0x4 (Id=574)
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
    HsmStateCompletePdoPreStart=1009,
    HsmStateSignalPnpPowerEvent=1010,
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
    HsmStateSettingUpHubPostErrataQuery=2076,
    HsmStateSignalingPnPPowerEventOnPendingStop=2077,
    HsmStateSignalingPnPPowerEventOnStart=2078,
    HsmStateSignalingPnPPowerEventOnStop=2079,
    HsmStateSignallingPnpPowerEventForSuspended=2080,
    HsmStateSignallingPnpPowerEventInUnconfigured=2081,
    HsmStateStartingTimerForResetRetry=2082,
    HsmStateStopped=2083,
    HsmStateSupriseRemoved=2084,
    HsmStateSuspended=2085,
    HsmStateSuspendedInRecycle=2086,
    HsmStateSuspendedWithPendingReset=2087,
    HsmStateUnblockingResumeOnHubResetFailure=2088,
    HsmStateUnblockResumeWaitingForStop=2089,
    HsmStateUnconfigured=2090,
    HsmStateWaitingForD0Entry=2091,
    HsmStateWaitingForDevicesToAcquireReferenceOnStart=2092,
    HsmStateWaitingForDevicesToReleaseReferenceOnD0ExitFinalFromReset=2093,
    HsmStateWaitingForDevicesToReleaseReferenceOnSuspend=2094,
    HsmStateWaitingForEnableInterruptsOnReset=2095,
    HsmStateWaitingForEnableInterruptsOnStop=2096,
    HsmStateWaitingForEnableInterruptsOnSx=2097,
    HsmStateWaitingForInterruptReferencesReleasedOnFatalError=2098,
    HsmStateWaitingForInterruptReferencesReleasedOnReset=2099,
    HsmStateWaitingForInterruptReferencesReleasedOnStop=2100,
    HsmStateWaitingForInterruptReferencesReleasedOnSuspend=2101,
    HsmStateWaitingForOvercurrentToClear=2102,
    HsmStateWaitingForPortsToAcquireReferenceOnResume=2103,
    HsmStateWaitingForPortsToAcquireReferenceOnResumeInS0=2104,
    HsmStateWaitingForPortsToAcquireReferenceOnResumeWithReset=2105,
    HsmStateWaitingForPortsToAcquireReferenceOnStart=2106,
    HsmStateWaitingForPortsToAcquireReferencePostReset=2107,
    HsmStateWaitingForPortsToReleaseReferenceOnReset=2108,
    HsmStateWaitingForPortsToReleaseReferenceOnResetOnResume=2109,
    HsmStateWaitingForPortsToReleaseReferenceOnStop=2110,
    HsmStateWaitingForPortsToReleaseReferenceOnSuspend=2111,
    HsmStateWaitingForPSMInterruptReferencesOnReset=2112,
    HsmStateWaitingForPSMInterruptReferencesOnStop=2113,
    HsmStateWaitingForPSMInterruptReferencesOnSuspend=2114,
    HsmStateWaitingForReleaseHardware=2115,
    HsmStateWaitingForReleaseHardwareOnReStartFailure=2116,
    HsmStateWaitingForReleaseHardwareOnStartFailure=2117,
    HsmStateWaitingForResetRetryTimer=2118,
    HsmStateWaitingForStop=2119,
    HsmStateWaitingToBeDeleted=2120,
    HsmStateCheckingBytesReturnedInHubConfigDescriptor=2121,
    HsmStateCheckingIfHubDescriptorRetryCountExceededMax=2122,
    HsmStateConfiguringAfterSetConfig=2123,
    HsmStateGetFirmwareUpdateId=2124,
    HsmStateGettingHubConfigurationDescriptorWithDefaultLength=2125,
    HsmStateGettingHubConfigurationDescriptorWithReturnedLength=2126,
    HsmStateGettingHubDescriptor=2127,
    HsmStateGettingHubStatus=2128,
    HsmStateInitializingHubDescriptorRetryCount=2129,
    HsmStateReturningConfigurationFailure=2130,
    HsmStateReturningConfigurationSuccess=2131,
    HsmStateSettingHubConfiguration=2132,
    HsmStateUpdatingHubInfoInUCX=2133,
    HsmStateValidatingAndParsingHubDescriptor=2134,
    HsmStateValidatingAndParsingHubPowerStatus=2135,
    HsmStateValidatingHubConfigurationDescriptor=2136,
    HsmStateWaitingForHubDescriptorRetryTimer=2137,
    HsmStateGettingRootHub20PortsInfo=2138,
    HsmStateGettingRootHub30PortsInfo=2139,
    HsmStateGettingRootHubInfo=2140,
    HsmStateReturningConfigurationFailureForRootHub=2141,
    HsmStateReturningConfigurationSuccessForRootHub=2142,
    HsmStateGettingAdditionalInfoFromParent=2143,
    HsmStateReturningOperationFailure=2144,
    HsmStateReturningOperationSuccess=2145,
    HsmStateGettingHubDescriptorToCheckForPowerLoss=2146,
    HsmStateReturningOperationFailureInCheckingForPowerLoss=2147,
    HsmStateReturningOperationSuccessInCheckingForPowerLoss=2148,
    HsmStateReturningOperationFailureInSettingHubDepth=2149,
    HsmStateReturningOperationSuccessInSettingHubDepth=2150,
    HsmStateSettingHubDepth=2151,
    HsmStateCheckingIfAllUsb4DromDataRead=2152,
    HsmStateCheckingIfUsb4DromShouldBeRead=2153,
    HsmStateDeinitializingUsb4Drom=2154,
    HsmStateGettingLastOpcode=2155,
    HsmStateGettingUsb4DromBlock=2156,
    HsmStateGettingUsb4DromHeader=2157,
    HsmStateInitializingUsb4Drom=2158,
    HsmStateLoggingLastOpcode=2159,
    HsmStateReturningOperationSuccessInGettingFirmwareUpdateId=2160,
    HsmStateCheckingUsb4DromStatus=2161,
    HsmStateIncrementingAndCheckingMailboxDataIndex=2162,
    HsmStateInitializingUsb4DromStatusRead=2163,
    HsmStateReadingUsb4DromDwordOffset=2164,
    HsmStateReadingUsb4DromStatus=2165,
    HsmStateReturningOperationFailureInReadUsb4DRom=2166,
    HsmStateReturningOperationSuccessInReadUsb4Drom=2167,
    HsmStateWritingUsb4DromMetaData=2168,
    HsmStateWritingUsb4DromReadOpcode=2169
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
    Psm20StateAckPortResumed=1011,
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
    Psm20StateCheckingIfOvercurrentBitOne=3014,
    Psm20StateCheckingIfPersistentOvercurrent=3015,
    Psm20StateCheckingIfSDM845HighSpeedWorkaroundIsRequired=3016,
    Psm20StateConnectedDisabled=3017,
    Psm20StateConnectedEnabled=3018,
    Psm20StateCreatingDevice=3019,
    Psm20StateDetachingDeviceFromPortOnCycleOnHubStop=3020,
    Psm20StateDetachingDeviceFromPortOnDisconnect=3021,
    Psm20StateDetachingDeviceFromPortOnDisconnectWithTimer=3022,
    Psm20StateDetachingDeviceFromPortOnOverCurrent=3023,
    Psm20StateDetachingDeviceFromPortOnOverCurrentClear=3024,
    Psm20StateDetachingDeviceFromPortOnOverCurrentClearWithTimer=3025,
    Psm20StateDetachingDeviceFromPortOnOverCurrentWithTimer=3026,
    Psm20StateDetachingDeviceFromPortOnPortCycle=3027,
    Psm20StateDetachingDeviceOnCleanup=3028,
    Psm20StateDetachingDeviceOnDisableAndCycle=3029,
    Psm20StateDetachingDeviceOnHubReset=3030,
    Psm20StateDetachingDeviceOnPortCycleWithTimer=3031,
    Psm20StateDetachingDeviceOnPortDisableAndCycleWithTimer=3032,
    Psm20StateDisablingOnHubSuspendWithTimer=3033,
    Psm20StateDisablingPortBeforeConnecting=3034,
    Psm20StateDisablingPortOnCycle=3035,
    Psm20StateDisablingPortOnDeviceRequest=3036,
    Psm20StateDisablingPortOnHubSuspend=3037,
    Psm20StateDisablingPortOnPortCycleWithTimer=3038,
    Psm20StateDisablingPortOnTimeOut=3039,
    Psm20StateDisconnected=3040,
    Psm20StateDisengagingSDM845HighSpeedWorkaround=3041,
    Psm20StateEngagingSDM845HighSpeedWorkaround=3042,
    Psm20StateErrorOnAcquringReferenceOnHubResume=3043,
    Psm20StateErrorOnConnectedDisabled=3044,
    Psm20StateErrorOnConnectedEnabled=3045,
    Psm20StateErrorOnDisconnected=3046,
    Psm20StateErrorOnIssuingResetComplete=3047,
    Psm20StateErrorOnResettingEnabled=3048,
    Psm20StateErrorOnResettingPort=3049,
    Psm20StateErrorOnStartingAndAcquiringReferenceOnHubResumeFromDisabled=3050,
    Psm20StateErrorOnStoppingTimerOnDisconnect=3051,
    Psm20StateErrorOnStoppingTimerOnOverCurrent=3052,
    Psm20StateErrorOnStoppingTimerOnOverCurrentClear=3053,
    Psm20StateErrorOnStoppingTimerOnPortCycle=3054,
    Psm20StateErrorOnSuspended=3055,
    Psm20StateErrorOnWaitingForCompanionPort=3056,
    Psm20StateErrorOnWaitingForDebounce=3057,
    Psm20StateErrorOnWaitingForDSMResumeResponse=3058,
    Psm20StateErrorOnWaitingForOldDeviceToCleanup=3059,
    Psm20StateErrorOnWaitingForOverCurrentClear=3060,
    Psm20StateErrorOnWaitingForResumeComplete=3061,
    Psm20StateErrorOnWaitingForResumeRecoveryTimer=3062,
    Psm20StateErrorOnWaitingForResumeTimerToFlush=3063,
    Psm20StateFlushingStaleDeviceEvents=3064,
    Psm20StateFlushingUserResetForOverCurrentOnHubStopSuspend=3065,
    Psm20StateFlushingUserResetForOverCurrentOnOverCurrentClear=3066,
    Psm20StateInitiatingResetPort=3067,
    Psm20StateInitiatingResume=3068,
    Psm20StateIsItBootDevice=3069,
    Psm20StateIsOldDevicePresent=3070,
    Psm20StateIssuingAttachDeviceToPort=3071,
    Psm20StateIssuingDetachDeviceOnCycleFromPoweredOffDisabledOrSuspended=3072,
    Psm20StateIssuingDisabledToDSMFromDisabled=3073,
    Psm20StateIssuingHubReset=3074,
    Psm20StateIssuingHubResetFromDisconnected=3075,
    Psm20StateIssuingHubResetOnDisableFailure=3076,
    Psm20StateIssuingHubResetWhenWaitingForDSMResumeResponse=3077,
    Psm20StateIssuingHubResetWhileHubSuspend=3078,
    Psm20StateIssuingHubResetWithPendingTimer=3079,
    Psm20StateIssuingHubResetWithTimer=3080,
    Psm20StateIssuingHubResetWithTimerOnHubSuspend=3081,
    Psm20StateIssuingHubResetWithTimerWhileHubSuspend=3082,
    Psm20StateIssuingPortDisabledToDevice=3083,
    Psm20StateIssuingPortDisableFailedToDevice=3084,
    Psm20StateIssuingReAttachDeviceToBootDevice=3085,
    Psm20StateIssuingResetFailedDuetoPendingHubSuspendToDSMInDisabled=3086,
    Psm20StateIssuingResetFailedDuetoPendingHubSuspendToDSMInEnabled=3087,
    Psm20StateIssuingResumedToDeviceSM=3088,
    Psm20StateIssuingSuspendedToDeviceSM=3089,
    Psm20StateNotifyingUserAboutPersistentOverCurrent=3090,
    Psm20StatePoweredOffDisabled=3091,
    Psm20StatePoweredOffSuspended=3092,
    Psm20StateQueryingPortStatusOnOverCurrent=3093,
    Psm20StateQueueingPortFailureToDSMOnSuspend=3094,
    Psm20StateQueueingPortResumeFailedDueToPendingSuspend=3095,
    Psm20StateQueueingPortResumeTimedOut=3096,
    Psm20StateQueueingStateDisabledOnHubResumeFromDisabled=3097,
    Psm20StateQueueingStateDisabledToDeviceSM=3098,
    Psm20StateQueueingStateDisabledToDeviceSMOnResetHub=3099,
    Psm20StateQueueingStateEnabledToDeviceSM=3100,
    Psm20StateQueueingStateSuspendedToDeviceSM=3101,
    Psm20StateQueueingStateSuspendedToDeviceSMOnIgnoreError=3102,
    Psm20StateReleasingInterruptReferenceAndIssuingPortResetTimedOutToDSM=3103,
    Psm20StateReleasingInterruptReferenceAndStoppingTimer=3104,
    Psm20StateReleasingInterruptReferenceOnResetTransferFailure=3105,
    Psm20StateReleasingInterruptReferenceOnSuccessfulReset=3106,
    Psm20StateReleasingPowerReferenceonPoweredOffDisabled=3107,
    Psm20StateReleasingPowerReferenceonPoweredOffDisconnected=3108,
    Psm20StateReleasingResetReferenceOnDeviceRemoval=3109,
    Psm20StateResettingEnabled=3110,
    Psm20StateSettingPortPowerOnOverCurrent=3111,
    Psm20StateStartingAndAcquiringReferenceOnHubResume=3112,
    Psm20StateStartingAndAcquiringReferenceOnHubResumeFromDisabled=3113,
    Psm20StateStartingAndAcquiringReferenceOnHubStart=3114,
    Psm20StateStartingAndAcquiringReferenceOnHubStartFromDisabled=3115,
    Psm20StateStartingAndAcquiringReferenceOnWarmResume=3116,
    Psm20StateStartingDelayTimerAfterWorkaroundIsEngaged=3117,
    Psm20StateStartingOverCurrentTimer=3118,
    Psm20StateStartingResetTimer=3119,
    Psm20StateStartingResumeRecoveryTimer=3120,
    Psm20StateStartingResumeTimer=3121,
    Psm20StateStoppingResumeTimer=3122,
    Psm20StateStoppingTimerAndQueueingHubResetInDisconnected=3123,
    Psm20StateStoppingTimerOnDisconnect=3124,
    Psm20StateStoppingTimerOnHubStopSuspendInDisconnected=3125,
    Psm20StateStoppingTimerOnOverCurrent=3126,
    Psm20StateStoppingTimerOnOverCurrentClear=3127,
    Psm20StateStoppingTimerOnPortCycle=3128,
    Psm20StateStoppingTimerOnResetComplete=3129,
    Psm20StateSuspended=3130,
    Psm20StateSuspending=3131,
    Psm20StateWaitingForDebounce=3132,
    Psm20StateWaitingForDelayTimerToFireAfterWorkaroundIsEngaged=3133,
    Psm20StateWaitingForDisableCompleteOnHubSuspend=3134,
    Psm20StateWaitingForDisableCompleteWithTimerOnHubSuspend=3135,
    Psm20StateWaitingForDSMResumeResponse=3136,
    Psm20StateWaitingForDSMResumeResponseOnHubStop=3137,
    Psm20StateWaitingForHubStopSuspend=3138,
    Psm20StateWaitingForHubStopSuspendInDisconnected=3139,
    Psm20StateWaitingForHubStopSuspendOnAttachFailure=3140,
    Psm20StateWaitingForHubStopSuspendOrTimer=3141,
    Psm20StateWaitingForOldDeviceToDetach=3142,
    Psm20StateWaitingForOverCurrentClear=3143,
    Psm20StateWaitingForResetComplete=3144,
    Psm20StateWaitingForResetTimerToFlush=3145,
    Psm20StateWaitingForResumeComplete=3146,
    Psm20StateWaitingForResumeRecoveryTimer=3147,
    Psm20StateWaitingForResumeTimerToFlush=3148,
    Psm20StateWaitingForTimerOnResetInDisconnected=3149,
    Psm20StateWaitingForTimerToFlushOnDisconnect=3150,
    Psm20StateWaitingForTimerToFlushOnHubStopSuspend=3151,
    Psm20StateWaitingForTimerToFlushOnHubStopSuspendInDisconnected=3152,
    Psm20StateWaitingForTimerToFlushOnOverCurrent=3153,
    Psm20StateWaitingForTimerToFlushOnOverCurrentClear=3154,
    Psm20StateWaitingForTimerToFlushOnPortCycle=3155,
    Psm20StateWaitingForUserResetOnOverCurrent=3156,
    Psm20StateWaitingToBeDeleted=3157,
    Psm20StateAckingPortChange=3158,
    Psm20StateCheckIfThereIsAPortChange=3159,
    Psm20StateCheckIfThereIsAPortChangeOnPortStatus=3160,
    Psm20StateEnablingInterruptsAndGettingPortEvent=3161,
    Psm20StateGettingPortStatus=3162,
    Psm20StateInitializingCumulativePortChangeBits=3163,
    Psm20StateIssuingHubResetOnControlTransferFailure=3164,
    Psm20StateQueueingEnableInterruptTransferOnPortChange=3165,
    Psm20StateWaitingForPortChangeEvent=3166,
    Psm20StateAcquiringPortReferenceOnStart=3167,
    Psm20StateGettingPortLostChangesOnStart=3168,
    Psm20StateGettingPortStatusOnStart=3169,
    Psm20StateIssuingHubResetOnControlTransferFailureOnStart=3170,
    Psm20StatePoweringOnPortOnStart=3171,
    Psm20StateQueueingEnableInterruptTransferOnStart=3172,
    Psm20StateWaitingForPortPowerOnTimerOnStart=3173,
    Psm20StateAckingConnectChangeOnResume=3174,
    Psm20StateAckingPortChangeWhileWaitingForReconnect=3175,
    Psm20StateAcquiringPortReferenceOnResume=3176,
    Psm20StateAcquiringPortReferenceOnResumeInFailure=3177,
    Psm20StateCheckIfThereIsAPortChangeOnPortStatusWhileWaitingForReconnect=3178,
    Psm20StateCheckingForOverCurrentOnResume=3179,
    Psm20StateCheckingIfConnectBitChangeSetOnResume=3180,
    Psm20StateCheckingIfConnectBitIsOneOnChangeWhileWaitingForReconnect=3181,
    Psm20StateCheckingIfDeviceDisconnectedOnResume=3182,
    Psm20StateCheckingIfDeviceDisconnectedOnResumeAfterWaiting=3183,
    Psm20StateEnablingInterruptsWaitingForReconnect=3184,
    Psm20StateGettingPortLostChangesOnStartOnResume=3185,
    Psm20StateGettingPortStatusOnResume=3186,
    Psm20StateGettingPortStatusOnResumeAfterWaiting=3187,
    Psm20StateGettingPortStatusWhileWaitingForReconnect=3188,
    Psm20StateInitializingCumulativePortChangeBitsWhileWaitingForReconnect=3189,
    Psm20StateIssuingHubResetOnControlTransferFailureOnResume=3190,
    Psm20StatePoweringOnPortOnResume=3191,
    Psm20StateQueueingEnableInterruptTransferOnResume=3192,
    Psm20StateQueueingStateDisabledOnFailure=3193,
    Psm20StateResettingHubOnFailureWhileWaitingForReconnect=3194,
    Psm20StateReturningHubStopOnResume=3195,
    Psm20StateReturningOverCurrentClearedOnResume=3196,
    Psm20StateReturningPortOvercurrentOnResume=3197,
    Psm20StateStartingTimerForAllowingReconnect=3198,
    Psm20StateStoppingReconnectTimerOnDeviceConnect=3199,
    Psm20StateStoppingReconnectTimerOnHubStop=3200,
    Psm20StateWaitingForDeviceToReconnect=3201,
    Psm20StateWaitingForPortPowerOnTimerOnResume=3202,
    Psm20StateWaitingForReconnectTimerToFlushOnHubStop=3203,
    Psm20StateAckingPortChangeInSuspended=3204,
    Psm20StateAcquiringPowerReferenceOnHubS0IdleInD3Cold=3205,
    Psm20StateCheckIfThereIsAPortChangeAfterInitialGetPortStatusOnSuspended=3206,
    Psm20StateCheckIfThereIsAPortChangeOnSuspended=3207,
    Psm20StateCheckingIfDeviceIsConnectedAfterHubResumeInD3Cold=3208,
    Psm20StateCheckingIfDeviceIsConnectedOnConnectChangeForD3Cold=3209,
    Psm20StateCheckingIfDeviceIsConnectedOnPortChangeInD3Cold=3210,
    Psm20StateCheckingIfDeviceIsConnectedOnPortChangeInD3ColdOnResume=3211,
    Psm20StateCheckingIfDeviceIsConnectedOnPortChangInD3ColdOnResume=3212,
    Psm20StateCheckingIfPortErrorShouldBeTreatedAsConnect=3213,
    Psm20StateCheckingIfResetOnErrorInD2Resume=3214,
    Psm20StateCheckingIsD3ColdIsEnabled=3215,
    Psm20StateGettingPortChangeEventInSuspended=3216,
    Psm20StateGettingPortChangeOnResumeFromD3ColdSuspended=3217,
    Psm20StateGettingPortStatusInSuspended=3218,
    Psm20StateInitializingCumulativePortChangeBitsInSuspended=3219,
    Psm20StateIssuingHubResetOnControlTransferFailureInSuspended=3220,
    Psm20StatePoweredOffOnHubSuspendFromD3Cold=3221,
    Psm20StatePoweringOnResumeFromD3ColdSuspended=3222,
    Psm20StateQueueingDisabledToDSMOnReconnectFromD3Cold=3223,
    Psm20StateQueueingEnableInterruptTransferOnPortChangeForSuspended=3224,
    Psm20StateQueueingPortStateDisabledOnHubResumeInD3Cold=3225,
    Psm20StateQueueingResumeToDSMFromSuspended=3226,
    Psm20StateQueuingDisabledToDSMOnErrorInD2Resume=3227,
    Psm20StateReEnablingInterruptsOnConnectChangeInSuspended=3228,
    Psm20StateReEnablingInterruptsOnErrorInSuspended=3229,
    Psm20StateReEnablingInterruptsOnOverCurrentClearedInSuspended=3230,
    Psm20StateReEnablingInterruptsOnOverCurrentInSuspended=3231,
    Psm20StateReleasingPowerReferenceOnHubS0IdleInD3Cold=3232,
    Psm20StateReturningHubStopFromSuspendedInD3Cold=3233,
    Psm20StateReturningHubSuspendFromSuspendedInD3Cold=3234,
    Psm20StateReturningPortConnectChangeFromSuspended=3235,
    Psm20StateReturningPortErrorFromSuspended=3236,
    Psm20StateReturningPortOverCurrentClearedFromSuspended=3237,
    Psm20StateReturningPortOverCurrentFromSuspended=3238,
    Psm20StateReturningPortResumedFromD3Cold=3239,
    Psm20StateReturningPortResumedFromSuspended=3240,
    Psm20StateStartingDebounceTimerOnResumeFromD3Cold=3241,
    Psm20StateStartingDebounceTimerOnResumeFromD3ColdOnResume=3242,
    Psm20StateStartingTimerForAllowingReconnectOnResumingFromD3Cold=3243,
    Psm20StateStoppingDebounceTimerInD3Cold=3244,
    Psm20StateStoppingDebounceTimerInD3ColdOnResume=3245,
    Psm20StateStoppingReconnectTimerOnDeviceReAttachAfterD3Cold=3246,
    Psm20StateStoppingReconnectTimerOnHubStopInD3Cold=3247,
    Psm20StateStoppingReconnectTimerOnOvercurrentClearedInD3Cold=3248,
    Psm20StateStoppingReconnectTimerOnOvercurrentInD3Cold=3249,
    Psm20StateWaitingForDebounceTimerOnReconnectInD3Cold=3250,
    Psm20StateWaitingForDebounceTimerOnReconnectInD3ColdOnResume=3251,
    Psm20StateWaitingForDebounceTimerToFlushOnHubStop=3252,
    Psm20StateWaitingForDebounceTimerToFlushOnHubStopOnResume=3253,
    Psm20StateWaitingForDebounceTimerToFlushOnHubSuspend=3254,
    Psm20StateWaitingForDebounceTimerToFlushOnPortChangeInD3Cold=3255,
    Psm20StateWaitingForDebounceTimerToFlushOnPortChangeInD3ColdOnResume=3256,
    Psm20StateWaitingForDeviceRequestResumeOnD3Cold=3257,
    Psm20StateWaitingForDeviceResumeRequestOnErrorInD2Resume=3258,
    Psm20StateWaitingForDeviceToReconnectOnResumeFromD3Cold=3259,
    Psm20StateWaitingForPortChangeEventInD3Cold=3260,
    Psm20StateWaitingForPortChangeEventInSuspended=3261,
    Psm20StateWaitingForReconnectTimerToFlushOnHubStopInD3Cold=3262,
    Psm20StateWaitingForReconnectTimerToFlushOnOvercurrentClearedInD3Cold=3263,
    Psm20StateWaitingForReconnectTimerToFlushOnOvercurrentInD3Cold=3264,
    Psm20StateWaitingForReconnectTimerToFlushOnReattachAfterD3Cold=3265,
    Psm20StateWaitingForResumeRecoveryTimerOnResumeInSuspended=3266,
    Psm20StateAckingPortChangeInInWaitingForStopSuspend=3267,
    Psm20StateCheckIfThereIsAPortChangeInInWaitingForStopSuspend=3268,
    Psm20StateGettingPortStatusInWaitingForStopSuspend=3269,
    Psm20StateQueueingEnableInterruptTransferInWaitingForStopSuspend=3270,
    Psm20StateQueueingPortEventFailureToDSM=3271,
    Psm20StateWaitingForDevicePortEvents=3272,
    Psm20StateAckingPortChangeInInWaitingForStopSuspendInDisconnected=3273,
    Psm20StateCheckIfThereIsAPortChangeInInWaitingForStopSuspendInDisconnected=3274,
    Psm20StateGettingPortStatusInWaitingForStopSuspendInDisconnected=3275,
    Psm20StateQueueingEnableInterruptTransferInWaitingForStopSuspendInDisconnected=3276,
    Psm20StateWaitingForDevicePortEventsInDisconnected=3277
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
    Psm30StateAckPortResumed=1011,
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
    Psm30StateCheckingIfOvercurrentBitOne=5016,
    Psm30StateCheckingIfPersistentOvercurrent=5017,
    Psm30StateCheckingIfSuperSpeedShouldBeDisabled=5018,
    Psm30StateCheckingIsD3ColdIsEnabled=5019,
    Psm30StateConnectedEnabled=5020,
    Psm30StateConnectedError=5021,
    Psm30StateCreatingDevice=5022,
    Psm30StateCreatingDeviceInConnectedWithResetInProgress=5023,
    Psm30StateCreatingDeviceInConnectedWithResetNeeded=5024,
    Psm30StateDetachingDeviceFromPortOnDisconnect=5025,
    Psm30StateDetachingDeviceFromPortOnDisconnectOnTimedOut=5026,
    Psm30StateDetachingDeviceFromPortOnDisconnectWithTimer=5027,
    Psm30StateDetachingDeviceFromPortOnOverCurrent=5028,
    Psm30StateDetachingDeviceFromPortOnOverCurrentClear=5029,
    Psm30StateDetachingDeviceFromPortOnOverCurrentClearOnTimedOut=5030,
    Psm30StateDetachingDeviceFromPortOnOverCurrentClearWithTimer=5031,
    Psm30StateDetachingDeviceFromPortOnOverCurrentOnTimedOut=5032,
    Psm30StateDetachingDeviceFromPortOnOverCurrentWithTimer=5033,
    Psm30StateDetachingDeviceFromPortOnPortCycle=5034,
    Psm30StateDetachingDeviceOnCleanup=5035,
    Psm30StateDisablingSuperSpeedOnPortForUnsupportedHubs=5036,
    Psm30StateDisablingSuperSpeedOnPortOnDeviceRequest=5037,
    Psm30StateDisconnected=5038,
    Psm30StateDisconnectedSuperSpeedDisabled=5039,
    Psm30StateDoesDeviceSupportsReAttach=5040,
    Psm30StateDoesDeviceSupportsReAttachWithResetInProgress=5041,
    Psm30StateDoesDeviceSupportsReAttachWithResetNeeded=5042,
    Psm30StateEnablingSuperSpeedOnStopSuspend=5043,
    Psm30StateEnablingSuperSpeedOnTimerExpiration=5044,
    Psm30StateFlushingStaleDeviceEvents=5045,
    Psm30StateFlushingStaleDeviceEventsWithResetInProgress=5046,
    Psm30StateFlushingStaleDeviceEventsWithResetNeeded=5047,
    Psm30StateFlushingUserResetForOverCurrentOnHubStopSuspend=5048,
    Psm30StateFlushingUserResetForOverCurrentOnOverCurrentClear=5049,
    Psm30StateGettingPortChangeOnStartResumeFromConnectedError=5050,
    Psm30StateGettingPortStatusOnResetTimeout=5051,
    Psm30StateGettingPortStatusOnResumeRequest=5052,
    Psm30StateGettingPortStatusOnResumeTimeout=5053,
    Psm30StateInitiatingResetPort=5054,
    Psm30StateInitiatingResume=5055,
    Psm30StateInitiatingWarmResetPort=5056,
    Psm30StateIsDeviceInU0OnResumeRequest=5057,
    Psm30StateIsDeviceInU0OnResumeTimeout=5058,
    Psm30StateIsOldDevicePresent=5059,
    Psm30StateIsOldDevicePresentInConnectedWithResetNeeded=5060,
    Psm30StateIsOldDevicePresentWithResetInProgress=5061,
    Psm30StateIssuingAttachDeviceToDsm=5062,
    Psm30StateIssuingAttachDeviceWithResetToDsm=5063,
    Psm30StateIssuingAttachDeviceWithResetToDsmWithResetInProgress=5064,
    Psm30StateIssuingDetachDeviceOnCycleFromPoweredOffDisabled=5065,
    Psm30StateIssuingDisabledToDSMFromDisabled=5066,
    Psm30StateIssuingHubReset=5067,
    Psm30StateIssuingHubResetFromDisconnected=5068,
    Psm30StateIssuingHubResetOnDisableFailure=5069,
    Psm30StateIssuingHubResetOnTimedOut=5070,
    Psm30StateIssuingHubResetWithPendingTimer=5071,
    Psm30StateIssuingHubResetWithTimer=5072,
    Psm30StateIssuingPortDisabledToDevice=5073,
    Psm30StateIssuingPortDisableFailedToDevice=5074,
    Psm30StateIssuingPortFailedToDSMOnLinkStateError=5075,
    Psm30StateIssuingPortResetTimedOutToDSM=5076,
    Psm30StateIssuingReAttachDeviceToBootDevice=5077,
    Psm30StateIssuingReAttachDeviceToBootDeviceWithResetInProgress=5078,
    Psm30StateIssuingResetFailedDuetoPendingHubSuspendToDSMInDisabled=5079,
    Psm30StateIssuingResetFailedDuetoPendingHubSuspendToDSMInEnabled=5080,
    Psm30StateIssuingResetFailedDuetoPendingHubSuspendToDSMWhileResetInProgress=5081,
    Psm30StateIssuingResumedToDeviceSM=5082,
    Psm30StateIssuingSuspendedToDeviceSM=5083,
    Psm30StateNotifyingUserAboutPersistentOverCurrent=5084,
    Psm30StatePoweredOffConnectedError=5085,
    Psm30StatePoweredOffConnectedWithResetNeededAndDeviceDetached=5086,
    Psm30StatePoweredOffSuspended=5087,
    Psm30StateQueryingPortStatusOnOverCurrent=5088,
    Psm30StateQueueingPortFailureToDSMOnTransferFailure=5089,
    Psm30StateQueueingPortFailureToDSMOnTransferFailureForLpmTimeout=5090,
    Psm30StateQueueingPortResumeFailedDueToPendingSuspend=5091,
    Psm30StateQueueingPortResumeTimedOut=5092,
    Psm30StateQueueingPortTimeoutUpdatedToDSM=5093,
    Psm30StateQueueStateDisabledToDSMOnStartFromConnectedError=5094,
    Psm30StateReleasingInterruptReferenceAfterResetFailure=5095,
    Psm30StateReleasingInterruptReferenceAndStoppingTimer=5096,
    Psm30StateReleasingInterruptReferenceOnResetTransferFailure=5097,
    Psm30StateReleasingInterruptReferenceOnResumed=5098,
    Psm30StateReleasingInterruptReferenceOnSuccessfulReset=5099,
    Psm30StateReleasingInterruptReferenceOnTransferFailureInResuming=5100,
    Psm30StateReleasingPortPowerReferenceInSuperSpeedDisabled=5101,
    Psm30StateReleasingPowerReferenceonPoweredOffConnectedWithResetNeeded=5102,
    Psm30StateReleasingPowerReferenceonPoweredOffDisabled=5103,
    Psm30StateReleasingPowerReferenceonPoweredOffDisconnected=5104,
    Psm30StateReleasingResetReferenceInDisconnected=5105,
    Psm30StateReleasingResetReferenceInSuperSpeedDisabled=5106,
    Psm30StateReleasingResetReferenceOnDeviceRemoval=5107,
    Psm30StateResettingHubAndFlushingUserInitiatedResetOnOverCurrent=5108,
    Psm30StateSettingPortPowerOnOverCurrent=5109,
    Psm30StateSettingRemotWakeMask=5110,
    Psm30StateSettingRemotWakeMaskInDisconected=5111,
    Psm30StateSettingU1TImeOut=5112,
    Psm30StateSettingU2TImeOut=5113,
    Psm30StateStartingAndAcquiringReferenceOnHubStart=5114,
    Psm30StateStartingAndAcquiringReferenceOnSystemResume=5115,
    Psm30StateStartingDisableSuperSpeedTimer=5116,
    Psm30StateStartingOverCurrentTimer=5117,
    Psm30StateStartingResumeTimer=5118,
    Psm30StateStoppingDisableSuperSpeedTimer=5119,
    Psm30StateStoppingResumeTimer=5120,
    Psm30StateStoppingTimerAndQueueingHubResetInDisconnected=5121,
    Psm30StateStoppingTimerOnDisconnect=5122,
    Psm30StateStoppingTimerOnOverCurrent=5123,
    Psm30StateStoppingTimerOnOverCurrentClear=5124,
    Psm30StateStoppingTimerOnResetComplete=5125,
    Psm30StateSuperSpeedDisabled=5126,
    Psm30StateSuperSpeedDisabledStopped=5127,
    Psm30StateSuspended=5128,
    Psm30StateSuspendedDisabled=5129,
    Psm30StateSuspendedInD3Cold=5130,
    Psm30StateSuspending=5131,
    Psm30StateSuspendingPortOnDisableRequest=5132,
    Psm30StateSuspendingPortOnHubSuspend=5133,
    Psm30StateWaitingForDebounceTimer=5134,
    Psm30StateWaitingForHubStopSuspend=5135,
    Psm30StateWaitingForHubStopSuspendInDisconnected=5136,
    Psm30StateWaitingForHubStopSuspendOnAttachFailure=5137,
    Psm30StateWaitingForHubStopSuspendOnAttachWithResetFailure=5138,
    Psm30StateWaitingForHubStopSuspendOrTimer=5139,
    Psm30StateWaitingForOldDeviceToDetach=5140,
    Psm30StateWaitingForOldDeviceToDetachInConnectedWithResetNeeded=5141,
    Psm30StateWaitingForOldDeviceToDetachWithResetInProgress=5142,
    Psm30StateWaitingForOverCurrentClear=5143,
    Psm30StateWaitingForResetComplete=5144,
    Psm30StateWaitingForResetRequestFromDSMWithResetInPorgress=5145,
    Psm30StateWaitingForResetTimerToFlush=5146,
    Psm30StateWaitingForResumeComplete=5147,
    Psm30StateWaitingForResumeTimerToFlush=5148,
    Psm30StateWaitingForSuperSpeedDisableTimerToFlush=5149,
    Psm30StateWaitingForTimerOnResetInDisconnected=5150,
    Psm30StateWaitingForTimerToFlushOnDisconnect=5151,
    Psm30StateWaitingForTimerToFlushOnHubStopSuspend=5152,
    Psm30StateWaitingForTimerToFlushOnHubStopSuspendInDisconnected=5153,
    Psm30StateWaitingForTimerToFlushOnOverCurrent=5154,
    Psm30StateWaitingForTimerToFlushOnOverCurrentClear=5155,
    Psm30StateWaitingForUserResetOnOverCurrent=5156,
    Psm30StateWaitingToBeDeleted=5157,
    Psm30StateAckingPortChange=5158,
    Psm30StateCheckIfThereIsAPortChange=5159,
    Psm30StateCheckIfThereIsAPortChangeOnGetPortStatus=5160,
    Psm30StateEnablingInterruptsAndGettingPortEvent=5161,
    Psm30StateEnablingInterruptsOnFailure=5162,
    Psm30StateGettingPortStatus=5163,
    Psm30StateInitializingCumulativePortChangeBits=5164,
    Psm30StateReturningPortResetHubOnError=5165,
    Psm30StateAckingPortChangeInNoChange=5166,
    Psm30StateCheckIfThereIsAPortChangeInNoChange=5167,
    Psm30StateCheckIfThereIsAPortChangeOnGetPortStatusInNoChange=5168,
    Psm30StateEnablingInterruptsAndGettingPortEventInNoChange=5169,
    Psm30StateGettingPortStatusInNoChange=5170,
    Psm30StateInitializingCumulativePortChangeBitsInNoChange=5171,
    Psm30StateReturningPortResetHubOnErrorInNoChange=5172,
    Psm30StateAckingPortChangeOnStartResume=5173,
    Psm30StateAcquiringPortReferenceAndGettingPortEvent=5174,
    Psm30StateAcquiringPortReferenceOnFailure=5175,
    Psm30StateCheckIfThereIsAPortChangeOnStartResume=5176,
    Psm30StateCheckIfThereIsAPortChangeOnStartResumeOnGetPortStatus=5177,
    Psm30StateGettingPortStatusOnStartResume=5178,
    Psm30StateInitializingCumulativePortChangeBitsOnStartResume=5179,
    Psm30StateReturningPortResetHubOnErrorOnStartResume=5180,
    Psm30StateGettingPortChange=5181,
    Psm30StateReturningConnectChangeOnLinkError=5182,
    Psm30StateReturningPortResetHubOnErrorInPortChangeHandler=5183,
    Psm30StateWaitingForPortChangeEvent=5184,
    Psm30StateAcquiringPortReferenceOnTransferFailure=5185,
    Psm30StateCheckingIfPortIsPoweredOnStart=5186,
    Psm30StateCheckingIfPowerOnStartHackIsPresent=5187,
    Psm30StateGettingPortStatusOnStart=5188,
    Psm30StateGettingPortStatusOnStartBeforePoweringOn=5189,
    Psm30StatePoweringOnPortOnStart=5190,
    Psm30StateReturningPortConnectChangeOnLinkErrorOnStart=5191,
    Psm30StateReturningPortResetHubOnErrorOnStart=5192,
    Psm30StateWaitingForPortPowerOnTimerOnStart=5193,
    Psm30StateCheckingIfDeviceIsStillConnectedOnResume=5194,
    Psm30StateGettingPortStatusOnResume=5195,
    Psm30StateGettingPortStatusOnResumeAfterWaiting=5196,
    Psm30StateQueueingStateDisabledOnConnectChangeOnResume=5197,
    Psm30StateQueueingStateDisabledOnFailure=5198,
    Psm30StateQueueingStateDisabledOnResetInProgress=5199,
    Psm30StateQueueingStateEnabledOnResume=5200,
    Psm30StateQueueingStateSuspendedOnResume=5201,
    Psm30StateReturningHubStopOnResume=5202,
    Psm30StateReturningPortConnectChange=5203,
    Psm30StateReturningPortNeedsResetOnResume=5204,
    Psm30StateReturningPortOperationSuccessOnResume=5205,
    Psm30StateReturningPortResetHubOnErrorOnResume=5206,
    Psm30StateReturningPortResetInProgressOnResume=5207,
    Psm30StateReturningPortResumedOnResume=5208,
    Psm30StateStartingTimerForAllowingReconnect=5209,
    Psm30StateStoppingReconnectTimerOnHubStatusChange=5210,
    Psm30StateStoppingReconnectTimerOnHubStop=5211,
    Psm30StateWaitingForDeviceToReconnect=5212,
    Psm30StateWaitingForReconnectTimerToFlushOnHubStatusChange=5213,
    Psm30StateWaitingForReconnectTimerToFlushOnHubStop=5214,
    Psm30StateGettingPortStatusInResuming=5215,
    Psm30StateReturningConnectChangeOnLinkErrorInResuming=5216,
    Psm30StateReturningPortResetHubOnErrorInResuming=5217,
    Psm30StateWaitingForPortChangeEventInResuming=5218,
    Psm30StateGettingPortStatusInWaitingForStopSuspend=5219,
    Psm30StateQueueingPortEventFailureToDSM=5220,
    Psm30StateWaitingForDevicePortEvents=5221,
    Psm30StateGettingPortStatusInWaitingForStopSuspendInDisconnected=5222,
    Psm30StateWaitingForDevicePortEventsInDisconnected=5223,
    Psm30StateCheckingIfLinkIsInU0AfterResetPolling=5224,
    Psm30StateCheckingIfResetCompletionRequiresPolling=5225,
    Psm30StateGettingPortStatusInReset=5226,
    Psm30StateGettingPortStatusInResetAfterPollingInterval=5227,
    Psm30StateReturningPortResetCompleted=5228,
    Psm30StateReturningPortResetHubOnErrorInReset=5229,
    Psm30StateWaitingForPollingIntervalForResetCompletion=5230,
    Psm30StateWaitingForPortChangeEventInReset=5231,
    Psm30StateCheckingIfBootDeviceIsConnected=5232,
    Psm30StateCheckingIfParentHubIsArmedForWake=5233,
    Psm30StateDisablingRemoteWakeOnPort=5234,
    Psm30StateEnablingRemoteWakeOnPort=5235,
    Psm30StateIssuingHubResetOnRemoteWakeMaskFailure=5236,
    Psm30StateReturningOperationSucessFromArmingForWake=5237,
    Psm30StateAcquiringPowerReferenceOnHubResumeInD3Cold=5238,
    Psm30StateCheckingIfDeviceIsConnectedOnConnectChangeForD3Cold=5239,
    Psm30StateCheckingIfDeviceIsConnectedOnPortChangeInD3Cold=5240,
    Psm30StateCheckingIfDeviceIsConnectedOnPortChangInD3ColdOnResume=5241,
    Psm30StatePoweredOffOnHubSuspendFromD3Cold=5242,
    Psm30StateQueueingEnabledToDSMOnReconnectAfterResumeRequestFromD3Cold=5243,
    Psm30StateQueueingEnabledToDSMOnReconnectFromD3Cold=5244,
    Psm30StateQueueingStateSuspendedOnHubResumeInD3Cold=5245,
    Psm30StateReleasingPowerReferenceOnHubS0IdleInD3Cold=5246,
    Psm30StateReturningConnectChangeFromD3Cold=5247,
    Psm30StateReturningHubStopFromSuspendedInD3Cold=5248,
    Psm30StateReturningOverCurrentClearedFromD3Cold=5249,
    Psm30StateReturningOverCurrentFromD3Cold=5250,
    Psm30StateReturningPortResetHubOnErrorFromD3Cold=5251,
    Psm30StateReturningPortResumedFromD3Cold=5252,
    Psm30StateStartingTimerForAllowingReconnectOnResumingFromD3Cold=5253,
    Psm30StateStoppingReconnectTimerOnDeviceReAttachAfterD3Cold=5254,
    Psm30StateStoppingReconnectTimerOnHubStopInD3Cold=5255,
    Psm30StateStoppingReconnectTimerOnOvercurrentClearedInD3Cold=5256,
    Psm30StateStoppingReconnectTimerOnOvercurrentInD3Cold=5257,
    Psm30StateStoppingReconnectTimerOnResetHubErrorInD3Cold=5258,
    Psm30StateWaitingForDeviceRequestResumeOnD3Cold=5259,
    Psm30StateWaitingForDeviceToReconnectOnResumeFromD3Cold=5260,
    Psm30StateWaitingForPortChangeEventInD3Cold=5261,
    Psm30StateWaitingForReconnectTimerToFlushOnHubStopInD3Cold=5262,
    Psm30StateWaitingForReconnectTimerToFlushOnOvercurrentClearedInD3Cold=5263,
    Psm30StateWaitingForReconnectTimerToFlushOnOvercurrentInD3Cold=5264,
    Psm30StateWaitingForReconnectTimerToFlushOnReattachAfterD3Cold=5265,
    Psm30StateWaitingForReconnectTimerToFlushOnResetHubErrorInD3Cold=5266
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
    DsmStateAckPortResumed=1011,
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
    DsmStateDisablingEndpointsInControllerOnD0ExitOnDetachWithPDOMissing=4120,
    DsmStateDisablingEndpointsInControllerOnDetachOnHubStopWithPDOMissing=4121,
    DsmStateDisablingEndpointsInControllerOnDetachOnPDOCleanupWithPDOMissing=4122,
    DsmStateDisablingEndpointsInControllerOnFailureWithPortOff=4123,
    DsmStateDisablingEndpointsInControllerOnHubStopAfterSuspend=4124,
    DsmStateDisablingEndpointsInControllerOnPDORemovedOnDetach=4125,
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
    DsmStateFlushingPD0RemovedInConfigured=4139,
    DsmStateFlushingPD0RemovedUnConfigured=4140,
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
    DsmStateWaitingForPDOD0RemovedOnDetachInUnConfigured=4272,
    DsmStateWaitingForPDORemovedOnDetachInConfigured=4273,
    DsmStateWaitingForPDOReportedMissing=4274,
    DsmStateWaitingForPortDisableFromHubSuspend=4275,
    DsmStateWaitingForPortResumeResponseOnStop=4276,
    DsmStateWaitingForPortResumeResponseOnSuspend=4277,
    DsmStateWaitingForRemoveOnDetach=4278,
    DsmStateWaitingForRemoveOrReprotedMissingOnHubStopOnDetach=4279,
    DsmStateWaitingForReportedMissingOnDetachInConfigured=4280,
    DsmStateWaitingForReportedMissingOnDetachInUnConfigured=4281,
    DsmStateWaitingToBeDeleted=4282,
    DsmStateQueryingLanguageSpecificProductIdString=4283,
    DsmStateReturningOperationSuccessInQueryingProductId=4284,
    DsmStateSignalingDeviceQueryTextEvent=4285,
    DsmStateValidatingLanguageSpecificProductIdString=4286,
    DsmStateAcquiringAddressZeroOwnershipInEnum=4287,
    DsmStateAcquiringPowerReferenceOnStartInEnum=4288,
    DsmStateCancellingAcquiringAddress0OnDetachInEnum=4289,
    DsmStateCancellingRetryTimerOnDetachInEnum=4290,
    DsmStateCancellingRetryTimerOnStopSuspendInEnum=4291,
    DsmStateCheckingIfDevicePDChargingPolicySupported=4292,
    DsmStateCheckingIfEnumRetryReachedMaximumInEnum=4293,
    DsmStateCheckingIfEnumRetryReachedMaximumInEnumWithAddr0Ownership=4294,
    DsmStateClearingDeviceProgrammingLostFlagOnEnum=4295,
    DsmStateDeletingDefaultEndpointAndDeviceFromUCXOnDetachInEnumeratingAfterAddr=4296,
    DsmStateDeletingDefaultEndpointAndDeviceFromUCXOnFailureInEnum=4297,
    DsmStateDeletingDefaultEndpointAndDeviceOnPostAddressFailureInEnum=4298,
    DsmStateDeletingDefaultEndpointAndDeviceOnStopSuspendAfterAddressInEnum=4299,
    DsmStateDeletingDeviceAndDefaultEndpointOnDetachWithAddress0OwnershipInEnum=4300,
    DsmStateDeletingDeviceAndDefaultEndpointOnStopSuspendWithAddress0OwnershipInEnum=4301,
    DsmStateDisablingDeviceInControllerOnDetachInEnumeratingAfterAddr=4302,
    DsmStateDisablingDeviceInControllerOnDetachWithAddress0OwnershipInEnum=4303,
    DsmStateDisablingDeviceInControllerOnPostAddressEnumFailureInEnum=4304,
    DsmStateDisablingDeviceInControllerOnSetAddressFailureInEnum=4305,
    DsmStateDisablingDeviceInControllerOnStopSuspendAfterAddressInEnum=4306,
    DsmStateDisablingDeviceInControllerOnStopSuspendWithAddress0OwnershipInEnum=4307,
    DsmStateDisablingOnEnumAfterFailureInEnum=4308,
    DsmStateDisablingOnEnumAfterFailureInEnumWithAddress0Ownership=4309,
    DsmStateDisablingOnStopSuspendInEnum=4310,
    DsmStateDisablingOnStopSuspendInEnumWithAddress0Ownership=4311,
    DsmStateDisablingOnStopSuspendOnIoctlFailureInEnum=4312,
    DsmStateEnumeratingAfterAddressInEnum=4313,
    DsmStateEnumeratingAtAddressZeroInEnum=4314,
    DsmStateInitializingEnumRetryCountInEnum=4315,
    DsmStateReleasingAddressZeroOwnershipInEnum=4316,
    DsmStateReleasingAddressZeroOwnershipOnDetachInEnum=4317,
    DsmStateReleasingAddressZeroOwnershipOnEnumFailure=4318,
    DsmStateReleasingAddressZeroOwnershipOnEnumRetry=4319,
    DsmStateReleasingAddressZeroOwnershipOnStopSuspendInEnum=4320,
    DsmStateReleasingPowerReferenceInEnum=4321,
    DsmStateReturningOperationFailureInEnum=4322,
    DsmStateReturningOperationSuccessInEnum=4323,
    DsmStateReturningPortDetachDeviceInEnum=4324,
    DsmStateSettingDevicePDChargingPolicy=4325,
    DsmStateSettingLPMValues=4326,
    DsmStateSettingNonZeroAddressInEnum=4327,
    DsmStateStartingTimerForEnumRetryInEnum=4328,
    DsmStateStoppedSuspendedInEnum=4329,
    DsmStateUpdatingDeviceInformationInEnum=4330,
    DsmStateWaitingForDisableCompleteOnStopSuspendAfterFailureInEnum=4331,
    DsmStateWaitingForDisableCompleteOnStopSuspendInEnum=4332,
    DsmStateWaitingForDisableCompleteOnStopSuspendInEnumWithAddress0Ownership=4333,
    DsmStateWaitingForTimerToFlushOnDetachInEnum=4334,
    DsmStateWaitingForTimerToFlushOnStopSuspendInEnum=4335,
    DsmStateWaitingForUCXIoctlOnDetachInEnum=4336,
    DsmStateWaitingForUCXIoctlOnStopSuspendInEnum=4337,
    DsmStateCheckingIfFirstEnumTryAfterReset1=4338,
    DsmStateCheckingIfFirstEnumTryAfterReset2=4339,
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
    DsmStateWaitingForPostReset1ExtendedTimer=4376,
    DsmStateWaitingForPostReset1Timer=4377,
    DsmStateWaitingForPostReset2ExtendedTimer=4378,
    DsmStateWaitingForPostReset2Timer=4379,
    DsmStateWaitingForStopSuspendOnReset1InEnumAtZero=4380,
    DsmStateWaitingForStopSuspendOnReset2InEnumAtZero=4381,
    DsmStateWaitingForTimerOnHubStopInEnumAtZero=4382,
    DsmStateWaitingForTimerOnHubSuspendInEnumAtZero=4383,
    DsmStateWaitingForTimerOnPortDetachInEnumAtZero=4384,
    DsmStateCreatingUCXDefaultEndpointFor30=4385,
    DsmStateCreatingUCXDevice30=4386,
    DsmStateDeletingUCXDefaultEndpointOnOperationFailureFor30=4387,
    DsmStateDeletingUCXDefaultEndpointOnOperationFailureFor30OnDetach=4388,
    DsmStateDeletingUCXDefaultEndpointOnOperationFailureFor30OnHubStop=4389,
    DsmStateDeletingUCXDefaultEndpointOnOperationFailureFor30OnHubSuspend=4390,
    DsmStateDeletingUCXDeviceOnOperationFailureFor30=4391,
    DsmStateDeletingUCXDeviceOnOperationFailureFor30OnDetach=4392,
    DsmStateDeletingUCXDeviceOnOperationFailureFor30OnHubStop=4393,
    DsmStateDeletingUCXDeviceOnOperationFailureFor30OnHubSuspend=4394,
    DsmStateEnablingDeviceInUCXFor30=4395,
    DsmStateResettingDeviceInEnumeration=4396,
    DsmStateReturningDetachInPreAddressEnumFor30=4397,
    DsmStateReturningDeviceOperationFailureInPreAddressEnumFor30=4398,
    DsmStateReturningDeviceOperationSuccessInPreAddressEnumFor30=4399,
    DsmStateReturningHubStopInPreAddressEnumFor30=4400,
    DsmStateReturningHubSuspendInPreAddressEnumFor30=4401,
    DsmStateSetting30Speed=4402,
    DsmStateCancellingControlTransferOnDetachInEnumAfterAddr=4403,
    DsmStateCancellingControlTransferOnHubStopInEnumAfterAddr=4404,
    DsmStateCancellingControlTransferOnHubSuspendInEnumAfterAddr=4405,
    DsmStateCheckingBytesReturnedInConfigDescriptor=4406,
    DsmStateCheckingIfAltEnumCmdCached=4407,
    DsmStateCheckingIfExemptSecureBioDevice=4408,
    DsmStateCheckingIfSuperSpeedNeedsToBeDisabled=4409,
    DsmStateDiasablingSuperSpeed=4410,
    DsmStateGettingConfigurationDescriptorWithDefaultLength=4411,
    DsmStateGettingConfigurationDescriptorWithReturnedLength=4412,
    DsmStateGettingDeviceDescriptorAfterAddressing=4413,
    DsmStateGettingRemainingDescriptorsAfterConfigDescriptor=4414,
    DsmStateQueryingRegistryValuesForDevice=4415,
    DsmStateReturningHubStopInEnumAfterAddr=4416,
    DsmStateReturningHubSuspendInEnumAfterAddr=4417,
    DsmStateReturningOperationFailureInEnumAfterAddr=4418,
    DsmStateReturningOperationSuccessInEnumAfterAddr=4419,
    DsmStateReturningPortDeviceDetachInEnumAfterAddr=4420,
    DsmStateSendingAltEnumCmdInEnumAfterAddr=4421,
    DsmStateSendingGetDeviceDescriptorRequestForExemptSecureBioDevice=4422,
    DsmStateSettingVersionFlagInEnumerating=4423,
    DsmStateValidatingConfigurationDescriptor=4424,
    DsmStateValidatingDeviceDescriptorAfterAddressing=4425,
    DsmStateCancellingControlTransferOnDetachInRemainingDescriptors=4426,
    DsmStateCancellingControlTransferOnHubStopInRemainingDescriptors=4427,
    DsmStateCancellingControlTransferOnHubSuspendInRemainingDescriptors=4428,
    DsmStateCheckingIfIProductIdStringDescriptorShouldBeQueried=4429,
    DsmStateCheckingIfIProductIsZero=4430,
    DsmStateGettingBosDescriptorSet=4431,
    DsmStateGettingDeviceQualifierDescriptorsAndCheckingForSpeedMismatch=4432,
    DsmStateGettingLanguageIdStringDescriptor=4433,
    DsmStateGettingMSOSAndSerialNumberDescriptor=4434,
    DsmStateGettingProductIdStringDescriptor=4435,
    DsmStateReturningErrorResponseOnLanguageIdQuery=4436,
    DsmStateReturningErrorResponseOnProductStringQuery=4437,
    DsmStateReturningHubStopInRemainingDescriptors=4438,
    DsmStateReturningHubSuspendInRemainingDescriptors=4439,
    DsmStateReturningOperationFailureInRemainingDescriptors=4440,
    DsmStateReturningOperationSuccessInRemainingDescriptors=4441,
    DsmStateReturningPortDeviceDetachInRemainingDescriptors=4442,
    DsmStateValidatingLanguageIdStringDescriptor=4443,
    DsmStateValidatingProductIdStringDescriptor=4444,
    DsmStateCheckingIfDeviceSupportsContainerId=4445,
    DsmStateCheckingIfIgnoreHWSerNumIsSet=4446,
    DsmStateCheckingIfMSOSContainerIdDescriptorIsSupported=4447,
    DsmStateCheckingIfMSOSDescriptorShouldBeQueried=4448,
    DsmStateCheckingIfMSOSExtendedConfigDescriptorIsSupported=4449,
    DsmStateCheckingIfSerialNumberStringIndexIsZero=4450,
    DsmStateGettingMSOSContainerIdDescriptor=4451,
    DsmStateGettingMSOSContainerIdHeaderDescriptor=4452,
    DsmStateGettingMSOSDescriptor=4453,
    DsmStateGettingMSOSExtendedDescriptor=4454,
    DsmStateGettingMSOSExtendedDescriptorHeader=4455,
    DsmStateGettingSerialNumberStringDescriptor=4456,
    DsmStateMarkDeviceAsNotSupportingMSOSDescriptor=4457,
    DsmStateMarkDeviceAsSupportingMSOSDescriptor=4458,
    DsmStateMarkingDeviceAsNotSupportingContainerId=4459,
    DsmStateMarkingDeviceAsNotSupportingContainerIdBasedOnMSOSDescriptor=4460,
    DsmStateReturningErrorResponseOnContainerIdHeaderQuery=4461,
    DsmStateReturningErrorResponseOnContainerIdQuery=4462,
    DsmStateReturningErrorResponseOnMSOSExtendedHeaderQuery=4463,
    DsmStateReturningErrorResponseOnMSOSExtendedQuery=4464,
    DsmStateReturningErrorResponseOnMSOSQuery=4465,
    DsmStateReturningErrorResponseOnSerialNumberQuery=4466,
    DsmStateReturningOperationFailureInGettingDescriptorsForGreaterThan1x=4467,
    DsmStateReturningOperationSuccessInGettingDescriptorsForGreaterThan1x=4468,
    DsmStateValidatingMSOSContainerIdDescriptor=4469,
    DsmStateValidatingMSOSContainerIdHeaderDescriptor=4470,
    DsmStateValidatingMSOSDescriptor=4471,
    DsmStateValidatingMSOSExtendedConfigDescriptor=4472,
    DsmStateValidatingMSOSExtendedConfigDescriptorHeader=4473,
    DsmStateValidatingSerialNumberStringDescriptor=4474,
    DsmStateCheckingIfIgnoreHWSerNumIsSetFor1xDevice=4475,
    DsmStateCheckingIfSerialNumberStringIndexIsZeroFor1xDevice=4476,
    DsmStateGettingSerialNumberStringDescriptorFor1xDevice=4477,
    DsmStateReturningErrorResponseOnSerialNumberQueryFor1xDevice=4478,
    DsmStateReturningOperationFailureInGettingSerialNumberFor1x=4479,
    DsmStateReturningOperationSuccessInGettingSerialNumberFor1x=4480,
    DsmStateValidatingSerialNumberStringDescriptorFor1xDevice=4481,
    DsmStateCheckingIfWaitRequiredAfterSetAddress=4482,
    DsmStateReturningHubStopInSettingAddress=4483,
    DsmStateReturningHubSuspendInSettingAddress=4484,
    DsmStateReturningOperationFailureInSettingAddress=4485,
    DsmStateReturningOperationSuccessInSettingAddress=4486,
    DsmStateReturningPortDetachDeviceInSettingAddress=4487,
    DsmStateSettingNonZeroAddress=4488,
    DsmStateStoppingTimerOnHubStopInSettingAddress=4489,
    DsmStateStoppingTimerOnHubSuspendInSettingAddress=4490,
    DsmStateStoppingTimerOnPortDetachInSettingAddress=4491,
    DsmStateWaitingForTimerAfterSetAddress=4492,
    DsmStateWaitingForTimerOnHubStopInSettingAddress=4493,
    DsmStateWaitingForTimerOnHubSuspendInSettingAddress=4494,
    DsmStateWaitingForTimerOnPortDetachInSettingAddress=4495,
    DsmStateCheckingBytesReturnedInAlternateConfigDescriptor=4496,
    DsmStateCheckingIfAltEnumCommandNeeded=4497,
    DsmStateCheckingIfAlternateBOSDescriptorQueryShouldBeSkipped=4498,
    DsmStateCheckingIfAlternateModeStringDescriptorShouldBeQueried=4499,
    DsmStateCheckingIfBillboardBOSDescriptorIsPresent=4500,
    DsmStateCheckingIfBillboardStringDescriptorShouldBeQueried=4501,
    DsmStateCheckingIfBOSDescriptorQueryShouldBeSkipped=4502,
    DsmStateCheckingIfCompleteAlternateBOSDescriptorWasRetrieved=4503,
    DsmStateCheckingIfCompleteBOSDescriptorWasRetrieved=4504,
    DsmStateCheckingIfDisallowFirmwareUpdateCommandNeedsToBeSent=4505,
    DsmStateCheckingIfDualRoleFeaturesSupported=4506,
    DsmStateCheckingIfFirmwareImageHashNeedsToBeQueried=4507,
    DsmStateGetMsOs20DescriptorSet=4508,
    DsmStateGettingAlternateBOSDescriptor=4509,
    DsmStateGettingAlternateBOSDescriptorHeader=4510,
    DsmStateGettingAlternateConfigurationDescriptorWithDefaultLength=4511,
    DsmStateGettingAlternateConfigurationDescriptorWithReturnedLength=4512,
    DsmStateGettingAlternateDeviceDescriptor=4513,
    DsmStateGettingAlternateModeStringDescriptor=4514,
    DsmStateGettingBillboardStringDescriptor=4515,
    DsmStateGettingBOSDescriptor=4516,
    DsmStateGettingBOSDescriptorHeader=4517,
    DsmStateIsMsOs20DescriptorSupported=4518,
    DsmStateQueryingRegistryValuesForAlternateDeviceEnumeration=4519,
    DsmStateReturningErrorResponseOnBOSDescriptorHeaderQuery=4520,
    DsmStateReturningErrorResponseOnBOSDescriptorQuery=4521,
    DsmStateReturningOperationFailureInGettingBOSDescriptor=4522,
    DsmStateReturningOperationSuccessInGettingBOSDescriptor=4523,
    DsmStateSendingDisallowFirmwareUpdateCommand=4524,
    DsmStateSendingFirmwareImageHashQuery=4525,
    DsmStateSendingMsOs20AlternateEnumerationCommand=4526,
    DsmStateSendingUsbFeaturesVendorCmd=4527,
    DsmStateSettingVersionFlagInAlternateEnumeration=4528,
    DsmStateValidatingAlternateBOSDescriptor=4529,
    DsmStateValidatingAlternateBOSDescriptorHeader=4530,
    DsmStateValidatingAlternateConfigurationDescriptor=4531,
    DsmStateValidatingAlternateDeviceDescriptor=4532,
    DsmStateValidatingAndLoggingAlternateModeStringDescriptor=4533,
    DsmStateValidatingAndLoggingBillboardStringDescriptor=4534,
    DsmStateValidatingBOSDescriptor=4535,
    DsmStateValidatingBOSDescriptorHeader=4536,
    DsmStateValidatingMsOs20DescriptorSetIfPresent=4537,
    DsmStateGettingDeviceQualifierDescriptor=4538,
    DsmStateReturningErrorResponseOnDeviceQualifierQuery=4539,
    DsmStateReturningOperationSuccessInCheckingFor20FullSpeed=4540,
    DsmStateValidatingDeviceQualifierDescriptor=4541,
    DsmStateAddingDeviceToGlobalChildList=4542,
    DsmStateCheckingIfAddDeviceToGlobalListRetryCountExceededLimit=4543,
    DsmStateCreatingChildPDOAndReportingToPnp=4544,
    DsmStateDiscardSerialNumber=4545,
    DsmStateInitializingAddDeviceToGlobalListRetryCount=4546,
    DsmStateRequestingDeviceCycleInReportingToPnp=4547,
    DsmStateReturningOperationSuccessInReportingToPnp=4548,
    DsmStateReturningPortDetachDevice=4549,
    DsmStateStoppingTimerAndRequestingCycleOnStopSuspend=4550,
    DsmStateStoppingTimerOnDetachInReportingToPnp=4551,
    DsmStateWaitingForDetachInReportingToPnp=4552,
    DsmStateWaitingForDetachOrTimerInReportingToPnp=4553,
    DsmStateWaitingForDuplicateDeviceToGoAway=4554,
    DsmStateWaitingForTimerToFlushOnDetachInReportingToPnp=4555,
    DsmStateCreatingUnknownChildPDOAndReportingToPnp=4556,
    DsmStateMarkingUnknownDeviceAsFailed=4557,
    DsmStateRequestingDeviceCycleForUnknownDevice=4558,
    DsmStateReturningOperationSuccessInReportingUnknownDevice=4559,
    DsmStateReturningPortDetachDeviceInReportingUnknownDevice=4560,
    DsmStateAckingResumed=4561,
    DsmStateAcquiringPowerReferenceInEnabled=4562,
    DsmStateAcquiringPowerReferenceInSuspended=4563,
    DsmStateAcquiringPowerReferenceInSuspendedOnResumeWithReset=4564,
    DsmStateAcquiringPowerReferenceOnHubResume=4565,
    DsmStateAcquiringPowerReferenceOnHubResumeWithReenumRequired=4566,
    DsmStateAcquiringPowerReferenceOnHubResumeWtihReset=4567,
    DsmStateAcquiringPowerReferenceOnResumeInS0=4568,
    DsmStateCheckingIfDeviceNeedsResetOnResumeInSxOnEnabled=4569,
    DsmStateCheckingIfDeviceNeedsResetOnResumeInSxOnSuspended=4570,
    DsmStateCompletingUnexpectedD0ExitInHubSuspended=4571,
    DsmStateDisabledOrFailedInHubSuspend=4572,
    DsmStateDisablingPortOnPortEnabledInPendingHubStop=4573,
    DsmStateReleasingReferenceOnHubSuspendAfterPSMSyncUp=4574,
    DsmStateReleasingReferenceOnHubSuspendAfterPSMSyncUpInDisabledOrFailed=4575,
    DsmStateReleasingReferenceOnHubSuspendOnDetachAfterPSMSyncUp=4576,
    DsmStateResumingBeforeResetting=4577,
    DsmStateReturningDeviceRenumerationOnHubResume=4578,
    DsmStateReturningDeviceResumedOnHubResume=4579,
    DsmStateReturningDeviceSuspendedOnHubResume=4580,
    DsmStateReturningHubStopWithReferenceAcquiredInHubSuspended=4581,
    DsmStateReturningPortDetach=4582,
    DsmStateSuspendedInHubSuspend=4583,
    DsmStateSuspendingPortOnPortEnabledInPendingHubSuspend=4584,
    DsmStateWaitingForHubResumeInEnabled=4585,
    DsmStateWaitingForHubResumeInSuspended=4586,
    DsmStateWaitingForHubResumeWithRenumRequired=4587,
    DsmStateWaitingForPSMSyncUp=4588,
    DsmStateWaitingForPSMSyncUpOnPendingStop=4589,
    DsmStateWaitingForPSMSyncUpOnPendingSuspend=4590,
    DsmStateWaitingForPSMSyncUpOnResumeWithReset=4591,
    DsmStateWaitingForResumeResponseFromPortOnHubStop=4592,
    DsmStateWaitingForResumeResponseFromPortOnHubSuspend=4593,
    DsmStateAcquiringAddressZeroOwnershipOnRenum=4594,
    DsmStateAcquiringPowerReferenceOnStartInReEnum=4595,
    DsmStateCancellingAcquiringAddress0OnDetachOnRenum=4596,
    DsmStateCancellingRetryTimerOnDetachOnRenum=4597,
    DsmStateCancellingRetryTimerOnStopSuspendOnRenum=4598,
    DsmStateCheckingIfAltEnumCmdNeededInReenum=4599,
    DsmStateCheckingIfDevicePDChargingPolicySupportedInReEnum=4600,
    DsmStateCheckingIfDevicePorgrammingWasLosttInUnconfigured=4601,
    DsmStateCheckingIfDeviceProgrammingWasLosttInConfigured=4602,
    DsmStateCheckingIfDisableNeededInConfigured=4603,
    DsmStateCheckingIfDisableNeededInUnconfigured=4604,
    DsmStateCheckingIfEnumRetryReachedMaximumOnRenum=4605,
    DsmStateCheckingIfEnumRetryReachedMaximumOnRenumWithAddress0Ownership=4606,
    DsmStateCheckingIfEnumRetryReachedMaximumWithDeviceDisabledOnRenum=4607,
    DsmStateCheckingIfItIsBootDeviceOnIdComparisionFailure=4608,
    DsmStateCheckingIfRequestConfigDescOnResetIsSet=4609,
    DsmStateCheckingIfSerialNumberShouldBeCompared=4610,
    DsmStateClearingDeviceLostProgammingFlagOnRestart=4611,
    DsmStateClearingDeviceProgrammingLostFlagOnRenum=4612,
    DsmStateComparingDeviceOnReEnumeration=4613,
    DsmStateComparingSerialNumberOnReEnumeration=4614,
    DsmStateDeconfiguringEndpointsInControllerBeforeRenumerating=4615,
    DsmStateDisablingDeviceInControllerOnReEnumerationInConfigured=4616,
    DsmStateDisablingDeviceInControllerOnStopSuspendOnRenum=4617,
    DsmStateDisablingDeviceInControllerOnStopSuspendOnRenumWithAddress0Ownership=4618,
    DsmStateDisablingOnEnumAfterFailureInReEnum=4619,
    DsmStateDisablingOnEnumAfterFailureInReEnumWithAddress0Ownership=4620,
    DsmStateDisablingOnEnumAfterFailureWithDeviceDisabledInReEnum=4621,
    DsmStateEnablingDeviceInControllerInRenum=4622,
    DsmStateEnumeratingAtAddressZeroOnRenum=4623,
    DsmStateGettingConfigDescriptorWhileRenuemrating=4624,
    DsmStateGettingDeviceDescriptorOnRenum=4625,
    DsmStateGettingSerialNumberStringDescriptorWhileRenuemrating=4626,
    DsmStateInitializingEnumRetryCountInReEnumDuringResetInConfigured=4627,
    DsmStateInitializingEnumRetryCountInReEnumDuringResetInUnConfigured=4628,
    DsmStateInitializingEnumRetryCountInReEnumDuringRestart=4629,
    DsmStatePurgingDeviceTreeIoOnReEnumerationInConfigured=4630,
    DsmStatePurgingDeviceTreeIoOnReEnumerationInUnConfigured=4631,
    DsmStatePurgingIoOnEnumAfterFailureInReEnum=4632,
    DsmStatePurgingIoOnEnumAfterFailureInReEnumWithAddress0Ownership=4633,
    DsmStateReleasingAddressZeroOwnershipOnDetachOnEnumFailure=4634,
    DsmStateReleasingAddressZeroOwnershipOnDetachWithDeviceEnabledOnRenum=4635,
    DsmStateReleasingAddressZeroOwnershipOnDetachWithTimer=4636,
    DsmStateReleasingAddressZeroOwnershipOnEnumFailureInRenum=4637,
    DsmStateReleasingAddressZeroOwnershipOnRenum=4638,
    DsmStateReleasingAddressZeroOwnershipOnRenumRetry=4639,
    DsmStateReleasingAddressZeroOwnershipOnStopSuspendOnEnumFailure=4640,
    DsmStateReleasingAddressZeroOwnershipOnStopSuspendOnRenum=4641,
    DsmStateReleasingAddressZeroOwnershipOnStopSuspendWithTimer=4642,
    DsmStateReleasingPowerReferenceOnRenum=4643,
    DsmStateReturningOperationFailureOnRenum=4644,
    DsmStateReturningOperationFailureWithDeviceEnabledOnRenum=4645,
    DsmStateReturningOperationSuccessOnRenum=4646,
    DsmStateReturningPortDetachDeviceOnRenum=4647,
    DsmStateReturningPortDetachDeviceWithDeviceEnabledOnRenum=4648,
    DsmStateSendingMsOs20AltEnumCmdOnReenum=4649,
    DsmStateSettingDevicePDChargingPolicyInReEnum=4650,
    DsmStateSettingLPMValuesInReEnum=4651,
    DsmStateSettingNonZeroAddressOnRenum=4652,
    DsmStateStartingTimerForEnumRetryOnRenum=4653,
    DsmStateStartingTimerForEnumRetryOnRenumWithAddress0Ownership=4654,
    DsmStateStoppedSuspendedOnRenum=4655,
    DsmStateWaitingForDetachAfterWrongDeviceDetectedOnBootDevicePort=4656,
    DsmStateWaitingForDisableCompleteOnStopSuspendAfterFailureInReEnum=4657,
    DsmStateWaitingForDisableCompleteOnStopSuspendOnRenum=4658,
    DsmStateWaitingForDisableCompleteOnStopSuspendWithDeviceDisabledAfterFailureInReEnum=4659,
    DsmStateWaitingForTimerToFlushOnDetachOnRenum=4660,
    DsmStateWaitingForTimerToFlushOnStopSuspendOnRenum=4661,
    DsmStateWaitingForUCXIoctlOnDetachOnRenum=4662,
    DsmStateWaitingForUCXIoctlOnStopSuspend=4663,
    DsmStateCheckingIfAnyAlternateInterfaceLeft=4664,
    DsmStateConfiguringDevice=4665,
    DsmStateCreatingNewEndpoints=4666,
    DsmStateDeconfiguringEndpointsInControllerForDeviceConfiguration=4667,
    DsmStateDeletingEndpointsForOldConfiguration=4668,
    DsmStateMarkingAnyEndpointsToBeEnableAsDisabled=4669,
    DsmStateProgrammingEndpointsAndSettingLPMValuesrForDeviceConfiguration=4670,
    DsmStateProgrammingEndpointsInControllerForDeviceConfigurationFor20Devices=4671,
    DsmStateReturningOperationFailureInReConfiguring=4672,
    DsmStateReturningOperationSuccessInReConfiguring=4673,
    DsmStateSettingDeviceInterfaceInConfiguring=4674,
    DsmStateDisablingPortOnHubSuspendInCleanup=4675,
    DsmStateFlushingHubPowerDownEvents=4676,
    DsmStateFlushingHubPowerUpEvents=4677,
    DsmStateFlushingHubStopAfterSuspendEvent=4678,
    DsmStateFlushingPnpEvents=4679,
    DsmStateFowardingStreamsRequestToUcxInWaitingForDevicePortEvents=4680,
    DsmStateReleasingPowerReferenceOnHubSuspendInCleanup=4681,
    DsmStateReturningPortDetachDeviceFromIgnoringDevicePort=4682,
    DsmStateReturningPortDisabledOnHubSuspendInCleanup=4683,
    DsmStateWaitingForDevicePortEvents=4684,
    DsmStateFlushingHubPowerDownEventsWithPortOff=4685,
    DsmStateFlushingHubPowerUpEventsWithPortOff=4686,
    DsmStateFlushingHubStopAfterSuspendEventWithPortOff=4687,
    DsmStateFlushingPnpEventsWithPortOff=4688,
    DsmStateFowardingStreamsRequestToUcxInWaitingForDevicePortEventsWithPortOff=4689,
    DsmStateWaitingForDevicePortEventsWithPortOff=4690,
    DsmStateDisablingPortForFailedDeviceAfterHubResume=4691,
    DsmStateDisablingPortOnHubSuspendForFailedDevice=4692,
    DsmStateFailedDeviceHubSuspended=4693,
    DsmStateFlushingHubPowerDownEventsForFailedDevice=4694,
    DsmStateFlushingHubPowerUpEventsForFailedDevice=4695,
    DsmStateFlushingHubStopAfterSuspendEventForFailedDevice=4696,
    DsmStateFlushingPnpEventsForFailedDevice=4697,
    DsmStateReleasingPowerReferenceOnDetachForFailedDevice=4698,
    DsmStateReturningPortDetachDeviceForFailedDevice=4699,
    DsmStateWaitingForDevicePortEventsForFailedDevice=4700,
    DsmStateFlushingHubStartResumeEvent=4701,
    DsmStateFlushingHubSuspendEvent=4702,
    DsmStateFlushingPnpEventExceptStop=4703,
    DsmStateFowardingStreamsRequestToUcxInWaitingForDevicePortEventsExceptStop=4704,
    DsmStateWaitingForDevicePortEventsExceptStop=4705,
    DsmStateFlushingHubResumeEventForBootDevice=4706,
    DsmStateFlushingHubSuspendEventForBootDevice=4707,
    DsmStateFlushingPnpEventsForBootDevice=4708,
    DsmStateWaitingForDeviceHubEventsForBootDevice=4709,
    DsmStateAckingPortEventInD3Cold=4710,
    DsmStateAckingPortResumed=4711,
    DsmStateCheckingIfDeviceArmedForWakeOnResume=4712,
    DsmStateCheckingIfDeviceNeedsResetOnResumeInS0=4713,
    DsmStateCheckingIfDeviceShouldBeDisarmedForWakeOnResume=4714,
    DsmStateCheckingIfResetOnLastResumeFlagIsSet=4715,
    DsmStateCheckingIfResetOnLastResumeFlagIsSetOnSuspended=4716,
    DsmStateCompletingD0EntryOnDetach=4717,
    DsmStateCompletingD0EntryOnPortFailure=4718,
    DsmStateDisabledAfterD3Cold=4719,
    DsmStateDisablingOnHubSuspendNeedingRenumeration=4720,
    DsmStateDisablingPortOnStopFromSuspended=4721,
    DsmStateDisarmingDeviceForWakeOnD0Entry=4722,
    DsmStateDisarmingDeviceForWakeOnPortResumed=4723,
    DsmStatePurgingDeviceIoOnHubSuspendWhileWaitingForD0Entry=4724,
    DsmStatePurgingDeviceIoOnHubSuspendWhileWaitingForD0EntryOnHwWake=4725,
    DsmStateReleasingPowerReferenceOnDetachWhileSuspending=4726,
    DsmStateReleasingPowerReferenceOnDetachWhileWaitingForHubSuspend=4727,
    DsmStateReleasingPowerReferenceOnPortFailureWhileWaitingForHubSuspend=4728,
    DsmStateResumingFromSelectiveSuspend=4729,
    DsmStateReturningDetachDevice=4730,
    DsmStateReturningDeviceResumed=4731,
    DsmStateReturningHubStopFromSuspended=4732,
    DsmStateReturningPortFailureOnResume=4733,
    DsmStateReturningRenumerateDeviceOnResume=4734,
    DsmStateSettingResetOnLastResumeDueToD3Cold=4735,
    DsmStateSettingResetOnLastResumeFlagForPDO=4736,
    DsmStateSettingResetOnLastResumeFlagForPDOAfterD3Cold=4737,
    DsmStateStartingDeviceIoOnDeviceResumeOnHwWake=4738,
    DsmStateStartingDeviceIoOnDeviceResumeOnSwWake=4739,
    DsmStateSuspended=4740,
    DsmStateSuspendedWithHubSuspended=4741,
    DsmStateSuspendedWithHubSuspendedInD3Cold=4742,
    DsmStateSuspendingBackUnarmedDevice=4743,
    DsmStateSuspendingWakeArmedDeviceOnHubSuspend=4744,
    DsmStateWaitingForD0EntryOnHwWake=4745,
    DsmStateWaitingForD0EntryOnPendingRenumerate=4746,
    DsmStateWaitingForSuspendCompleteOnHubSuspend=4747,
    DsmStateAbortingDeviceIoInSuspendingBeforeArmingForWakeFailure=4748,
    DsmStateArmingDeviceForWake=4749,
    DsmStateCheckingIfDeviceArmedForWakeOnSuspending=4750,
    DsmStateCompletingWaitWakeOnDetachDuringSuspending=4751,
    DsmStateCompletingWaitWakeOnSuspendFailure=4752,
    DsmStatePurgingDeviceIoInSuspending=4753,
    DsmStatePurgingDeviceIoInSuspendingAfterArmingForWake=4754,
    DsmStatePurgingDeviceIoInSuspendingAfterArmingForWakeFailure=4755,
    DsmStateReturningOperationFailureInSuspending=4756,
    DsmStateReturningOperationSuccessInSuspending=4757,
    DsmStateReturningPortDetachDeviceInSuspending=4758,
    DsmStateReturningUnexpectedHubSuspendInSuspending=4759,
    DsmStateSuspending=4760,
    DsmStateSuspendingPortOnFailureInSuspending=4761,
    DsmStateSuspendingWithArmedForWake=4762,
    DsmStateWaitingForPortResponseOnHubSuspend=4763,
    DsmStateCreatingNewEndpointsInSettingInterface=4764,
    DsmStateDeletingEndpointsForNewInterfaceOnFailure=4765,
    DsmStateDeletingEndpointsForOldInterface=4766,
    DsmStateDeletingEndpointsForOldInterfaceOnFailure=4767,
    DsmStateDisablingEndpointsForTheCurrentInterface=4768,
    DsmStateDisablingEndpointsForTheNewInterfaceOnFailure=4769,
    DsmStatePreparingEndpointAndInterfaceListsOnSelectInterface=4770,
    DsmStateProgrammingEndpointsAndSettingLPMValuesInSettingInterface=4771,
    DsmStateProgrammingEndpointsInControllerInSettingInterfaceFor20Devices=4772,
    DsmStateReturningOperationFailureInSettingInterface=4773,
    DsmStateReturningOperationSuccessInSettingInterface=4774,
    DsmStateSettingDeviceInterfaceInSettingInterface=4775,
    DsmStateSettingDeviceInterfaceInSettingInterfaceOnFailureForCompat=4776,
    DsmStateCheckingIfDeviceSpeedChanged=4777,
    DsmStateCheckingIfFirstEnumTryInRenum=4778,
    DsmStateGettingDeviceDescriptorInReEnumAtZero=4779,
    DsmStateLoggingReset1TimeoutInReEnumAtZero=4780,
    DsmStateLoggingReset2TimeoutInReEnum=4781,
    DsmStateNotifyingDeviceResetToUCXAfterReset1InRenum=4782,
    DsmStateNotifyingDeviceResetToUCXAfterReset2InRenum=4783,
    DsmStateResetting1InRenum=4784,
    DsmStateResetting2InRenum=4785,
    DsmStateReturningDeviceOperationFailureInReEnumAtZero=4786,
    DsmStateReturningDeviceOperationSuccessInReEnumAtZero=4787,
    DsmStateReturningHubStopInReEnumAtZero=4788,
    DsmStateReturningHubSuspendInReEnumAtZero=4789,
    DsmStateReturningPortDetachDeviceInReEnumAtZero=4790,
    DsmStateStoppingTimerOnHubStopInReEnumAtZero=4791,
    DsmStateStoppingTimerOnHubSuspendInReEnumAtZero=4792,
    DsmStateStoppingTimerOnPortDetachInReEnumAtZero=4793,
    DsmStateValidatingDeviceDescriptorInReEnumAtZero=4794,
    DsmStateWaitingForPortResetOnHubStopInReEnumAtZero=4795,
    DsmStateWaitingForPortResetOnHubSuspendInReEnumAtZero=4796,
    DsmStateWaitingForPostReset1TimerInRenum=4797,
    DsmStateWaitingForPostReset2ExtendedTimerInRenum=4798,
    DsmStateWaitingForPostReset2TimerInRenum=4799,
    DsmStateWaitingForStopSuspendOnReset1InReEnumAtZero=4800,
    DsmStateWaitingForTimerOnHubStopInReEnumAtZero=4801,
    DsmStateWaitingForTimerOnHubSuspendInReEnumAtZero=4802,
    DsmStateWaitingForTimerOnPortDetachInReEnumAtZero=4803,
    DsmStateCheckingIfFirstReEnumTryFor30Device=4804,
    DsmStateDeterminingPortResetTypeRequired=4805,
    DsmStateLoggingResetTimeoutInResettingFor30=4806,
    DsmStateNotifyingDeviceResetToUCXInResettingFor30=4807,
    DsmStateQueueingHotPortResetFor30=4808,
    DsmStateQueueingWarmPortResetFor30=4809,
    DsmStateReturningDeviceOperationFailureInResettingFor30=4810,
    DsmStateReturningDeviceOperationSuccessInInResettingFor30=4811,
    DsmStateReturningHubStopInResettingFor30=4812,
    DsmStateReturningHubSuspendInResettingFor30=4813,
    DsmStateReturningPortDetachDeviceInResettingFor30=4814,
    DsmStateStartingPostResetTimerFor30=4815,
    DsmStateStoppingTimerOnHubStopInResettingFor30=4816,
    DsmStateStoppingTimerOnHubSuspendInResettingFor30=4817,
    DsmStateStoppingTimerOnPortDetachInResettingFor30=4818,
    DsmStateWaitingForPortResetCompleteFor30=4819,
    DsmStateWaitingForPortResetOnHubStopInResettingFor30=4820,
    DsmStateWaitingForPortResetOnHubSuspendInResettingFor30=4821,
    DsmStateWaitingForStopSuspendOnReset1InResettingFor30=4822,
    DsmStateWaitingForTimerOnHubStopInResettingFor30=4823,
    DsmStateWaitingForTimerOnHubSuspendInResettingFor30=4824,
    DsmStateWaitingForTimerOnPortDetachInResettingFor30=4825,
    DsmStateAllocatingBufferForMsOsExtendedPropertyDescriptor=4826,
    DsmStateCheckingIfMsOs20RegistryValuesShouldBeInstalled=4827,
    DsmStateCheckingIfMSOSExtendedPropertyDescriptorShouldBeQueried=4828,
    DsmStateFreeingBufferAllocatedForMSOSExtendedProperty=4829,
    DsmStateGettingMSOSExtendedPropertyDescriptor=4830,
    DsmStateGettingMSOSExtendedPropertyDescriptorHeader=4831,
    DsmStateInstallingMsOs20RegistryValues=4832,
    DsmStateSettingExtPropDescSemaphoreForMsOs2=4833,
    DsmStateSettingExtPropDescSemaphoreRegistryFlag=4834,
    DsmStateSignalingPnpEventForMSOSExtInstall=4835,
    DsmStateValidatingMSOSExtendedPropertyDescriptor=4836,
    DsmStateValidatingMSOSExtendedPropertyDescriptorHeader=4837,
    DsmStateWaitingForInstallMSOSExt=4838,
    DsmStateWritingCustomPropertiesInRegistry=4839,
    DsmStateCheckingIfLTMShouldBeEnabled=4840,
    DsmStateCheckingIfSetIsochDelayShouldBeSkipped=4841,
    DsmStateCheckingIfSetSelShouldBeSkipped=4842,
    DsmStateEnablingLTM=4843,
    DsmStateReturningOperationFailureInSettingLPMValues=4844,
    DsmStateReturningOperationSuccessInSettingLPMValues=4845,
    DsmStateSettingSEL=4846,
    DsmStateSetttingIsochDelay=4847,
    DsmStateCheckingIfEnableU1NeedsToBeUpdated=4848,
    DsmStateCheckingIfEnableU2NeedsToBeUpdated=4849,
    DsmStateCheckingIfEndpointsNeedToBeConfiguredAfterDecreasingExitLatency=4850,
    DsmStateCheckingIfEndpointsNeedToBeProgrammedAfterIncreasingLatency=4851,
    DsmStateCheckingIfEndpointsToBeDisabled=4852,
    DsmStateCheckingIfEndpointsToBeDisabledOnDetach=4853,
    DsmStateCheckingIfExitLatencyNeedsToBeDecreased=4854,
    DsmStateCheckingIfExitLatencyNeedsToBeIncreased=4855,
    DsmStateCheckingIfU1TimeoutNeedsToBeChanged=4856,
    DsmStateCheckingIfU2TimeoutNeedsToBeChanged=4857,
    DsmStateComputingU1U2TimeoutsAndExitLatency=4858,
    DsmStateDisablingEndpointsOnConfigFailure=4859,
    DsmStateDisablingEndpointsOnConfigFailureOnDetach=4860,
    DsmStateDisablingU1=4861,
    DsmStateDisablingU1U2OnExitLatencyTooLargeError=4862,
    DsmStateDisablingU2=4863,
    DsmStateEnablingU1=4864,
    DsmStateEnablingU2=4865,
    DsmStateInitializingU1U2Flags=4866,
    DsmStateProgrammingEndpointsInControllerAfterDecreasingExitLatency=4867,
    DsmStateProgrammingEndpointsInControllerAfterIncreasingExitLatency=4868,
    DsmStateQueuingSetU1TimeoutToPsm=4869,
    DsmStateQueuingSetU2TimeoutToPsm=4870,
    DsmStateReturningOperationFailureInUpdatingLPMValues=4871,
    DsmStateReturningOperationSuccessInUpdatingLPMValues=4872,
    DsmStateReturningPortDetachDeviceInUpdatingLPMValues=4873,
    DsmStateUpdatingDeviceExitLatencyInTheControllerAfterDecreasingExitLatency=4874,
    DsmStateUpdatingDeviceExitLatencyInTheControllerAfterIncreasingExitLatency=4875,
    DsmStateUpdatingDeviceStatusToU1Disabled=4876,
    DsmStateUpdatingDeviceStatusToU1Enabled=4877,
    DsmStateUpdatingDeviceStatusToU2Disabled=4878,
    DsmStateUpdatingDeviceStatusToU2Enabled=4879,
    DsmStateComputingLPMTimeoutValuesInUnconfigured=4880,
    DsmStateQueuingSetU2TimeoutToPsmForEnumeratedDevice=4881,
    DsmStateReturningOperationFailureInUpdatingLPMValuesInUnconfigured=4882,
    DsmStateReturningOperationSuccessInUpdatingLPMValuesInUnconfigured=4883,
    DsmStateGettingRemoteWakeCapability=4884,
    DsmStateReturningOperationFailureInGettingRemoteWakeCap=4885,
    DsmStateReturningOperationSuccessInGettingRemoteWakeCap=4886,
    DsmStateValidatingInterfaceStatusForRemoteWake=4887,
    DsmStateCheckingIf20LPMShouldBeEnabled=4888,
    DsmStateReturningOperationSuccessInSetting20LPMValues=4889,
    DsmStateWaitingFor20LpmUpdateIoctlToComplete=4890
};

union _STATE// Size=0x4 (Id=707)
{
    unsigned long StateAsUlong;// Offset=0x0 Size=0x4
    enum _GENERIC_STATE GenericState;// Offset=0x0 Size=0x4
    enum _HSM_STATE HsmState;// Offset=0x0 Size=0x4
    enum _PSM20_STATE Psm20State;// Offset=0x0 Size=0x4
    enum _PSM30_STATE Psm30State;// Offset=0x0 Size=0x4
    enum _DSM_STATE DsmState;// Offset=0x0 Size=0x4
};

struct _STATE_LOG// Size=0xc (Id=547)
{
    union _EVENT Event;// Offset=0x0 Size=0x4
    union _STATE State;// Offset=0x4 Size=0x4
    unsigned long Depth;// Offset=0x8 Size=0x4
};

struct _EVENT_QUEUE// Size=0x44 (Id=606)
{
    union _EVENT Events[16];// Offset=0x0 Size=0x40
    unsigned char QueueHead;// Offset=0x40 Size=0x1
    unsigned char QueueTail;// Offset=0x41 Size=0x1
};

struct _SM_CONTEXT// Size=0x420 (Id=436)
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
    unsigned char Deferred;// Offset=0x41a Size=0x1
};

union _HSM_MUX_FLAGS// Size=0x4 (Id=617)
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

struct _HSM_MUX_CONTEXT// Size=0x50 (Id=514)
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

struct _USB_RESET_FLAGS// Size=0x4 (Id=535)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long ControllerProgrammingLost:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long DevicePowerCycled:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
    };
};

struct _USB_DEVICE_DESCRIPTOR// Size=0x12 (Id=560)
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

union _PARENT_HUB_FLAGS// Size=0x4 (Id=709)
{
    unsigned long AsUlong32;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long DisableLpmForAllDownstreamDevices:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long HubIsHighSpeedCapable:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long DisableUpdateMaxExitLatency:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long DisableU1:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
    };
};

struct _HUB_INFO_FROM_PARENT// Size=0x48 (Id=430)
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

struct _UNICODE_STRING// Size=0x10 (Id=7)
{
    unsigned short Length;// Offset=0x0 Size=0x2
    unsigned short MaximumLength;// Offset=0x2 Size=0x2
    wchar_t * Buffer;// Offset=0x8 Size=0x8
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

struct _GENERIC_DROM_HEADER// Size=0x10 (Id=551)
{
    unsigned char Reserved1[13];// Offset=0x0 Size=0xd
    unsigned char Version;// Offset=0xd Size=0x1
    struct // Size=0x2 (Id=0)
    {
        unsigned short Length:12;// Offset=0xe Size=0x2 BitOffset=0x0 BitSize=0xc
        unsigned short Reserved2:4;// Offset=0xe Size=0x2 BitOffset=0xc BitSize=0x4
    };
};

union _OPCODE_STATUS// Size=0x4 (Id=623)
{
    unsigned long AsUlong32;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long Opcode:16;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x10
        unsigned long Reserved:8;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x8
        unsigned long Status:6;// Offset=0x0 Size=0x4 BitOffset=0x18 BitSize=0x6
        unsigned long Error:1;// Offset=0x0 Size=0x4 BitOffset=0x1e BitSize=0x1
        unsigned long OperationValid:1;// Offset=0x0 Size=0x4 BitOffset=0x1f BitSize=0x1
    };
};

union _DROM_READ_METADATA// Size=0x4 (Id=698)
{
    unsigned long AsUlong32;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long Reserved1:2;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x2
        unsigned long Address:13;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0xd
        unsigned long ReadSize:5;// Offset=0x0 Size=0x4 BitOffset=0xf BitSize=0x5
        unsigned long Reserved2:12;// Offset=0x0 Size=0x4 BitOffset=0x14 BitSize=0xc
    };
};

struct _HUB_FDO_CONTEXT// Size=0xad0 (Id=351)
{
    struct _USBHUB3_TRIAGE_INFO * Usbhub3TriageInfo;// Offset=0x0 Size=0x8
    unsigned long Reserved;// Offset=0x8 Size=0x4
    unsigned char QueryPortStatusForDebugging;// Offset=0xc Size=0x1
    struct WDFDEVICE__ * HubFdoDevice;// Offset=0x10 Size=0x8
    struct _DEVICE_OBJECT * HubPdo;// Offset=0x18 Size=0x8
    struct WDFIOTARGET__ * RootHubIoTarget;// Offset=0x20 Size=0x8
    struct _HUB_INFORMATION HubInformation;// Offset=0x28 Size=0x80
    struct _UCX_CONTROLLER_INFO ControllerInfo;// Offset=0xa8 Size=0x20
    unsigned char ControllerOnHighLatencyMedium;// Offset=0xc8 Size=0x1
    unsigned char ControllerIsMicrosoftMausbhost;// Offset=0xc9 Size=0x1
    struct _HUB_PARENT_INTERFACE HubParentInterface;// Offset=0xd0 Size=0x88
    struct _HUB_CONTROLLERSTACK_INTERFACE HubControllerStackInterface;// Offset=0x158 Size=0x100
    struct _USB_BUS_INTERFACE_USBDI_V3 UsbdBusInterface;// Offset=0x258 Size=0x60
    struct _DEVICE_CAPABILITIES DeviceCapabilities;// Offset=0x2b8 Size=0x40
    union _CONTROLLER_FLAGS ControllerFlags;// Offset=0x2f8 Size=0x4
    struct _GUID ControllerSessionActivityId;// Offset=0x2fc Size=0x10
    union _USB_HUB_STATUS_AND_CHANGE HubStatusAndChange;// Offset=0x30c Size=0x4
    union _USB_HUB_STATUS_AND_CHANGE OldHubStatusAndChange;// Offset=0x310 Size=0x4
    enum _USB_HUB_FEATURE_SELECTOR CurrentFeatureSelector;// Offset=0x314 Size=0x4
    enum _HSM_EVENT CurrentHubChangeEvent;// Offset=0x318 Size=0x4
    union _USB_DEVICE_STATUS HubDeviceStatus;// Offset=0x31c Size=0x2
    struct _CONTROL_REQUEST HubControlRequest;// Offset=0x320 Size=0xa8
    struct _HUB_INTERRUPT_REQUEST StatusChangeInterruptRequest;// Offset=0x3c8 Size=0xb8
    struct _KEVENT PnPPowerEvent;// Offset=0x480 Size=0x18
    long PnPPowerStatus;// Offset=0x498 Size=0x4
    union _HUB_DESCRIPTOR HubDescriptor;// Offset=0x49c Size=0x47
    struct _USB_CONFIGURATION_DESCRIPTOR * ConfigurationDescriptor;// Offset=0x4e8 Size=0x8
    struct _SM_CONTEXT HsmContext;// Offset=0x4f0 Size=0x420
    struct _HSM_MUX_CONTEXT MuxContext;// Offset=0x910 Size=0x50
    struct WDFQUEUE__ * DeviceControlQueue;// Offset=0x960 Size=0x8
    struct _USB_RESET_FLAGS ResetFlags;// Offset=0x968 Size=0x4
    struct _GUID CurrentActivityId;// Offset=0x96c Size=0x10
    struct _LIST_ENTRY ListEntry;// Offset=0x980 Size=0x10
    struct _HUB_INFO_FROM_PARENT HubInfoFromParent;// Offset=0x990 Size=0x48
    struct RECORDER_LOG__ * IfrLog;// Offset=0x9d8 Size=0x8
    struct WDFREQUEST__ * PdoGetPortStatusRequest;// Offset=0x9e0 Size=0x8
    struct WDFWMIINSTANCE__ * WmiNotificationHandle;// Offset=0x9e8 Size=0x8
    struct _UNICODE_STRING HubSymbolicLinkNameUnicode;// Offset=0x9f0 Size=0x10
    void * SelectiveSuspendSetting;// Offset=0xa00 Size=0x8
    void * SelectiveSuspendTimeoutPowerSetting;// Offset=0xa08 Size=0x8
    unsigned long CurrentIdleTimeout;// Offset=0xa10 Size=0x4
    struct _PORT_CONTEXT * GetPortStatusTargetPortContext;// Offset=0xa18 Size=0x8
    unsigned long HardwareVerifierFlags;// Offset=0xa20 Size=0x4
    unsigned long HubFailureMsgId;// Offset=0xa24 Size=0x4
    enum _WDF_POWER_DEVICE_STATE CurrentWdfPowerDeviceState;// Offset=0xa28 Size=0x4
    unsigned short OldwTotalLength;// Offset=0xa2c Size=0x2
    struct POHANDLE__ * PoHandle;// Offset=0xa30 Size=0x8
    struct SS_COMPONENT__ * SleepstudySelectiveSuspendUnavailable;// Offset=0xa38 Size=0x8
    struct SS_COMPONENT__ * SleepstudySelectiveSuspendDisabled;// Offset=0xa40 Size=0x8
    struct SS_COMPONENT__ * SleepstudySelectiveSuspendDisabledByUser;// Offset=0xa48 Size=0x8
    void * IdleResiliencyHandle;// Offset=0xa50 Size=0x8
    unsigned long IdleResiliencyState;// Offset=0xa58 Size=0x4
    struct WDFDEVICE__ * FirmwareUpdateDevice;// Offset=0xa60 Size=0x8
    struct _GENERIC_DROM_HEADER Usb4DromHeader;// Offset=0xa68 Size=0x10
    unsigned long Usb4DromSizeInDwords;// Offset=0xa78 Size=0x4
    unsigned long Usb4DromSize;// Offset=0xa7c Size=0x4
    unsigned char * Usb4DromBuffer;// Offset=0xa80 Size=0x8
    unsigned long Usb4DromReadIndex;// Offset=0xa88 Size=0x4
    unsigned long GRMailboxIndex;// Offset=0xa8c Size=0x4
    union _OPCODE_STATUS GRMailboxOpcodeStatus;// Offset=0xa90 Size=0x4
    union _DROM_READ_METADATA GRMailBoxMetaData;// Offset=0xa94 Size=0x4
    long long GRMailboxReadStatusStartTime;// Offset=0xa98 Size=0x8
    unsigned short FwUpdateIdVendor;// Offset=0xaa0 Size=0x2
    unsigned short FwUpdateIdProduct;// Offset=0xaa2 Size=0x2
    unsigned short FwUpdateBcdProductFWRevision;// Offset=0xaa4 Size=0x2
    unsigned short FwUpdateProductHWRevision;// Offset=0xaa6 Size=0x2
    unsigned char FwUpdateValid;// Offset=0xaa8 Size=0x1
    struct WDFCOLLECTION__ * Usb4HostCollection;// Offset=0xab0 Size=0x8
    struct WDFWAITLOCK__ * Usb4HostCollectionLock;// Offset=0xab8 Size=0x8
    void * PnpInterfaceNotificationHandle;// Offset=0xac0 Size=0x8
    struct WDFSTRING__ * Usb4HostNameString;// Offset=0xac8 Size=0x8
};
