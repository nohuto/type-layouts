struct _NDIS_PD_POST_AND_DRAIN_ARG// Size=0x20 (Id=782)
{
    struct _PD_BUFFER * PostBufferListHead;// Offset=0x0 Size=0x8
    struct _PD_BUFFER ** DrainBufferListTail;// Offset=0x8 Size=0x8
    unsigned long MaxDrainCount;// Offset=0x10 Size=0x4
    unsigned long DrainCount;// Offset=0x14 Size=0x4
    unsigned long PostCount;// Offset=0x18 Size=0x4
    unsigned char QueueDepthThresholdReached;// Offset=0x1c Size=0x1
};
