struct _ENDPOINT_CONTEXT64// Size=0x40 (Id=430)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long EndpointState:3;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x3
        unsigned long Reserved0:5;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x5
        unsigned long Mult:2;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x2
        unsigned long MaxPrimaryStreams:5;// Offset=0x0 Size=0x4 BitOffset=0xa BitSize=0x5
        unsigned long LinearStreamArray:1;// Offset=0x0 Size=0x4 BitOffset=0xf BitSize=0x1
        unsigned long Interval:8;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x8
        unsigned long MaxEndpointServiceTimeIntervalPayloadHi:8;// Offset=0x0 Size=0x4 BitOffset=0x18 BitSize=0x8
        unsigned long ForceEvent:1;// Offset=0x4 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long ErrorCount:2;// Offset=0x4 Size=0x4 BitOffset=0x1 BitSize=0x2
        unsigned long EndpointType:3;// Offset=0x4 Size=0x4 BitOffset=0x3 BitSize=0x3
        unsigned long Reserved2:1;// Offset=0x4 Size=0x4 BitOffset=0x6 BitSize=0x1
        unsigned long HostInitiateDisable:1;// Offset=0x4 Size=0x4 BitOffset=0x7 BitSize=0x1
        unsigned long MaxBurstSize:8;// Offset=0x4 Size=0x4 BitOffset=0x8 BitSize=0x8
        unsigned long MaxPacketSize:16;// Offset=0x4 Size=0x4 BitOffset=0x10 BitSize=0x10
    };
    union // Size=0x8 (Id=0)
    {
        unsigned long long DequeuePointer;// Offset=0x8 Size=0x8
        struct // Size=0xc (Id=0)
        {
            unsigned long long DequeueCycleState:1;// Offset=0x8 Size=0x8 BitOffset=0x0 BitSize=0x1
            unsigned long long Reserved3:3;// Offset=0x8 Size=0x8 BitOffset=0x1 BitSize=0x3
            unsigned long long DequeuePointerLo:28;// Offset=0x8 Size=0x8 BitOffset=0x4 BitSize=0x1c
            unsigned long long DequeuePointerHi:32;// Offset=0x8 Size=0x8 BitOffset=0x20 BitSize=0x20
            unsigned long AverageTrbLength:16;// Offset=0x10 Size=0x4 BitOffset=0x0 BitSize=0x10
            unsigned long MaxEndpointServiceTimeIntervalPayload:16;// Offset=0x10 Size=0x4 BitOffset=0x10 BitSize=0x10
        };
    };
    unsigned long Reserved4[3];// Offset=0x14 Size=0xc
    unsigned long Reserved[8];// Offset=0x20 Size=0x20
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

struct _CRASHDUMP_BUFFER_DATA// Size=0x18 (Id=453)
{
    union _LARGE_INTEGER LogicalAddress;// Offset=0x0 Size=0x8
    unsigned char * VirtualAddress;// Offset=0x8 Size=0x8
    unsigned long Size;// Offset=0x10 Size=0x4
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

struct _CRASHDUMP_ENDPOINT_DATA// Size=0xe8 (Id=452)
{
    void * DumperHandle;// Offset=0x0 Size=0x8
    void * RegisterHandle;// Offset=0x8 Size=0x8
    void * CommandHandle;// Offset=0x10 Size=0x8
    void * UsbDeviceHandle;// Offset=0x18 Size=0x8
    unsigned long EndpointDCI;// Offset=0x20 Size=0x4
    struct _ENDPOINT_CONTEXT64 * OutputEndpointContext;// Offset=0x28 Size=0x8
    struct _ENDPOINT_CONTEXT64 EndpointContext;// Offset=0x30 Size=0x40
    struct _CRASHDUMP_BUFFER_DATA TrbSegment[2];// Offset=0x70 Size=0x30
    unsigned char StreamsCapable;// Offset=0xa0 Size=0x1
    struct _CRASHDUMP_BUFFER_DATA StreamContextArray;// Offset=0xa8 Size=0x18
    unsigned long CurrentSegmentIndex;// Offset=0xc0 Size=0x4
    long long TransferTag;// Offset=0xc8 Size=0x8
    struct _URB * LastUrb;// Offset=0xd0 Size=0x8
    struct _TRANSFER_EVENT_TRB LastTransferEvent;// Offset=0xd8 Size=0x10
};
