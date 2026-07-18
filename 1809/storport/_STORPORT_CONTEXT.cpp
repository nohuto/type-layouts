struct _LIST_ENTRY// Size=0x10 (Id=5)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _STORPORT_CONTEXT// Size=0x38 (Id=327)
{
    unsigned long Signature;// Offset=0x0 Size=0x4
    unsigned long long WaitEndTimeIn100NS;// Offset=0x8 Size=0x8
    void * OldContext;// Offset=0x10 Size=0x8
    struct _LIST_ENTRY QueueEntry;// Offset=0x18 Size=0x10
    struct _IRP * Irp;// Offset=0x28 Size=0x8
    struct _RAID_UNIT_EXTENSION * Unit;// Offset=0x30 Size=0x8
};
