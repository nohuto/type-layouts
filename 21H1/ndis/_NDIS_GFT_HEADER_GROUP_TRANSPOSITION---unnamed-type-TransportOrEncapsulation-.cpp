union _NDIS_GFT_HEADER_GROUP_TRANSPOSITION::<unnamed-type-TransportOrEncapsulation>// Size=0x8 (Id=1861)
{
    struct <unnamed-type-Udp>// Size=0x4 (Id=6802)
    {
        unsigned short SourcePort;// Offset=0x0 Size=0x2
        unsigned short DestinationPort;// Offset=0x2 Size=0x2
    };
    struct _NDIS_GFT_HEADER_GROUP_TRANSPOSITION::<unnamed-type-TransportOrEncapsulation>::<unnamed-type-Udp> Udp;// Offset=0x0 Size=0x4
    struct <unnamed-type-Tcp>// Size=0x4 (Id=6806)
    {
        unsigned short SourcePort;// Offset=0x0 Size=0x2
        unsigned short DestinationPort;// Offset=0x2 Size=0x2
    };
    struct _NDIS_GFT_HEADER_GROUP_TRANSPOSITION::<unnamed-type-TransportOrEncapsulation>::<unnamed-type-Tcp> Tcp;// Offset=0x0 Size=0x4
    struct <unnamed-type-Encapsulation>// Size=0x8 (Id=6810)
    {
        unsigned long TenantId;// Offset=0x0 Size=0x4
        unsigned short GreProtocol;// Offset=0x4 Size=0x2
        unsigned short Entropy;// Offset=0x6 Size=0x2
    };
    struct _NDIS_GFT_HEADER_GROUP_TRANSPOSITION::<unnamed-type-TransportOrEncapsulation>::<unnamed-type-Encapsulation> Encapsulation;// Offset=0x0 Size=0x8
};
