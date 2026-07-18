union _NDIS_CONNECTION_INFO::_unnamed_1621// Size=0x24 (Id=1621)
{
    union // Size=0x21 (Id=0)
    {
        struct <unnamed-type-IPv4Info>// Size=0xc (Id=6727)
        {
            unsigned long SourceIPv4Address;// Offset=0x0 Size=0x4
            unsigned long DestinationIPv4Address;// Offset=0x4 Size=0x4
            unsigned char Protocol;// Offset=0x8 Size=0x1
        };
        struct _NDIS_CONNECTION_INFO::_unnamed_1622::<unnamed-type-IPv4Info> IPv4Info;// Offset=0x0 Size=0xc
        struct <unnamed-type-IPv6Info>// Size=0x21 (Id=6732)
        {
            unsigned char SourceIPv6Address[16];// Offset=0x0 Size=0x10
            unsigned char DestinationIPv6Address[16];// Offset=0x10 Size=0x10
            unsigned char Protocol;// Offset=0x20 Size=0x1
        };
        struct _NDIS_CONNECTION_INFO::_unnamed_1623::<unnamed-type-IPv6Info> IPv6Info;// Offset=0x0 Size=0x21
    };
};
