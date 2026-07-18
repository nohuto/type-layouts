struct _NDIS_IPSEC_OFFLOAD_V2// Size=0x20 (Id=870)
{
    unsigned long Encapsulation;// Offset=0x0 Size=0x4
    unsigned char IPv6Supported;// Offset=0x4 Size=0x1
    unsigned char IPv4Options;// Offset=0x5 Size=0x1
    unsigned char IPv6NonIPsecExtensionHeaders;// Offset=0x6 Size=0x1
    unsigned char Ah;// Offset=0x7 Size=0x1
    unsigned char Esp;// Offset=0x8 Size=0x1
    unsigned char AhEspCombined;// Offset=0x9 Size=0x1
    unsigned char Transport;// Offset=0xa Size=0x1
    unsigned char Tunnel;// Offset=0xb Size=0x1
    unsigned char TransportTunnelCombined;// Offset=0xc Size=0x1
    unsigned char LsoSupported;// Offset=0xd Size=0x1
    unsigned char ExtendedSequenceNumbers;// Offset=0xe Size=0x1
    unsigned long UdpEsp;// Offset=0x10 Size=0x4
    unsigned long AuthenticationAlgorithms;// Offset=0x14 Size=0x4
    unsigned long EncryptionAlgorithms;// Offset=0x18 Size=0x4
    unsigned long SaOffloadCapacity;// Offset=0x1c Size=0x4
};
