struct _STOR_NOTIFICATION_INFO// Size=0x20 (Id=932)
{
    struct _IRP * Irp;// Offset=0x0 Size=0x8
    void * Context;// Offset=0x8 Size=0x8
    struct _DEVICE_OBJECT * Pdo;// Offset=0x10 Size=0x8
    void  ( * NotificationFunctionCallback)(struct _DEVICE_OBJECT * ,struct _IRP * ,void * );// Offset=0x18 Size=0x8
};
