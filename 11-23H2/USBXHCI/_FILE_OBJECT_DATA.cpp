struct _LIST_ENTRY// Size=0x10 (Id=36)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _FILE_OBJECT_DATA// Size=0x40 (Id=482)
{
    struct _LIST_ENTRY ListEntry;// Offset=0x0 Size=0x10
    struct WDFFILEOBJECT__ * WdfHandle;// Offset=0x10 Size=0x8
    void * PseudoTrackingHandle;// Offset=0x18 Size=0x8
    struct WDFREQUEST__ * PendingStartTrackingRequest;// Offset=0x20 Size=0x8
    void * ControllerHandle;// Offset=0x28 Size=0x8
    unsigned char IsTrackingForTimeSyncEnabled;// Offset=0x30 Size=0x1
    unsigned long NumberOfGetFrameQpcCalls;// Offset=0x34 Size=0x4
    unsigned long NumberOfFrameQpcTranslations;// Offset=0x38 Size=0x4
    char RequestorMode;// Offset=0x3c Size=0x1
};
