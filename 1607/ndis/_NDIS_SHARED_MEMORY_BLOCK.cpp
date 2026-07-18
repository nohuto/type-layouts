struct _LIST_ENTRY// Size=0x10 (Id=26)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

union _LARGE_INTEGER// Size=0x8 (Id=315)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct <unnamed-type-u>// Size=0x8 (Id=4931)
    {
        unsigned long LowPart;// Offset=0x0 Size=0x4
        long HighPart;// Offset=0x4 Size=0x4
    };
    struct _LARGE_INTEGER::<unnamed-type-u> u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=323)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Revision;// Offset=0x1 Size=0x1
    unsigned short Size;// Offset=0x2 Size=0x2
};

enum _NDIS_SHARED_MEMORY_USAGE
{
    NdisSharedMemoryUsageUndefined=0,
    NdisSharedMemoryUsageXmit=1,
    NdisSharedMemoryUsageXmitHeader=2,
    NdisSharedMemoryUsageXmitData=3,
    NdisSharedMemoryUsageReceive=4,
    NdisSharedMemoryUsageReceiveLookahead=5,
    NdisSharedMemoryUsageReceivePostLookahead=6,
    NdisSharedMemoryUsageReceiveHeader=7,
    NdisSharedMemoryUsageReceiveData=8,
    NdisSharedMemoryUsageOther=9,
    NdisSharedMemoryUsageMax=10
};

struct _NDIS_SHARED_MEMORY_PARAMETERS// Size=0x48 (Id=669)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    unsigned long Flags;// Offset=0x4 Size=0x4
    unsigned long QueueId;// Offset=0x8 Size=0x4
    void * SharedMemoryHandle;// Offset=0x10 Size=0x8
    unsigned long PreferredNode;// Offset=0x18 Size=0x4
    enum _NDIS_SHARED_MEMORY_USAGE Usage;// Offset=0x1c Size=0x4
    unsigned long Length;// Offset=0x20 Size=0x4
    void * VirtualAddress;// Offset=0x28 Size=0x8
    unsigned long SGListBufferLength;// Offset=0x30 Size=0x4
    struct _SCATTER_GATHER_LIST * SGListBuffer;// Offset=0x38 Size=0x8
    unsigned long VPortId;// Offset=0x40 Size=0x4
};

struct _NDIS_SHARED_MEMORY_BLOCK// Size=0xb8 (Id=490)
{
    struct _LIST_ENTRY MiniportLink;// Offset=0x0 Size=0x10
    struct _LIST_ENTRY OpenLink;// Offset=0x10 Size=0x10
    struct _LIST_ENTRY QueueLink;// Offset=0x20 Size=0x10
    unsigned long Flags;// Offset=0x30 Size=0x4
    struct _NDIS_MINIPORT_BLOCK * Miniport;// Offset=0x38 Size=0x8
    struct _NDIS_OPEN_BLOCK * Open;// Offset=0x40 Size=0x8
    struct _NDIS_RECEIVE_QUEUE_BLOCK * ReceiveQueue;// Offset=0x48 Size=0x8
    void  ( * FreeSharedMemoryHandler)(void * ,void * );// Offset=0x50 Size=0x8
    void * SharedMemoryHandlerContext;// Offset=0x58 Size=0x8
    void * ProviderAllocationContext;// Offset=0x60 Size=0x8
    union _LARGE_INTEGER PhysicalAddress;// Offset=0x68 Size=0x8
    struct _NDIS_SHARED_MEMORY_PARAMETERS SharedMemoryParameters;// Offset=0x70 Size=0x48
};
