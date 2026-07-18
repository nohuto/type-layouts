enum _NDIS_GFP_WILDCARD_MATCH_TYPE
{
    NdisGfpWildcardMatchTypeUndefined=0,
    NdisGfpWildcardMatchTypeEqual=1,
    NdisGfpWildcardMatchTypeMaskEqual=2,
    NdisGfpWildcardMatchTypeInRange=3,
    NdisGfpWildcardMatchTypeMax=4
};

struct _NDIS_GFP_TRANSPORT_PORT_WILDCARD_MATCH// Size=0x8 (Id=1078)
{
    enum _NDIS_GFP_WILDCARD_MATCH_TYPE MatchType;// Offset=0x0 Size=0x4
    unsigned short Port;// Offset=0x4 Size=0x2
    unsigned short Range;// Offset=0x6 Size=0x2
};

struct _NDIS_GFP_TRANSPORT_SRC_AND_DEST_PORT_WILDCARD_MATCH// Size=0x10 (Id=1638)
{
    struct _NDIS_GFP_TRANSPORT_PORT_WILDCARD_MATCH SourcePort;// Offset=0x0 Size=0x8
    struct _NDIS_GFP_TRANSPORT_PORT_WILDCARD_MATCH DestinationPort;// Offset=0x8 Size=0x8
};

struct _NDIS_GFP_HEADER_GROUP_WILDCARD_MATCH::<unnamed-type-TransportOrEncapsulation>::<unnamed-type-TcpHeader>// Size=0x14 (Id=1882)
{
    struct _NDIS_GFP_TRANSPORT_SRC_AND_DEST_PORT_WILDCARD_MATCH TcpSrcAndDestPort;// Offset=0x0 Size=0x10
    unsigned char TcpFlags;// Offset=0x10 Size=0x1
};
