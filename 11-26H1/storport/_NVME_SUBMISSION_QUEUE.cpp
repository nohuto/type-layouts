struct _unnamed_10// Size=0x8 (Id=10)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=513)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_10 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _NVME_MEMORY_ADDRESS_PAIR// Size=0x10 (Id=966)
{
    void * VirtualAddress;// Offset=0x0 Size=0x8
    union _LARGE_INTEGER PhysicalAddress;// Offset=0x8 Size=0x8
};

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

union _unnamed_498// Size=0x8 (Id=498)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long Authenticated:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long Secured:1;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x1
        unsigned long long CleanupInProgress:1;// Offset=0x0 Size=0x8 BitOffset=0x2 BitSize=0x1
        unsigned long long Reserved:61;// Offset=0x0 Size=0x8 BitOffset=0x3 BitSize=0x3d
    };
    unsigned long long AsUlonglong;// Offset=0x0 Size=0x8
};

enum _NVME_QUEUE_STATE
{
    QueueStateInitialized=0,
    QueueStateCreating=1,
    QueueStateDisconnected=2,
    QueueStateConnecting=3,
    QueueStateAuthenticating=4,
    QueueStateConnected=5,
    QueueStateDisconnecting=6,
    QueueStateDeleting=7
};

struct _NVME_SUBMISSION_QUEUE// Size=0xc0 (Id=500)
{
    struct _NVME_MEMORY_ADDRESS_PAIR BaseAddress;// Offset=0x0 Size=0x10
    union NVME_SUBMISSION_QUEUE_TAIL_DOORBELL * TailDoorbell;// Offset=0x10 Size=0x8
    struct _NVME_COMMAND_SLOT_CONTEXT * CmdSlot;// Offset=0x18 Size=0x8
    struct _NVME_COMMAND_ID_CONTEXT * CmdId;// Offset=0x20 Size=0x8
    struct _NVME_MEMORY_ADDRESS_PAIR StorMQSQMiniportContextArray;// Offset=0x28 Size=0x10
    struct _STORMQ_SUBMISSION_QUEUE_METADATA_CONTEXT * StorMQSQMetadataContextArray;// Offset=0x38 Size=0x8
    union _SLIST_HEADER FreeCmdIdListHeader;// Offset=0x40 Size=0x10
    unsigned char * OutstandingRequestBitmap;// Offset=0x50 Size=0x8
    struct _NVME_CONTROLLER * NvmeController;// Offset=0x58 Size=0x8
    struct _NVME_QUEUE_AUTHCONTEXT * AuthContext;// Offset=0x60 Size=0x8
    unsigned long long Lock;// Offset=0x68 Size=0x8
    union _unnamed_498 Flags;// Offset=0x70 Size=0x8
    enum _NVME_QUEUE_STATE State;// Offset=0x78 Size=0x4
    unsigned long Size;// Offset=0x7c Size=0x4
    unsigned long SlotPrepareInProgress;// Offset=0x80 Size=0x4
    unsigned long TailDoorbellArmed;// Offset=0x84 Size=0x4
    unsigned short QueueId;// Offset=0x88 Size=0x2
    unsigned short CompletionQueueID;// Offset=0x8a Size=0x2
    unsigned short Head;// Offset=0x8c Size=0x2
    unsigned short Tail;// Offset=0x8e Size=0x2
    unsigned short NextCmdId;// Offset=0x90 Size=0x2
    unsigned short ProcessingCount;// Offset=0x92 Size=0x2
    unsigned short OutstandingCount;// Offset=0x94 Size=0x2
    unsigned short ReservedCount;// Offset=0x96 Size=0x2
    unsigned short CompletionCount;// Offset=0x98 Size=0x2
};
