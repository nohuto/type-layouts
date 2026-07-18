struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=334)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Revision;// Offset=0x1 Size=0x1
    unsigned short Size;// Offset=0x2 Size=0x2
};

union _LARGE_INTEGER// Size=0x8 (Id=72)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct <unnamed-type-u>// Size=0x8 (Id=5263)
    {
        unsigned long LowPart;// Offset=0x0 Size=0x4
        long HighPart;// Offset=0x4 Size=0x4
    };
    struct _LARGE_INTEGER::<unnamed-type-u> u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _NDIS_SG_DMA_BLOCK// Size=0xa0 (Id=1470)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    struct _NDIS_MINIPORT_BLOCK * Miniport;// Offset=0x8 Size=0x8
    void * MiniportAdapterContext;// Offset=0x10 Size=0x8
    struct _DMA_ADAPTER * DmaAdapterObject;// Offset=0x18 Size=0x8
    void  ( * ProcessSGListHandler)(struct _DEVICE_OBJECT * ,void * ,struct _SCATTER_GATHER_LIST * ,void * );// Offset=0x20 Size=0x8
    void  ( * SharedMemAllocateCompleteHandler)(void * ,void * ,union _LARGE_INTEGER * ,unsigned long ,void * );// Offset=0x28 Size=0x8
    unsigned long Flags;// Offset=0x30 Size=0x4
    unsigned long MaximumPhysicalMapping;// Offset=0x34 Size=0x4
    unsigned long ScatterGatherListSize;// Offset=0x38 Size=0x4
    void * SGListLookasideList;// Offset=0x40 Size=0x8
    long DmaAdapterRefCount;// Offset=0x48 Size=0x4
    struct _KEVENT * DmaResourcesReleasedEvent;// Offset=0x50 Size=0x8
    void * SharedMemoryPage[2];// Offset=0x58 Size=0x10
    unsigned long SharedMemoryLeft[2];// Offset=0x68 Size=0x8
    union _LARGE_INTEGER SharedMemoryAddress[2];// Offset=0x70 Size=0x10
    struct _DMA_ADAPTER * SavedDmaAdapterObject;// Offset=0x80 Size=0x8
    struct _MAP_REGISTER_ENTRY * MapRegisters;// Offset=0x88 Size=0x8
    struct _KEVENT * AllocationEvent;// Offset=0x90 Size=0x8
    unsigned short CurrentMapRegister;// Offset=0x98 Size=0x2
    unsigned short BaseMapRegistersNeeded;// Offset=0x9a Size=0x2
    unsigned short SGMapRegistersNeeded;// Offset=0x9c Size=0x2
};
