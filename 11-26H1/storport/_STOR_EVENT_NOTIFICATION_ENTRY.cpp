struct _LIST_ENTRY// Size=0x10 (Id=5)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _unnamed_701// Size=0x10 (Id=701)
{
    unsigned long long Generic;// Offset=0x0 Size=0x8
    unsigned long long ProtocolSpecific;// Offset=0x8 Size=0x8
};

struct _STOR_EVENT_NOTIFICATION// Size=0x28 (Id=702)
{
    unsigned short Version;// Offset=0x0 Size=0x2
    unsigned short Size;// Offset=0x2 Size=0x2
    unsigned long Flags;// Offset=0x4 Size=0x4
    struct _unnamed_701 EventFlags;// Offset=0x8 Size=0x10
    unsigned long Reserved0[2];// Offset=0x18 Size=0x8
    unsigned long DataLength;// Offset=0x20 Size=0x4
    unsigned char Data[1];// Offset=0x24 Size=0x1
};

struct _STOR_EVENT_NOTIFICATION_ENTRY// Size=0x38 (Id=698)
{
    struct _LIST_ENTRY ListEntry;// Offset=0x0 Size=0x10
    struct _STOR_EVENT_NOTIFICATION Notification;// Offset=0x10 Size=0x28
};
