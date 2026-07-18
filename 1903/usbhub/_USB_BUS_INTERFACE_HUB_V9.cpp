struct _USB_BUS_INTERFACE_HUB_V9// Size=0x148 (Id=156)
{
    unsigned short Size;// Offset=0x0 Size=0x2
    unsigned short Version;// Offset=0x2 Size=0x2
    void * BusContext;// Offset=0x8 Size=0x8
    void  ( * InterfaceReference)(void * );// Offset=0x10 Size=0x8
    void  ( * InterfaceDereference)(void * );// Offset=0x18 Size=0x8
    long  ( * CreateUsbDevice)(void * ,void ** ,void * ,unsigned short ,unsigned short ,struct _USB_CD_ERROR_INFORMATION * ,unsigned short );// Offset=0x20 Size=0x8
    long  ( * InitializeUsbDevice)(void * ,void * ,struct _USB_ID_ERROR_INFORMATION * );// Offset=0x28 Size=0x8
    long  ( * GetUsbDescriptors)(void * ,void * ,unsigned char * ,unsigned long * ,unsigned char * ,unsigned long * );// Offset=0x30 Size=0x8
    long  ( * RemoveUsbDevice)(void * ,void * ,unsigned long );// Offset=0x38 Size=0x8
    long  ( * RestoreUsbDevice)(void * ,void * ,void * );// Offset=0x40 Size=0x8
    long  ( * GetPortHackFlags)(void * ,unsigned long * );// Offset=0x48 Size=0x8
    long  ( * QueryDeviceInformation)(void * ,void * ,void * ,unsigned long ,unsigned long * );// Offset=0x50 Size=0x8
    long  ( * GetControllerInformation)(void * ,void * ,unsigned long ,unsigned long * );// Offset=0x58 Size=0x8
    long  ( * ControllerSelectiveSuspend)(void * ,unsigned char );// Offset=0x60 Size=0x8
    long  ( * GetExtendedHubInformation)(void * ,struct _DEVICE_OBJECT * ,void * ,unsigned long ,unsigned long * );// Offset=0x68 Size=0x8
    long  ( * GetRootHubSymbolicName)(void * ,void * ,unsigned long ,unsigned long * );// Offset=0x70 Size=0x8
    void *  ( * GetDeviceBusContext)(void * ,void * );// Offset=0x78 Size=0x8
    long  ( * Initialize20Hub)(void * ,void * ,unsigned long );// Offset=0x80 Size=0x8
    long  ( * RootHubInitNotification)(void * ,void * ,void  ( * )(void * ));// Offset=0x88 Size=0x8
    void  ( * FlushTransfers)(void * ,void * );// Offset=0x90 Size=0x8
    void  ( * SetDeviceHandleData)(void * ,void * ,struct _DEVICE_OBJECT * );// Offset=0x98 Size=0x8
    unsigned char  ( * HubIsRoot)(void * ,void * );// Offset=0xa0 Size=0x8
    void  ( * AcquireBusSemaphore)(void * );// Offset=0xa8 Size=0x8
    void  ( * ReleaseBusSemaphore)(void * );// Offset=0xb0 Size=0x8
    unsigned long  ( * CaculatePipeBandwidth)(void * ,struct _USBD_PIPE_INFORMATION * ,enum _USB_DEVICE_SPEED );// Offset=0xb8 Size=0x8
    void  ( * SetBusSystemWakeMode)(void * ,unsigned long );// Offset=0xc0 Size=0x8
    void  ( * SetDeviceFlag)(void * ,struct _GUID * ,void * ,unsigned long );// Offset=0xc8 Size=0x8
    long  ( * HubTestPoint)(void * ,void * ,unsigned long ,void * );// Offset=0xd0 Size=0x8
    long  ( * GetDevicePerformanceInfo)(void * ,void * ,void * ,unsigned long ,unsigned long * );// Offset=0xd8 Size=0x8
    long  ( * WaitAsyncPowerUp)(void * );// Offset=0xe0 Size=0x8
    long  ( * GetDeviceAddress)(void * ,void * ,wchar_t * );// Offset=0xe8 Size=0x8
    long  ( * RefDeviceHandle)(void * ,void * ,void * ,unsigned long );// Offset=0xf0 Size=0x8
    void  ( * DerefDeviceHandle)(void * ,void * ,void * ,unsigned long );// Offset=0xf8 Size=0x8
    unsigned long  ( * SetDeviceHandleIdleReadyState)(void * ,void * ,unsigned long );// Offset=0x100 Size=0x8
    long  ( * CreateUsbDeviceV7)(void * ,void ** ,void * ,unsigned short ,struct _USB_PORT_PATH * ,struct _USB_CD_ERROR_INFORMATION * ,unsigned short ,struct _DEVICE_OBJECT * ,struct _UNICODE_STRING * );// Offset=0x108 Size=0x8
    long  ( * GetContainerIdForPort)(void * ,unsigned short ,struct _GUID * );// Offset=0x110 Size=0x8
    void  ( * SetContainerIdForPort)(void * ,unsigned short ,struct _GUID * );// Offset=0x118 Size=0x8
    long  ( * AbortAllDevicePipes)(void * ,void * );// Offset=0x120 Size=0x8
    void  ( * SetDeviceErrataFlag)(void * ,void * ,unsigned long );// Offset=0x128 Size=0x8
    unsigned short  ( * GetDebugPortNumber)(void * );// Offset=0x130 Size=0x8
    void  ( * SetMsOs20Support)(void * ,void * ,struct _USB_DEVICE_DESCRIPTOR * ,unsigned char );// Offset=0x138 Size=0x8
    void  ( * SetClearRootPortResumeTime)(void * ,void * ,unsigned char ,unsigned char );// Offset=0x140 Size=0x8
};
