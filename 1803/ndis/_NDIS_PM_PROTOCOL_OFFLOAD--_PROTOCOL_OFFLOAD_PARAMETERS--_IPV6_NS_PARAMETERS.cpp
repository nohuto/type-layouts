struct _NDIS_PM_PROTOCOL_OFFLOAD::_PROTOCOL_OFFLOAD_PARAMETERS::_IPV6_NS_PARAMETERS// Size=0x4c (Id=1784)
{
    unsigned long Flags;// Offset=0x0 Size=0x4
    unsigned char RemoteIPv6Address[16];// Offset=0x4 Size=0x10
    unsigned char SolicitedNodeIPv6Address[16];// Offset=0x14 Size=0x10
    unsigned char MacAddress[6];// Offset=0x24 Size=0x6
    unsigned char TargetIPv6Addresses[2][16];// Offset=0x2a Size=0x20
};
