struct _unnamed_452// Size=0x10 (Id=452)
{
    struct // Size=0x10 (Id=0)
    {
        unsigned long long Depth:16;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x10
        unsigned long long Sequence:48;// Offset=0x0 Size=0x8 BitOffset=0x10 BitSize=0x30
        unsigned long long Reserved:4;// Offset=0x8 Size=0x8 BitOffset=0x0 BitSize=0x4
        unsigned long long NextEntry:60;// Offset=0x8 Size=0x8 BitOffset=0x4 BitSize=0x3c
    };
};

union _SLIST_HEADER// Size=0x10 (Id=453)
{
    unsigned long long Alignment;// Offset=0x0 Size=0x8
    unsigned long long Region;// Offset=0x8 Size=0x8
    struct _unnamed_452 HeaderX64;// Offset=0x0 Size=0x10
};

struct _STOR_PENDING_IO_QUEUE_CONTEXT// Size=0x140 (Id=1054)
{
    union // Size=0x4 (Id=0)
    {
        unsigned long PendingIoHint;// Offset=0x0 Size=0x4
        unsigned long State;// Offset=0x0 Size=0x4
    };
    unsigned long SubIoQueueCount;// Offset=0x4 Size=0x4
    struct _KDPC * PendingIoDPC;// Offset=0x8 Size=0x8
    struct _KTIMER * PendingIoTimer;// Offset=0x10 Size=0x8
    struct _KDPC * IoCompletionRedirectDPC;// Offset=0x18 Size=0x8
    unsigned long CurrentSubIoQueueIndexToProcess;// Offset=0x40 Size=0x4
    unsigned long PendingIoTimerSet;// Offset=0x80 Size=0x4
    union _SLIST_HEADER IoToCompleteList;// Offset=0xc0 Size=0x10
    unsigned long IoCompletionRedirectDPCInFlight;// Offset=0x100 Size=0x4
    struct _STOR_DEVICE_SUBQUEUE * SubIoQueues[1];// Offset=0x108 Size=0x8
};
