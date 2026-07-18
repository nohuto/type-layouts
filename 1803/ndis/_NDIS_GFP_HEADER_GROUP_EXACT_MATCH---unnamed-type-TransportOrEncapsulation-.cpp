union _NDIS_GFP_HEADER_GROUP_EXACT_MATCH::<unnamed-type-TransportOrEncapsulation>// Size=0x8 (Id=1662)
{
    struct <unnamed-type-Udp>// Size=0x4 (Id=6590)
    {
        unsigned short SourcePort;// Offset=0x0 Size=0x2
        unsigned short DestinationPort;// Offset=0x2 Size=0x2
    };
    struct _NDIS_GFP_HEADER_GROUP_EXACT_MATCH::<unnamed-type-TransportOrEncapsulation>::<unnamed-type-Udp> Udp;// Offset=0x0 Size=0x4
    struct <unnamed-type-Tcp>// Size=0x6 (Id=6594)
    {
        unsigned short SourcePort;// Offset=0x0 Size=0x2
        unsigned short DestinationPort;// Offset=0x2 Size=0x2
        unsigned char TcpFlags;// Offset=0x4 Size=0x1
    };
    struct _NDIS_GFP_HEADER_GROUP_EXACT_MATCH::<unnamed-type-TransportOrEncapsulation>::<unnamed-type-Tcp> Tcp;// Offset=0x0 Size=0x6
    struct <unnamed-type-Icmp>// Size=0x2 (Id=6599)
    {
        unsigned char Type;// Offset=0x0 Size=0x1
        unsigned char Code;// Offset=0x1 Size=0x1
    };
    struct _NDIS_GFP_HEADER_GROUP_EXACT_MATCH::<unnamed-type-TransportOrEncapsulation>::<unnamed-type-Icmp> Icmp;// Offset=0x0 Size=0x2
    struct <unnamed-type-Encapsulation>// Size=0x8 (Id=6603)
    {
        unsigned long TenantId;// Offset=0x0 Size=0x4
        unsigned short GreProtocol;// Offset=0x4 Size=0x2
    };
    struct _NDIS_GFP_HEADER_GROUP_EXACT_MATCH::<unnamed-type-TransportOrEncapsulation>::<unnamed-type-Encapsulation> Encapsulation;// Offset=0x0 Size=0x8
};
