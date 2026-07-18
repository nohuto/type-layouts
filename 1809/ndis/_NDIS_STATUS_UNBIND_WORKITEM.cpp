struct _NDIS_WORK_ITEM// Size=0x50 (Id=547)
{
    void * Context;// Offset=0x0 Size=0x8
    void  ( * Routine)(struct _NDIS_WORK_ITEM * ,void * );// Offset=0x8 Size=0x8
    unsigned char WrapperReserved[64];// Offset=0x10 Size=0x40
};

struct _NDIS_STATUS_UNBIND_WORKITEM// Size=0x58 (Id=984)
{
    struct _NDIS_WORK_ITEM WorkItem;// Offset=0x0 Size=0x50
    struct _NDIS_MINIPORT_BLOCK * Miniport;// Offset=0x50 Size=0x8
};
