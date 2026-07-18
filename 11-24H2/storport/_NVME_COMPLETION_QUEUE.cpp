struct _unnamed_10// Size=0x8 (Id=10)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=11)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_10 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _NVME_MEMORY_ADDRESS_PAIR// Size=0x10 (Id=961)
{
    void * VirtualAddress;// Offset=0x0 Size=0x8
    union _LARGE_INTEGER PhysicalAddress;// Offset=0x8 Size=0x8
};

union _unnamed_513// Size=0x4 (Id=513)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long ClassEfficiency:4;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x4
        unsigned long Reserved:28;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1c
    };
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};

struct _NVME_CQ_IO_POLLING// Size=0x10 (Id=1301)
{
    unsigned char Mode;// Offset=0x0 Size=0x1
    unsigned char Reserved[3];// Offset=0x1 Size=0x3
    long PollInterval;// Offset=0x4 Size=0x4
    struct NVME_IO_POLLING_WORKER_CONTEXT ** Workers;// Offset=0x8 Size=0x8
};

struct _NVME_COMPLETION_QUEUE// Size=0x80 (Id=514)
{
    struct _NVME_MEMORY_ADDRESS_PAIR BaseAddress;// Offset=0x0 Size=0x10
    union NVME_COMPLETION_QUEUE_HEAD_DOORBELL * HeadDoorbell;// Offset=0x10 Size=0x8
    unsigned long MessageId;// Offset=0x18 Size=0x4
    union _unnamed_513 Flags;// Offset=0x1c Size=0x4
    unsigned short QueueId;// Offset=0x20 Size=0x2
    unsigned short Head;// Offset=0x22 Size=0x2
    unsigned short Phase;// Offset=0x24 Size=0x2
    unsigned short Reserved0;// Offset=0x26 Size=0x2
    unsigned long HeadDoorbellArmed;// Offset=0x28 Size=0x4
    unsigned long ProcessInProgress;// Offset=0x2c Size=0x4
    struct _NVME_CONTROLLER * NvmeController;// Offset=0x30 Size=0x8
    unsigned long PollingReference;// Offset=0x38 Size=0x4
    unsigned long Reserved2;// Offset=0x3c Size=0x4
    struct _KDPC * CompletionDPCs;// Offset=0x40 Size=0x8
    long * CompletionDPCsInUse;// Offset=0x48 Size=0x8
    struct _NVME_CQ_IO_POLLING IoPolling;// Offset=0x50 Size=0x10
};
