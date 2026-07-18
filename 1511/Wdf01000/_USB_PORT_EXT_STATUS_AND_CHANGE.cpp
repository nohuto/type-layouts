union _USB_20_PORT_STATUS// Size=0x2 (Id=1671)
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

union _USB_30_PORT_STATUS// Size=0x2 (Id=1492)
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

union _USB_PORT_STATUS// Size=0x2 (Id=2488)
{
    unsigned short AsUshort16;// Offset=0x0 Size=0x2
    union _USB_20_PORT_STATUS Usb20PortStatus;// Offset=0x0 Size=0x2
    union _USB_30_PORT_STATUS Usb30PortStatus;// Offset=0x0 Size=0x2
};

union _USB_20_PORT_CHANGE// Size=0x2 (Id=2777)
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

union _USB_30_PORT_CHANGE// Size=0x2 (Id=2657)
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

union _USB_PORT_CHANGE// Size=0x2 (Id=1975)
{
    unsigned short AsUshort16;// Offset=0x0 Size=0x2
    union _USB_20_PORT_CHANGE Usb20PortChange;// Offset=0x0 Size=0x2
    union _USB_30_PORT_CHANGE Usb30PortChange;// Offset=0x0 Size=0x2
};

union _USB_PORT_STATUS_AND_CHANGE// Size=0x4 (Id=2186)
{
    unsigned long AsUlong32;// Offset=0x0 Size=0x4
    union _USB_PORT_STATUS PortStatus;// Offset=0x0 Size=0x2
    union _USB_PORT_CHANGE PortChange;// Offset=0x2 Size=0x2
};

union _USB_PORT_EXT_STATUS// Size=0x4 (Id=2784)
{
    unsigned long AsUlong32;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long RxSublinkSpeedID:4;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x4
        unsigned long TxSublinkSpeedID:4;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x4
        unsigned long RxLaneCount:4;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x4
        unsigned long TxLaneCount:4;// Offset=0x0 Size=0x4 BitOffset=0xc BitSize=0x4
        unsigned long Reserved:16;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x10
    };
};

union _USB_PORT_EXT_STATUS_AND_CHANGE// Size=0x8 (Id=3086)
{
    unsigned long long AsUlong64;// Offset=0x0 Size=0x8
    union _USB_PORT_STATUS_AND_CHANGE PortStatusChange;// Offset=0x0 Size=0x4
    union _USB_PORT_EXT_STATUS PortExtStatus;// Offset=0x4 Size=0x4
};
