union _NDIS_ENCAPSULATED_PACKET_TASK_OFFLOAD_V2::_ENCAPSULATION_PROTOCOL_INFO// Size=0x4 (Id=1961)
{
    struct _VXLAN_INFO// Size=0x4 (Id=6236)
    {
        unsigned short VxlanUDPPortNumber;// Offset=0x0 Size=0x2
        unsigned short VxlanUDPPortNumberConfigurable:1;// Offset=0x2 Size=0x2 BitOffset=0x0 BitSize=0x1
    };
    struct _NDIS_ENCAPSULATED_PACKET_TASK_OFFLOAD_V2::_ENCAPSULATION_PROTOCOL_INFO::_VXLAN_INFO VxlanInfo;// Offset=0x0 Size=0x4
    unsigned long Value;// Offset=0x0 Size=0x4
};
