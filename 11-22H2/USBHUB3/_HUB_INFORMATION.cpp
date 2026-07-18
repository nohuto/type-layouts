union _HUB_FLAGS// Size=0x4 (Id=794)
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

union _HUB_FLAGS_EXT// Size=0x4 (Id=739)
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
        unsigned long DisableU1U2OnTunneledDevices:1;// Offset=0x0 Size=0x4 BitOffset=0x7 BitSize=0x1
        unsigned long IsInternal:1;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x1
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

union _USB_20_PORT_STATUS// Size=0x2 (Id=822)
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

union _USB_30_PORT_STATUS// Size=0x2 (Id=809)
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

union _USB_PORT_STATUS// Size=0x2 (Id=674)
{
    unsigned short AsUshort16;// Offset=0x0 Size=0x2
    union _USB_20_PORT_STATUS Usb20PortStatus;// Offset=0x0 Size=0x2
    union _USB_30_PORT_STATUS Usb30PortStatus;// Offset=0x0 Size=0x2
};

union _USB_20_PORT_CHANGE// Size=0x2 (Id=802)
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

union _USB_30_PORT_CHANGE// Size=0x2 (Id=787)
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

union _USB_PORT_CHANGE// Size=0x2 (Id=742)
{
    unsigned short AsUshort16;// Offset=0x0 Size=0x2
    union _USB_20_PORT_CHANGE Usb20PortChange;// Offset=0x0 Size=0x2
    union _USB_30_PORT_CHANGE Usb30PortChange;// Offset=0x0 Size=0x2
};

union _USB_PORT_STATUS_AND_CHANGE// Size=0x4 (Id=724)
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

struct _HUBUCX_ROOTHUB_INFO// Size=0x18 (Id=832)
{
    unsigned long Size;// Offset=0x0 Size=0x4
    enum _CONTROLLER_TYPE ControllerType;// Offset=0x4 Size=0x4
    unsigned short NumberOf20Ports;// Offset=0x8 Size=0x2
    unsigned short NumberOf30Ports;// Offset=0xa Size=0x2
    unsigned short MaxU1ExitLatency;// Offset=0xc Size=0x2
    unsigned short MaxU2ExitLatency;// Offset=0xe Size=0x2
    void * UsbdInterruptPipeHandle;// Offset=0x10 Size=0x8
};

struct _HUB_INFORMATION// Size=0x80 (Id=698)
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
