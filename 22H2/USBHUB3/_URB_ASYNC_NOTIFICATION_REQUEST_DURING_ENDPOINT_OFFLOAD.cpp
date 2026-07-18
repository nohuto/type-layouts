struct _URB_HEADER// Size=0x18 (Id=738)
{
    unsigned short Length;// Offset=0x0 Size=0x2
    unsigned short Function;// Offset=0x2 Size=0x2
    long Status;// Offset=0x4 Size=0x4
    void * UsbdDeviceHandle;// Offset=0x8 Size=0x8
    unsigned long UsbdFlags;// Offset=0x10 Size=0x4
};

enum _ENDPOINT_OFFLOAD_NOTIFICATION_EVENT_TYPE
{
    EndpointOffload_NoEvent=0,
    EndpointOffload_StopDueToPendingControllerResetRecovery=1
};

enum _ENDPOINT_OFFLOAD_RESPONSE_EVENT_TYPE
{
    EndpointOffload_NoPendingResponse=0,
    EndpointOffload_Stopped=1
};

struct _URB_ASYNC_NOTIFICATION_REQUEST_DURING_ENDPOINT_OFFLOAD// Size=0x28 (Id=744)
{
    struct _URB_HEADER Hdr;// Offset=0x0 Size=0x18
    void * PipeHandle;// Offset=0x18 Size=0x8
    enum _ENDPOINT_OFFLOAD_NOTIFICATION_EVENT_TYPE Event;// Offset=0x20 Size=0x4
    enum _ENDPOINT_OFFLOAD_RESPONSE_EVENT_TYPE Response;// Offset=0x24 Size=0x4
};
