struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=239)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Revision;// Offset=0x1 Size=0x1
    unsigned short Size;// Offset=0x2 Size=0x2
};

struct _NDIS_TCP_IP_CHECKSUM_OFFLOAD// Size=0x20 (Id=1462)
{
    union // Size=0x18 (Id=0)
    {
        struct <unnamed-type-IPv4Transmit>// Size=0x8 (Id=11253)
        {
            unsigned long Encapsulation;// Offset=0x0 Size=0x4
            unsigned long IpOptionsSupported:2;// Offset=0x4 Size=0x4 BitOffset=0x0 BitSize=0x2
            unsigned long TcpOptionsSupported:2;// Offset=0x4 Size=0x4 BitOffset=0x2 BitSize=0x2
            unsigned long TcpChecksum:2;// Offset=0x4 Size=0x4 BitOffset=0x4 BitSize=0x2
            unsigned long UdpChecksum:2;// Offset=0x4 Size=0x4 BitOffset=0x6 BitSize=0x2
            unsigned long IpChecksum:2;// Offset=0x4 Size=0x4 BitOffset=0x8 BitSize=0x2
        };
        struct _NDIS_TCP_IP_CHECKSUM_OFFLOAD::<unnamed-type-IPv4Transmit> IPv4Transmit;// Offset=0x0 Size=0x8
        struct <unnamed-type-IPv4Receive>// Size=0x8 (Id=11261)
        {
            unsigned long Encapsulation;// Offset=0x0 Size=0x4
            unsigned long IpOptionsSupported:2;// Offset=0x4 Size=0x4 BitOffset=0x0 BitSize=0x2
            unsigned long TcpOptionsSupported:2;// Offset=0x4 Size=0x4 BitOffset=0x2 BitSize=0x2
            unsigned long TcpChecksum:2;// Offset=0x4 Size=0x4 BitOffset=0x4 BitSize=0x2
            unsigned long UdpChecksum:2;// Offset=0x4 Size=0x4 BitOffset=0x6 BitSize=0x2
            unsigned long IpChecksum:2;// Offset=0x4 Size=0x4 BitOffset=0x8 BitSize=0x2
        };
        struct _NDIS_TCP_IP_CHECKSUM_OFFLOAD::<unnamed-type-IPv4Receive> IPv4Receive;// Offset=0x8 Size=0x8
        struct <unnamed-type-IPv6Transmit>// Size=0x8 (Id=11269)
        {
            unsigned long Encapsulation;// Offset=0x0 Size=0x4
            unsigned long IpExtensionHeadersSupported:2;// Offset=0x4 Size=0x4 BitOffset=0x0 BitSize=0x2
            unsigned long TcpOptionsSupported:2;// Offset=0x4 Size=0x4 BitOffset=0x2 BitSize=0x2
            unsigned long TcpChecksum:2;// Offset=0x4 Size=0x4 BitOffset=0x4 BitSize=0x2
            unsigned long UdpChecksum:2;// Offset=0x4 Size=0x4 BitOffset=0x6 BitSize=0x2
        };
        struct _NDIS_TCP_IP_CHECKSUM_OFFLOAD::<unnamed-type-IPv6Transmit> IPv6Transmit;// Offset=0x10 Size=0x8
        struct <unnamed-type-IPv6Receive>// Size=0x8 (Id=11276)
        {
            unsigned long Encapsulation;// Offset=0x0 Size=0x4
            unsigned long IpExtensionHeadersSupported:2;// Offset=0x4 Size=0x4 BitOffset=0x0 BitSize=0x2
            unsigned long TcpOptionsSupported:2;// Offset=0x4 Size=0x4 BitOffset=0x2 BitSize=0x2
            unsigned long TcpChecksum:2;// Offset=0x4 Size=0x4 BitOffset=0x4 BitSize=0x2
            unsigned long UdpChecksum:2;// Offset=0x4 Size=0x4 BitOffset=0x6 BitSize=0x2
        };
        struct _NDIS_TCP_IP_CHECKSUM_OFFLOAD::<unnamed-type-IPv6Receive> IPv6Receive;// Offset=0x18 Size=0x8
    };
};

struct _NDIS_TCP_LARGE_SEND_OFFLOAD_V1// Size=0x10 (Id=1369)
{
    union // Size=0x10 (Id=0)
    {
        struct <unnamed-type-IPv4>// Size=0x10 (Id=11337)
        {
            unsigned long Encapsulation;// Offset=0x0 Size=0x4
            unsigned long MaxOffLoadSize;// Offset=0x4 Size=0x4
            unsigned long MinSegmentCount;// Offset=0x8 Size=0x4
            unsigned long TcpOptions:2;// Offset=0xc Size=0x4 BitOffset=0x0 BitSize=0x2
            unsigned long IpOptions:2;// Offset=0xc Size=0x4 BitOffset=0x2 BitSize=0x2
        };
        struct _NDIS_TCP_LARGE_SEND_OFFLOAD_V1::<unnamed-type-IPv4> IPv4;// Offset=0x0 Size=0x10
    };
};

struct _NDIS_IPSEC_OFFLOAD_V1// Size=0x1c (Id=1790)
{
    union // Size=0x18 (Id=0)
    {
        struct <unnamed-type-Supported>// Size=0x14 (Id=7659)
        {
            unsigned long Encapsulation;// Offset=0x0 Size=0x4
            unsigned long AhEspCombined;// Offset=0x4 Size=0x4
            unsigned long TransportTunnelCombined;// Offset=0x8 Size=0x4
            unsigned long IPv4Options;// Offset=0xc Size=0x4
            unsigned long Flags;// Offset=0x10 Size=0x4
        };
        struct _NDIS_IPSEC_OFFLOAD_V1::<unnamed-type-Supported> Supported;// Offset=0x0 Size=0x14
        struct <unnamed-type-IPv4AH>// Size=0x4 (Id=7666)
        {
            unsigned long Md5:2;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x2
            unsigned long Sha_1:2;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x2
            unsigned long Transport:2;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x2
            unsigned long Tunnel:2;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x2
            unsigned long Send:2;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x2
            unsigned long Receive:2;// Offset=0x0 Size=0x4 BitOffset=0xa BitSize=0x2
        };
        struct _NDIS_IPSEC_OFFLOAD_V1::<unnamed-type-IPv4AH> IPv4AH;// Offset=0x14 Size=0x4
        struct <unnamed-type-IPv4ESP>// Size=0x4 (Id=7674)
        {
            unsigned long Des:2;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x2
            unsigned long Reserved:2;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x2
            unsigned long TripleDes:2;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x2
            unsigned long NullEsp:2;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x2
            unsigned long Transport:2;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x2
            unsigned long Tunnel:2;// Offset=0x0 Size=0x4 BitOffset=0xa BitSize=0x2
            unsigned long Send:2;// Offset=0x0 Size=0x4 BitOffset=0xc BitSize=0x2
            unsigned long Receive:2;// Offset=0x0 Size=0x4 BitOffset=0xe BitSize=0x2
        };
        struct _NDIS_IPSEC_OFFLOAD_V1::<unnamed-type-IPv4ESP> IPv4ESP;// Offset=0x18 Size=0x4
    };
};

struct _NDIS_TCP_LARGE_SEND_OFFLOAD_V2// Size=0x1c (Id=1857)
{
    union // Size=0xc (Id=0)
    {
        struct <unnamed-type-IPv4>// Size=0xc (Id=11344)
        {
            unsigned long Encapsulation;// Offset=0x0 Size=0x4
            unsigned long MaxOffLoadSize;// Offset=0x4 Size=0x4
            unsigned long MinSegmentCount;// Offset=0x8 Size=0x4
        };
        struct _NDIS_TCP_LARGE_SEND_OFFLOAD_V2::<unnamed-type-IPv4> IPv4;// Offset=0x0 Size=0xc
        struct <unnamed-type-IPv6>// Size=0x10 (Id=11349)
        {
            unsigned long Encapsulation;// Offset=0x0 Size=0x4
            unsigned long MaxOffLoadSize;// Offset=0x4 Size=0x4
            unsigned long MinSegmentCount;// Offset=0x8 Size=0x4
            unsigned long IpExtensionHeadersSupported:2;// Offset=0xc Size=0x4 BitOffset=0x0 BitSize=0x2
            unsigned long TcpOptionsSupported:2;// Offset=0xc Size=0x4 BitOffset=0x2 BitSize=0x2
        };
    };
    struct _NDIS_TCP_LARGE_SEND_OFFLOAD_V2::<unnamed-type-IPv6> IPv6;// Offset=0xc Size=0x10
};

struct _NDIS_IPSEC_OFFLOAD_V2// Size=0x20 (Id=1180)
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

struct _NDIS_TCP_RECV_SEG_COALESCE_OFFLOAD// Size=0x2 (Id=1713)
{
    union // Size=0x1 (Id=0)
    {
        struct <unnamed-type-IPv4>// Size=0x1 (Id=11370)
        {
            unsigned char Enabled;// Offset=0x0 Size=0x1
        };
        struct _NDIS_TCP_RECV_SEG_COALESCE_OFFLOAD::<unnamed-type-IPv4> IPv4;// Offset=0x0 Size=0x1
        struct <unnamed-type-IPv6>// Size=0x1 (Id=11373)
        {
            unsigned char Enabled;// Offset=0x0 Size=0x1
        };
    };
    struct _NDIS_TCP_RECV_SEG_COALESCE_OFFLOAD::<unnamed-type-IPv6> IPv6;// Offset=0x1 Size=0x1
};

struct _NDIS_ENCAPSULATED_PACKET_TASK_OFFLOAD// Size=0x8 (Id=2033)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long TransmitChecksumOffloadSupported:4;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x4
        unsigned long ReceiveChecksumOffloadSupported:4;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x4
        unsigned long LsoV2Supported:4;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x4
        unsigned long RssSupported:4;// Offset=0x0 Size=0x4 BitOffset=0xc BitSize=0x4
        unsigned long VmqSupported:4;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x4
        unsigned long UsoSupported:4;// Offset=0x0 Size=0x4 BitOffset=0x14 BitSize=0x4
        unsigned long Reserved:8;// Offset=0x0 Size=0x4 BitOffset=0x18 BitSize=0x8
    };
    unsigned long MaxHeaderSizeSupported;// Offset=0x4 Size=0x4
};

struct _NDIS_ENCAPSULATED_PACKET_TASK_OFFLOAD_V2// Size=0x14 (Id=2077)
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
            unsigned long UsoSupported:4;// Offset=0x0 Size=0x4 BitOffset=0x14 BitSize=0x4
            unsigned long Reserved:8;// Offset=0x0 Size=0x4 BitOffset=0x18 BitSize=0x8
        };
        unsigned long MaxHeaderSizeSupported;// Offset=0x4 Size=0x4
        union _ENCAPSULATION_PROTOCOL_INFO// Size=0x4 (Id=6562)
        {
            struct _VXLAN_INFO// Size=0x4 (Id=6563)
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

enum _NDIS_RFC6877_464XLAT_OFFLOAD_OPTIONS
{
    NDIS_RFC6877_464XLAT_OFFLOAD_NOT_SUPPORTED=0,
    NDIS_RFC6877_464XLAT_OFFLOAD_DISABLED=1,
    NDIS_RFC6877_464XLAT_OFFLOAD_ENABLED=2,
    NDIS_RFC6877_464XLAT_OFFLOAD_ON_DEMAND=3
};

struct _NDIS_RFC6877_464XLAT_OFFLOAD// Size=0x8 (Id=1470)
{
    enum _NDIS_RFC6877_464XLAT_OFFLOAD_OPTIONS XlatOffload;// Offset=0x0 Size=0x4
    unsigned long Flags;// Offset=0x4 Size=0x4
};

struct _NDIS_UDP_SEGMENTATION_OFFLOAD// Size=0x1c (Id=1228)
{
    union // Size=0xc (Id=0)
    {
        struct <unnamed-type-IPv4>// Size=0xc (Id=11414)
        {
            unsigned long Encapsulation;// Offset=0x0 Size=0x4
            unsigned long MaxOffLoadSize;// Offset=0x4 Size=0x4
            unsigned long MinSegmentCount:6;// Offset=0x8 Size=0x4 BitOffset=0x0 BitSize=0x6
            unsigned long SubMssFinalSegmentSupported:1;// Offset=0x8 Size=0x4 BitOffset=0x6 BitSize=0x1
            unsigned long Reserved:25;// Offset=0x8 Size=0x4 BitOffset=0x7 BitSize=0x19
        };
        struct _NDIS_UDP_SEGMENTATION_OFFLOAD::<unnamed-type-IPv4> IPv4;// Offset=0x0 Size=0xc
        struct <unnamed-type-IPv6>// Size=0x10 (Id=11421)
        {
            unsigned long Encapsulation;// Offset=0x0 Size=0x4
            unsigned long MaxOffLoadSize;// Offset=0x4 Size=0x4
            unsigned long MinSegmentCount:6;// Offset=0x8 Size=0x4 BitOffset=0x0 BitSize=0x6
            unsigned long SubMssFinalSegmentSupported:1;// Offset=0x8 Size=0x4 BitOffset=0x6 BitSize=0x1
            unsigned long Reserved1:25;// Offset=0x8 Size=0x4 BitOffset=0x7 BitSize=0x19
            unsigned long IpExtensionHeadersSupported:2;// Offset=0xc Size=0x4 BitOffset=0x0 BitSize=0x2
            unsigned long Reserved2:30;// Offset=0xc Size=0x4 BitOffset=0x2 BitSize=0x1e
        };
    };
    struct _NDIS_UDP_SEGMENTATION_OFFLOAD::<unnamed-type-IPv6> IPv6;// Offset=0xc Size=0x10
};

struct _NDIS_UDP_RSC_OFFLOAD// Size=0x1 (Id=1433)
{
    unsigned char Enabled;// Offset=0x0 Size=0x1
};

struct _NDIS_OFFLOAD// Size=0xdc (Id=1173)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    struct _NDIS_TCP_IP_CHECKSUM_OFFLOAD Checksum;// Offset=0x4 Size=0x20
    struct _NDIS_TCP_LARGE_SEND_OFFLOAD_V1 LsoV1;// Offset=0x24 Size=0x10
    struct _NDIS_IPSEC_OFFLOAD_V1 IPsecV1;// Offset=0x34 Size=0x1c
    struct _NDIS_TCP_LARGE_SEND_OFFLOAD_V2 LsoV2;// Offset=0x50 Size=0x1c
    unsigned long Flags;// Offset=0x6c Size=0x4
    struct _NDIS_IPSEC_OFFLOAD_V2 IPsecV2;// Offset=0x70 Size=0x20
    struct _NDIS_TCP_RECV_SEG_COALESCE_OFFLOAD Rsc;// Offset=0x90 Size=0x2
    struct _NDIS_ENCAPSULATED_PACKET_TASK_OFFLOAD EncapsulatedPacketTaskOffloadGre;// Offset=0x94 Size=0x8
    struct _NDIS_ENCAPSULATED_PACKET_TASK_OFFLOAD_V2 EncapsulatedPacketTaskOffloadVxlan;// Offset=0x9c Size=0x14
    unsigned char EncapsulationTypes;// Offset=0xb0 Size=0x1
    struct _NDIS_RFC6877_464XLAT_OFFLOAD Rfc6877Xlat;// Offset=0xb4 Size=0x8
    struct _NDIS_UDP_SEGMENTATION_OFFLOAD UdpSegmentation;// Offset=0xbc Size=0x1c
    struct _NDIS_UDP_RSC_OFFLOAD UdpRsc;// Offset=0xd8 Size=0x1
};
