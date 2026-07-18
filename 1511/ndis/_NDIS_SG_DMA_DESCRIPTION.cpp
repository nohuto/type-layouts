struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=316)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Revision;// Offset=0x1 Size=0x1
    unsigned short Size;// Offset=0x2 Size=0x2
};

struct _NDIS_SG_DMA_DESCRIPTION// Size=0x28 (Id=856)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    unsigned long Flags;// Offset=0x4 Size=0x4
    unsigned long MaximumPhysicalMapping;// Offset=0x8 Size=0x4
    void  ( * ProcessSGListHandler)(struct _DEVICE_OBJECT * ,void * ,struct _SCATTER_GATHER_LIST * ,void * );// Offset=0x10 Size=0x8
    void  ( * SharedMemAllocateCompleteHandler)(void * ,void * ,union _LARGE_INTEGER * ,unsigned long ,void * );// Offset=0x18 Size=0x8
    unsigned long ScatterGatherListSize;// Offset=0x20 Size=0x4
};
