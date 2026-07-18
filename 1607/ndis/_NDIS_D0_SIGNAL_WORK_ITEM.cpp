struct _NDIS_WORK_ITEM// Size=0x50 (Id=519)
{
    void * Context;// Offset=0x0 Size=0x8
    void  ( * Routine)(struct _NDIS_WORK_ITEM * ,void * );// Offset=0x8 Size=0x8
    unsigned char WrapperReserved[64];// Offset=0x10 Size=0x40
};

struct _NDIS_D0_SIGNAL_WORK_ITEM// Size=0x58 (Id=1067)
{
    struct _NDIS_WORK_ITEM WorkItem;// Offset=0x0 Size=0x50
    long CompletionStatus;// Offset=0x50 Size=0x4
    unsigned char Scheduled;// Offset=0x54 Size=0x1
};
