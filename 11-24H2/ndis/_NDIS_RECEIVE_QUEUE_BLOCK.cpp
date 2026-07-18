struct _LIST_ENTRY// Size=0x10 (Id=51)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

enum _NDIS_RECEIVE_QUEUE_PNP_STATE
{
    NdisReceiveQueuePnPStateUndefined=0,
    NdisReceiveQueuePnPStateAddedToList=1,
    NdisReceiveQueuePnPStateAllocated=2,
    NdisReceiveQueuePnPStateEnabled=3,
    NdisReceiveQueuePnPStateMaximum=4
};

enum _NDIS_RECEIVE_QUEUE_OPERATIONAL_STATE
{
    NdisReceiveQueueOperationalStateUndefined=0,
    NdisReceiveQueueOperationalStateRunning=1,
    NdisReceiveQueueOperationalStatePaused=2,
    NdisReceiveQueueOperationalStateDmaStopped=3,
    NdisReceiveQueueOperationalStateMaximum=4
};

struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=242)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Revision;// Offset=0x1 Size=0x1
    unsigned short Size;// Offset=0x2 Size=0x2
};

enum _NDIS_RECEIVE_QUEUE_TYPE
{
    NdisReceiveQueueTypeUnspecified=0,
    NdisReceiveQueueTypeVMQueue=1,
    NdisReceiveQueueTypeMaximum=2
};

struct _GROUP_AFFINITY// Size=0x10 (Id=767)
{
    unsigned long long Mask;// Offset=0x0 Size=0x8
    unsigned short Group;// Offset=0x8 Size=0x2
    unsigned short Reserved[3];// Offset=0xa Size=0x6
};

struct _IF_COUNTED_STRING_LH// Size=0x204 (Id=1381)
{
    unsigned short Length;// Offset=0x0 Size=0x2
    wchar_t String[257];// Offset=0x2 Size=0x202
};

struct _NDIS_RECEIVE_QUEUE_PARAMETERS// Size=0x448 (Id=1135)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    unsigned long Flags;// Offset=0x4 Size=0x4
    enum _NDIS_RECEIVE_QUEUE_TYPE QueueType;// Offset=0x8 Size=0x4
    unsigned long QueueId;// Offset=0xc Size=0x4
    unsigned long QueueGroupId;// Offset=0x10 Size=0x4
    struct _GROUP_AFFINITY ProcessorAffinity;// Offset=0x18 Size=0x10
    unsigned long NumSuggestedReceiveBuffers;// Offset=0x28 Size=0x4
    unsigned long MSIXTableEntry;// Offset=0x2c Size=0x4
    unsigned long LookaheadSize;// Offset=0x30 Size=0x4
    struct _IF_COUNTED_STRING_LH VmName;// Offset=0x34 Size=0x204
    struct _IF_COUNTED_STRING_LH QueueName;// Offset=0x238 Size=0x204
    unsigned long PortId;// Offset=0x43c Size=0x4
    unsigned long InterruptCoalescingDomainId;// Offset=0x440 Size=0x4
    unsigned long QosSqId;// Offset=0x444 Size=0x4
};

struct _NDIS_RECEIVE_QUEUE_BLOCK// Size=0x4c8 (Id=778)
{
    struct _LIST_ENTRY AdapterLink;// Offset=0x0 Size=0x10
    struct _LIST_ENTRY OpenLink;// Offset=0x10 Size=0x10
    struct _LIST_ENTRY FilterList;// Offset=0x20 Size=0x10
    unsigned long QueueId;// Offset=0x30 Size=0x4
    enum _NDIS_RECEIVE_QUEUE_PNP_STATE QueuePnPState;// Offset=0x34 Size=0x4
    enum _NDIS_RECEIVE_QUEUE_OPERATIONAL_STATE QueueState;// Offset=0x38 Size=0x4
    struct _NDIS_MINIPORT_BLOCK * Miniport;// Offset=0x40 Size=0x8
    struct _NDIS_OPEN_BLOCK * Open;// Offset=0x48 Size=0x8
    long Reference;// Offset=0x50 Size=0x4
    unsigned long NumFilters;// Offset=0x54 Size=0x4
    struct _LIST_ENTRY SharedMemoryList;// Offset=0x58 Size=0x10
    int  ( * AllocateSharedMemoryHandler)(void * ,struct _NDIS_SHARED_MEMORY_PARAMETERS * ,void ** );// Offset=0x68 Size=0x8
    void  ( * FreeSharedMemoryHandler)(void * ,void * );// Offset=0x70 Size=0x8
    unsigned char MacAddress[6];// Offset=0x78 Size=0x6
    struct _NDIS_RECEIVE_QUEUE_PARAMETERS QueueParameters;// Offset=0x80 Size=0x448
};
