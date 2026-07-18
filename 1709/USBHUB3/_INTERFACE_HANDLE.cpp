struct _LIST_ENTRY// Size=0x10 (Id=4)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

union _INTERFACE_FLAGS// Size=0x4 (Id=466)
{
    unsigned long AsUlong32;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long HasAlternateSettings:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long NeedsSetInterface:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
    };
};

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

union _ENDPOINT_FLAGS// Size=0x4 (Id=570)
{
    unsigned long AsUlong32;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long ZeroBandwidth:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
    };
};

enum _UCX_ENDPOINT_CHARACTERISTIC_PRIORITY
{
    UCX_ENDPOINT_CHARACTERISTIC_PRIORITY_NONE=0,
    UCX_ENDPOINT_CHARACTERISTIC_PRIORITY_BULK_VIDEO=1,
    UCX_ENDPOINT_CHARACTERISTIC_PRIORITY_BULK_VOICE=2,
    UCX_ENDPOINT_CHARACTERISTIC_PRIORITY_BULK_INTERACTIVE=3
};

struct _PIPE_HANDLE// Size=0x48 (Id=346)
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
    enum _UCX_ENDPOINT_CHARACTERISTIC_PRIORITY Priority;// Offset=0x40 Size=0x4
};

struct _INTERFACE_HANDLE// Size=0x70 (Id=344)
{
    struct WDFMEMORY__ * MemoryObject;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY InterfaceLink;// Offset=0x8 Size=0x10
    unsigned long NumberOfEndpoints;// Offset=0x18 Size=0x4
    union _INTERFACE_FLAGS InterfaceFlags;// Offset=0x1c Size=0x4
    struct _USB_INTERFACE_DESCRIPTOR * InterfaceDescriptor;// Offset=0x20 Size=0x8
    struct _PIPE_HANDLE PipeHandle[1];// Offset=0x28 Size=0x48
};
