struct _USB_BUS_INTERFACE_HUB_FORWARD_PROGRESS// Size=0x40 (Id=222)
{
    unsigned short Size;// Offset=0x0 Size=0x2
    unsigned short Version;// Offset=0x2 Size=0x2
    void * BusContext;// Offset=0x8 Size=0x8
    void  ( * InterfaceReference)(void * );// Offset=0x10 Size=0x8
    void  ( * InterfaceDereference)(void * );// Offset=0x18 Size=0x8
    struct USB_WORKITEM_HANDLE__ *  ( * AllocateWorkItem)(struct _DEVICE_OBJECT * ,unsigned char );// Offset=0x20 Size=0x8
    void  ( * FreeWorkItem)(struct USB_WORKITEM_HANDLE__ * );// Offset=0x28 Size=0x8
    void  ( * QueueWorkItem)(struct _DEVICE_OBJECT * ,struct USB_WORKITEM_HANDLE__ * ,void  ( * )(void * ,void * ,struct _IO_WORKITEM * ),enum _WORK_QUEUE_TYPE ,void * ,unsigned char );// Offset=0x30 Size=0x8
    void  ( * DeferIrpProcessing)(struct _DEVICE_OBJECT * ,void  ( * )(struct _DEVICE_OBJECT * ,struct _IRP * ),struct _IRP * );// Offset=0x38 Size=0x8
};
