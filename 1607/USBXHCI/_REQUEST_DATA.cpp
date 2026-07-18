struct _LIST_ENTRY// Size=0x10 (Id=20)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

enum _CrbStates
{
    CrbState_Waiting=0,
    CrbState_Pending=1,
    CrbState_PendingCompletion=2
};

struct _NORMAL_TRB// Size=0x10 (Id=498)
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

struct _SETUP_STAGE_TRB// Size=0x10 (Id=602)
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

struct _DATA_STAGE_TRB// Size=0x10 (Id=577)
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

struct _STATUS_STAGE_TRB// Size=0x10 (Id=728)
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

struct _ISOCH_TRB// Size=0x10 (Id=514)
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

union _LARGE_INTEGER// Size=0x8 (Id=29)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_28 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _TRANSFER_EVENT_TRB// Size=0x10 (Id=481)
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

struct _COMMAND_COMPLETION_EVENT_TRB// Size=0x10 (Id=767)
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

struct _PORT_STATUS_CHANGE_EVENT_TRB// Size=0x10 (Id=746)
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

struct _HOST_CONTROLLER_EVENT_TRB// Size=0x10 (Id=639)
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

struct _DEVICE_NOTIFICATION_EVENT_TRB// Size=0x10 (Id=522)
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

struct _DEVICE_NOTIFICATION_EVENT_FUNCTION_WAKE_TRB// Size=0x10 (Id=620)
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

struct _NOOP_COMMAND_TRB// Size=0x10 (Id=614)
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

struct _ENABLE_SLOT_COMMAND_TRB// Size=0x10 (Id=709)
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

struct _DISABLE_SLOT_COMMAND_TRB// Size=0x10 (Id=634)
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

struct _ADDRESS_DEVICE_COMMAND_TRB// Size=0x10 (Id=642)
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

struct _CONFIGURE_ENDPOINT_COMMAND_TRB// Size=0x10 (Id=599)
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

struct _EVALUATE_CONTEXT_COMMAND_TRB// Size=0x10 (Id=578)
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

struct _RESET_ENDPOINT_COMMAND_TRB// Size=0x10 (Id=494)
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

struct _STOP_ENDPOINT_COMMAND_TRB// Size=0x10 (Id=589)
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

struct _SET_DEQUEUE_POINTER_COMMAND_TRB// Size=0x10 (Id=680)
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

struct _RESET_DEVICE_COMMAND_TRB// Size=0x10 (Id=507)
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

struct _LINK_TRB// Size=0x10 (Id=616)
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

struct _EVENT_DATA_TRB// Size=0x10 (Id=668)
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

struct _ENDPOINT_UPDATE_DATA// Size=0x68 (Id=712)
{
    struct _ENDPOINT_DATA * EndpointData;// Offset=0x0 Size=0x8
    struct _BUFFER_DATA * InputBufferData;// Offset=0x8 Size=0x8
    unsigned long MaxPacketSize;// Offset=0x10 Size=0x4
    struct _CRB Crb;// Offset=0x18 Size=0x50
};

struct _ENDPOINT_STATIC_STREAMS_CONFIGURE// Size=0x8 (Id=637)
{
    struct _STATIC_STREAMS_DATA * StaticStreamsData;// Offset=0x0 Size=0x8
};

struct _ENDPOINT_RESET_DATA// Size=0x60 (Id=595)
{
    struct _ENDPOINT_DATA * EndpointData;// Offset=0x0 Size=0x8
    struct _BUFFER_DATA * InputBufferData;// Offset=0x8 Size=0x8
    struct _CRB Crb;// Offset=0x10 Size=0x50
};

struct _USBDEVICE_ENDPOINTS_CONFIGURE_DATA// Size=0x2 (Id=633)
{
    unsigned char EndpointEnableFailed;// Offset=0x0 Size=0x1
    unsigned char ConfigureEndpointCommandFailed;// Offset=0x1 Size=0x1
};

enum _TRANSFER_MECHANISM
{
    TransferMechanism_NoData=0,
    TransferMechanism_ImmediateData=1,
    TransferMechanism_DoubleBufferData=2,
    TransferMechanism_Dma=3
};

enum _TRANSFER_CANCEL_STATE
{
    TCS_NotCancelable=0,
    TCS_Cancelable=1,
    TCS_WaitingForCancelCallback=2,
    TCS_Canceled=3
};

enum _TRANSFER_TIMEOUT_STATE
{
    TTS_NoTimeout=0,
    TTS_TimeoutSet=1,
    TTS_WaitingForTimerCallback=2,
    TTS_TimedOut=3
};

struct _TRB_RANGE// Size=0x20 (Id=802)
{
    struct _BUFFER_DATA * FirstSegment;// Offset=0x0 Size=0x8
    unsigned long FirstSegmentStartIndex;// Offset=0x8 Size=0x4
    struct _BUFFER_DATA * LastSegment;// Offset=0x10 Size=0x8
    unsigned long LastSegmentEndIndex;// Offset=0x18 Size=0x4
};

struct _CONTROL_TRANSFER_DATA// Size=0x98 (Id=719)
{
    struct _LIST_ENTRY ListEntry;// Offset=0x0 Size=0x10
    unsigned char Initialized;// Offset=0x10 Size=0x1
    struct WDFREQUEST__ * WdfRequest;// Offset=0x18 Size=0x8
    struct _TRANSFER_URB * TransferUrb;// Offset=0x20 Size=0x8
    struct _CONTROL_DATA * ControlData;// Offset=0x28 Size=0x8
    enum _TRANSFER_MECHANISM TransferMechanism;// Offset=0x30 Size=0x4
    struct _MDL * Mdl;// Offset=0x38 Size=0x8
    unsigned char * Buffer;// Offset=0x40 Size=0x8
    struct _BUFFER_DATA * DoubleBufferData;// Offset=0x48 Size=0x8
    struct _SCATTER_GATHER_LIST * ScatterGatherList;// Offset=0x50 Size=0x8
    unsigned long BytesTotal;// Offset=0x58 Size=0x4
    unsigned long BytesTransferred;// Offset=0x5c Size=0x4
    enum _TRANSFER_CANCEL_STATE CancelState;// Offset=0x60 Size=0x4
    enum _TRANSFER_TIMEOUT_STATE TimeoutState;// Offset=0x64 Size=0x4
    long Status;// Offset=0x68 Size=0x4
    unsigned long TrbCompletionCode;// Offset=0x6c Size=0x4
    unsigned long TDCount;// Offset=0x70 Size=0x4
    unsigned long ReceivedEventCount;// Offset=0x74 Size=0x4
    struct _TRB_RANGE TrbRange;// Offset=0x78 Size=0x20
};

struct _STAGE_QUEUE_HEADER// Size=0x8 (Id=785)
{
    unsigned char StageSize;// Offset=0x0 Size=0x1
    unsigned char StageCount;// Offset=0x1 Size=0x1
    unsigned char UsedStageCount;// Offset=0x2 Size=0x1
    unsigned char NextFreeStageIndex;// Offset=0x3 Size=0x1
    unsigned char OldestAcquiredStageIndex;// Offset=0x4 Size=0x1
    unsigned char IteratorIndex;// Offset=0x5 Size=0x1
    unsigned char IterationCount;// Offset=0x6 Size=0x1
    unsigned char Padding;// Offset=0x7 Size=0x1
};

struct _TRB_ITERATOR// Size=0x10 (Id=783)
{
    struct _BUFFER_DATA * Segment;// Offset=0x0 Size=0x8
    unsigned long SegmentIndex;// Offset=0x8 Size=0x4
};

struct _ISOCH_STAGE_DATA// Size=0x80 (Id=770)
{
    struct _ISOCH_TRANSFER_DATA * TransferData;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY FreeSegmentList;// Offset=0x8 Size=0x10
    struct _LIST_ENTRY UsedSegmentList;// Offset=0x18 Size=0x10
    unsigned long FirstPacket;// Offset=0x28 Size=0x4
    unsigned long LastPacket;// Offset=0x2c Size=0x4
    unsigned long OnePastLastCompletedPacket;// Offset=0x30 Size=0x4
    unsigned long TransferSize;// Offset=0x34 Size=0x4
    unsigned char FreeMdl;// Offset=0x38 Size=0x1
    struct _MDL * Mdl;// Offset=0x40 Size=0x8
    struct _SCATTER_GATHER_LIST * ScatterGatherList;// Offset=0x48 Size=0x8
    struct _TRB_RANGE TrbRange;// Offset=0x50 Size=0x20
    struct _TRB_ITERATOR TrbIterator;// Offset=0x70 Size=0x10
};

struct _ISOCH_STAGE_QUEUE// Size=0x190 (Id=738)
{
    struct _STAGE_QUEUE_HEADER Header;// Offset=0x0 Size=0x8
    struct _ISOCH_STAGE_DATA StageArray[3];// Offset=0x10 Size=0x180
};

struct _ISOCH_TRANSFER_DATA// Size=0x200 (Id=509)
{
    struct _LIST_ENTRY ListEntry;// Offset=0x0 Size=0x10
    unsigned char Initialized;// Offset=0x10 Size=0x1
    struct WDFREQUEST__ * WdfRequest;// Offset=0x18 Size=0x8
    struct _TRANSFER_URB * TransferUrb;// Offset=0x20 Size=0x8
    struct _ISOCH_DATA * IsochData;// Offset=0x28 Size=0x8
    enum _TRANSFER_CANCEL_STATE CancelState;// Offset=0x30 Size=0x4
    long WdfRequestStatus;// Offset=0x34 Size=0x4
    struct _MDL * Mdl;// Offset=0x38 Size=0x8
    unsigned long BytesTotal;// Offset=0x40 Size=0x4
    unsigned long BytesTransferred;// Offset=0x44 Size=0x4
    unsigned long BytesMapped;// Offset=0x48 Size=0x4
    unsigned long BytesSkipped;// Offset=0x4c Size=0x4
    unsigned long PacketsTotal;// Offset=0x50 Size=0x4
    unsigned long PacketsCompleted;// Offset=0x54 Size=0x4
    unsigned long PacketsMapped;// Offset=0x58 Size=0x4
    unsigned long PacketsSkipped;// Offset=0x5c Size=0x4
    unsigned long StagesCompleted;// Offset=0x60 Size=0x4
    unsigned long StagesMapped;// Offset=0x64 Size=0x4
    struct _ISOCH_STAGE_QUEUE StageQueue;// Offset=0x70 Size=0x190
};

struct _BULK_STAGE_DATA// Size=0x80 (Id=804)
{
    struct _BULK_TRANSFER_DATA * TransferData;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY FreeSegmentList;// Offset=0x8 Size=0x10
    struct _LIST_ENTRY UsedSegmentList;// Offset=0x18 Size=0x10
    unsigned long TransferSize;// Offset=0x28 Size=0x4
    unsigned char FreeMdl;// Offset=0x2c Size=0x1
    struct _MDL * Mdl;// Offset=0x30 Size=0x8
    struct _SCATTER_GATHER_LIST * ScatterGatherList;// Offset=0x38 Size=0x8
    unsigned char * Buffer;// Offset=0x40 Size=0x8
    struct _BUFFER_DATA * DoubleBufferData;// Offset=0x48 Size=0x8
    unsigned long TrbsPerBurst;// Offset=0x50 Size=0x4
    unsigned long RequiredTrbs;// Offset=0x54 Size=0x4
    unsigned long UsedTrbs;// Offset=0x58 Size=0x4
    struct _TRB_RANGE TrbRange;// Offset=0x60 Size=0x20
};

struct _BULK_STAGE_QUEUE// Size=0x90 (Id=799)
{
    struct _STAGE_QUEUE_HEADER Header;// Offset=0x0 Size=0x8
    struct _BULK_STAGE_DATA StageArray[1];// Offset=0x10 Size=0x80
};

struct _BULK_TRANSFER_DATA// Size=0x100 (Id=678)
{
    struct _LIST_ENTRY ListEntry;// Offset=0x0 Size=0x10
    unsigned char Initialized;// Offset=0x10 Size=0x1
    struct WDFREQUEST__ * WdfRequest;// Offset=0x18 Size=0x8
    struct _TRANSFER_URB * TransferUrb;// Offset=0x20 Size=0x8
    struct _BULK_DATA * BulkData;// Offset=0x28 Size=0x8
    enum _TRANSFER_CANCEL_STATE CancelState;// Offset=0x30 Size=0x4
    unsigned long TrbCompletionCode;// Offset=0x34 Size=0x4
    long WdfRequestStatus;// Offset=0x38 Size=0x4
    enum _TRANSFER_MECHANISM TransferMechanism;// Offset=0x3c Size=0x4
    struct _MDL * Mdl;// Offset=0x40 Size=0x8
    unsigned char * Buffer;// Offset=0x48 Size=0x8
    struct _BUFFER_DATA * DoubleBufferData;// Offset=0x50 Size=0x8
    unsigned long BytesTotal;// Offset=0x58 Size=0x4
    unsigned long BytesTransferred;// Offset=0x5c Size=0x4
    unsigned long BytesMapped;// Offset=0x60 Size=0x4
    unsigned long StagesCompleted;// Offset=0x64 Size=0x4
    unsigned long StagesMapped;// Offset=0x68 Size=0x4
    struct _BULK_STAGE_QUEUE StageQueue;// Offset=0x70 Size=0x90
};

union _REQUEST_DATA// Size=0x200 (Id=446)
{
    union // Size=0x200 (Id=0)
    {
        struct _ENDPOINT_UPDATE_DATA EndpointUpdateData;// Offset=0x0 Size=0x68
        struct _ENDPOINT_STATIC_STREAMS_CONFIGURE EndpointStaticStreamsConfigure;// Offset=0x0 Size=0x8
        struct _ENDPOINT_RESET_DATA EndpointResetData;// Offset=0x0 Size=0x60
        struct _USBDEVICE_ENDPOINTS_CONFIGURE_DATA UsbDeviceEndpointsConfigureData;// Offset=0x0 Size=0x2
        struct _CONTROL_TRANSFER_DATA ControlTransferData;// Offset=0x0 Size=0x98
        struct _ISOCH_TRANSFER_DATA IsochTransferData;// Offset=0x0 Size=0x200
        struct _BULK_TRANSFER_DATA BulkTransferData;// Offset=0x0 Size=0x100
    };
};
