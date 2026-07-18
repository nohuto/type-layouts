struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=212)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Revision;// Offset=0x1 Size=0x1
    unsigned short Size;// Offset=0x2 Size=0x2
};

enum _NDIS_GFT_HEADER_GROUP_TRANSPOSITION_ACTION
{
    NdisGftHeaderGroupTranspositionActionUndefined=0,
    NdisGftHeaderGroupTranspositionActionModify=1,
    NdisGftHeaderGroupTranspositionActionIgnore=2,
    NdisGftHeaderGroupTranspositionActionPush=3,
    NdisGftHeaderGroupTranspositionActionPop=4,
    NdisGftHeaderGroupTranspositionActionMax=5
};

struct _NDIS_GFP_ETHERNET_HEADER_FIELDS// Size=0x14 (Id=798)
{
    unsigned char DestinationMacAddress[6];// Offset=0x0 Size=0x6
    unsigned char SourceMacAddress[6];// Offset=0x6 Size=0x6
    unsigned short EthType;// Offset=0xc Size=0x2
    unsigned short CustomerVlanId;// Offset=0xe Size=0x2
    unsigned short ProviderVlanId;// Offset=0x10 Size=0x2
    unsigned char Priority;// Offset=0x12 Size=0x1
};

struct _NDIS_GFT_HEADER_GROUP_TRANSPOSITION// Size=0x58 (Id=1627)
{
    union // Size=0x4f (Id=0)
    {
        struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
        unsigned long Flags;// Offset=0x4 Size=0x4
        enum _NDIS_GFT_HEADER_GROUP_TRANSPOSITION_ACTION Action;// Offset=0x8 Size=0x4
        unsigned long HeadersPresent;// Offset=0xc Size=0x4
        unsigned long long HeaderFields;// Offset=0x10 Size=0x8
        struct _NDIS_GFP_ETHERNET_HEADER_FIELDS EthernetFields;// Offset=0x18 Size=0x14
        union <unnamed-type-IPAddress>// Size=0x20 (Id=6790)
        {
            struct <unnamed-type-IPv4Address>// Size=0x8 (Id=6791)
            {
                struct in_addr SourceIPAddress;// Offset=0x0 Size=0x4
                struct in_addr DestinationIPAddress;// Offset=0x4 Size=0x4
            };
            struct _NDIS_GFT_HEADER_GROUP_TRANSPOSITION::<unnamed-type-IPAddress>::<unnamed-type-IPv4Address> IPv4Address;// Offset=0x0 Size=0x8
            struct <unnamed-type-IPv6Address>// Size=0x20 (Id=6795)
            {
                struct in6_addr SourceIPAddress;// Offset=0x0 Size=0x10
                struct in6_addr DestinationIPAddress;// Offset=0x10 Size=0x10
            };
            struct _NDIS_GFT_HEADER_GROUP_TRANSPOSITION::<unnamed-type-IPAddress>::<unnamed-type-IPv6Address> IPv6Address;// Offset=0x0 Size=0x20
        };
        union _NDIS_GFT_HEADER_GROUP_TRANSPOSITION::<unnamed-type-IPAddress> IPAddress;// Offset=0x2c Size=0x20
        unsigned char Ttl;// Offset=0x4c Size=0x1
        unsigned char Dscp;// Offset=0x4d Size=0x1
        unsigned char IPProtocol;// Offset=0x4e Size=0x1
        union <unnamed-type-TransportOrEncapsulation>// Size=0x8 (Id=6803)
        {
            struct <unnamed-type-Udp>// Size=0x4 (Id=6804)
            {
                unsigned short SourcePort;// Offset=0x0 Size=0x2
                unsigned short DestinationPort;// Offset=0x2 Size=0x2
            };
            struct _NDIS_GFT_HEADER_GROUP_TRANSPOSITION::<unnamed-type-TransportOrEncapsulation>::<unnamed-type-Udp> Udp;// Offset=0x0 Size=0x4
            struct <unnamed-type-Tcp>// Size=0x4 (Id=6808)
            {
                unsigned short SourcePort;// Offset=0x0 Size=0x2
                unsigned short DestinationPort;// Offset=0x2 Size=0x2
            };
            struct _NDIS_GFT_HEADER_GROUP_TRANSPOSITION::<unnamed-type-TransportOrEncapsulation>::<unnamed-type-Tcp> Tcp;// Offset=0x0 Size=0x4
            struct <unnamed-type-Encapsulation>// Size=0x8 (Id=6812)
            {
                unsigned long TenantId;// Offset=0x0 Size=0x4
                unsigned short GreProtocol;// Offset=0x4 Size=0x2
                unsigned short Entropy;// Offset=0x6 Size=0x2
            };
            struct _NDIS_GFT_HEADER_GROUP_TRANSPOSITION::<unnamed-type-TransportOrEncapsulation>::<unnamed-type-Encapsulation> Encapsulation;// Offset=0x0 Size=0x8
        };
        union _NDIS_GFT_HEADER_GROUP_TRANSPOSITION::<unnamed-type-TransportOrEncapsulation> TransportOrEncapsulation;// Offset=0x50 Size=0x8
    };
};
