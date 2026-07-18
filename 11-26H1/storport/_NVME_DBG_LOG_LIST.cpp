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

struct _unnamed_570// Size=0x8 (Id=570)
{
    long Status;// Offset=0x0 Size=0x4
    unsigned char Success;// Offset=0x4 Size=0x1
};

union _NVME_COMMAND_STATUS// Size=0x2 (Id=408)
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

struct _unnamed_571// Size=0x20 (Id=571)
{
    unsigned short SubmissionQueueId;// Offset=0x0 Size=0x2
    unsigned short CompletionQueueId;// Offset=0x2 Size=0x2
    union NVME_COMMAND_DWORD0 CDW0;// Offset=0x4 Size=0x4
    unsigned long long Irp;// Offset=0x8 Size=0x8
    unsigned long CompletionEntryDW0;// Offset=0x10 Size=0x4
    unsigned long CompletionEntryDW1;// Offset=0x14 Size=0x4
    union _NVME_COMMAND_STATUS NvmeStatus;// Offset=0x18 Size=0x2
};

struct _unnamed_572// Size=0x10 (Id=572)
{
    unsigned short SubmissionQueueId;// Offset=0x0 Size=0x2
    unsigned short CompletionQueueId;// Offset=0x2 Size=0x2
    union NVME_COMMAND_DWORD0 CDW0;// Offset=0x4 Size=0x4
    unsigned long long Irp;// Offset=0x8 Size=0x8
};

struct _unnamed_573// Size=0x20 (Id=573)
{
    unsigned long long Param1;// Offset=0x0 Size=0x8
    unsigned long long Param2;// Offset=0x8 Size=0x8
    unsigned long long Param3;// Offset=0x10 Size=0x8
    unsigned long long Param4;// Offset=0x18 Size=0x8
};

union _NVME_DBG_LOG_PARAMETERS// Size=0x20 (Id=574)
{
    struct _unnamed_570 ResetAfterTimeout;// Offset=0x0 Size=0x8
    struct _unnamed_571 CompleteRequest;// Offset=0x0 Size=0x20
    struct _unnamed_572 SubmitRequest;// Offset=0x0 Size=0x10
    struct _unnamed_573 CriticalEvent;// Offset=0x0 Size=0x20
    unsigned long long AsUlong64[4];// Offset=0x0 Size=0x20
    unsigned char AsByte[32];// Offset=0x0 Size=0x20
};

struct _NVME_DBG_LOG_ENTRY// Size=0x40 (Id=569)
{
    unsigned short Reason;// Offset=0x0 Size=0x2
    unsigned short SubReason;// Offset=0x2 Size=0x2
    unsigned long Index;// Offset=0x4 Size=0x4
    union _LARGE_INTEGER Timestamp;// Offset=0x8 Size=0x8
    union _NVME_DBG_LOG_PARAMETERS Parameters;// Offset=0x10 Size=0x20
    unsigned char Reserved[16];// Offset=0x30 Size=0x10
};

struct _NVME_DBG_LOG_LIST// Size=0x80 (Id=568)
{
    unsigned long LogListIndex;// Offset=0x0 Size=0x4
    unsigned long ProcessorIndex;// Offset=0x4 Size=0x4
    unsigned short NumaNodeNumber;// Offset=0x8 Size=0x2
    unsigned short Reserved;// Offset=0xa Size=0x2
    unsigned long LogListEntryCount;// Offset=0xc Size=0x4
    struct _NVME_DBG_LOG_ENTRY LogList[1];// Offset=0x40 Size=0x40
};
