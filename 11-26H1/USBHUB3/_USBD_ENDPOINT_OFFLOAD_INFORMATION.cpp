enum _USBD_ENDPOINT_OFFLOAD_MODE
{
    UsbdEndpointOffloadModeNotSupported=0,
    UsbdEndpointOffloadSoftwareAssisted=1,
    UsbdEndpointOffloadHardwareAssisted=2
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

struct _USBD_ENDPOINT_OFFLOAD_INFORMATION// Size=0x82 (Id=785)
{
    unsigned long Size;// Offset=0x0 Size=0x4
    unsigned short EndpointAddress;// Offset=0x4 Size=0x2
    unsigned long ResourceId;// Offset=0x6 Size=0x4
    enum _USBD_ENDPOINT_OFFLOAD_MODE Mode;// Offset=0xa Size=0x4
    struct // Size=0x8 (Id=0)
    {
        unsigned long RootHubPortNumber:8;// Offset=0xe Size=0x4 BitOffset=0x0 BitSize=0x8
        unsigned long RouteString:20;// Offset=0xe Size=0x4 BitOffset=0x8 BitSize=0x14
        unsigned long Speed:4;// Offset=0xe Size=0x4 BitOffset=0x1c BitSize=0x4
        unsigned long UsbDeviceAddress:8;// Offset=0x12 Size=0x4 BitOffset=0x0 BitSize=0x8
        unsigned long SlotId:8;// Offset=0x12 Size=0x4 BitOffset=0x8 BitSize=0x8
        unsigned long MultiTT:1;// Offset=0x12 Size=0x4 BitOffset=0x10 BitSize=0x1
        unsigned long LSOrFSDeviceConnectedToTTHub:1;// Offset=0x12 Size=0x4 BitOffset=0x11 BitSize=0x1
        unsigned long Reserved0:14;// Offset=0x12 Size=0x4 BitOffset=0x12 BitSize=0xe
    };
    union _LARGE_INTEGER TransferSegmentLA;// Offset=0x16 Size=0x8
    void * TransferSegmentVA;// Offset=0x1e Size=0x8
    unsigned long long TransferRingSize;// Offset=0x26 Size=0x8
    unsigned long TransferRingInitialCycleBit;// Offset=0x2e Size=0x4
    unsigned long MessageNumber;// Offset=0x32 Size=0x4
    union _LARGE_INTEGER EventRingSegmentLA;// Offset=0x36 Size=0x8
    void * EventRingSegmentVA;// Offset=0x3e Size=0x8
    unsigned long long EventRingSize;// Offset=0x46 Size=0x8
    unsigned long EventRingInitialCycleBit;// Offset=0x4e Size=0x4
    union _LARGE_INTEGER ClientTransferRingSegmentPAIn;// Offset=0x52 Size=0x8
    unsigned long long ClientTransferRingSizeIn;// Offset=0x5a Size=0x8
    union _LARGE_INTEGER ClientDataBufferPAIn;// Offset=0x62 Size=0x8
    unsigned long long ClientDataBufferSizeIn;// Offset=0x6a Size=0x8
    union _LARGE_INTEGER ClientDataBufferLAOut;// Offset=0x72 Size=0x8
    void * ClientDataBufferVAOut;// Offset=0x7a Size=0x8
};
