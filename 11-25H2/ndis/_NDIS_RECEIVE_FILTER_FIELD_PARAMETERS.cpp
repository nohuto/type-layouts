struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=239)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Revision;// Offset=0x1 Size=0x1
    unsigned short Size;// Offset=0x2 Size=0x2
};

enum _NDIS_FRAME_HEADER
{
    NdisFrameHeaderUndefined=0,
    NdisFrameHeaderMac=1,
    NdisFrameHeaderArp=2,
    NdisFrameHeaderIPv4=3,
    NdisFrameHeaderIPv6=4,
    NdisFrameHeaderUdp=5,
    NdisFrameHeaderMaximum=6
};

enum _NDIS_RECEIVE_FILTER_TEST
{
    NdisReceiveFilterTestUndefined=0,
    NdisReceiveFilterTestEqual=1,
    NdisReceiveFilterTestMaskEqual=2,
    NdisReceiveFilterTestNotEqual=3,
    NdisReceiveFilterTestMaximum=4
};

enum _NDIS_MAC_HEADER_FIELD
{
    NdisMacHeaderFieldUndefined=0,
    NdisMacHeaderFieldDestinationAddress=1,
    NdisMacHeaderFieldSourceAddress=2,
    NdisMacHeaderFieldProtocol=3,
    NdisMacHeaderFieldVlanId=4,
    NdisMacHeaderFieldPriority=5,
    NdisMacHeaderFieldPacketType=6,
    NdisMacHeaderFieldMaximum=7
};

enum _NDIS_ARP_HEADER_FIELD
{
    NdisARPHeaderFieldUndefined=0,
    NdisARPHeaderFieldOperation=1,
    NdisARPHeaderFieldSPA=2,
    NdisARPHeaderFieldTPA=3,
    NdisARPHeaderFieldMaximum=4
};

enum _NDIS_IPV4_HEADER_FIELD
{
    NdisIPv4HeaderFieldUndefined=0,
    NdisIPv4HeaderFieldProtocol=1,
    NdisIPv4HeaderFieldMaximum=2
};

enum _NDIS_IPV6_HEADER_FIELD
{
    NdisIPv6HeaderFieldUndefined=0,
    NdisIPv6HeaderFieldProtocol=1,
    NdisIPv6HeaderFieldMaximum=2
};

enum _NDIS_UDP_HEADER_FIELD
{
    NdisUdpHeaderFieldUndefined=0,
    NdisUdpHeaderFieldDestinationPort=1,
    NdisUdpHeaderFieldMaximum=2
};

struct _NDIS_RECEIVE_FILTER_FIELD_PARAMETERS// Size=0x38 (Id=1957)
{
    union // Size=0x28 (Id=0)
    {
        struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
        unsigned long Flags;// Offset=0x4 Size=0x4
        enum _NDIS_FRAME_HEADER FrameHeader;// Offset=0x8 Size=0x4
        enum _NDIS_RECEIVE_FILTER_TEST ReceiveFilterTest;// Offset=0xc Size=0x4
        union _HEADER_FIELD// Size=0x4 (Id=10668)
        {
            enum _NDIS_MAC_HEADER_FIELD MacHeaderField;// Offset=0x0 Size=0x4
            enum _NDIS_ARP_HEADER_FIELD ArpHeaderField;// Offset=0x0 Size=0x4
            enum _NDIS_IPV4_HEADER_FIELD IPv4HeaderField;// Offset=0x0 Size=0x4
            enum _NDIS_IPV6_HEADER_FIELD IPv6HeaderField;// Offset=0x0 Size=0x4
            enum _NDIS_UDP_HEADER_FIELD UdpHeaderField;// Offset=0x0 Size=0x4
        };
        union _NDIS_RECEIVE_FILTER_FIELD_PARAMETERS::_HEADER_FIELD HeaderField;// Offset=0x10 Size=0x4
        union _FIELD_VALUE// Size=0x10 (Id=10675)
        {
            unsigned char FieldByteValue;// Offset=0x0 Size=0x1
            unsigned short FieldShortValue;// Offset=0x0 Size=0x2
            unsigned long FieldLongValue;// Offset=0x0 Size=0x4
            unsigned long long FieldLong64Value;// Offset=0x0 Size=0x8
            unsigned char FieldByteArrayValue[16];// Offset=0x0 Size=0x10
        };
        union _NDIS_RECEIVE_FILTER_FIELD_PARAMETERS::_FIELD_VALUE FieldValue;// Offset=0x18 Size=0x10
        union _RESULT_VALUE// Size=0x10 (Id=10682)
        {
            unsigned char ResultByteValue;// Offset=0x0 Size=0x1
            unsigned short ResultShortValue;// Offset=0x0 Size=0x2
            unsigned long ResultLongValue;// Offset=0x0 Size=0x4
            unsigned long long ResultLong64Value;// Offset=0x0 Size=0x8
            unsigned char ResultByteArrayValue[16];// Offset=0x0 Size=0x10
        };
        union _NDIS_RECEIVE_FILTER_FIELD_PARAMETERS::_RESULT_VALUE ResultValue;// Offset=0x28 Size=0x10
    };
};
