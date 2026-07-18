struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=239)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Revision;// Offset=0x1 Size=0x1
    unsigned short Size;// Offset=0x2 Size=0x2
};

struct _NDIS_PD_QUEUE_DISPATCH// Size=0x28 (Id=1043)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    unsigned long Flags;// Offset=0x4 Size=0x4
    void  ( * PDPostAndDrainBufferList)(struct _NDIS_PD_QUEUE * ,struct _PD_BUFFER ** ,struct _PD_BUFFER *** ,unsigned long );// Offset=0x8 Size=0x8
    void  ( * PDQueryQueueDepth)(struct _NDIS_PD_QUEUE * ,unsigned long long * );// Offset=0x10 Size=0x8
    void  ( * PDFlushQueue)(struct _NDIS_PD_QUEUE * );// Offset=0x18 Size=0x8
    void  ( * PDPostAndDrainBufferListEx)(struct _NDIS_PD_QUEUE * ,struct _NDIS_PD_POST_AND_DRAIN_ARG * );// Offset=0x20 Size=0x8
};
