struct _LIST_ENTRY// Size=0x10 (Id=23)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _anonymous_31// Size=0x8 (Id=31)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=63)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _anonymous_31 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _TIME_SYNC_DATA// Size=0xa8 (Id=433)
{
    unsigned char IsFrameOverflowInterruptEnabled;// Offset=0x0 Size=0x1
    void * TimeSyncTrackingLock;// Offset=0x8 Size=0x8
    unsigned long CurrentGenerationID;// Offset=0x10 Size=0x4
    struct WDFCOLLECTION__ * HandleCollection;// Offset=0x18 Size=0x8
    struct _LIST_ENTRY PendingStartTrackingList;// Offset=0x20 Size=0x10
    struct WDFWORKITEM__ * PendingStartTrackingWorkItem;// Offset=0x30 Size=0x8
    unsigned char IsPendingStartTrackingWorkItemQueued;// Offset=0x38 Size=0x1
    unsigned char IsLastBoundaryValueValid;// Offset=0x39 Size=0x1
    union _LARGE_INTEGER LastBoundaryQpcValue;// Offset=0x40 Size=0x8
    unsigned long LastBoundaryUSBFrame;// Offset=0x48 Size=0x4
    unsigned long LastBoundaryHwFrame;// Offset=0x4c Size=0x4
    unsigned long LastBoundaryHwMicroFrame;// Offset=0x50 Size=0x4
    unsigned long long InterruptTimeOfLastFrameNumberOverflowCheck;// Offset=0x58 Size=0x8
    unsigned long long InterruptTimeOfLastFrameNumberOverflowEvent;// Offset=0x60 Size=0x8
    union _LARGE_INTEGER QPCOfLastFrameNumberOverflowEvent;// Offset=0x68 Size=0x8
    unsigned long USBFrameOfLastFrameNumberOverflowEvent;// Offset=0x70 Size=0x4
    union _LARGE_INTEGER QpcFrequency;// Offset=0x78 Size=0x8
    union _LARGE_INTEGER AccumulatedQPCTime;// Offset=0x80 Size=0x8
    unsigned long long AccumulatedMicroFrames;// Offset=0x88 Size=0x8
    unsigned long DiscardedWrapEvents;// Offset=0x90 Size=0x4
    unsigned long LateWrapEvents;// Offset=0x94 Size=0x4
    unsigned long CountOfStartTrackingTelemetryEvents;// Offset=0x98 Size=0x4
    unsigned long CountOfStopTrackingTelemetryEvents;// Offset=0x9c Size=0x4
    unsigned long CountOfGetFrameQpcCalls;// Offset=0xa0 Size=0x4
    unsigned long CountOfFrameQpcTranslations;// Offset=0xa4 Size=0x4
};
