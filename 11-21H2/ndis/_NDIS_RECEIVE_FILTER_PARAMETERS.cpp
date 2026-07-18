struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=227)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Revision;// Offset=0x1 Size=0x1
    unsigned short Size;// Offset=0x2 Size=0x2
};

enum _NDIS_RECEIVE_FILTER_TYPE
{
    NdisReceiveFilterTypeUndefined=0,
    NdisReceiveFilterTypeVMQueue=1,
    NdisReceiveFilterTypePacketCoalescing=2,
    NdisReceiveFilterTypeMaximum=3
};

struct _NDIS_RECEIVE_FILTER_PARAMETERS// Size=0x2c (Id=1413)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    unsigned long Flags;// Offset=0x4 Size=0x4
    enum _NDIS_RECEIVE_FILTER_TYPE FilterType;// Offset=0x8 Size=0x4
    unsigned long QueueId;// Offset=0xc Size=0x4
    unsigned long FilterId;// Offset=0x10 Size=0x4
    unsigned long FieldParametersArrayOffset;// Offset=0x14 Size=0x4
    unsigned long FieldParametersArrayNumElements;// Offset=0x18 Size=0x4
    unsigned long FieldParametersArrayElementSize;// Offset=0x1c Size=0x4
    unsigned long RequestedFilterIdBitCount;// Offset=0x20 Size=0x4
    unsigned long MaxCoalescingDelay;// Offset=0x24 Size=0x4
    unsigned long VPortId;// Offset=0x28 Size=0x4
};
