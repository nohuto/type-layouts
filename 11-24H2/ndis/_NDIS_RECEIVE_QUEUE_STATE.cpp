struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=242)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Revision;// Offset=0x1 Size=0x1
    unsigned short Size;// Offset=0x2 Size=0x2
};

enum _NDIS_RECEIVE_QUEUE_OPERATIONAL_STATE
{
    NdisReceiveQueueOperationalStateUndefined=0,
    NdisReceiveQueueOperationalStateRunning=1,
    NdisReceiveQueueOperationalStatePaused=2,
    NdisReceiveQueueOperationalStateDmaStopped=3,
    NdisReceiveQueueOperationalStateMaximum=4
};

struct _NDIS_RECEIVE_QUEUE_STATE// Size=0x10 (Id=1404)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    unsigned long Flags;// Offset=0x4 Size=0x4
    unsigned long QueueId;// Offset=0x8 Size=0x4
    enum _NDIS_RECEIVE_QUEUE_OPERATIONAL_STATE QueueState;// Offset=0xc Size=0x4
};
