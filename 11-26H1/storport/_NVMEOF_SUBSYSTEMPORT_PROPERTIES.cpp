struct _LIST_ENTRY// Size=0x10 (Id=5)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

union _unnamed_473// Size=0x8 (Id=473)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long ManuallyAdded:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long SupportsIoControllers:1;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x1
        unsigned long long SupportsDynamicControllers:1;// Offset=0x0 Size=0x8 BitOffset=0x2 BitSize=0x1
        unsigned long long PersistControllerId:1;// Offset=0x0 Size=0x8 BitOffset=0x3 BitSize=0x1
        unsigned long long RemovalInProgress:1;// Offset=0x0 Size=0x8 BitOffset=0x4 BitSize=0x1
        unsigned long long Reserved:59;// Offset=0x0 Size=0x8 BitOffset=0x5 BitSize=0x3b
    };
    unsigned long long AsUlonglong;// Offset=0x0 Size=0x8
};

union _OWNER_ENTRY_COUNTS// Size=0x4 (Id=1290)
{
    unsigned long Value;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long IoPriorityBoosted:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long OwnerReferenced:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long IoQoSPriorityBoosted:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long OwnerCount:29;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1d
    };
};

struct _OWNER_ENTRY// Size=0x10 (Id=1129)
{
    unsigned long long OwnerThread;// Offset=0x0 Size=0x8
    union // Size=0x4 (Id=0)
    {
        union _OWNER_ENTRY_COUNTS EntryCounts;// Offset=0x8 Size=0x4
        unsigned long TableSize;// Offset=0x8 Size=0x4
    };
};

struct _ERESOURCE// Size=0x68 (Id=293)
{
    struct _LIST_ENTRY SystemResourcesList;// Offset=0x0 Size=0x10
    struct _OWNER_ENTRY * OwnerTable;// Offset=0x10 Size=0x8
    short ActiveCount;// Offset=0x18 Size=0x2
    unsigned char Flag;// Offset=0x1a Size=0x1
    unsigned char WaiterPriority;// Offset=0x1b Size=0x1
    void * SharedWaiters;// Offset=0x20 Size=0x8
    void * ExclusiveWaiters;// Offset=0x28 Size=0x8
    struct _OWNER_ENTRY OwnerEntry;// Offset=0x30 Size=0x10
    unsigned long ActiveEntries;// Offset=0x40 Size=0x4
    unsigned long ContentionCount;// Offset=0x44 Size=0x4
    unsigned long NumberOfSharedWaiters;// Offset=0x48 Size=0x4
    unsigned long NumberOfExclusiveWaiters;// Offset=0x4c Size=0x4
    char MiscFlags;// Offset=0x50 Size=0x1
    unsigned char Reserved1[3];// Offset=0x51 Size=0x3
    unsigned long ResourceTimeoutCount;// Offset=0x54 Size=0x4
    union // Size=0x8 (Id=0)
    {
        void * Address;// Offset=0x58 Size=0x8
        unsigned long long CreatorBackTraceIndex;// Offset=0x58 Size=0x8
    };
    unsigned long long SpinLock;// Offset=0x60 Size=0x8
};

struct _NVMEOF_SUBSYSTEMPORT_PROPERTIES// Size=0x2e0 (Id=474)
{
    unsigned long Signature;// Offset=0x0 Size=0x4
    unsigned short PortId;// Offset=0x4 Size=0x2
    unsigned short MaxAdminQueueDepth;// Offset=0x6 Size=0x2
    struct _LIST_ENTRY ListEntry;// Offset=0x8 Size=0x10
    struct _NVMEOF_HOSTGATEWAY_PROPERTIES * HostGateway;// Offset=0x18 Size=0x8
    union _unnamed_473 Flags;// Offset=0x20 Size=0x8
    struct _EX_RUNDOWN_REF_CACHE_AWARE * RundownProtection;// Offset=0x28 Size=0x8
    void * MiniportHandle;// Offset=0x30 Size=0x8
    unsigned short CommandQuiesceTime;// Offset=0x38 Size=0x2
    unsigned short Reserved0;// Offset=0x3a Size=0x2
    unsigned char Nqn[256];// Offset=0x3c Size=0x100
    unsigned char TransportAddress[256];// Offset=0x13c Size=0x100
    unsigned char TransportServiceId[32];// Offset=0x23c Size=0x20
    struct _LIST_ENTRY NvmeofControllerList;// Offset=0x260 Size=0x10
    unsigned long NvmeofControllerCount;// Offset=0x270 Size=0x4
    struct _ERESOURCE NvmeofControllerListLock;// Offset=0x278 Size=0x68
};
