struct _LIST_ENTRY// Size=0x10 (Id=32)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _NDIS_CONNECTION_INFO// Size=0x30 (Id=1410)
{
    unsigned char MacAddress[6];// Offset=0x0 Size=0x6
    union // Size=0xc (Id=0)
    {
        struct _NDIS_CONNECTION_INFO::_anonymous_1412::<unnamed-type-IPv4Info> IPv4Info;// Offset=0x8 Size=0xc
        struct _NDIS_CONNECTION_INFO::_anonymous_1413::<unnamed-type-IPv6Info> IPv6Info;// Offset=0x8 Size=0x21
    };
    union // Size=0x4 (Id=0)
    {
        struct _NDIS_CONNECTION_INFO::_anonymous_1415::<unnamed-type-TcpPortInfo> TcpPortInfo;// Offset=0x2c Size=0x4
        struct _NDIS_CONNECTION_INFO::_anonymous_1416::<unnamed-type-UdpPortInfo> UdpPortInfo;// Offset=0x2c Size=0x4
    };
};

struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=210)
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

struct _NDIS_RECEIVE_FILTER_PARAMETERS// Size=0x2c (Id=1359)
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

struct _NDIS_RECEIVE_FILTER_BLOCK// Size=0xb8 (Id=1113)
{
    struct _LIST_ENTRY AdapterLink;// Offset=0x0 Size=0x10
    struct _LIST_ENTRY QueueLink;// Offset=0x10 Size=0x10
    struct _LIST_ENTRY VPortLink;// Offset=0x20 Size=0x10
    unsigned long FilterId;// Offset=0x30 Size=0x4
    struct _NDIS_MINIPORT_BLOCK * Miniport;// Offset=0x38 Size=0x8
    struct _NDIS_OPEN_BLOCK * Open;// Offset=0x40 Size=0x8
    struct _NDIS_RECEIVE_QUEUE_BLOCK * ReceiveQueue;// Offset=0x48 Size=0x8
    long Reference;// Offset=0x50 Size=0x4
    struct _NDIS_CONNECTION_INFO ConnectionInfo;// Offset=0x54 Size=0x30
    struct _NDIS_RECEIVE_FILTER_PARAMETERS FilterParameters;// Offset=0x84 Size=0x2c
    struct _NDIS_VPORT_BLOCK * VPortBlock;// Offset=0xb0 Size=0x8
};
