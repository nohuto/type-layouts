struct _DEVICE_NOTIFICATION_EVENT_TRB// Size=0x10 (Id=663)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long Reserved0:4;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x4
        unsigned long NotificationType:4;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x4
        unsigned long DeviceNotificationDataLo:24;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x18
    };
    unsigned long DeviceNotificationDataHi;// Offset=0x4 Size=0x4
    struct // Size=0x8 (Id=0)
    {
        unsigned long Reserved1:24;// Offset=0x8 Size=0x4 BitOffset=0x0 BitSize=0x18
        unsigned long CompletionCode:8;// Offset=0x8 Size=0x4 BitOffset=0x18 BitSize=0x8
        unsigned long CycleBit:1;// Offset=0xc Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long Reserved2:9;// Offset=0xc Size=0x4 BitOffset=0x1 BitSize=0x9
        unsigned long Type:6;// Offset=0xc Size=0x4 BitOffset=0xa BitSize=0x6
        unsigned long Reserved3:8;// Offset=0xc Size=0x4 BitOffset=0x10 BitSize=0x8
        unsigned long SlotId:8;// Offset=0xc Size=0x4 BitOffset=0x18 BitSize=0x8
    };
};
