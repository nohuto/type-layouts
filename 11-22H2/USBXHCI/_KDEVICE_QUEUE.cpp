struct _LIST_ENTRY// Size=0x10 (Id=37)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _KDEVICE_QUEUE// Size=0x28 (Id=795)
{
    short Type;// Offset=0x0 Size=0x2
    short Size;// Offset=0x2 Size=0x2
    struct _LIST_ENTRY DeviceListHead;// Offset=0x8 Size=0x10
    unsigned long long Lock;// Offset=0x18 Size=0x8
    union // Size=0x1 (Id=0)
    {
        unsigned char Busy;// Offset=0x20 Size=0x1
        struct // Size=0x8 (Id=0)
        {
            long long Reserved:8;// Offset=0x20 Size=0x8 BitOffset=0x0 BitSize=0x8
            long long Hint:56;// Offset=0x20 Size=0x8 BitOffset=0x8 BitSize=0x38
        };
    };
};
