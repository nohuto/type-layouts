struct _ENDPOINT_CONTEXT32// Size=0x20 (Id=411)
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
};

struct _ENDPOINT_CONTEXT64// Size=0x40 (Id=406)
{
    struct _ENDPOINT_CONTEXT32 EndpointContext;// Offset=0x0 Size=0x20
    unsigned long Reserved[8];// Offset=0x20 Size=0x20
};
