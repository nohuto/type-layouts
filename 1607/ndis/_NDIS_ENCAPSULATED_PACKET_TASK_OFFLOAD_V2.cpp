struct _NDIS_ENCAPSULATED_PACKET_TASK_OFFLOAD_V2// Size=0x14 (Id=1628)
{
    union // Size=0x8 (Id=0)
    {
        struct // Size=0x4 (Id=0)
        {
            unsigned long TransmitChecksumOffloadSupported:4;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x4
            unsigned long ReceiveChecksumOffloadSupported:4;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x4
            unsigned long LsoV2Supported:4;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x4
            unsigned long RssSupported:4;// Offset=0x0 Size=0x4 BitOffset=0xc BitSize=0x4
            unsigned long VmqSupported:4;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x4
            unsigned long Reserved:12;// Offset=0x0 Size=0x4 BitOffset=0x14 BitSize=0xc
        };
        unsigned long MaxHeaderSizeSupported;// Offset=0x4 Size=0x4
        union _ENCAPSULATION_PROTOCOL_INFO// Size=0x4 (Id=5700)
        {
            struct _VXLAN_INFO// Size=0x4 (Id=5701)
            {
                unsigned short VxlanUDPPortNumber;// Offset=0x0 Size=0x2
                unsigned short VxlanUDPPortNumberConfigurable:1;// Offset=0x2 Size=0x2 BitOffset=0x0 BitSize=0x1
            };
            struct _NDIS_ENCAPSULATED_PACKET_TASK_OFFLOAD_V2::_ENCAPSULATION_PROTOCOL_INFO::_VXLAN_INFO VxlanInfo;// Offset=0x0 Size=0x4
            unsigned long Value;// Offset=0x0 Size=0x4
        };
        union _NDIS_ENCAPSULATED_PACKET_TASK_OFFLOAD_V2::_ENCAPSULATION_PROTOCOL_INFO EncapsulationProtocolInfo;// Offset=0x8 Size=0x4
    };
    unsigned long Reserved1;// Offset=0xc Size=0x4
    unsigned long Reserved2;// Offset=0x10 Size=0x4
};
