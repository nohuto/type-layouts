struct _NORMAL_TRB// Size=0x10 (Id=548)
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

struct _SETUP_STAGE_TRB// Size=0x10 (Id=671)
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

struct _DATA_STAGE_TRB// Size=0x10 (Id=643)
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

struct _STATUS_STAGE_TRB// Size=0x10 (Id=823)
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

struct _ISOCH_TRB// Size=0x10 (Id=566)
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

struct _anonymous_31// Size=0x8 (Id=31)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=63)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _anonymous_31 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _TRANSFER_EVENT_TRB// Size=0x10 (Id=530)
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

struct _COMMAND_COMPLETION_EVENT_TRB// Size=0x10 (Id=866)
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

struct _PORT_STATUS_CHANGE_EVENT_TRB// Size=0x10 (Id=844)
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

struct _HOST_CONTROLLER_EVENT_TRB// Size=0x10 (Id=714)
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

struct _DEVICE_NOTIFICATION_EVENT_TRB// Size=0x10 (Id=576)
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

struct _DEVICE_NOTIFICATION_EVENT_FUNCTION_WAKE_TRB// Size=0x10 (Id=693)
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

struct _NOOP_COMMAND_TRB// Size=0x10 (Id=687)
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

struct _ENABLE_SLOT_COMMAND_TRB// Size=0x10 (Id=797)
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

struct _DISABLE_SLOT_COMMAND_TRB// Size=0x10 (Id=708)
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

struct _ADDRESS_DEVICE_COMMAND_TRB// Size=0x10 (Id=718)
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

struct _CONFIGURE_ENDPOINT_COMMAND_TRB// Size=0x10 (Id=667)
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

struct _EVALUATE_CONTEXT_COMMAND_TRB// Size=0x10 (Id=644)
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

struct _RESET_ENDPOINT_COMMAND_TRB// Size=0x10 (Id=544)
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

struct _STOP_ENDPOINT_COMMAND_TRB// Size=0x10 (Id=657)
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

struct _SET_DEQUEUE_POINTER_COMMAND_TRB// Size=0x10 (Id=760)
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

struct _RESET_DEVICE_COMMAND_TRB// Size=0x10 (Id=557)
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

union _EXTENDED_CAPABILITY_IDENTIFIER// Size=0x2 (Id=862)
{
    unsigned short AsUshort16;// Offset=0x0 Size=0x2
    struct // Size=0x2 (Id=0)
    {
        unsigned short SidebandAudioExtendedCapability:1;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0x1
        unsigned short Reserved1:11;// Offset=0x0 Size=0x2 BitOffset=0x1 BitSize=0xb
        unsigned short VendorDefinedExtendedCapability:4;// Offset=0x0 Size=0x2 BitOffset=0xc BitSize=0x4
    };
};

struct _GET_EXTENDED_PROPERTY_COMMAND_TRB// Size=0x10 (Id=641)
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
        unsigned long EndpointNumber:5;// Offset=0xc Size=0x4 BitOffset=0x13 BitSize=0x5
        unsigned long SlotId:8;// Offset=0xc Size=0x4 BitOffset=0x18 BitSize=0x8
    };
};

struct _SET_EXTENDED_PROPERTY_COMMAND_TRB// Size=0x10 (Id=892)
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
        unsigned long EndpointNumber:5;// Offset=0xc Size=0x4 BitOffset=0x13 BitSize=0x5
        unsigned long SlotId:8;// Offset=0xc Size=0x4 BitOffset=0x18 BitSize=0x8
    };
};

struct _LINK_TRB// Size=0x10 (Id=689)
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

struct _EVENT_DATA_TRB// Size=0x10 (Id=747)
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

struct _TRB// Size=0x10 (Id=413)
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
