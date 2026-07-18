enum _UCXENDPOINT_STATE
{
    UcxEndpointStateInvalid=0,
    UcxEndpointStateNotCreated=1,
    UcxEndpointStatePendingCreate=2,
    UcxEndpointStatePendingEnable=3,
    UcxEndpointStateEnabled=4,
    UcxEndpointStatePendingDisable=5,
    UcxEndpointStateDisabled=6,
    UcxEndpointStateDeleted=7
};

union _ENDPOINT_FLAGS// Size=0x4 (Id=419)
{
    unsigned long AsUlong32;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long ZeroBandwidth:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
    };
};

struct _PIPE_HANDLE// Size=0x40 (Id=338)
{
    struct UCXENDPOINT__ * UcxEndpoint;// Offset=0x0 Size=0x8
    enum _UCXENDPOINT_STATE UcxEndpointState;// Offset=0x8 Size=0x4
    union _ENDPOINT_FLAGS EndpointFlags;// Offset=0xc Size=0x4
    void * UsbdPipeHandle;// Offset=0x10 Size=0x8
    unsigned long UsbdPipeFlags;// Offset=0x18 Size=0x4
    struct _USB_ENDPOINT_DESCRIPTOR * EndpointDescriptor;// Offset=0x20 Size=0x8
    unsigned long EndpointDescriptorBufferLength;// Offset=0x28 Size=0x4
    struct _USB_SUPERSPEED_ENDPOINT_COMPANION_DESCRIPTOR * SSEndpointCompanionDescriptor;// Offset=0x30 Size=0x8
    struct _USB_SUPERSPEEDPLUS_ISOCH_ENDPOINT_COMPANION_DESCRIPTOR * SSPIsochEndpointCompanionDescriptor;// Offset=0x38 Size=0x8
};
