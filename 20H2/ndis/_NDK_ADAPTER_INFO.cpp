enum _NDK_RDMA_TECHNOLOGY
{
    NdkUndefined=0,
    NdkiWarp=1,
    NdkInfiniBand=2,
    NdkRoCE=3,
    NdkRoCEv2=4,
    NdkMaxTechnology=5
};

struct _NDK_ADAPTER_INFO// Size=0x68 (Id=1246)
{
    struct NDK_VERSION Version;// Offset=0x0 Size=0x4
    unsigned int VendorId;// Offset=0x4 Size=0x4
    unsigned int DeviceId;// Offset=0x8 Size=0x4
    unsigned long long MaxRegistrationSize;// Offset=0x10 Size=0x8
    unsigned long long MaxWindowSize;// Offset=0x18 Size=0x8
    unsigned long FRMRPageCount;// Offset=0x20 Size=0x4
    unsigned long MaxInitiatorRequestSge;// Offset=0x24 Size=0x4
    unsigned long MaxReceiveRequestSge;// Offset=0x28 Size=0x4
    unsigned long MaxReadRequestSge;// Offset=0x2c Size=0x4
    unsigned long MaxTransferLength;// Offset=0x30 Size=0x4
    unsigned long MaxInlineDataSize;// Offset=0x34 Size=0x4
    unsigned long MaxInboundReadLimit;// Offset=0x38 Size=0x4
    unsigned long MaxOutboundReadLimit;// Offset=0x3c Size=0x4
    unsigned long MaxReceiveQueueDepth;// Offset=0x40 Size=0x4
    unsigned long MaxInitiatorQueueDepth;// Offset=0x44 Size=0x4
    unsigned long MaxSrqDepth;// Offset=0x48 Size=0x4
    unsigned long MaxCqDepth;// Offset=0x4c Size=0x4
    unsigned long LargeRequestThreshold;// Offset=0x50 Size=0x4
    unsigned long MaxCallerData;// Offset=0x54 Size=0x4
    unsigned long MaxCalleeData;// Offset=0x58 Size=0x4
    unsigned long AdapterFlags;// Offset=0x5c Size=0x4
    enum _NDK_RDMA_TECHNOLOGY RdmaTechnology;// Offset=0x60 Size=0x4
};
