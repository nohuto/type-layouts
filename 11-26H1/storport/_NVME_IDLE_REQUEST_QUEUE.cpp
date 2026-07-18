struct _LIST_ENTRY// Size=0x10 (Id=5)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _NVME_IDLE_REQUEST_QUEUE// Size=0x28 (Id=1134)
{
    struct _LIST_ENTRY IdleRequestList;// Offset=0x0 Size=0x10
    struct _LIST_ENTRY IdleWritePagingRequestList;// Offset=0x10 Size=0x10
    unsigned long IdleRequestCount;// Offset=0x20 Size=0x4
    unsigned long IdleWritePagingRequestCount;// Offset=0x24 Size=0x4
};
