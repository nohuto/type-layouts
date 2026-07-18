struct _LIST_ENTRY// Size=0x8 (Id=32)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x4
    struct _LIST_ENTRY * Blink;// Offset=0x4 Size=0x4
};

struct _KDEVICE_QUEUE// Size=0x14 (Id=309)
{
    short Type;// Offset=0x0 Size=0x2
    short Size;// Offset=0x2 Size=0x2
    struct _LIST_ENTRY DeviceListHead;// Offset=0x4 Size=0x8
    unsigned long Lock;// Offset=0xc Size=0x4
    unsigned char Busy;// Offset=0x10 Size=0x1
};
