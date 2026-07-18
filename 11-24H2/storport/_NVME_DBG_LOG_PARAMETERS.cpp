struct _unnamed_568// Size=0x8 (Id=568)
{
    long Status;// Offset=0x0 Size=0x4
    unsigned char Success;// Offset=0x4 Size=0x1
};

union _NVME_COMMAND_STATUS// Size=0x2 (Id=399)
{
    struct // Size=0x2 (Id=0)
    {
        unsigned short P:1;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0x1
        unsigned short SC:8;// Offset=0x0 Size=0x2 BitOffset=0x1 BitSize=0x8
        unsigned short SCT:3;// Offset=0x0 Size=0x2 BitOffset=0x9 BitSize=0x3
        unsigned short CRD:2;// Offset=0x0 Size=0x2 BitOffset=0xc BitSize=0x2
        unsigned short M:1;// Offset=0x0 Size=0x2 BitOffset=0xe BitSize=0x1
        unsigned short DNR:1;// Offset=0x0 Size=0x2 BitOffset=0xf BitSize=0x1
    };
    unsigned short AsUshort;// Offset=0x0 Size=0x2
};

struct _unnamed_569// Size=0x20 (Id=569)
{
    unsigned short SubmissionQueueId;// Offset=0x0 Size=0x2
    unsigned short CompletionQueueId;// Offset=0x2 Size=0x2
    union NVME_COMMAND_DWORD0 CDW0;// Offset=0x4 Size=0x4
    unsigned long long Irp;// Offset=0x8 Size=0x8
    unsigned long CompletionEntryDW0;// Offset=0x10 Size=0x4
    unsigned long CompletionEntryDW1;// Offset=0x14 Size=0x4
    union _NVME_COMMAND_STATUS NvmeStatus;// Offset=0x18 Size=0x2
};

struct _unnamed_570// Size=0x10 (Id=570)
{
    unsigned short SubmissionQueueId;// Offset=0x0 Size=0x2
    unsigned short CompletionQueueId;// Offset=0x2 Size=0x2
    union NVME_COMMAND_DWORD0 CDW0;// Offset=0x4 Size=0x4
    unsigned long long Irp;// Offset=0x8 Size=0x8
};

struct _unnamed_571// Size=0x20 (Id=571)
{
    unsigned long long Param1;// Offset=0x0 Size=0x8
    unsigned long long Param2;// Offset=0x8 Size=0x8
    unsigned long long Param3;// Offset=0x10 Size=0x8
    unsigned long long Param4;// Offset=0x18 Size=0x8
};

union _NVME_DBG_LOG_PARAMETERS// Size=0x20 (Id=572)
{
    struct _unnamed_568 ResetAfterTimeout;// Offset=0x0 Size=0x8
    struct _unnamed_569 CompleteRequest;// Offset=0x0 Size=0x20
    struct _unnamed_570 SubmitRequest;// Offset=0x0 Size=0x10
    struct _unnamed_571 CriticalEvent;// Offset=0x0 Size=0x20
    unsigned long long AsUlong64[4];// Offset=0x0 Size=0x20
    unsigned char AsByte[32];// Offset=0x0 Size=0x20
};
