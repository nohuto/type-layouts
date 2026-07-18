union _NDIS_PM_PROTOCOL_OFFLOAD::_PROTOCOL_OFFLOAD_PARAMETERS// Size=0x60 (Id=1929)
{
    struct _IPV4_ARP_PARAMETERS// Size=0x14 (Id=9936)
    {
        unsigned long Flags;// Offset=0x0 Size=0x4
        unsigned char RemoteIPv4Address[4];// Offset=0x4 Size=0x4
        unsigned char HostIPv4Address[4];// Offset=0x8 Size=0x4
        unsigned char MacAddress[6];// Offset=0xc Size=0x6
    };
    struct _NDIS_PM_PROTOCOL_OFFLOAD::_PROTOCOL_OFFLOAD_PARAMETERS::_IPV4_ARP_PARAMETERS IPv4ARPParameters;// Offset=0x0 Size=0x14
    struct _IPV6_NS_PARAMETERS// Size=0x4c (Id=9943)
    {
        unsigned long Flags;// Offset=0x0 Size=0x4
        unsigned char RemoteIPv6Address[16];// Offset=0x4 Size=0x10
        unsigned char SolicitedNodeIPv6Address[16];// Offset=0x14 Size=0x10
        unsigned char MacAddress[6];// Offset=0x24 Size=0x6
        unsigned char TargetIPv6Addresses[2][16];// Offset=0x2a Size=0x20
    };
    struct _NDIS_PM_PROTOCOL_OFFLOAD::_PROTOCOL_OFFLOAD_PARAMETERS::_IPV6_NS_PARAMETERS IPv6NSParameters;// Offset=0x0 Size=0x4c
    struct _DOT11_RSN_REKEY_PARAMETERS// Size=0x30 (Id=9951)
    {
        unsigned long Flags;// Offset=0x0 Size=0x4
        unsigned char KCK[16];// Offset=0x4 Size=0x10
        unsigned char KEK[16];// Offset=0x14 Size=0x10
        unsigned long long KeyReplayCounter;// Offset=0x28 Size=0x8
    };
    struct _NDIS_PM_PROTOCOL_OFFLOAD::_PROTOCOL_OFFLOAD_PARAMETERS::_DOT11_RSN_REKEY_PARAMETERS Dot11RSNRekeyParameters;// Offset=0x0 Size=0x30
    struct _DOT11_RSN_REKEY_PARAMETERS_V2// Size=0x60 (Id=9957)
    {
        unsigned long Flags;// Offset=0x0 Size=0x4
        unsigned long long KeyReplayCounter;// Offset=0x8 Size=0x8
        unsigned long AuthAlgo;// Offset=0x10 Size=0x4
        unsigned long KCKLength;// Offset=0x14 Size=0x4
        unsigned long KEKLength;// Offset=0x18 Size=0x4
        unsigned char KCK[32];// Offset=0x1c Size=0x20
        unsigned char KEK[32];// Offset=0x3c Size=0x20
    };
    struct _NDIS_PM_PROTOCOL_OFFLOAD::_PROTOCOL_OFFLOAD_PARAMETERS::_DOT11_RSN_REKEY_PARAMETERS_V2 Dot11RSNRekeyParametersV2;// Offset=0x0 Size=0x60
};
