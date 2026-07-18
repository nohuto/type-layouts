union _DC_ID// Size=0x4 (Id=508)
{
    unsigned long AsUlong32;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long CapabilityID:8;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x8
        unsigned long NextCapabilityPointer:8;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x8
        unsigned long EventRingSizeExponent:5;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x5
        unsigned long Reserved:11;// Offset=0x0 Size=0x4 BitOffset=0x15 BitSize=0xb
    };
};

union _DC_DOORBELL// Size=0x4 (Id=599)
{
    unsigned long AsUlong32;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long Reserved0:8;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x8
        unsigned long DoorbellTarget:8;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x8
        unsigned long Reserved1:16;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x10
    };
};

union _DC_ERSTSZ// Size=0x4 (Id=734)
{
    unsigned long AsUlong32;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long SegmentSize:16;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x10
        unsigned long Reserved0:16;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x10
    };
};

union _DC_ERSTBA// Size=0x8 (Id=483)
{
    unsigned long long AsUlong64;// Offset=0x0 Size=0x8
    struct // Size=0x8 (Id=0)
    {
        unsigned long long Reserved:4;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x4
        unsigned long long EventRingSegmentTableBaseAddress:60;// Offset=0x0 Size=0x8 BitOffset=0x4 BitSize=0x3c
    };
};

union _DC_ERDP// Size=0x8 (Id=557)
{
    unsigned long long AsUlong64;// Offset=0x0 Size=0x8
    struct // Size=0x8 (Id=0)
    {
        unsigned long long SegmentIndex:3;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x3
        unsigned long long Reserved:1;// Offset=0x0 Size=0x8 BitOffset=0x3 BitSize=0x1
        unsigned long long DequeuePointer:60;// Offset=0x0 Size=0x8 BitOffset=0x4 BitSize=0x3c
    };
};

union _DC_CONTROL// Size=0x4 (Id=562)
{
    unsigned long AsUlong32;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long Running:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long LinkStatusEventEnable:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long HaltOutTR:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long HaltInTR:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long RunChange:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long Reserved:11;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0xb
        unsigned long MaxBurstSize:8;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x8
        unsigned long DeviceAddress:7;// Offset=0x0 Size=0x4 BitOffset=0x18 BitSize=0x7
        unsigned long Enable:1;// Offset=0x0 Size=0x4 BitOffset=0x1f BitSize=0x1
    };
};

union _DC_STATUS// Size=0x4 (Id=403)
{
    unsigned long AsUlong32;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long EventRingNotEmpty:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long SystemBusReset:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long Reserved0:22;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x16
        unsigned long DebugPortNumber:8;// Offset=0x0 Size=0x4 BitOffset=0x18 BitSize=0x8
    };
};

union _DC_PORTSC// Size=0x4 (Id=785)
{
    unsigned long AsUlong32;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long CurrentConnectStatus:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long PortEnabled:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long Reserved0:2;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x2
        unsigned long PortReset:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long PortLinkState:4;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x4
        unsigned long Reserved1:1;// Offset=0x0 Size=0x4 BitOffset=0x9 BitSize=0x1
        unsigned long PortSpeed:4;// Offset=0x0 Size=0x4 BitOffset=0xa BitSize=0x4
        unsigned long Reserved2:3;// Offset=0x0 Size=0x4 BitOffset=0xe BitSize=0x3
        unsigned long ConnectStatusChange:1;// Offset=0x0 Size=0x4 BitOffset=0x11 BitSize=0x1
        unsigned long Reserved3:3;// Offset=0x0 Size=0x4 BitOffset=0x12 BitSize=0x3
        unsigned long PortResetChange:1;// Offset=0x0 Size=0x4 BitOffset=0x15 BitSize=0x1
        unsigned long PortLinkStateChange:1;// Offset=0x0 Size=0x4 BitOffset=0x16 BitSize=0x1
        unsigned long PortConfigErrorChange:1;// Offset=0x0 Size=0x4 BitOffset=0x17 BitSize=0x1
        unsigned long Reserved4:8;// Offset=0x0 Size=0x4 BitOffset=0x18 BitSize=0x8
    };
};

union _DC_CP// Size=0x8 (Id=770)
{
    unsigned long long AsUlong64;// Offset=0x0 Size=0x8
    struct // Size=0x8 (Id=0)
    {
        unsigned long long Reserved:4;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x4
        unsigned long long ContextPointer:60;// Offset=0x0 Size=0x8 BitOffset=0x4 BitSize=0x3c
    };
};

union _DC_DDI1// Size=0x4 (Id=625)
{
    unsigned long AsUlong32;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long Protocol:8;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x8
        unsigned long Reserved:8;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x8
        unsigned long VendorID:16;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x10
    };
};

union _DC_DDI2// Size=0x4 (Id=678)
{
    unsigned long AsUlong32;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long ProductID:16;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x10
        unsigned long DeviceRevision:16;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x10
    };
};

struct _DEBUG_CAPABILITY// Size=0x40 (Id=402)
{
    union _DC_ID ID;// Offset=0x0 Size=0x4
    union _DC_DOORBELL Doorbell;// Offset=0x4 Size=0x4
    union _DC_ERSTSZ EventRingSegmentTableSize;// Offset=0x8 Size=0x4
    unsigned long Reserved0;// Offset=0xc Size=0x4
    union _DC_ERSTBA EventRingSegmentTableBaseAddress;// Offset=0x10 Size=0x8
    union _DC_ERDP EventRingDequeuePointer;// Offset=0x18 Size=0x8
    union _DC_CONTROL Control;// Offset=0x20 Size=0x4
    union _DC_STATUS Status;// Offset=0x24 Size=0x4
    union _DC_PORTSC PortStatusControl;// Offset=0x28 Size=0x4
    unsigned long Reserved1;// Offset=0x2c Size=0x4
    union _DC_CP ContextPointer;// Offset=0x30 Size=0x8
    union _DC_DDI1 Descriptor1;// Offset=0x38 Size=0x4
    union _DC_DDI2 Descriptor2;// Offset=0x3c Size=0x4
};
