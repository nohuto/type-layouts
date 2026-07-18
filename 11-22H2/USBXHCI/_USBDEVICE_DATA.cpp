enum _USB_DEVICE_SPEED
{
    UsbLowSpeed=0,
    UsbFullSpeed=1,
    UsbHighSpeed=2,
    UsbSuperSpeed=3
};

struct _USB_DEVICE_PORT_PATH// Size=0x24 (Id=531)
{
    unsigned long Size;// Offset=0x0 Size=0x4
    unsigned long PortPathDepth;// Offset=0x4 Size=0x4
    unsigned long TTHubDepth;// Offset=0x8 Size=0x4
    unsigned long PortPath[6];// Offset=0xc Size=0x18
};

struct _UCXUSBDEVICE_INFO// Size=0x38 (Id=742)
{
    unsigned long Size;// Offset=0x0 Size=0x4
    enum _USB_DEVICE_SPEED DeviceSpeed;// Offset=0x4 Size=0x4
    struct UCXUSBDEVICE__ * TtHub;// Offset=0x8 Size=0x8
    struct _USB_DEVICE_PORT_PATH PortPath;// Offset=0x10 Size=0x24
};

struct _LIST_ENTRY// Size=0x10 (Id=37)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _USB_DEVICE_DESCRIPTOR// Size=0x12 (Id=439)
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

struct _NORMAL_TRB// Size=0x10 (Id=616)
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

struct _SETUP_STAGE_TRB// Size=0x10 (Id=764)
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

struct _DATA_STAGE_TRB// Size=0x10 (Id=731)
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

struct _STATUS_STAGE_TRB// Size=0x10 (Id=934)
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

struct _ISOCH_TRB// Size=0x10 (Id=636)
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

struct _unnamed_45// Size=0x8 (Id=45)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=46)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_45 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _TRANSFER_EVENT_TRB// Size=0x10 (Id=594)
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

struct _COMMAND_COMPLETION_EVENT_TRB// Size=0x10 (Id=977)
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

struct _PORT_STATUS_CHANGE_EVENT_TRB// Size=0x10 (Id=956)
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

struct _HOST_CONTROLLER_EVENT_TRB// Size=0x10 (Id=809)
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

struct _DEVICE_NOTIFICATION_EVENT_TRB// Size=0x10 (Id=647)
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

struct _DEVICE_NOTIFICATION_EVENT_FUNCTION_WAKE_TRB// Size=0x10 (Id=787)
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

struct _NOOP_COMMAND_TRB// Size=0x10 (Id=779)
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

struct _ENABLE_SLOT_COMMAND_TRB// Size=0x10 (Id=904)
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

struct _DISABLE_SLOT_COMMAND_TRB// Size=0x10 (Id=802)
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

struct _ADDRESS_DEVICE_COMMAND_TRB// Size=0x10 (Id=817)
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

struct _CONFIGURE_ENDPOINT_COMMAND_TRB// Size=0x10 (Id=760)
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

struct _EVALUATE_CONTEXT_COMMAND_TRB// Size=0x10 (Id=733)
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

struct _RESET_ENDPOINT_COMMAND_TRB// Size=0x10 (Id=611)
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

struct _STOP_ENDPOINT_COMMAND_TRB// Size=0x10 (Id=745)
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

struct _SET_DEQUEUE_POINTER_COMMAND_TRB// Size=0x10 (Id=865)
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

struct _RESET_DEVICE_COMMAND_TRB// Size=0x10 (Id=627)
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

union _EXTENDED_CAPABILITY_IDENTIFIER// Size=0x2 (Id=973)
{
    unsigned short AsUshort16;// Offset=0x0 Size=0x2
    struct // Size=0x2 (Id=0)
    {
        unsigned short SidebandAudioExtendedCapability:1;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0x1
        unsigned short Reserved1:11;// Offset=0x0 Size=0x2 BitOffset=0x1 BitSize=0xb
        unsigned short VendorDefinedExtendedCapability:4;// Offset=0x0 Size=0x2 BitOffset=0xc BitSize=0x4
    };
};

struct _GET_EXTENDED_PROPERTY_COMMAND_TRB// Size=0x10 (Id=726)
{
    union // Size=0x8 (Id=0)
    {
        unsigned long long ExtendedPropertyContextPointer64;// Offset=0x0 Size=0x8
        struct // Size=0x8 (Id=0)
        {
            unsigned long long Reserved0:4;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x4
            unsigned long long ExtendedPropertyContextPointerLo:28;// Offset=0x0 Size=0x8 BitOffset=0x4 BitSize=0x1c
            unsigned long long ExtendedPropertyContextPointerHi:32;// Offset=0x0 Size=0x8 BitOffset=0x20 BitSize=0x20
        };
    };
    union _EXTENDED_CAPABILITY_IDENTIFIER ExtendedCapabilityIdentifier;// Offset=0x8 Size=0x2
    unsigned short Reserved2;// Offset=0xa Size=0x2
    struct // Size=0x4 (Id=0)
    {
        unsigned long CycleBit:1;// Offset=0xc Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long Reserved3:9;// Offset=0xc Size=0x4 BitOffset=0x1 BitSize=0x9
        unsigned long Type:6;// Offset=0xc Size=0x4 BitOffset=0xa BitSize=0x6
        unsigned long SubType:3;// Offset=0xc Size=0x4 BitOffset=0x10 BitSize=0x3
        unsigned long EndpointId:5;// Offset=0xc Size=0x4 BitOffset=0x13 BitSize=0x5
        unsigned long SlotId:8;// Offset=0xc Size=0x4 BitOffset=0x18 BitSize=0x8
    };
};

struct _SET_EXTENDED_PROPERTY_COMMAND_TRB// Size=0x10 (Id=1009)
{
    unsigned long Reserved0;// Offset=0x0 Size=0x4
    unsigned long Reserved1;// Offset=0x4 Size=0x4
    union _EXTENDED_CAPABILITY_IDENTIFIER ExtendedCapabilityIdentifier;// Offset=0x8 Size=0x2
    struct // Size=0x6 (Id=0)
    {
        union // Size=0x1 (Id=0)
        {
            unsigned char CapabilityParameter:8;// Offset=0xa Size=0x1 BitOffset=0x0 BitSize=0x8
            unsigned char ResourceNumber:8;// Offset=0xa Size=0x1 BitOffset=0x0 BitSize=0x8
        };
        unsigned char Reserved3:8;// Offset=0xb Size=0x1 BitOffset=0x0 BitSize=0x8
        unsigned long CycleBit:1;// Offset=0xc Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long Reserved4:9;// Offset=0xc Size=0x4 BitOffset=0x1 BitSize=0x9
        unsigned long Type:6;// Offset=0xc Size=0x4 BitOffset=0xa BitSize=0x6
        unsigned long SubType:3;// Offset=0xc Size=0x4 BitOffset=0x10 BitSize=0x3
        unsigned long EndpointId:5;// Offset=0xc Size=0x4 BitOffset=0x13 BitSize=0x5
        unsigned long SlotId:8;// Offset=0xc Size=0x4 BitOffset=0x18 BitSize=0x8
    };
};

struct _LINK_TRB// Size=0x10 (Id=781)
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

struct _EVENT_DATA_TRB// Size=0x10 (Id=852)
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

struct _TRB// Size=0x10 (Id=470)
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
        struct _GET_EXTENDED_PROPERTY_COMMAND_TRB GetExtendedPropertyCommand;// Offset=0x0 Size=0x10
        struct _SET_EXTENDED_PROPERTY_COMMAND_TRB SetExtendedPropertyCommand;// Offset=0x0 Size=0x10
        struct _LINK_TRB Link;// Offset=0x0 Size=0x10
        struct _EVENT_DATA_TRB EventData;// Offset=0x0 Size=0x10
    };
};

enum _INPUT_CONTEXT_TYPE
{
    InputContextTypeNone=0,
    InputContextTypeDevice=1,
    InputContextTypeEndpoint=2
};

struct _CRB// Size=0x60 (Id=528)
{
    struct _LIST_ENTRY ListEntry;// Offset=0x0 Size=0x10
    enum _CrbStates State;// Offset=0x10 Size=0x4
    unsigned long Index;// Offset=0x14 Size=0x4
    struct _TRB Trb;// Offset=0x18 Size=0x10
    void  ( * CommandCallback)(struct _CRB * ,enum _CRB_COMPLETION_STATUS ,struct _TRB * );// Offset=0x28 Size=0x8
    void * ObjectHandle;// Offset=0x30 Size=0x8
    long Timeout;// Offset=0x38 Size=0x4
    unsigned char CompletionCode;// Offset=0x3c Size=0x1
    unsigned char SlotId;// Offset=0x3d Size=0x1
    unsigned short CrbFlags;// Offset=0x3e Size=0x2
    unsigned long CompletionParameter;// Offset=0x40 Size=0x4
    void * InputContextVA;// Offset=0x48 Size=0x8
    unsigned long InputContextSize;// Offset=0x50 Size=0x4
    enum _INPUT_CONTEXT_TYPE InputContextType;// Offset=0x54 Size=0x4
    void * InputContextOwner;// Offset=0x58 Size=0x8
};

enum _CONFIGURE_ENDPOINT_STATE
{
    ConfigureEndpointState_Uninitialized=0,
    ConfigureEndpointState_ValidateConfigureEndpointRequest=1,
    ConfigureEndpointState_CheckIfAnyHardwareAssistedOffloadModeIsEnabled=2,
    ConfigureEndpointState_CheckIfAnyOffloadedEndpointsInDisableList=3,
    ConfigureEndpointState_SendStopEndpointToOffloadedEndpoints=4,
    ConfigureEndpointState_DropEndpoints=5,
    ConfigureEndpointState_UnassignPinsForOffloadedEndpoints=6,
    ConfigureEndpointState_CheckIfAnyOffloadedEndpointsInEnableList=7,
    ConfigureEndpointState_AssignPinsForEndpointsToOffload=8,
    ConfigureEndpointState_CheckIfDropEndpointPerformedEarlier=9,
    ConfigureEndpointState_AddEndpoints=10,
    ConfigureEndpointState_AddAndDropEndpoints=11,
    ConfigureEndpointState_CompleteConfigureEndpointRequest=12,
    ConfigureEndpointState_CompleteConfigureEndpointRequestAndInvokeRecovery=13,
    ConfigureEndpointState_UnhandledEventReceived=14
};

struct _XILCORE_USBDEVICE_DATA// Size=0x28 (Id=1049)
{
    void * UsbDeviceHandle;// Offset=0x0 Size=0x8
    void * ControllerHandle;// Offset=0x8 Size=0x8
    unsigned char IsProxyUsbDevice;// Offset=0x10 Size=0x1
    struct _XIL_BUFFER_DATA * DeviceContextBuffer;// Offset=0x18 Size=0x8
    struct _XIL_BUFFER_DATA * InputDeviceContextBuffer;// Offset=0x20 Size=0x8
};

struct _XIL_DIRECT_USBDEVICE_DATA// Size=0x28 (Id=1032)
{
    struct _XILCORE_USBDEVICE_DATA XilCoreUsbDeviceData;// Offset=0x0 Size=0x28
};

struct _XIL_PROXY_USBDEVICE_DATA// Size=0x30 (Id=1033)
{
    struct TRUSTLET_OBJECT_HANDLE__ * RemoteUsbDeviceHandle;// Offset=0x0 Size=0x8
    struct _XILCORE_USBDEVICE_DATA XilCoreUsbDeviceData;// Offset=0x8 Size=0x28
};

struct _XIL_USBDEVICE_DATA// Size=0x60 (Id=927)
{
    union // Size=0x28 (Id=0)
    {
        struct _XIL_DIRECT_USBDEVICE_DATA XilDirectUsbDeviceData;// Offset=0x0 Size=0x28
        struct _XIL_PROXY_USBDEVICE_DATA XilProxyUsbDeviceData;// Offset=0x0 Size=0x30
    };
    unsigned char IsSecureDevice;// Offset=0x30 Size=0x1
    unsigned char IsProxyUsbDevice;// Offset=0x31 Size=0x1
    unsigned char IsDeviceContextLocal;// Offset=0x32 Size=0x1
    void * UsbDeviceHandle;// Offset=0x38 Size=0x8
    unsigned char IsFirmwareHashValid;// Offset=0x40 Size=0x1
    unsigned char IsFirmwareHashQueried;// Offset=0x41 Size=0x1
    unsigned char IsFirmwareHashFromDevicePresent;// Offset=0x42 Size=0x1
    void * FirmwareHashFromDevice;// Offset=0x48 Size=0x8
    unsigned char IsFirmwareHashFromSDEVEntryPresent;// Offset=0x50 Size=0x1
    void * FirmwareHashFromSDEVEntry;// Offset=0x58 Size=0x8
};

struct _USBDEVICE_DATA// Size=0x2c0 (Id=535)
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
    unsigned char IsConnectedToTTHub;// Offset=0x89 Size=0x1
    unsigned long NumberOfPorts;// Offset=0x8c Size=0x4
    unsigned long NumberOfTTs;// Offset=0x90 Size=0x4
    unsigned long TTThinkTime;// Offset=0x94 Size=0x4
    unsigned long ContextEntriesInUse;// Offset=0x98 Size=0x4
    union _DOORBELL_REGISTER * DoorbellRegister;// Offset=0xa0 Size=0x8
    void * EndpointHandle[32];// Offset=0xa8 Size=0x100
    struct WDFREQUEST__ * WdfRequest;// Offset=0x1a8 Size=0x8
    unsigned char WdfRequestMustSucceed;// Offset=0x1b0 Size=0x1
    struct WDFREQUEST__ * ConfigureEndpointWdfRequest;// Offset=0x1b8 Size=0x8
    long ConfigureEndpointStatus;// Offset=0x1c0 Size=0x4
    unsigned char EndpointsDroppedInCurrentConfigureEndpoint;// Offset=0x1c4 Size=0x1
    struct _CRB Crb;// Offset=0x1c8 Size=0x60
    void  ( * CrbCompletionRoutine)(void * ,long );// Offset=0x228 Size=0x8
    void * CrbCompletionContext;// Offset=0x230 Size=0x8
    unsigned char Is20LpmEnabled;// Offset=0x238 Size=0x1
    unsigned char IsRootPortResumeTimeSet;// Offset=0x239 Size=0x1
    unsigned char ConfigurationValue;// Offset=0x23a Size=0x1
    unsigned char InterfaceNumber;// Offset=0x23b Size=0x1
    unsigned char AlternateSetting;// Offset=0x23c Size=0x1
    long LastConfigureEndpointStatus;// Offset=0x240 Size=0x4
    unsigned long NumberOfPendingCommandsForConfigureEndpoint;// Offset=0x244 Size=0x4
    unsigned char CommandsForConfigureEndpointHasFailed;// Offset=0x248 Size=0x1
    struct _ENDPOINTS_CONFIGURE * EndpointsConfigure;// Offset=0x250 Size=0x8
    enum _CONFIGURE_ENDPOINT_STATE ConfigureEndpointState;// Offset=0x258 Size=0x4
    struct _XIL_USBDEVICE_DATA XilUsbDeviceData;// Offset=0x260 Size=0x60
};
