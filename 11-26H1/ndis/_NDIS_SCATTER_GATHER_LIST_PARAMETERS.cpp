struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=236)
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

struct _NDIS_SCATTER_GATHER_LIST_PARAMETERS// Size=0x48 (Id=1138)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    unsigned long Flags;// Offset=0x4 Size=0x4
    unsigned long QueueId;// Offset=0x8 Size=0x4
    enum _NDIS_SHARED_MEMORY_USAGE SharedMemoryUsage;// Offset=0xc Size=0x4
    struct _MDL * Mdl;// Offset=0x10 Size=0x8
    void * CurrentVa;// Offset=0x18 Size=0x8
    unsigned long Length;// Offset=0x20 Size=0x4
    void  ( * ProcessSGListHandler)(struct _DEVICE_OBJECT * ,void * ,struct _SCATTER_GATHER_LIST * ,void * );// Offset=0x28 Size=0x8
    void * Context;// Offset=0x30 Size=0x8
    struct _SCATTER_GATHER_LIST * ScatterGatherListBuffer;// Offset=0x38 Size=0x8
    unsigned long ScatterGatherListBufferSize;// Offset=0x40 Size=0x4
    unsigned long ScatterGatherListBufferSizeNeeded;// Offset=0x44 Size=0x4
};
