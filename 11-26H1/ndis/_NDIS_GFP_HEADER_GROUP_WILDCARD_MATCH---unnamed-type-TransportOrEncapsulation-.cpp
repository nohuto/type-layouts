enum _NDIS_GFP_WILDCARD_MATCH_TYPE
{
    NdisGfpWildcardMatchTypeUndefined=0,
    NdisGfpWildcardMatchTypeEqual=1,
    NdisGfpWildcardMatchTypeMaskEqual=2,
    NdisGfpWildcardMatchTypeInRange=3,
    NdisGfpWildcardMatchTypeMax=4
};

struct _NDIS_GFP_TRANSPORT_PORT_WILDCARD_MATCH// Size=0x8 (Id=1258)
{
    enum _NDIS_GFP_WILDCARD_MATCH_TYPE MatchType;// Offset=0x0 Size=0x4
    unsigned short Port;// Offset=0x4 Size=0x2
    unsigned short Range;// Offset=0x6 Size=0x2
};

struct _NDIS_GFP_TRANSPORT_SRC_AND_DEST_PORT_WILDCARD_MATCH// Size=0x10 (Id=1865)
{
    struct _NDIS_GFP_TRANSPORT_PORT_WILDCARD_MATCH SourcePort;// Offset=0x0 Size=0x8
    struct _NDIS_GFP_TRANSPORT_PORT_WILDCARD_MATCH DestinationPort;// Offset=0x8 Size=0x8
};

union _NDIS_GFP_HEADER_GROUP_WILDCARD_MATCH::<unnamed-type-TransportOrEncapsulation>// Size=0x14 (Id=2112)
{
    union // Size=0x14 (Id=0)
    {
        struct <unnamed-type-UdpHeader>// Size=0x10 (Id=7225)
        {
            struct _NDIS_GFP_TRANSPORT_SRC_AND_DEST_PORT_WILDCARD_MATCH UdpSrcAndDestPort;// Offset=0x0 Size=0x10
        };
        struct _NDIS_GFP_HEADER_GROUP_WILDCARD_MATCH::<unnamed-type-TransportOrEncapsulation>::<unnamed-type-UdpHeader> UdpHeader;// Offset=0x0 Size=0x10
        struct <unnamed-type-TcpHeader>// Size=0x14 (Id=7228)
        {
            struct _NDIS_GFP_TRANSPORT_SRC_AND_DEST_PORT_WILDCARD_MATCH TcpSrcAndDestPort;// Offset=0x0 Size=0x10
            unsigned char TcpFlags;// Offset=0x10 Size=0x1
        };
        struct _NDIS_GFP_HEADER_GROUP_WILDCARD_MATCH::<unnamed-type-TransportOrEncapsulation>::<unnamed-type-TcpHeader> TcpHeader;// Offset=0x0 Size=0x14
        struct <unnamed-type-IcmpHeader>// Size=0x2 (Id=7232)
        {
            unsigned char Type;// Offset=0x0 Size=0x1
            unsigned char Code;// Offset=0x1 Size=0x1
        };
        struct _NDIS_GFP_HEADER_GROUP_WILDCARD_MATCH::<unnamed-type-TransportOrEncapsulation>::<unnamed-type-IcmpHeader> IcmpHeader;// Offset=0x0 Size=0x2
        struct <unnamed-type-Encapsulation>// Size=0x8 (Id=7236)
        {
            unsigned long TenantId;// Offset=0x0 Size=0x4
            unsigned short GreProtocol;// Offset=0x4 Size=0x2
        };
        struct _NDIS_GFP_HEADER_GROUP_WILDCARD_MATCH::<unnamed-type-TransportOrEncapsulation>::<unnamed-type-Encapsulation> Encapsulation;// Offset=0x0 Size=0x8
    };
};
