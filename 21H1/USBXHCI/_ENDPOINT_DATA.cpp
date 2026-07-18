union _ENDPOINT_FLAGS// Size=0x4 (Id=491)
{
    unsigned long AsUlong32;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long CancelReportedSinceMappingStart:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long CommandCompletionFailureReported:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long PurgeTransferRingQueuesAfterHalt:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long OkToReportFSE:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long FSEReceived:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long HaltedCompletionCodeReceived:1;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1
        unsigned long DropFSE:1;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1
        unsigned long OkToCompleteEndpointResetRequest:1;// Offset=0x0 Size=0x4 BitOffset=0x7 BitSize=0x1
    };
};

struct _LIST_ENTRY// Size=0x10 (Id=23)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _DISPATCHER_HEADER// Size=0x18 (Id=672)
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

struct _KEVENT// Size=0x18 (Id=56)
{
    struct _DISPATCHER_HEADER Header;// Offset=0x0 Size=0x18
};

struct _USB_ENDPOINT_DESCRIPTOR// Size=0x7 (Id=575)
{
    unsigned char bLength;// Offset=0x0 Size=0x1
    unsigned char bDescriptorType;// Offset=0x1 Size=0x1
    unsigned char bEndpointAddress;// Offset=0x2 Size=0x1
    unsigned char bmAttributes;// Offset=0x3 Size=0x1
    unsigned short wMaxPacketSize;// Offset=0x4 Size=0x2
    unsigned char bInterval;// Offset=0x6 Size=0x1
};

struct _anonymous_607// Size=0x1 (Id=607)
{
    struct // Size=0x1 (Id=0)
    {
        unsigned char MaxStreams:5;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x5
        unsigned char Reserved1:3;// Offset=0x0 Size=0x1 BitOffset=0x5 BitSize=0x3
    };
};

struct _anonymous_608// Size=0x1 (Id=608)
{
    struct // Size=0x1 (Id=0)
    {
        unsigned char Mult:2;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x2
        unsigned char Reserved2:5;// Offset=0x0 Size=0x1 BitOffset=0x2 BitSize=0x5
        unsigned char SspCompanion:1;// Offset=0x0 Size=0x1 BitOffset=0x7 BitSize=0x1
    };
};

union _anonymous_609// Size=0x1 (Id=609)
{
    unsigned char AsUchar;// Offset=0x0 Size=0x1
    struct _anonymous_607 Bulk;// Offset=0x0 Size=0x1
    struct _anonymous_608 Isochronous;// Offset=0x0 Size=0x1
};

struct _USB_SUPERSPEED_ENDPOINT_COMPANION_DESCRIPTOR// Size=0x6 (Id=610)
{
    unsigned char bLength;// Offset=0x0 Size=0x1
    unsigned char bDescriptorType;// Offset=0x1 Size=0x1
    unsigned char bMaxBurst;// Offset=0x2 Size=0x1
    union _anonymous_609 bmAttributes;// Offset=0x3 Size=0x1
    unsigned short wBytesPerInterval;// Offset=0x4 Size=0x2
};

struct _USB_SUPERSPEEDPLUS_ISOCH_ENDPOINT_COMPANION_DESCRIPTOR// Size=0x8 (Id=598)
{
    unsigned char bLength;// Offset=0x0 Size=0x1
    unsigned char bDescriptorType;// Offset=0x1 Size=0x1
    unsigned short wReserved;// Offset=0x2 Size=0x2
    unsigned long dwBytesPerInterval;// Offset=0x4 Size=0x4
};

enum _ENDPOINT_TYPE
{
    EndpointType_NotValid=0,
    EndpointType_IsochOut=1,
    EndpointType_BulkOut=2,
    EndpointType_InterruptOut=3,
    EndpointType_Control=4,
    EndpointType_IsochIn=5,
    EndpointType_BulkIn=6,
    EndpointType_InterruptIn=7
};

enum _CrbStates
{
    CrbState_Waiting=0,
    CrbState_Pending=1,
    CrbState_PendingCompletion=2
};

struct _NORMAL_TRB// Size=0x10 (Id=555)
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

struct _SETUP_STAGE_TRB// Size=0x10 (Id=688)
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

struct _DATA_STAGE_TRB// Size=0x10 (Id=657)
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

struct _STATUS_STAGE_TRB// Size=0x10 (Id=852)
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

struct _ISOCH_TRB// Size=0x10 (Id=573)
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

struct _TRANSFER_EVENT_TRB// Size=0x10 (Id=534)
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

struct _COMMAND_COMPLETION_EVENT_TRB// Size=0x10 (Id=898)
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

struct _PORT_STATUS_CHANGE_EVENT_TRB// Size=0x10 (Id=875)
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

struct _HOST_CONTROLLER_EVENT_TRB// Size=0x10 (Id=731)
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

struct _DEVICE_NOTIFICATION_EVENT_TRB// Size=0x10 (Id=583)
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

struct _DEVICE_NOTIFICATION_EVENT_FUNCTION_WAKE_TRB// Size=0x10 (Id=710)
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

struct _NOOP_COMMAND_TRB// Size=0x10 (Id=703)
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

struct _ENABLE_SLOT_COMMAND_TRB// Size=0x10 (Id=823)
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

struct _DISABLE_SLOT_COMMAND_TRB// Size=0x10 (Id=725)
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

struct _ADDRESS_DEVICE_COMMAND_TRB// Size=0x10 (Id=735)
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

struct _CONFIGURE_ENDPOINT_COMMAND_TRB// Size=0x10 (Id=684)
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

struct _EVALUATE_CONTEXT_COMMAND_TRB// Size=0x10 (Id=659)
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

struct _RESET_ENDPOINT_COMMAND_TRB// Size=0x10 (Id=550)
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

struct _STOP_ENDPOINT_COMMAND_TRB// Size=0x10 (Id=673)
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

struct _SET_DEQUEUE_POINTER_COMMAND_TRB// Size=0x10 (Id=781)
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

struct _RESET_DEVICE_COMMAND_TRB// Size=0x10 (Id=564)
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

union _EXTENDED_CAPABILITY_IDENTIFIER// Size=0x2 (Id=894)
{
    unsigned short AsUshort16;// Offset=0x0 Size=0x2
    struct // Size=0x2 (Id=0)
    {
        unsigned short SidebandAudioExtendedCapability:1;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0x1
        unsigned short Reserved1:11;// Offset=0x0 Size=0x2 BitOffset=0x1 BitSize=0xb
        unsigned short VendorDefinedExtendedCapability:4;// Offset=0x0 Size=0x2 BitOffset=0xc BitSize=0x4
    };
};

struct _GET_EXTENDED_PROPERTY_COMMAND_TRB// Size=0x10 (Id=652)
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

struct _SET_EXTENDED_PROPERTY_COMMAND_TRB// Size=0x10 (Id=925)
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

struct _LINK_TRB// Size=0x10 (Id=705)
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

struct _EVENT_DATA_TRB// Size=0x10 (Id=768)
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

struct _TRB// Size=0x10 (Id=417)
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

struct _CRB// Size=0x60 (Id=474)
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

enum _ESM_EVENT
{
    EsmEventNull=1000,
    EsmEventContinueIfNoSubState=1001,
    EsmEventCommandCompletionFailure=12,
    EsmEventCommandCompletionSuccess=16,
    EsmEventCommonBufferAllocationFailure=102,
    EsmEventControllerResetComplete=103,
    EsmEventControllerResetStart=15,
    EsmEventControllerSurpriseRemoved=19,
    EsmEventDisabled=27,
    EsmEventEnabled=111,
    EsmEventExpectedEventTRBsProcessed=150,
    EsmEventFSEReceived=118,
    EsmEventHaltedCompletionCodeReceived=154,
    EsmEventMappingStopped=20,
    EsmEventNo=21,
    EsmEventOkToCancelTransfers=24,
    EsmEventOperationFailure=25,
    EsmEventOperationSuccess=29,
    EsmEventResetRequestFromClient=23,
    EsmEventStopEndpointFailureWithEndpointHalted=28,
    EsmEventStopEndpointFailureWithEndpointRunning=32,
    EsmEventStopEndpointFailureWithEndpointStopped=36,
    EsmEventStreamsDisabled=142,
    EsmEventStreamsEnabled=146,
    EsmEventTimerFired=126,
    EsmEventTransferCanceled=130,
    EsmEventTransfersReclaimed=138,
    EsmEventYes=33
};

union _EVENT// Size=0x4 (Id=711)
{
    unsigned long EventAsUlong;// Offset=0x0 Size=0x4
    enum _ESM_EVENT EsmEvent;// Offset=0x0 Size=0x4
};

enum _GENERIC_STATE
{
    GenericStateIgnored=1000,
    GenericStateEmptySubState=1001,
    GenericStateNull=1002
};

enum _ESM_STATE
{
    EsmStateIgnored=1000,
    EsmStateEmptySubState=1001,
    EsmStateNull=1002,
    EsmStateCompleteWithStatusFailed=1003,
    EsmStateRequestPortCycle=1004,
    EsmStateSignalQueryDeviceTextEvent=1005,
    EsmStateCompleteFDORequestWithStatusFailed=1006,
    EsmStateCompleteGetPortStatusWithInternalError=1007,
    EsmStateCompleteGetPortStatusWithNoSuchDevice=1008,
    EsmStateDisabled=2000,
    EsmStateAcknowledgingControllerResetComplete=2001,
    EsmStateAcknowledgingControllerResetCompleteInDisabled=2002,
    EsmStateCheckingIfControllerHasKnownIssuesInDeliveringFSE=2003,
    EsmStateCheckingIfEndpointCanBeResetAfterHalt=2004,
    EsmStateCheckingIfEndpointShouldBeAutoReset=2005,
    EsmStateCheckingIfEndpointShouldBeReconfiguredAfterStop=2006,
    EsmStateCheckingIfEndpointShouldBeReconfiguredOnResetWhenNotHalted=2007,
    EsmStateCheckingIfEndpointShouldBeStopped=2008,
    EsmStateCheckingIfIgnoreContextErrorOnEPStopFlagIsSet=2009,
    EsmStateCheckingIfStopEndpointCommandShouldBeDelayed=2010,
    EsmStateCheckingIfStopEndpontReissueCountReached=2011,
    EsmStateCompletingClientResetRequest=2012,
    EsmStateCompletingClientResetRequestAfterEndpointReconfigure=2013,
    EsmStateCompletingClientResetRequestAfterEndpointReconfigureFailure=2014,
    EsmStateCompletingClientResetRequestAfterResetFailure=2015,
    EsmStateCompletingClientResetRequestDueToOutstandingTransfers=2016,
    EsmStateCompletingResetRequestWhenEndpointNotHalted=2017,
    EsmStateDroppingFSEAfterStop=2018,
    EsmStateEnabledAndMapping=2019,
    EsmStateNotifyingTransferRingsEndpointHalted=2020,
    EsmStateNotifyingTransferRingsEndpointResetFromClient=2021,
    EsmStateNotifyingTransferRingsFSEReceived=2022,
    EsmStateNotifyingTransferRingsOkToReclaimTransfersOnCancel=2023,
    EsmStateNotifyingUCXAboutTransferCancellation=2024,
    EsmStateProcessingExpectedEventTRBsAfterEndpointHalt=2025,
    EsmStateProcessingExpectedEventTRBsAfterEndpointStop=2026,
    EsmStatePurgingTransferRingQueuesIfNeeded=2027,
    EsmStateReclaimingCanceledTransfersAfterControllerSurpriseRemoval=2028,
    EsmStateReclaimingTransfersAfterControlEndpointAutoReset=2029,
    EsmStateReclaimingTransfersAfterControllerReset=2030,
    EsmStateReclaimingTransfersAfterEndpointStop=2031,
    EsmStateReconfiguringEndpointAfterStop=2032,
    EsmStateReconfiguringEndpointOnReset=2033,
    EsmStateRequeuingPendingTransfersAfterHaltClear=2034,
    EsmStateResettingControlEndpoint=2035,
    EsmStateResettingControllerDueToRepeatedStopEndpointFailure=2036,
    EsmStateResettingEndpoint=2037,
    EsmStateRestartingTransferRingQueuesIfNeeded=2038,
    EsmStateSimulatingEndpointHaltReceivedOnTimeout=2039,
    EsmStateSimulatingExpectedEventTRBsProcessedAfterHaltOnTimeout=2040,
    EsmStateSimulatingExpectedEventTRBsProcessedOnTimeout=2041,
    EsmStateSimulatingFSEReceivedOnTimeout=2042,
    EsmStateStartingMapping=2043,
    EsmStateStoppingEndpoint=2044,
    EsmStateStoppingMappingAfterControllerResetInEnabled=2045,
    EsmStateStoppingMappingAfterControllerSurpriseRemovalInEnabled=2046,
    EsmStateStoppingMappingBeforeEndpointReconfigure=2047,
    EsmStateStoppingMappingOnCancelStart=2048,
    EsmStateStoppingMappingOnHalt=2049,
    EsmStateUpdatingTransferRingDequeuePointers=2050,
    EsmStateWaitingForControllerResetCompletion=2051,
    EsmStateWaitingForControllerResetCompletionInEnabled=2052,
    EsmStateWaitingForControllerResetOrSurpriseRemovalNotification=2053,
    EsmStateWaitingForEndpointDisable=2054,
    EsmStateWaitingForFSEAfterStopEndpointCommandCompletion=2055,
    EsmStateWaitingForHaltedCompletionCode=2056,
    EsmStateWaitingForResetRequestFromClient=2057,
    EsmStateWaitingToReissueStopEndpointCommand1=2058,
    EsmStateWaitingToReissueStopEndpointCommand2=2059
};

union _STATE// Size=0x4 (Id=861)
{
    unsigned long StateAsUlong;// Offset=0x0 Size=0x4
    enum _GENERIC_STATE GenericState;// Offset=0x0 Size=0x4
    enum _ESM_STATE EsmState;// Offset=0x0 Size=0x4
};

struct _STATE_LOG// Size=0xc (Id=685)
{
    union _EVENT Event;// Offset=0x0 Size=0x4
    union _STATE State;// Offset=0x4 Size=0x4
    unsigned long Depth;// Offset=0x8 Size=0x4
};

struct _EVENTS_QUEUE// Size=0x44 (Id=638)
{
    union _EVENT Events[16];// Offset=0x0 Size=0x40
    unsigned char QueueHead;// Offset=0x40 Size=0x1
    unsigned char QueueTail;// Offset=0x41 Size=0x1
};

struct _GUID// Size=0x10 (Id=103)
{
    unsigned long Data1;// Offset=0x0 Size=0x4
    unsigned short Data2;// Offset=0x4 Size=0x2
    unsigned short Data3;// Offset=0x6 Size=0x2
    unsigned char Data4[8];// Offset=0x8 Size=0x8
};

struct _SM_CONTEXT// Size=0x400 (Id=562)
{
    struct _STATE_LOG StateHistory[64];// Offset=0x0 Size=0x300
    union _EVENT EventHistory[16];// Offset=0x300 Size=0x40
    unsigned char StateHistoryIndex;// Offset=0x340 Size=0x1
    unsigned char EventHistoryIndex;// Offset=0x341 Size=0x1
    unsigned long long StateMachineLock;// Offset=0x348 Size=0x8
    unsigned char StateMachineRunning;// Offset=0x350 Size=0x1
    union _STATE CurrentState[7];// Offset=0x354 Size=0x1c
    unsigned long CurrentStateDepth;// Offset=0x370 Size=0x4
    struct _EVENTS_QUEUE EventQueue;// Offset=0x374 Size=0x44
    unsigned long SubSmFlags;// Offset=0x3b8 Size=0x4
    void * ParentContext;// Offset=0x3c0 Size=0x8
    struct _STATE_ENTRY ** StateTable;// Offset=0x3c8 Size=0x8
    unsigned long StartIndex;// Offset=0x3d0 Size=0x4
    struct _IO_WORKITEM * WorkItem;// Offset=0x3d8 Size=0x8
    struct _GUID CurrentActivityId;// Offset=0x3e0 Size=0x10
    struct WDFTIMER__ * Timer;// Offset=0x3f0 Size=0x8
    unsigned char WaitingForTimerFired;// Offset=0x3f8 Size=0x1
    unsigned char DebugBreakOnStateTransition;// Offset=0x3f9 Size=0x1
    unsigned char RunSmSecure;// Offset=0x3fa Size=0x1
};

struct _XILCORE_ENDPOINT_DATA// Size=0x10 (Id=857)
{
    void * EndpointHandle;// Offset=0x0 Size=0x8
    unsigned char IsProxyEndpoint;// Offset=0x8 Size=0x1
};

struct _XIL_DIRECT_ENDPOINT_DATA// Size=0x10 (Id=732)
{
    struct _XILCORE_ENDPOINT_DATA XilCoreEndpointData;// Offset=0x0 Size=0x10
};

struct _XIL_PROXY_ENDPOINT_DATA// Size=0x18 (Id=756)
{
    void * RemoteEndpointHandle;// Offset=0x0 Size=0x8
    struct _XILCORE_ENDPOINT_DATA XilCoreEndpointData;// Offset=0x8 Size=0x10
};

struct _XIL_ENDPOINT_DATA// Size=0x28 (Id=686)
{
    union // Size=0x10 (Id=0)
    {
        struct _XIL_DIRECT_ENDPOINT_DATA XilDirectEndpointData;// Offset=0x0 Size=0x10
        struct _XIL_PROXY_ENDPOINT_DATA XilProxyEndpointData;// Offset=0x0 Size=0x18
    };
    unsigned char IsProxyEndpoint;// Offset=0x18 Size=0x1
    void * EndpointHandle;// Offset=0x20 Size=0x8
};

enum _ENDPOINT_OFFLOAD_STATE
{
    EndpointOffloadState_NotOffloaded=0,
    EndpointOffloadState_OffloadPending=1,
    EndpointOffloadState_Offloaded=2
};

struct _ENDPOINT_DATA// Size=0x550 (Id=485)
{
    void * ControllerHandle;// Offset=0x0 Size=0x8
    struct UCXUSBDEVICE__ * UcxUsbDevice;// Offset=0x8 Size=0x8
    void * UsbDeviceHandle;// Offset=0x10 Size=0x8
    struct UCXENDPOINT__ * UcxEndpoint;// Offset=0x18 Size=0x8
    union _ENDPOINT_FLAGS Flags;// Offset=0x20 Size=0x4
    unsigned char ForwardProgressEnabled;// Offset=0x24 Size=0x1
    unsigned char StreamsCapable;// Offset=0x25 Size=0x1
    struct _KEVENT ControllerResetCompleteAcknowledgeEvent;// Offset=0x28 Size=0x18
    struct _LIST_ENTRY EndpointListEntry;// Offset=0x40 Size=0x10
    struct RECORDER_LOG__ * RecorderLog;// Offset=0x50 Size=0x8
    void * TransferRingHandle;// Offset=0x58 Size=0x8
    struct _USB_ENDPOINT_DESCRIPTOR UsbEndpointDescriptor;// Offset=0x60 Size=0x7
    struct _USB_SUPERSPEED_ENDPOINT_COMPANION_DESCRIPTOR UsbSuperSpeedEndpointCompanionDescriptor;// Offset=0x67 Size=0x6
    struct _USB_SUPERSPEEDPLUS_ISOCH_ENDPOINT_COMPANION_DESCRIPTOR UsbSuperSpeedPlusIsochEndpointCompanionDescriptor;// Offset=0x6d Size=0x8
    enum _ENDPOINT_TYPE Type;// Offset=0x78 Size=0x4
    struct _STATIC_STREAMS_DATA * DefaultStaticStreamsData;// Offset=0x80 Size=0x8
    struct _STATIC_STREAMS_DATA * StaticStreamsData;// Offset=0x88 Size=0x8
    unsigned long ContextIndex;// Offset=0x90 Size=0x4
    unsigned long MaxBurstSize;// Offset=0x94 Size=0x4
    unsigned long MaxPayloadPerServiceOpportunity;// Offset=0x98 Size=0x4
    unsigned long StopReissueCount;// Offset=0x9c Size=0x4
    struct _CRB Crb;// Offset=0xa0 Size=0x60
    struct _XIL_BUFFER_DATA * InputBufferData;// Offset=0x100 Size=0x8
    struct _CLEAR_STALL_CONTEXT * ClearStallContext;// Offset=0x108 Size=0x8
    struct WDFREQUEST__ * EndpointResetRequest;// Offset=0x110 Size=0x8
    long EndpointResetCompletionStatus;// Offset=0x118 Size=0x4
    struct _SM_CONTEXT SmContext;// Offset=0x120 Size=0x400
    struct _XIL_ENDPOINT_DATA XilEndpointData;// Offset=0x520 Size=0x28
    enum _ENDPOINT_OFFLOAD_STATE OffloadState;// Offset=0x548 Size=0x4
};
