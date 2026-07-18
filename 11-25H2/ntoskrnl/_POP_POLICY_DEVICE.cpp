struct _LIST_ENTRY// Size=0x10 (Id=3)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _UNICODE_STRING// Size=0x10 (Id=537)
{
    unsigned short Length;// Offset=0x0 Size=0x2
    unsigned short MaximumLength;// Offset=0x2 Size=0x2
    wchar_t * Buffer;// Offset=0x8 Size=0x8
};

struct _POP_POLICY_DEVICE// Size=0x40 (Id=2098)
{
    struct _LIST_ENTRY Link;// Offset=0x0 Size=0x10
    enum POWER_POLICY_DEVICE_TYPE DeviceType;// Offset=0x10 Size=0x4
    void * Notification;// Offset=0x18 Size=0x8
    struct _UNICODE_STRING Name;// Offset=0x20 Size=0x10
    struct _DEVICE_OBJECT * Device;// Offset=0x30 Size=0x8
    struct _IRP * Irp;// Offset=0x38 Size=0x8
};
