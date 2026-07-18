union _NDIS_PM_PROTOCOL_OFFLOAD::_PROTOCOL_OFFLOAD_PARAMETERS// Size=0x50 (Id=1785)
{
    union // Size=0x4c (Id=0)
    {
        struct _IPV4_ARP_PARAMETERS// Size=0x14 (Id=10173)
        {
            unsigned long Flags;// Offset=0x0 Size=0x4
            unsigned char RemoteIPv4Address[4];// Offset=0x4 Size=0x4
            unsigned char HostIPv4Address[4];// Offset=0x8 Size=0x4
            unsigned char MacAddress[6];// Offset=0xc Size=0x6
        };
        struct _NDIS_PM_PROTOCOL_OFFLOAD::_PROTOCOL_OFFLOAD_PARAMETERS::_IPV4_ARP_PARAMETERS IPv4ARPParameters;// Offset=0x0 Size=0x14
        struct _IPV6_NS_PARAMETERS// Size=0x4c (Id=10180)
        {
            unsigned long Flags;// Offset=0x0 Size=0x4
            unsigned char RemoteIPv6Address[16];// Offset=0x4 Size=0x10
            unsigned char SolicitedNodeIPv6Address[16];// Offset=0x14 Size=0x10
            unsigned char MacAddress[6];// Offset=0x24 Size=0x6
            unsigned char TargetIPv6Addresses[2][16];// Offset=0x2a Size=0x20
        };
        struct _NDIS_PM_PROTOCOL_OFFLOAD::_PROTOCOL_OFFLOAD_PARAMETERS::_IPV6_NS_PARAMETERS IPv6NSParameters;// Offset=0x0 Size=0x4c
        struct _DOT11_RSN_REKEY_PARAMETERS// Size=0x30 (Id=10188)
        {
            unsigned long Flags;// Offset=0x0 Size=0x4
            unsigned char KCK[16];// Offset=0x4 Size=0x10
            unsigned char KEK[16];// Offset=0x14 Size=0x10
            unsigned long long KeyReplayCounter;// Offset=0x28 Size=0x8
        };
        struct _NDIS_PM_PROTOCOL_OFFLOAD::_PROTOCOL_OFFLOAD_PARAMETERS::_DOT11_RSN_REKEY_PARAMETERS Dot11RSNRekeyParameters;// Offset=0x0 Size=0x30
    };
};
