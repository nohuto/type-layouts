struct _LIST_ENTRY// Size=0x10 (Id=111)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _MicrosoftTelemetryAssertTriggeredNode// Size=0x30 (Id=3264)
{
    unsigned long long Hash;// Offset=0x0 Size=0x8
    unsigned long long LastUpload;// Offset=0x8 Size=0x8
    unsigned long Count;// Offset=0x10 Size=0x4
    unsigned long TotalHits;// Offset=0x14 Size=0x4
    unsigned long SuccessfulWatsons;// Offset=0x18 Size=0x4
    struct _LIST_ENTRY ListNode;// Offset=0x20 Size=0x10
};
