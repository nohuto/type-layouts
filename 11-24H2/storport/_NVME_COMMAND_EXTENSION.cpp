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

union _NVME_COMMAND_EXTENSION_FLAGS// Size=0x4 (Id=834)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long AdminCommand:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long NeedDataTransfer:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long PrpSet:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long Outstanding:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long ReassignedToSubOptimalSubmissionQueue:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long InternalCommand:1;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1
        unsigned long Polling:1;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1
        unsigned long RetryExhausted:1;// Offset=0x0 Size=0x4 BitOffset=0x7 BitSize=0x1
        unsigned long ExecuteInIsolation:1;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x1
        unsigned long WriteToDevice:1;// Offset=0x0 Size=0x4 BitOffset=0x9 BitSize=0x1
        unsigned long SystemBufferShifted:1;// Offset=0x0 Size=0x4 BitOffset=0xa BitSize=0x1
        unsigned long SkipPowerActiveReference:1;// Offset=0x0 Size=0x4 BitOffset=0xb BitSize=0x1
        unsigned long ReleasePowerReferenceAfterCmdSent:1;// Offset=0x0 Size=0x4 BitOffset=0xc BitSize=0x1
        unsigned long SkipProcessInResetRecovery:1;// Offset=0x0 Size=0x4 BitOffset=0xd BitSize=0x1
        unsigned long IsSent:1;// Offset=0x0 Size=0x4 BitOffset=0xe BitSize=0x1
        unsigned long IsProcessed:1;// Offset=0x0 Size=0x4 BitOffset=0xf BitSize=0x1
        unsigned long Synchronous:1;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x1
        unsigned long ReadWriteCommand:1;// Offset=0x0 Size=0x4 BitOffset=0x11 BitSize=0x1
        unsigned long Reserved:14;// Offset=0x0 Size=0x4 BitOffset=0x12 BitSize=0xe
    };
    unsigned long AsULONG;// Offset=0x0 Size=0x4
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

struct _NVME_COMMAND_EXTENSION// Size=0x10b0 (Id=724)
{
    unsigned char PrpList[4096];// Offset=0x0 Size=0x1000
    struct NVME_COMMAND Command;// Offset=0x1000 Size=0x40
    void * DataBuffer;// Offset=0x1040 Size=0x8
    union _LARGE_INTEGER DataBufferPhysicalAddress;// Offset=0x1048 Size=0x8
    union // Size=0x8 (Id=0)
    {
        struct _SCATTER_GATHER_LIST * Sgl;// Offset=0x1050 Size=0x8
        unsigned long DataBufferOffsetForPrp;// Offset=0x1050 Size=0x4
    };
    struct _IRP * Irp;// Offset=0x1058 Size=0x8
    void  ( * CompletionRoutine)(struct _NVME_CONTROLLER * ,void * ,struct NVME_COMPLETION_ENTRY * );// Offset=0x1060 Size=0x8
    void * CompletionContext;// Offset=0x1068 Size=0x8
    void * CompletionContext2;// Offset=0x1070 Size=0x8
    struct _NVME_NAMESPACE_EXTENSION * Namespace;// Offset=0x1078 Size=0x8
    struct _NVME_ADAPTER_EXTENSION * Adapter;// Offset=0x1080 Size=0x8
    struct _NVME_CONTROLLER * Controller;// Offset=0x1088 Size=0x8
    struct _NVME_EXTENDED_COMMAND * ExtendedCommand;// Offset=0x1090 Size=0x8
    unsigned long DataTransferLength;// Offset=0x1098 Size=0x4
    unsigned short QueueID;// Offset=0x109c Size=0x2
    unsigned short Reserved0;// Offset=0x109e Size=0x2
    union _NVME_COMMAND_EXTENSION_FLAGS Flags;// Offset=0x10a0 Size=0x4
    union _NVME_COMMAND_STATUS NVMeStatus;// Offset=0x10a4 Size=0x2
    unsigned char RetryCount;// Offset=0x10a6 Size=0x1
    unsigned char Reserved1;// Offset=0x10a7 Size=0x1
    unsigned short PowerActiveRefCount;// Offset=0x10a8 Size=0x2
    unsigned long AdapterPowerRefReleased;// Offset=0x10ac Size=0x4
};
