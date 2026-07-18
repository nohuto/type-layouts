union _IPSEC_OFFLOAD_V2_ADD_SA::_unnamed_2129// Size=0x20 (Id=2129)
{
    struct <unnamed-type-IPv4Endpoints>// Size=0x8 (Id=5020)
    {
        unsigned long SrcAddr;// Offset=0x0 Size=0x4
        unsigned long DestAddr;// Offset=0x4 Size=0x4
    };
    struct _IPSEC_OFFLOAD_V2_ADD_SA::_unnamed_2130::<unnamed-type-IPv4Endpoints> IPv4Endpoints;// Offset=0x0 Size=0x8
    struct <unnamed-type-IPv6Endpoints>// Size=0x20 (Id=5024)
    {
        unsigned char SrcAddr[16];// Offset=0x0 Size=0x10
        unsigned char DestAddr[16];// Offset=0x10 Size=0x10
    };
    struct _IPSEC_OFFLOAD_V2_ADD_SA::_unnamed_2131::<unnamed-type-IPv6Endpoints> IPv6Endpoints;// Offset=0x0 Size=0x20
};
