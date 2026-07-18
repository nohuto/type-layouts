union _NDIS_IPSEC_OFFLOAD_V2_HEADER_NET_BUFFER_LIST_INFO::_unnamed_2067// Size=0x4 (Id=2067)
{
    struct <unnamed-type-Transmit>// Size=0x4 (Id=7714)
    {
        unsigned long NextHeader:8;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x8
        unsigned long PadLength:8;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x8
        unsigned long AhHeaderOffset:8;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x8
        unsigned long EspHeaderOffset:8;// Offset=0x0 Size=0x4 BitOffset=0x18 BitSize=0x8
    };
    struct _NDIS_IPSEC_OFFLOAD_V2_HEADER_NET_BUFFER_LIST_INFO::_unnamed_2068::<unnamed-type-Transmit> Transmit;// Offset=0x0 Size=0x4
    struct <unnamed-type-Receive>// Size=0x4 (Id=7720)
    {
        unsigned long NextHeader:8;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x8
        unsigned long PadLength:8;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x8
        unsigned long HeaderInfoSet:1;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x1
    };
    struct _NDIS_IPSEC_OFFLOAD_V2_HEADER_NET_BUFFER_LIST_INFO::_unnamed_2069::<unnamed-type-Receive> Receive;// Offset=0x0 Size=0x4
};
