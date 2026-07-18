struct _SLIST_ENTRY// Size=0x10 (Id=449)
{
    struct _SLIST_ENTRY * Next;// Offset=0x0 Size=0x8
};

union _unnamed_510// Size=0x1 (Id=510)
{
    struct // Size=0x1 (Id=0)
    {
        unsigned char Outstanding:1;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char InternalCommand:1;// Offset=0x0 Size=0x1 BitOffset=0x1 BitSize=0x1
        unsigned char ZeroCommandEntry:1;// Offset=0x0 Size=0x1 BitOffset=0x2 BitSize=0x1
        unsigned char SplitCommand:1;// Offset=0x0 Size=0x1 BitOffset=0x3 BitSize=0x1
        unsigned char Polling:1;// Offset=0x0 Size=0x1 BitOffset=0x4 BitSize=0x1
        unsigned char ExecuteInIsolation:1;// Offset=0x0 Size=0x1 BitOffset=0x5 BitSize=0x1
        unsigned char UntimedCommand:1;// Offset=0x0 Size=0x1 BitOffset=0x6 BitSize=0x1
        unsigned char SglUsed:1;// Offset=0x0 Size=0x1 BitOffset=0x7 BitSize=0x1
    };
    unsigned char AsUCHAR;// Offset=0x0 Size=0x1
};

union _unnamed_512// Size=0x1 (Id=512)
{
    struct // Size=0x1 (Id=0)
    {
        unsigned char ReleasePowerReference:1;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char Synchronous:1;// Offset=0x0 Size=0x1 BitOffset=0x1 BitSize=0x1
        unsigned char Reserved:6;// Offset=0x0 Size=0x1 BitOffset=0x2 BitSize=0x6
    };
    unsigned char AsUCHAR;// Offset=0x0 Size=0x1
};

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

struct _NVME_COMMAND_ID_CONTEXT// Size=0x80 (Id=514)
{
    struct _SLIST_ENTRY Entry;// Offset=0x0 Size=0x10
    union // Size=0x8 (Id=0)
    {
        void * PrpListEntry;// Offset=0x10 Size=0x8
        struct _IO_RESOURCE_ENTRY * IoResource;// Offset=0x10 Size=0x8
    };
    union // Size=0x8 (Id=0)
    {
        struct _IRP * Irp;// Offset=0x18 Size=0x8
        struct _STORAGE_REQUEST_BLOCK * SrbEx;// Offset=0x18 Size=0x8
    };
    union // Size=0x8 (Id=0)
    {
        void  ( * CompletionRoutine)(struct _NVME_CONTROLLER * ,void * ,struct NVME_COMPLETION_ENTRY * );// Offset=0x20 Size=0x8
        void  ( * NvmeofCompletionRoutine)(struct _NVME_CONTROLLER * ,struct _STORAGE_REQUEST_BLOCK * ,struct _IRP * ,unsigned long ,struct _NVME_NAMESPACE_EXTENSION * ,void * );// Offset=0x20 Size=0x8
    };
    union // Size=0x8 (Id=0)
    {
        void * CompletionContext;// Offset=0x28 Size=0x8
        void * SplitIoContext;// Offset=0x28 Size=0x8
    };
    unsigned long TransferSizeInBytes;// Offset=0x30 Size=0x4
    unsigned short InitiatingProcessor;// Offset=0x34 Size=0x2
    unsigned short CommandId;// Offset=0x36 Size=0x2
    unsigned short CommandSlot;// Offset=0x38 Size=0x2
    unsigned short TimeoutInSeconds;// Offset=0x3a Size=0x2
    union _unnamed_510 Flags;// Offset=0x3c Size=0x1
    union _unnamed_512 Flags2;// Offset=0x3d Size=0x1
    unsigned char Reserved0[2];// Offset=0x3e Size=0x2
    union _LARGE_INTEGER Timestamp;// Offset=0x40 Size=0x8
    void * ExtCommand;// Offset=0x48 Size=0x8
    unsigned long NamespaceId;// Offset=0x50 Size=0x4
    unsigned char Reserved1[44];// Offset=0x54 Size=0x2c
};
