struct _LIST_ENTRY// Size=0x10 (Id=5)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _EX_DEVICE_QUEUE_ENTRY// Size=0x18 (Id=230)
{
    struct _LIST_ENTRY DeviceListEntry;// Offset=0x0 Size=0x10
    unsigned long SortKey;// Offset=0x10 Size=0x4
    unsigned char Inserted;// Offset=0x14 Size=0x1
    unsigned char State;// Offset=0x15 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char Untagged:1;// Offset=0x16 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char ByPassFrozen:1;// Offset=0x16 Size=0x1 BitOffset=0x1 BitSize=0x1
        unsigned char ByPassLocked:1;// Offset=0x16 Size=0x1 BitOffset=0x2 BitSize=0x1
        unsigned char ByPassPowerLocked:1;// Offset=0x16 Size=0x1 BitOffset=0x3 BitSize=0x1
        unsigned char EnqueueForIoLatency:1;// Offset=0x16 Size=0x1 BitOffset=0x4 BitSize=0x1
        unsigned char CheckForTimeout:1;// Offset=0x16 Size=0x1 BitOffset=0x5 BitSize=0x1
        unsigned char EnqueueForZoneSequentialIo:1;// Offset=0x16 Size=0x1 BitOffset=0x6 BitSize=0x1
        unsigned char reserved0:1;// Offset=0x16 Size=0x1 BitOffset=0x7 BitSize=0x1
    };
    unsigned char reserved1;// Offset=0x17 Size=0x1
};
