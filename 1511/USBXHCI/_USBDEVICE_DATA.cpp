enum _USB_DEVICE_SPEED
{
    UsbLowSpeed=0,
    UsbFullSpeed=1,
    UsbHighSpeed=2,
    UsbSuperSpeed=3
};

struct _USB_DEVICE_PORT_PATH// Size=0x24 (Id=421)
{
    unsigned long Size;// Offset=0x0 Size=0x4
    unsigned long PortPathDepth;// Offset=0x4 Size=0x4
    unsigned long TTHubDepth;// Offset=0x8 Size=0x4
    unsigned long PortPath[6];// Offset=0xc Size=0x18
};

struct _UCXUSBDEVICE_INFO// Size=0x38 (Id=642)
{
    unsigned long Size;// Offset=0x0 Size=0x4
    enum _USB_DEVICE_SPEED DeviceSpeed;// Offset=0x4 Size=0x4
    struct UCXUSBDEVICE__ * TtHub;// Offset=0x8 Size=0x8
    struct _USB_DEVICE_PORT_PATH PortPath;// Offset=0x10 Size=0x24
};

struct _LIST_ENTRY// Size=0x10 (Id=20)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _USB_DEVICE_DESCRIPTOR// Size=0x12 (Id=356)
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

enum _CrbStates
{
    CrbState_Waiting=0,
    CrbState_Pending=1,
    CrbState_PendingCompletion=2
};

struct _NORMAL_TRB// Size=0x10 (Id=631)
{
    unsigned long long DataBufferPointer;// Offset=0x0 Size=0x8
    struct // Size=0x8 (Id=0)
    {
        unsigned long TransferLength:17;// Offset=0x8 Size=0x4 BitOffset=0x0 BitSize=0x11
        unsigned long TDSize:5;// Offset=0x8 Size=0x4 BitOffset=0x11 BitSize=0x5
        unsigned long InterrupterTarget:10;// Offset=0x8 Size=0x4 BitOffset=0x16 BitSize=0xa
        unsigned long CycleBit:1;// Offset=0xc Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long EvaluateNextTrb:1;// Offset=0xc Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long InterruptOnShortPacket:1;// Offset=0xc Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long NoSnoop:1;// Offset=0xc Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long ChainBit:1;// Offset=0xc Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long InterruptOnCompletion:1;// Offset=0xc Size=0x4 BitOffset=0x5 BitSize=0x1
        unsigned long ImmediateData:1;// Offset=0xc Size=0x4 BitOffset=0x6 BitSize=0x1
        unsigned long Reserved0:2;// Offset=0xc Size=0x4 BitOffset=0x7 BitSize=0x2
        unsigned long BlockEventInterrupt:1;// Offset=0xc Size=0x4 BitOffset=0x9 BitSize=0x1
        unsigned long Type:6;// Offset=0xc Size=0x4 BitOffset=0xa BitSize=0x6
        unsigned long Reserved1:16;// Offset=0xc Size=0x4 BitOffset=0x10 BitSize=0x10
    };
};

struct _SETUP_STAGE_TRB// Size=0x10 (Id=517)
{
    struct // Size=0x10 (Id=0)
    {
        unsigned long bmRequestType:8;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x8
        unsigned long bRequest:8;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x8
        unsigned long wValue:16;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x10
        unsigned long wIndex:16;// Offset=0x4 Size=0x4 BitOffset=0x0 BitSize=0x10
        unsigned long wLength:16;// Offset=0x4 Size=0x4 BitOffset=0x10 BitSize=0x10
        unsigned long TransferLength:17;// Offset=0x8 Size=0x4 BitOffset=0x0 BitSize=0x11
        unsigned long Reserved0:5;// Offset=0x8 Size=0x4 BitOffset=0x11 BitSize=0x5
        unsigned long InterrupterTarget:10;// Offset=0x8 Size=0x4 BitOffset=0x16 BitSize=0xa
        unsigned long CycleBit:1;// Offset=0xc Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long Reserved1:4;// Offset=0xc Size=0x4 BitOffset=0x1 BitSize=0x4
        unsigned long InterruptOnCompletion:1;// Offset=0xc Size=0x4 BitOffset=0x5 BitSize=0x1
        unsigned long ImmediateData:1;// Offset=0xc Size=0x4 BitOffset=0x6 BitSize=0x1
        unsigned long Reserved2:3;// Offset=0xc Size=0x4 BitOffset=0x7 BitSize=0x3
        unsigned long Type:6;// Offset=0xc Size=0x4 BitOffset=0xa BitSize=0x6
        unsigned long TransferType:2;// Offset=0xc Size=0x4 BitOffset=0x10 BitSize=0x2
        unsigned long Reserved3:14;// Offset=0xc Size=0x4 BitOffset=0x12 BitSize=0xe
    };
};

struct _DATA_STAGE_TRB// Size=0x10 (Id=609)
{
    unsigned long long DataBufferPointer;// Offset=0x0 Size=0x8
    struct // Size=0x8 (Id=0)
    {
        unsigned long TransferLength:17;// Offset=0x8 Size=0x4 BitOffset=0x0 BitSize=0x11
        unsigned long TDSize:5;// Offset=0x8 Size=0x4 BitOffset=0x11 BitSize=0x5
        unsigned long InterrupterTarget:10;// Offset=0x8 Size=0x4 BitOffset=0x16 BitSize=0xa
        unsigned long CycleBit:1;// Offset=0xc Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long EvaluateNextTrb:1;// Offset=0xc Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long InterruptOnShortPacket:1;// Offset=0xc Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long NoSnoop:1;// Offset=0xc Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long ChainBit:1;// Offset=0xc Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long InterruptOnCompletion:1;// Offset=0xc Size=0x4 BitOffset=0x5 BitSize=0x1
        unsigned long ImmediateData:1;// Offset=0xc Size=0x4 BitOffset=0x6 BitSize=0x1
        unsigned long Reserved0:3;// Offset=0xc Size=0x4 BitOffset=0x7 BitSize=0x3
        unsigned long Type:6;// Offset=0xc Size=0x4 BitOffset=0xa BitSize=0x6
        unsigned long Direction:1;// Offset=0xc Size=0x4 BitOffset=0x10 BitSize=0x1
        unsigned long Reserved1:15;// Offset=0xc Size=0x4 BitOffset=0x11 BitSize=0xf
    };
};

struct _STATUS_STAGE_TRB// Size=0x10 (Id=710)
{
    unsigned long long Reserved0;// Offset=0x0 Size=0x8
    struct // Size=0x8 (Id=0)
    {
        unsigned long Reserved1:22;// Offset=0x8 Size=0x4 BitOffset=0x0 BitSize=0x16
        unsigned long InterrupterTarget:10;// Offset=0x8 Size=0x4 BitOffset=0x16 BitSize=0xa
        unsigned long CycleBit:1;// Offset=0xc Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long EvaluateNextTrb:1;// Offset=0xc Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long Reserved2:2;// Offset=0xc Size=0x4 BitOffset=0x2 BitSize=0x2
        unsigned long ChainBit:1;// Offset=0xc Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long InterruptOnCompletion:1;// Offset=0xc Size=0x4 BitOffset=0x5 BitSize=0x1
        unsigned long Reserved3:4;// Offset=0xc Size=0x4 BitOffset=0x6 BitSize=0x4
        unsigned long Type:6;// Offset=0xc Size=0x4 BitOffset=0xa BitSize=0x6
        unsigned long Direction:1;// Offset=0xc Size=0x4 BitOffset=0x10 BitSize=0x1
        unsigned long Reserved:15;// Offset=0xc Size=0x4 BitOffset=0x11 BitSize=0xf
    };
};

struct _ISOCH_TRB// Size=0x10 (Id=493)
{
    unsigned long long DataBufferPointer;// Offset=0x0 Size=0x8
    struct // Size=0x8 (Id=0)
    {
        unsigned long TransferLength:17;// Offset=0x8 Size=0x4 BitOffset=0x0 BitSize=0x11
        unsigned long TDSize:5;// Offset=0x8 Size=0x4 BitOffset=0x11 BitSize=0x5
        unsigned long InterrupterTarget:10;// Offset=0x8 Size=0x4 BitOffset=0x16 BitSize=0xa
        unsigned long CycleBit:1;// Offset=0xc Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long EvaluateNextTrb:1;// Offset=0xc Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long InterruptOnShortPacket:1;// Offset=0xc Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long NoSnoop:1;// Offset=0xc Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long ChainBit:1;// Offset=0xc Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long InterruptOnCompletion:1;// Offset=0xc Size=0x4 BitOffset=0x5 BitSize=0x1
        unsigned long ImmediateData:1;// Offset=0xc Size=0x4 BitOffset=0x6 BitSize=0x1
        unsigned long TransferBurstCount:2;// Offset=0xc Size=0x4 BitOffset=0x7 BitSize=0x2
        unsigned long BlockEventInterrupt:1;// Offset=0xc Size=0x4 BitOffset=0x9 BitSize=0x1
        unsigned long Type:6;// Offset=0xc Size=0x4 BitOffset=0xa BitSize=0x6
        unsigned long TransferLastBurstPacketCount:4;// Offset=0xc Size=0x4 BitOffset=0x10 BitSize=0x4
        unsigned long FrameId:11;// Offset=0xc Size=0x4 BitOffset=0x14 BitSize=0xb
        unsigned long StartIsochASAP:1;// Offset=0xc Size=0x4 BitOffset=0x1f BitSize=0x1
    };
};

struct _unnamed_28// Size=0x8 (Id=28)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=58)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_28 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _TRANSFER_EVENT_TRB// Size=0x10 (Id=526)
{
    union _LARGE_INTEGER Pointer;// Offset=0x0 Size=0x8
    struct // Size=0x8 (Id=0)
    {
        unsigned long TransferLength:24;// Offset=0x8 Size=0x4 BitOffset=0x0 BitSize=0x18
        unsigned long CompletionCode:8;// Offset=0x8 Size=0x4 BitOffset=0x18 BitSize=0x8
        unsigned long CycleBit:1;// Offset=0xc Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long Reserved0:1;// Offset=0xc Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long EventData:1;// Offset=0xc Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long Reserved1:7;// Offset=0xc Size=0x4 BitOffset=0x3 BitSize=0x7
        unsigned long Type:6;// Offset=0xc Size=0x4 BitOffset=0xa BitSize=0x6
        unsigned long EndpointId:5;// Offset=0xc Size=0x4 BitOffset=0x10 BitSize=0x5
        unsigned long Reserved2:3;// Offset=0xc Size=0x4 BitOffset=0x15 BitSize=0x3
        unsigned long SlotId:8;// Offset=0xc Size=0x4 BitOffset=0x18 BitSize=0x8
    };
};

struct _COMMAND_COMPLETION_EVENT_TRB// Size=0x10 (Id=601)
{
    unsigned long long CommandPointer;// Offset=0x0 Size=0x8
    struct // Size=0x8 (Id=0)
    {
        unsigned long CompletionParameter:24;// Offset=0x8 Size=0x4 BitOffset=0x0 BitSize=0x18
        unsigned long CompletionCode:8;// Offset=0x8 Size=0x4 BitOffset=0x18 BitSize=0x8
        unsigned long CycleBit:1;// Offset=0xc Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long Reserved1:9;// Offset=0xc Size=0x4 BitOffset=0x1 BitSize=0x9
        unsigned long Type:6;// Offset=0xc Size=0x4 BitOffset=0xa BitSize=0x6
        unsigned long VirtualFunctionId:8;// Offset=0xc Size=0x4 BitOffset=0x10 BitSize=0x8
        unsigned long SlotId:8;// Offset=0xc Size=0x4 BitOffset=0x18 BitSize=0x8
    };
};

struct _PORT_STATUS_CHANGE_EVENT_TRB// Size=0x10 (Id=681)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long Reserved0:24;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x18
        unsigned long PortId:8;// Offset=0x0 Size=0x4 BitOffset=0x18 BitSize=0x8
    };
    unsigned long Reserved1;// Offset=0x4 Size=0x4
    struct // Size=0x8 (Id=0)
    {
        unsigned long Reserved2:24;// Offset=0x8 Size=0x4 BitOffset=0x0 BitSize=0x18
        unsigned long CompletionCode:8;// Offset=0x8 Size=0x4 BitOffset=0x18 BitSize=0x8
        unsigned long CycleBit:1;// Offset=0xc Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long Reserved3:9;// Offset=0xc Size=0x4 BitOffset=0x1 BitSize=0x9
        unsigned long Type:6;// Offset=0xc Size=0x4 BitOffset=0xa BitSize=0x6
        unsigned long Reserved4:16;// Offset=0xc Size=0x4 BitOffset=0x10 BitSize=0x10
    };
};

struct _HOST_CONTROLLER_EVENT_TRB// Size=0x10 (Id=564)
{
    unsigned long long Reserved0;// Offset=0x0 Size=0x8
    struct // Size=0x8 (Id=0)
    {
        unsigned long Reserved1:24;// Offset=0x8 Size=0x4 BitOffset=0x0 BitSize=0x18
        unsigned long CompletionCode:8;// Offset=0x8 Size=0x4 BitOffset=0x18 BitSize=0x8
        unsigned long CycleBit:1;// Offset=0xc Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long Reserved2:9;// Offset=0xc Size=0x4 BitOffset=0x1 BitSize=0x9
        unsigned long Type:6;// Offset=0xc Size=0x4 BitOffset=0xa BitSize=0x6
        unsigned long Reserved3:16;// Offset=0xc Size=0x4 BitOffset=0x10 BitSize=0x10
    };
};

struct _DEVICE_NOTIFICATION_EVENT_TRB// Size=0x10 (Id=781)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long Reserved0:4;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x4
        unsigned long NotificationType:4;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x4
        unsigned long DeviceNotificationDataLo:24;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x18
    };
    unsigned long DeviceNotificationDataHi;// Offset=0x4 Size=0x4
    struct // Size=0x8 (Id=0)
    {
        unsigned long Reserved1:24;// Offset=0x8 Size=0x4 BitOffset=0x0 BitSize=0x18
        unsigned long CompletionCode:8;// Offset=0x8 Size=0x4 BitOffset=0x18 BitSize=0x8
        unsigned long CycleBit:1;// Offset=0xc Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long Reserved2:9;// Offset=0xc Size=0x4 BitOffset=0x1 BitSize=0x9
        unsigned long Type:6;// Offset=0xc Size=0x4 BitOffset=0xa BitSize=0x6
        unsigned long Reserved3:8;// Offset=0xc Size=0x4 BitOffset=0x10 BitSize=0x8
        unsigned long SlotId:8;// Offset=0xc Size=0x4 BitOffset=0x18 BitSize=0x8
    };
};

struct _DEVICE_NOTIFICATION_EVENT_FUNCTION_WAKE_TRB// Size=0x10 (Id=479)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long Reserved0:4;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x4
        unsigned long NotificationType:4;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x4
        unsigned long Interface:8;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x8
        unsigned long Reserved1:16;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x10
    };
    unsigned long Reserved2;// Offset=0x4 Size=0x4
    struct // Size=0x8 (Id=0)
    {
        unsigned long Reserved3:24;// Offset=0x8 Size=0x4 BitOffset=0x0 BitSize=0x18
        unsigned long CompletionCode:8;// Offset=0x8 Size=0x4 BitOffset=0x18 BitSize=0x8
        unsigned long CycleBit:1;// Offset=0xc Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long Reserved4:9;// Offset=0xc Size=0x4 BitOffset=0x1 BitSize=0x9
        unsigned long Type:6;// Offset=0xc Size=0x4 BitOffset=0xa BitSize=0x6
        unsigned long Reserved5:8;// Offset=0xc Size=0x4 BitOffset=0x10 BitSize=0x8
        unsigned long SlotId:8;// Offset=0xc Size=0x4 BitOffset=0x18 BitSize=0x8
    };
};

struct _NOOP_COMMAND_TRB// Size=0x10 (Id=674)
{
    unsigned long Reserved0[3];// Offset=0x0 Size=0xc
    struct // Size=0x4 (Id=0)
    {
        unsigned long CycleBit:1;// Offset=0xc Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long Reserved1:9;// Offset=0xc Size=0x4 BitOffset=0x1 BitSize=0x9
        unsigned long Type:6;// Offset=0xc Size=0x4 BitOffset=0xa BitSize=0x6
        unsigned long Reserved2:16;// Offset=0xc Size=0x4 BitOffset=0x10 BitSize=0x10
    };
};

struct _ENABLE_SLOT_COMMAND_TRB// Size=0x10 (Id=510)
{
    unsigned long Reserved0[3];// Offset=0x0 Size=0xc
    struct // Size=0x4 (Id=0)
    {
        unsigned long CycleBit:1;// Offset=0xc Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long Reserved1:9;// Offset=0xc Size=0x4 BitOffset=0x1 BitSize=0x9
        unsigned long Type:6;// Offset=0xc Size=0x4 BitOffset=0xa BitSize=0x6
        unsigned long Reserved2:16;// Offset=0xc Size=0x4 BitOffset=0x10 BitSize=0x10
    };
};

struct _DISABLE_SLOT_COMMAND_TRB// Size=0x10 (Id=548)
{
    unsigned long Reserved0[3];// Offset=0x0 Size=0xc
    struct // Size=0x4 (Id=0)
    {
        unsigned long CycleBit:1;// Offset=0xc Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long Reserved1:9;// Offset=0xc Size=0x4 BitOffset=0x1 BitSize=0x9
        unsigned long Type:6;// Offset=0xc Size=0x4 BitOffset=0xa BitSize=0x6
        unsigned long Reserved2:8;// Offset=0xc Size=0x4 BitOffset=0x10 BitSize=0x8
        unsigned long SlotId:8;// Offset=0xc Size=0x4 BitOffset=0x18 BitSize=0x8
    };
};

struct _ADDRESS_DEVICE_COMMAND_TRB// Size=0x10 (Id=594)
{
    unsigned long long InputContextPointer;// Offset=0x0 Size=0x8
    unsigned long Reserved0;// Offset=0x8 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long CycleBit:1;// Offset=0xc Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long Reserved1:8;// Offset=0xc Size=0x4 BitOffset=0x1 BitSize=0x8
        unsigned long BlockSetAddressRequest:1;// Offset=0xc Size=0x4 BitOffset=0x9 BitSize=0x1
        unsigned long Type:6;// Offset=0xc Size=0x4 BitOffset=0xa BitSize=0x6
        unsigned long Reserved2:8;// Offset=0xc Size=0x4 BitOffset=0x10 BitSize=0x8
        unsigned long SlotId:8;// Offset=0xc Size=0x4 BitOffset=0x18 BitSize=0x8
    };
};

struct _CONFIGURE_ENDPOINT_COMMAND_TRB// Size=0x10 (Id=524)
{
    unsigned long long InputContextPointer;// Offset=0x0 Size=0x8
    unsigned long Reserved0;// Offset=0x8 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long CycleBit:1;// Offset=0xc Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long Reserved1:8;// Offset=0xc Size=0x4 BitOffset=0x1 BitSize=0x8
        unsigned long Deconfigure:1;// Offset=0xc Size=0x4 BitOffset=0x9 BitSize=0x1
        unsigned long Type:6;// Offset=0xc Size=0x4 BitOffset=0xa BitSize=0x6
        unsigned long Reserved2:8;// Offset=0xc Size=0x4 BitOffset=0x10 BitSize=0x8
        unsigned long SlotId:8;// Offset=0xc Size=0x4 BitOffset=0x18 BitSize=0x8
    };
};

struct _EVALUATE_CONTEXT_COMMAND_TRB// Size=0x10 (Id=559)
{
    unsigned long long InputContextPointer;// Offset=0x0 Size=0x8
    unsigned long Reserved0;// Offset=0x8 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long CycleBit:1;// Offset=0xc Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long Reserved1:9;// Offset=0xc Size=0x4 BitOffset=0x1 BitSize=0x9
        unsigned long Type:6;// Offset=0xc Size=0x4 BitOffset=0xa BitSize=0x6
        unsigned long Reserved2:8;// Offset=0xc Size=0x4 BitOffset=0x10 BitSize=0x8
        unsigned long SlotId:8;// Offset=0xc Size=0x4 BitOffset=0x18 BitSize=0x8
    };
};

struct _RESET_ENDPOINT_COMMAND_TRB// Size=0x10 (Id=536)
{
    unsigned long Reserved0[3];// Offset=0x0 Size=0xc
    struct // Size=0x4 (Id=0)
    {
        unsigned long CycleBit:1;// Offset=0xc Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long Reserved1:8;// Offset=0xc Size=0x4 BitOffset=0x1 BitSize=0x8
        unsigned long TransferStatePreserve:1;// Offset=0xc Size=0x4 BitOffset=0x9 BitSize=0x1
        unsigned long Type:6;// Offset=0xc Size=0x4 BitOffset=0xa BitSize=0x6
        unsigned long EndpointId:5;// Offset=0xc Size=0x4 BitOffset=0x10 BitSize=0x5
        unsigned long Reserved2:3;// Offset=0xc Size=0x4 BitOffset=0x15 BitSize=0x3
        unsigned long SlotId:8;// Offset=0xc Size=0x4 BitOffset=0x18 BitSize=0x8
    };
};

struct _STOP_ENDPOINT_COMMAND_TRB// Size=0x10 (Id=491)
{
    unsigned long Reserved0[3];// Offset=0x0 Size=0xc
    struct // Size=0x4 (Id=0)
    {
        unsigned long CycleBit:1;// Offset=0xc Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long Reserved1:9;// Offset=0xc Size=0x4 BitOffset=0x1 BitSize=0x9
        unsigned long Type:6;// Offset=0xc Size=0x4 BitOffset=0xa BitSize=0x6
        unsigned long EndpointId:5;// Offset=0xc Size=0x4 BitOffset=0x10 BitSize=0x5
        unsigned long Reserved2:2;// Offset=0xc Size=0x4 BitOffset=0x15 BitSize=0x2
        unsigned long Suspend:1;// Offset=0xc Size=0x4 BitOffset=0x17 BitSize=0x1
        unsigned long SlotId:8;// Offset=0xc Size=0x4 BitOffset=0x18 BitSize=0x8
    };
};

struct _SET_DEQUEUE_POINTER_COMMAND_TRB// Size=0x10 (Id=486)
{
    union // Size=0x8 (Id=0)
    {
        unsigned long long DequeuePointer;// Offset=0x0 Size=0x8
        struct // Size=0x10 (Id=0)
        {
            unsigned long long DequeueCycleState:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
            unsigned long long StreamContextType:3;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x3
            unsigned long long DequeuePointerLo:28;// Offset=0x0 Size=0x8 BitOffset=0x4 BitSize=0x1c
            unsigned long long DequeuePointerHi:32;// Offset=0x0 Size=0x8 BitOffset=0x20 BitSize=0x20
            unsigned long Reserved0:16;// Offset=0x8 Size=0x4 BitOffset=0x0 BitSize=0x10
            unsigned long StreamId:16;// Offset=0x8 Size=0x4 BitOffset=0x10 BitSize=0x10
            unsigned long CycleBit:1;// Offset=0xc Size=0x4 BitOffset=0x0 BitSize=0x1
            unsigned long Reserved1:9;// Offset=0xc Size=0x4 BitOffset=0x1 BitSize=0x9
            unsigned long Type:6;// Offset=0xc Size=0x4 BitOffset=0xa BitSize=0x6
            unsigned long EndpointId:5;// Offset=0xc Size=0x4 BitOffset=0x10 BitSize=0x5
            unsigned long Reserved2:3;// Offset=0xc Size=0x4 BitOffset=0x15 BitSize=0x3
            unsigned long SlotId:8;// Offset=0xc Size=0x4 BitOffset=0x18 BitSize=0x8
        };
    };
};

struct _RESET_DEVICE_COMMAND_TRB// Size=0x10 (Id=628)
{
    unsigned long Reserved0[3];// Offset=0x0 Size=0xc
    struct // Size=0x4 (Id=0)
    {
        unsigned long CycleBit:1;// Offset=0xc Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long Reserved1:9;// Offset=0xc Size=0x4 BitOffset=0x1 BitSize=0x9
        unsigned long Type:6;// Offset=0xc Size=0x4 BitOffset=0xa BitSize=0x6
        unsigned long Reserved2:8;// Offset=0xc Size=0x4 BitOffset=0x10 BitSize=0x8
        unsigned long SlotId:8;// Offset=0xc Size=0x4 BitOffset=0x18 BitSize=0x8
    };
};

struct _LINK_TRB// Size=0x10 (Id=708)
{
    unsigned long long RingSegmentPointer;// Offset=0x0 Size=0x8
    struct // Size=0x8 (Id=0)
    {
        unsigned long Reserved0:22;// Offset=0x8 Size=0x4 BitOffset=0x0 BitSize=0x16
        unsigned long InterrupterTarget:10;// Offset=0x8 Size=0x4 BitOffset=0x16 BitSize=0xa
        unsigned long CycleBit:1;// Offset=0xc Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long ToggleCycle:1;// Offset=0xc Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long Reserved1:2;// Offset=0xc Size=0x4 BitOffset=0x2 BitSize=0x2
        unsigned long ChainBit:1;// Offset=0xc Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long InterruptOnCompletion:1;// Offset=0xc Size=0x4 BitOffset=0x5 BitSize=0x1
        unsigned long Reserved2:4;// Offset=0xc Size=0x4 BitOffset=0x6 BitSize=0x4
        unsigned long Type:6;// Offset=0xc Size=0x4 BitOffset=0xa BitSize=0x6
        unsigned long Reserved3:16;// Offset=0xc Size=0x4 BitOffset=0x10 BitSize=0x10
    };
};

struct _EVENT_DATA_TRB// Size=0x10 (Id=551)
{
    unsigned long long Data;// Offset=0x0 Size=0x8
    struct // Size=0x8 (Id=0)
    {
        unsigned long Reserved0:22;// Offset=0x8 Size=0x4 BitOffset=0x0 BitSize=0x16
        unsigned long InterrupterTarget:10;// Offset=0x8 Size=0x4 BitOffset=0x16 BitSize=0xa
        unsigned long CycleBit:1;// Offset=0xc Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long EvaluateNextTrb:1;// Offset=0xc Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long Reserved1:2;// Offset=0xc Size=0x4 BitOffset=0x2 BitSize=0x2
        unsigned long ChainBit:1;// Offset=0xc Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long InterruptOnCompletion:1;// Offset=0xc Size=0x4 BitOffset=0x5 BitSize=0x1
        unsigned long Reserved2:3;// Offset=0xc Size=0x4 BitOffset=0x6 BitSize=0x3
        unsigned long BlockEventInterrupt:1;// Offset=0xc Size=0x4 BitOffset=0x9 BitSize=0x1
        unsigned long Type:6;// Offset=0xc Size=0x4 BitOffset=0xa BitSize=0x6
        unsigned long Reserved3:16;// Offset=0xc Size=0x4 BitOffset=0x10 BitSize=0x10
    };
};

struct _TRB// Size=0x10 (Id=391)
{
    union // Size=0x10 (Id=0)
    {
        struct _NORMAL_TRB Normal;// Offset=0x0 Size=0x10
        struct _SETUP_STAGE_TRB SetupStage;// Offset=0x0 Size=0x10
        struct _DATA_STAGE_TRB DataStage;// Offset=0x0 Size=0x10
        struct _STATUS_STAGE_TRB StatusStage;// Offset=0x0 Size=0x10
        struct _ISOCH_TRB Isoch;// Offset=0x0 Size=0x10
        struct _TRANSFER_EVENT_TRB TransferEvent;// Offset=0x0 Size=0x10
        struct _COMMAND_COMPLETION_EVENT_TRB CommandCompletionEvent;// Offset=0x0 Size=0x10
        struct _PORT_STATUS_CHANGE_EVENT_TRB PortStatusChangeEvent;// Offset=0x0 Size=0x10
        struct _HOST_CONTROLLER_EVENT_TRB HostControllerEvent;// Offset=0x0 Size=0x10
        struct _DEVICE_NOTIFICATION_EVENT_TRB DeviceNotificationEvent;// Offset=0x0 Size=0x10
        struct _DEVICE_NOTIFICATION_EVENT_FUNCTION_WAKE_TRB DeviceNotificationEventFunctionWake;// Offset=0x0 Size=0x10
        struct _NOOP_COMMAND_TRB NoOpCommand;// Offset=0x0 Size=0x10
        struct _ENABLE_SLOT_COMMAND_TRB EnableSlotCommand;// Offset=0x0 Size=0x10
        struct _DISABLE_SLOT_COMMAND_TRB DisableSlotCommand;// Offset=0x0 Size=0x10
        struct _ADDRESS_DEVICE_COMMAND_TRB AddressDeviceCommand;// Offset=0x0 Size=0x10
        struct _CONFIGURE_ENDPOINT_COMMAND_TRB ConfigureEndpointCommand;// Offset=0x0 Size=0x10
        struct _EVALUATE_CONTEXT_COMMAND_TRB EvaluateContextCommand;// Offset=0x0 Size=0x10
        struct _RESET_ENDPOINT_COMMAND_TRB ResetEndpointCommand;// Offset=0x0 Size=0x10
        struct _STOP_ENDPOINT_COMMAND_TRB StopEndpointCommand;// Offset=0x0 Size=0x10
        struct _SET_DEQUEUE_POINTER_COMMAND_TRB SetDequeuePointerCommand;// Offset=0x0 Size=0x10
        struct _RESET_DEVICE_COMMAND_TRB ResetDeviceCommand;// Offset=0x0 Size=0x10
        struct _LINK_TRB Link;// Offset=0x0 Size=0x10
        struct _EVENT_DATA_TRB EventData;// Offset=0x0 Size=0x10
    };
};

struct _CRB// Size=0x50 (Id=418)
{
    struct _LIST_ENTRY ListEntry;// Offset=0x0 Size=0x10
    enum _CrbStates State;// Offset=0x10 Size=0x4
    unsigned long Index;// Offset=0x14 Size=0x4
    struct _TRB Trb;// Offset=0x18 Size=0x10
    void * InputContextVA;// Offset=0x28 Size=0x8
    void  ( * CommandCallback)(struct _CRB * ,enum _CRB_COMPLETION_STATUS ,struct _TRB * );// Offset=0x30 Size=0x8
    void * ObjectHandle;// Offset=0x38 Size=0x8
    long Timeout;// Offset=0x40 Size=0x4
    unsigned char CompletionCode;// Offset=0x44 Size=0x1
    unsigned char SlotId;// Offset=0x45 Size=0x1
    unsigned short CrbFlags;// Offset=0x46 Size=0x2
    unsigned long CompletionParameter;// Offset=0x48 Size=0x4
};

struct _USBDEVICE_DATA// Size=0x230 (Id=423)
{
    struct UCXUSBDEVICE__ * UcxUsbDevice;// Offset=0x0 Size=0x8
    void * ControllerHandle;// Offset=0x8 Size=0x8
    struct _UCXUSBDEVICE_INFO UsbDeviceInfo;// Offset=0x10 Size=0x38
    struct _LIST_ENTRY DeviceListEntry;// Offset=0x48 Size=0x10
    unsigned long long EndpointListLock;// Offset=0x58 Size=0x8
    struct _LIST_ENTRY EndpointListHead;// Offset=0x60 Size=0x10
    unsigned long EndpointListCount;// Offset=0x70 Size=0x4
    struct _USB_DEVICE_DESCRIPTOR DeviceDescriptor;// Offset=0x74 Size=0x12
    unsigned char SlotEnabled;// Offset=0x86 Size=0x1
    unsigned char SlotId;// Offset=0x87 Size=0x1
    unsigned char IsHub;// Offset=0x88 Size=0x1
    unsigned long NumberOfPorts;// Offset=0x8c Size=0x4
    unsigned long NumberOfTTs;// Offset=0x90 Size=0x4
    unsigned long TTThinkTime;// Offset=0x94 Size=0x4
    unsigned long ContextEntriesInUse;// Offset=0x98 Size=0x4
    union _DOORBELL_REGISTER * DoorbellRegister;// Offset=0xa0 Size=0x8
    void * EndpointHandle[32];// Offset=0xa8 Size=0x100
    struct _BUFFER_DATA * DeviceContextBuffer;// Offset=0x1a8 Size=0x8
    struct _BUFFER_DATA * InputDeviceContextBuffer;// Offset=0x1b0 Size=0x8
    struct WDFREQUEST__ * WdfRequest;// Offset=0x1b8 Size=0x8
    unsigned char WdfRequestMustSucceed;// Offset=0x1c0 Size=0x1
    struct _CRB Crb;// Offset=0x1c8 Size=0x50
    void  ( * CrbCompletionRoutine)(void * ,long );// Offset=0x218 Size=0x8
    void * CrbCompletionContext;// Offset=0x220 Size=0x8
    unsigned char Is20LpmEnabled;// Offset=0x228 Size=0x1
    unsigned char IsRootPortResumeTimeSet;// Offset=0x229 Size=0x1
    unsigned char ConfigurationValue;// Offset=0x22a Size=0x1
    unsigned char AlternateSetting;// Offset=0x22b Size=0x1
    unsigned char InterfaceNumber;// Offset=0x22c Size=0x1
};
