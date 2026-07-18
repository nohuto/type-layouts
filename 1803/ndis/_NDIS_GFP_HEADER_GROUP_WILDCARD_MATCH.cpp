struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=334)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Revision;// Offset=0x1 Size=0x1
    unsigned short Size;// Offset=0x2 Size=0x2
};

struct _NDIS_GFP_ETHERNET_HEADER_FIELDS// Size=0x14 (Id=716)
{
    unsigned char DestinationMacAddress[6];// Offset=0x0 Size=0x6
    unsigned char SourceMacAddress[6];// Offset=0x6 Size=0x6
    unsigned short EthType;// Offset=0xc Size=0x2
    unsigned short CustomerVlanId;// Offset=0xe Size=0x2
    unsigned short ProviderVlanId;// Offset=0x10 Size=0x2
    unsigned char Priority;// Offset=0x12 Size=0x1
};

enum _NDIS_GFP_WILDCARD_MATCH_TYPE
{
    NdisGfpWildcardMatchTypeUndefined=0,
    NdisGfpWildcardMatchTypeEqual=1,
    NdisGfpWildcardMatchTypeMaskEqual=2,
    NdisGfpWildcardMatchTypeInRange=3,
    NdisGfpWildcardMatchTypeMax=4
};

struct _NDIS_GFP_IPV4_ADDRESS_WILDCARD_MATCH// Size=0xc (Id=1680)
{
    union // Size=0x8 (Id=0)
    {
        enum _NDIS_GFP_WILDCARD_MATCH_TYPE MatchType;// Offset=0x0 Size=0x4
        struct in_addr IPAddress;// Offset=0x4 Size=0x4
        union <unnamed-type-MatchValue>// Size=0x4 (Id=6653)
        {
            unsigned long PrefixLength;// Offset=0x0 Size=0x4
            unsigned long RangeSize;// Offset=0x0 Size=0x4
        };
        union _NDIS_GFP_IPV4_ADDRESS_WILDCARD_MATCH::<unnamed-type-MatchValue> MatchValue;// Offset=0x8 Size=0x4
    };
};

struct _NDIS_GFP_IPV4_SRC_AND_DEST_ADDRESS_WILDCARD_MATCH// Size=0x18 (Id=1022)
{
    struct _NDIS_GFP_IPV4_ADDRESS_WILDCARD_MATCH SourceIPv4Address;// Offset=0x0 Size=0xc
    struct _NDIS_GFP_IPV4_ADDRESS_WILDCARD_MATCH DestinationIPv4Address;// Offset=0xc Size=0xc
};

struct _NDIS_GFP_IPV6_ADDRESS_WILDCARD_MATCH// Size=0x18 (Id=1603)
{
    union // Size=0x14 (Id=0)
    {
        enum _NDIS_GFP_WILDCARD_MATCH_TYPE MatchType;// Offset=0x0 Size=0x4
        struct in6_addr IPAddress;// Offset=0x4 Size=0x10
        union <unnamed-type-MatchValue>// Size=0x4 (Id=6661)
        {
            unsigned long PrefixLength;// Offset=0x0 Size=0x4
            unsigned long RangeSize;// Offset=0x0 Size=0x4
        };
        union _NDIS_GFP_IPV6_ADDRESS_WILDCARD_MATCH::<unnamed-type-MatchValue> MatchValue;// Offset=0x14 Size=0x4
    };
};

struct _NDIS_GFP_IPV6_SRC_AND_DEST_ADDRESS_WILDCARD_MATCH// Size=0x30 (Id=1399)
{
    struct _NDIS_GFP_IPV6_ADDRESS_WILDCARD_MATCH SourceIPv6Address;// Offset=0x0 Size=0x18
    struct _NDIS_GFP_IPV6_ADDRESS_WILDCARD_MATCH DestinationIPv6Address;// Offset=0x18 Size=0x18
};

union _NDIS_GFP_IP_SRC_AND_DEST_ADDRESS_WILDCARD_MATCH// Size=0x30 (Id=1452)
{
    struct _NDIS_GFP_IPV4_SRC_AND_DEST_ADDRESS_WILDCARD_MATCH IPv4SrcAndDestAddress;// Offset=0x0 Size=0x18
    struct _NDIS_GFP_IPV6_SRC_AND_DEST_ADDRESS_WILDCARD_MATCH IPv6SrcAndDestAddress;// Offset=0x0 Size=0x30
};

struct _NDIS_GFP_TRANSPORT_PORT_WILDCARD_MATCH// Size=0x8 (Id=976)
{
    enum _NDIS_GFP_WILDCARD_MATCH_TYPE MatchType;// Offset=0x0 Size=0x4
    unsigned short Port;// Offset=0x4 Size=0x2
    unsigned short Range;// Offset=0x6 Size=0x2
};

struct _NDIS_GFP_TRANSPORT_SRC_AND_DEST_PORT_WILDCARD_MATCH// Size=0x10 (Id=1571)
{
    struct _NDIS_GFP_TRANSPORT_PORT_WILDCARD_MATCH SourcePort;// Offset=0x0 Size=0x8
    struct _NDIS_GFP_TRANSPORT_PORT_WILDCARD_MATCH DestinationPort;// Offset=0x8 Size=0x8
};

struct _NDIS_GFP_HEADER_GROUP_WILDCARD_MATCH// Size=0x78 (Id=1193)
{
    union // Size=0x5e (Id=0)
    {
        struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
        unsigned long Flags;// Offset=0x4 Size=0x4
        unsigned long ProfileId;// Offset=0x8 Size=0x4
        unsigned long HeadersPresent;// Offset=0xc Size=0x4
        unsigned long long MatchFields;// Offset=0x10 Size=0x8
        struct _NDIS_GFP_ETHERNET_HEADER_FIELDS EthernetFields;// Offset=0x18 Size=0x14
        union _NDIS_GFP_IP_SRC_AND_DEST_ADDRESS_WILDCARD_MATCH IPSrcAndDestAddress;// Offset=0x2c Size=0x30
        unsigned char Dscp;// Offset=0x5c Size=0x1
        unsigned char IPProtocol;// Offset=0x5d Size=0x1
        union <unnamed-type-TransportOrEncapsulation>// Size=0x14 (Id=6621)
        {
            struct <unnamed-type-UdpHeader>// Size=0x10 (Id=6622)
            {
                struct _NDIS_GFP_TRANSPORT_SRC_AND_DEST_PORT_WILDCARD_MATCH UdpSrcAndDestPort;// Offset=0x0 Size=0x10
            };
            struct _NDIS_GFP_HEADER_GROUP_WILDCARD_MATCH::<unnamed-type-TransportOrEncapsulation>::<unnamed-type-UdpHeader> UdpHeader;// Offset=0x0 Size=0x10
            struct <unnamed-type-TcpHeader>// Size=0x14 (Id=6625)
            {
                struct _NDIS_GFP_TRANSPORT_SRC_AND_DEST_PORT_WILDCARD_MATCH TcpSrcAndDestPort;// Offset=0x0 Size=0x10
                unsigned char TcpFlags;// Offset=0x10 Size=0x1
            };
            struct _NDIS_GFP_HEADER_GROUP_WILDCARD_MATCH::<unnamed-type-TransportOrEncapsulation>::<unnamed-type-TcpHeader> TcpHeader;// Offset=0x0 Size=0x14
            struct <unnamed-type-IcmpHeader>// Size=0x2 (Id=6629)
            {
                unsigned char Type;// Offset=0x0 Size=0x1
                unsigned char Code;// Offset=0x1 Size=0x1
            };
            struct _NDIS_GFP_HEADER_GROUP_WILDCARD_MATCH::<unnamed-type-TransportOrEncapsulation>::<unnamed-type-IcmpHeader> IcmpHeader;// Offset=0x0 Size=0x2
            struct <unnamed-type-Encapsulation>// Size=0x8 (Id=6633)
            {
                unsigned long TenantId;// Offset=0x0 Size=0x4
                unsigned short GreProtocol;// Offset=0x4 Size=0x2
            };
            struct _NDIS_GFP_HEADER_GROUP_WILDCARD_MATCH::<unnamed-type-TransportOrEncapsulation>::<unnamed-type-Encapsulation> Encapsulation;// Offset=0x0 Size=0x8
        };
        union _NDIS_GFP_HEADER_GROUP_WILDCARD_MATCH::<unnamed-type-TransportOrEncapsulation> TransportOrEncapsulation;// Offset=0x60 Size=0x14
    };
};
