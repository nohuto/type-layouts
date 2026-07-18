struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=227)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Revision;// Offset=0x1 Size=0x1
    unsigned short Size;// Offset=0x2 Size=0x2
};

enum _NDIS_RECEIVE_QUEUE_TYPE
{
    NdisReceiveQueueTypeUnspecified=0,
    NdisReceiveQueueTypeVMQueue=1,
    NdisReceiveQueueTypeMaximum=2
};

struct _GROUP_AFFINITY// Size=0x10 (Id=676)
{
    unsigned long long Mask;// Offset=0x0 Size=0x8
    unsigned short Group;// Offset=0x8 Size=0x2
    unsigned short Reserved[3];// Offset=0xa Size=0x6
};

struct _IF_COUNTED_STRING_LH// Size=0x204 (Id=1268)
{
    unsigned short Length;// Offset=0x0 Size=0x2
    wchar_t String[257];// Offset=0x2 Size=0x202
};

struct _NDIS_RECEIVE_QUEUE_PARAMETERS// Size=0x448 (Id=1027)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    unsigned long Flags;// Offset=0x4 Size=0x4
    enum _NDIS_RECEIVE_QUEUE_TYPE QueueType;// Offset=0x8 Size=0x4
    unsigned long QueueId;// Offset=0xc Size=0x4
    unsigned long QueueGroupId;// Offset=0x10 Size=0x4
    struct _GROUP_AFFINITY ProcessorAffinity;// Offset=0x18 Size=0x10
    unsigned long NumSuggestedReceiveBuffers;// Offset=0x28 Size=0x4
    unsigned long MSIXTableEntry;// Offset=0x2c Size=0x4
    unsigned long LookaheadSize;// Offset=0x30 Size=0x4
    struct _IF_COUNTED_STRING_LH VmName;// Offset=0x34 Size=0x204
    struct _IF_COUNTED_STRING_LH QueueName;// Offset=0x238 Size=0x204
    unsigned long PortId;// Offset=0x43c Size=0x4
    unsigned long InterruptCoalescingDomainId;// Offset=0x440 Size=0x4
    unsigned long QosSqId;// Offset=0x444 Size=0x4
};
