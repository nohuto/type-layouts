enum _NVMEOF_TRANSPORT_TYPE
{
    NvmeofTransportUnknown=0,
    NvmeofTransportRdma=1,
    NvmeofTransportFC=2,
    NvmeofTransportTcp=3,
    NvmeofTransportLoopback=254,
    NvmeofTransportMax=255
};

enum _NVMEOF_ADDRESS_FAMILY
{
    NvmeofAddressUnknown=0,
    NvmeofAddressIPv4=1,
    NvmeofAddressIPv6=2,
    NvmeofAddressIB=3,
    NvmeofAddressFC=4,
    NvmeofAddressLoopback=254,
    NvmeofAddressMax=255
};

struct _LIST_ENTRY// Size=0x10 (Id=5)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

union _unnamed_469// Size=0x8 (Id=469)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long DiscoveryInProgress:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long PeriodicDiscoveryEnabled:1;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x1
        unsigned long long RemovalInProgress:1;// Offset=0x0 Size=0x8 BitOffset=0x2 BitSize=0x1
        unsigned long long Reserved:61;// Offset=0x0 Size=0x8 BitOffset=0x3 BitSize=0x3d
    };
    unsigned long long AsUlonglong;// Offset=0x0 Size=0x8
};

struct _OWNER_ENTRY// Size=0x10 (Id=1124)
{
    unsigned long long OwnerThread;// Offset=0x0 Size=0x8
    union // Size=0x4 (Id=0)
    {
        struct // Size=0x4 (Id=0)
        {
            unsigned long IoPriorityBoosted:1;// Offset=0x8 Size=0x4 BitOffset=0x0 BitSize=0x1
            unsigned long OwnerReferenced:1;// Offset=0x8 Size=0x4 BitOffset=0x1 BitSize=0x1
            unsigned long IoQoSPriorityBoosted:1;// Offset=0x8 Size=0x4 BitOffset=0x2 BitSize=0x1
            unsigned long OwnerCount:29;// Offset=0x8 Size=0x4 BitOffset=0x3 BitSize=0x1d
        };
        unsigned long TableSize;// Offset=0x8 Size=0x4
    };
};

struct _ERESOURCE// Size=0x68 (Id=284)
{
    struct _LIST_ENTRY SystemResourcesList;// Offset=0x0 Size=0x10
    struct _OWNER_ENTRY * OwnerTable;// Offset=0x10 Size=0x8
    short ActiveCount;// Offset=0x18 Size=0x2
    union // Size=0x2 (Id=0)
    {
        unsigned short Flag;// Offset=0x1a Size=0x2
        unsigned char ReservedLowFlags;// Offset=0x1a Size=0x1
    };
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

struct _NVMEOF_HOSTGATEWAY_PROPERTIES// Size=0x1e8 (Id=470)
{
    unsigned long Signature;// Offset=0x0 Size=0x4
    enum _NVMEOF_TRANSPORT_TYPE TransportType;// Offset=0x4 Size=0x4
    enum _NVMEOF_ADDRESS_FAMILY AddressFamily;// Offset=0x8 Size=0x4
    unsigned short PeriodicDiscoveryInterval;// Offset=0xc Size=0x2
    unsigned long NumaNode;// Offset=0x10 Size=0x4
    struct _LIST_ENTRY ListEntry;// Offset=0x18 Size=0x10
    struct _NVME_ADAPTER_EXTENSION * NvmeAdapter;// Offset=0x28 Size=0x8
    union _unnamed_469 Flags;// Offset=0x30 Size=0x8
    struct _EX_RUNDOWN_REF_CACHE_AWARE * RundownProtection;// Offset=0x38 Size=0x8
    void * MiniportHandle;// Offset=0x40 Size=0x8
    unsigned char TransportAddress[256];// Offset=0x48 Size=0x100
    unsigned char TransportServiceId[32];// Offset=0x148 Size=0x20
    struct _LIST_ENTRY SubsystemPortList;// Offset=0x168 Size=0x10
    unsigned long SubsystemPortCount;// Offset=0x178 Size=0x4
    struct _ERESOURCE SubsystemPortListLock;// Offset=0x180 Size=0x68
};
