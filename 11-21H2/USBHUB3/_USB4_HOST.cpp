enum _TARGET_STATE_ENUM
{
    TargetStateInit=0,
    TargetStatePendingOpen=1,
    TargetStateOpen=2,
    TargetStatePendingClose=3,
    TargetStateClosed=4
};

struct _USB4_HOST// Size=0x30 (Id=433)
{
    struct WDFSTRING__ * Usb4HostNameString;// Offset=0x0 Size=0x8
    struct WDFIOTARGET__ * RemoteTarget;// Offset=0x8 Size=0x8
    struct WDFWAITLOCK__ * Usb4HostLock;// Offset=0x10 Size=0x8
    enum _TARGET_STATE_ENUM RemoteTargetState;// Offset=0x18 Size=0x4
    struct _DEVICE_OBJECT * ParentDeviceObject;// Offset=0x20 Size=0x8
    unsigned long PowerReferenceCount;// Offset=0x28 Size=0x4
    unsigned char ComponentRelationAdded;// Offset=0x2c Size=0x1
};
