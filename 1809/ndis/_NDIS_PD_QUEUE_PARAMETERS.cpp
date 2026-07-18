struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=355)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Revision;// Offset=0x1 Size=0x1
    unsigned short Size;// Offset=0x2 Size=0x2
};

struct _GROUP_AFFINITY// Size=0x10 (Id=610)
{
    unsigned long long Mask;// Offset=0x0 Size=0x8
    unsigned short Group;// Offset=0x8 Size=0x2
    unsigned short Reserved[3];// Offset=0xa Size=0x6
};

struct _NDIS_PD_QUEUE_PARAMETERS// Size=0x38 (Id=1568)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    unsigned long Flags;// Offset=0x4 Size=0x4
    enum NDIS_PD_QUEUE_TYPE QueueType;// Offset=0x8 Size=0x4
    unsigned long QueueSize;// Offset=0xc Size=0x4
    unsigned long ReceiveDataLength;// Offset=0x10 Size=0x4
    struct _GROUP_AFFINITY Affinity;// Offset=0x18 Size=0x10
    unsigned long TrafficClassId;// Offset=0x28 Size=0x4
    unsigned long MaximumPartialBufferCount;// Offset=0x2c Size=0x4
    struct NDIS_PD_COUNTER_HANDLE__ * CounterHandle;// Offset=0x30 Size=0x8
};
