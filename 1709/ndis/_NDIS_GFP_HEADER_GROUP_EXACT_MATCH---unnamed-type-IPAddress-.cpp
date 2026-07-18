union _NDIS_GFP_HEADER_GROUP_EXACT_MATCH::<unnamed-type-IPAddress>// Size=0x20 (Id=1662)
{
    struct <unnamed-type-IPv4Address>// Size=0x8 (Id=6599)
    {
        struct in_addr SourceIPAddress;// Offset=0x0 Size=0x4
        struct in_addr DestinationIPAddress;// Offset=0x4 Size=0x4
    };
    struct _NDIS_GFP_HEADER_GROUP_EXACT_MATCH::<unnamed-type-IPAddress>::<unnamed-type-IPv4Address> IPv4Address;// Offset=0x0 Size=0x8
    struct <unnamed-type-IPv6Address>// Size=0x20 (Id=6603)
    {
        struct in6_addr SourceIPAddress;// Offset=0x0 Size=0x10
        struct in6_addr DestinationIPAddress;// Offset=0x10 Size=0x10
    };
    struct _NDIS_GFP_HEADER_GROUP_EXACT_MATCH::<unnamed-type-IPAddress>::<unnamed-type-IPv6Address> IPv6Address;// Offset=0x0 Size=0x20
};
