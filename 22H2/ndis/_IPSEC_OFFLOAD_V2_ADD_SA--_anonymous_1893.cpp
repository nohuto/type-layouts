union _IPSEC_OFFLOAD_V2_ADD_SA::_anonymous_1893// Size=0x20 (Id=1893)
{
    struct <unnamed-type-IPv4Endpoints>// Size=0x8 (Id=4337)
    {
        unsigned long SrcAddr;// Offset=0x0 Size=0x4
        unsigned long DestAddr;// Offset=0x4 Size=0x4
    };
    struct _IPSEC_OFFLOAD_V2_ADD_SA::_anonymous_1894::<unnamed-type-IPv4Endpoints> IPv4Endpoints;// Offset=0x0 Size=0x8
    struct <unnamed-type-IPv6Endpoints>// Size=0x20 (Id=4341)
    {
        unsigned char SrcAddr[16];// Offset=0x0 Size=0x10
        unsigned char DestAddr[16];// Offset=0x10 Size=0x10
    };
    struct _IPSEC_OFFLOAD_V2_ADD_SA::_anonymous_1895::<unnamed-type-IPv6Endpoints> IPv6Endpoints;// Offset=0x0 Size=0x20
};
