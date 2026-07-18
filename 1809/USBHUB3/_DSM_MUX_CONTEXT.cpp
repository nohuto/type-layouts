struct _LIST_ENTRY// Size=0x10 (Id=4)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

union _DEVICE_MUX_FLAGS// Size=0x4 (Id=634)
{
    unsigned long AsUlong32;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long Stopped:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long PowerReferenceHeld:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long PnpOperationPending:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
    };
};

struct _DSM_MUX_CONTEXT// Size=0x38 (Id=435)
{
    struct _LIST_ENTRY ListEntry;// Offset=0x0 Size=0x10
    struct _LIST_ENTRY TempListEntry;// Offset=0x10 Size=0x10
    struct _LIST_ENTRY SurpriseRemoveListEntry;// Offset=0x20 Size=0x10
    union _DEVICE_MUX_FLAGS DeviceFlags;// Offset=0x30 Size=0x4
};
