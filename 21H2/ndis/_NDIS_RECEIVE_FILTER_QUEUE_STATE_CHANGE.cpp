struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=210)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Revision;// Offset=0x1 Size=0x1
    unsigned short Size;// Offset=0x2 Size=0x2
};

struct _NDIS_RECEIVE_FILTER_QUEUE_STATE_CHANGE// Size=0x8 (Id=594)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    unsigned long QueueId;// Offset=0x4 Size=0x4
};
