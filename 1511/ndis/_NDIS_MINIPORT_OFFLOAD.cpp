struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=316)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Revision;// Offset=0x1 Size=0x1
    unsigned short Size;// Offset=0x2 Size=0x2
};

struct _NDIS_TCP_IP_CHECKSUM_OFFLOAD// Size=0x20 (Id=1427)
{
    union // Size=0x18 (Id=0)
    {
        struct <unnamed-type-IPv4Transmit>// Size=0x8 (Id=9854)
        {
            unsigned long Encapsulation;// Offset=0x0 Size=0x4
            unsigned long IpOptionsSupported:2;// Offset=0x4 Size=0x4 BitOffset=0x0 BitSize=0x2
            unsigned long TcpOptionsSupported:2;// Offset=0x4 Size=0x4 BitOffset=0x2 BitSize=0x2
            unsigned long TcpChecksum:2;// Offset=0x4 Size=0x4 BitOffset=0x4 BitSize=0x2
            unsigned long UdpChecksum:2;// Offset=0x4 Size=0x4 BitOffset=0x6 BitSize=0x2
            unsigned long IpChecksum:2;// Offset=0x4 Size=0x4 BitOffset=0x8 BitSize=0x2
        };
        struct _NDIS_TCP_IP_CHECKSUM_OFFLOAD::<unnamed-type-IPv4Transmit> IPv4Transmit;// Offset=0x0 Size=0x8
        struct <unnamed-type-IPv4Receive>// Size=0x8 (Id=9862)
        {
            unsigned long Encapsulation;// Offset=0x0 Size=0x4
            unsigned long IpOptionsSupported:2;// Offset=0x4 Size=0x4 BitOffset=0x0 BitSize=0x2
            unsigned long TcpOptionsSupported:2;// Offset=0x4 Size=0x4 BitOffset=0x2 BitSize=0x2
            unsigned long TcpChecksum:2;// Offset=0x4 Size=0x4 BitOffset=0x4 BitSize=0x2
            unsigned long UdpChecksum:2;// Offset=0x4 Size=0x4 BitOffset=0x6 BitSize=0x2
            unsigned long IpChecksum:2;// Offset=0x4 Size=0x4 BitOffset=0x8 BitSize=0x2
        };
        struct _NDIS_TCP_IP_CHECKSUM_OFFLOAD::<unnamed-type-IPv4Receive> IPv4Receive;// Offset=0x8 Size=0x8
        struct <unnamed-type-IPv6Transmit>// Size=0x8 (Id=9870)
        {
            unsigned long Encapsulation;// Offset=0x0 Size=0x4
            unsigned long IpExtensionHeadersSupported:2;// Offset=0x4 Size=0x4 BitOffset=0x0 BitSize=0x2
            unsigned long TcpOptionsSupported:2;// Offset=0x4 Size=0x4 BitOffset=0x2 BitSize=0x2
            unsigned long TcpChecksum:2;// Offset=0x4 Size=0x4 BitOffset=0x4 BitSize=0x2
            unsigned long UdpChecksum:2;// Offset=0x4 Size=0x4 BitOffset=0x6 BitSize=0x2
        };
        struct _NDIS_TCP_IP_CHECKSUM_OFFLOAD::<unnamed-type-IPv6Transmit> IPv6Transmit;// Offset=0x10 Size=0x8
        struct <unnamed-type-IPv6Receive>// Size=0x8 (Id=9877)
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

struct _NDIS_TCP_LARGE_SEND_OFFLOAD_V1// Size=0x10 (Id=1613)
{
    union // Size=0x10 (Id=0)
    {
        struct <unnamed-type-IPv4>// Size=0x10 (Id=9938)
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

struct _NDIS_IPSEC_OFFLOAD_V1// Size=0x1c (Id=1695)
{
    union // Size=0x18 (Id=0)
    {
        struct <unnamed-type-Supported>// Size=0x14 (Id=6160)
        {
            unsigned long Encapsulation;// Offset=0x0 Size=0x4
            unsigned long AhEspCombined;// Offset=0x4 Size=0x4
            unsigned long TransportTunnelCombined;// Offset=0x8 Size=0x4
            unsigned long IPv4Options;// Offset=0xc Size=0x4
            unsigned long Flags;// Offset=0x10 Size=0x4
        };
        struct _NDIS_IPSEC_OFFLOAD_V1::<unnamed-type-Supported> Supported;// Offset=0x0 Size=0x14
        struct <unnamed-type-IPv4AH>// Size=0x4 (Id=6167)
        {
            unsigned long Md5:2;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x2
            unsigned long Sha_1:2;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x2
            unsigned long Transport:2;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x2
            unsigned long Tunnel:2;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x2
            unsigned long Send:2;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x2
            unsigned long Receive:2;// Offset=0x0 Size=0x4 BitOffset=0xa BitSize=0x2
        };
        struct _NDIS_IPSEC_OFFLOAD_V1::<unnamed-type-IPv4AH> IPv4AH;// Offset=0x14 Size=0x4
        struct <unnamed-type-IPv4ESP>// Size=0x4 (Id=6175)
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

struct _NDIS_TCP_LARGE_SEND_OFFLOAD_V2// Size=0x1c (Id=1369)
{
    union // Size=0xc (Id=0)
    {
        struct <unnamed-type-IPv4>// Size=0xc (Id=9945)
        {
            unsigned long Encapsulation;// Offset=0x0 Size=0x4
            unsigned long MaxOffLoadSize;// Offset=0x4 Size=0x4
            unsigned long MinSegmentCount;// Offset=0x8 Size=0x4
        };
        struct _NDIS_TCP_LARGE_SEND_OFFLOAD_V2::<unnamed-type-IPv4> IPv4;// Offset=0x0 Size=0xc
        struct <unnamed-type-IPv6>// Size=0x10 (Id=9950)
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

struct _NDIS_IPSEC_OFFLOAD_V2// Size=0x20 (Id=1665)
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

struct _NDIS_TCP_RECV_SEG_COALESCE_OFFLOAD// Size=0x2 (Id=1650)
{
    union // Size=0x1 (Id=0)
    {
        struct <unnamed-type-IPv4>// Size=0x1 (Id=9971)
        {
            unsigned char Enabled;// Offset=0x0 Size=0x1
        };
        struct _NDIS_TCP_RECV_SEG_COALESCE_OFFLOAD::<unnamed-type-IPv4> IPv4;// Offset=0x0 Size=0x1
        struct <unnamed-type-IPv6>// Size=0x1 (Id=9974)
        {
            unsigned char Enabled;// Offset=0x0 Size=0x1
        };
    };
    struct _NDIS_TCP_RECV_SEG_COALESCE_OFFLOAD::<unnamed-type-IPv6> IPv6;// Offset=0x1 Size=0x1
};

struct _NDIS_ENCAPSULATED_PACKET_TASK_OFFLOAD// Size=0x8 (Id=1355)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long TransmitChecksumOffloadSupported:4;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x4
        unsigned long ReceiveChecksumOffloadSupported:4;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x4
        unsigned long LsoV2Supported:4;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x4
        unsigned long RssSupported:4;// Offset=0x0 Size=0x4 BitOffset=0xc BitSize=0x4
        unsigned long VmqSupported:4;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x4
    };
    unsigned long MaxHeaderSizeSupported;// Offset=0x4 Size=0x4
};

struct _NDIS_ENCAPSULATED_PACKET_TASK_OFFLOAD_V2// Size=0x14 (Id=1522)
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
        union _ENCAPSULATION_PROTOCOL_INFO// Size=0x4 (Id=5477)
        {
            struct _VXLAN_INFO// Size=0x4 (Id=5478)
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

struct _NDIS_OFFLOAD// Size=0xb4 (Id=1333)
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
};

struct _NDIS_OFFLOAD_ENCAPSULATION// Size=0x1c (Id=550)
{
    union // Size=0x10 (Id=0)
    {
        struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
        struct <unnamed-type-IPv4>// Size=0xc (Id=8166)
        {
            unsigned long Enabled;// Offset=0x0 Size=0x4
            unsigned long EncapsulationType;// Offset=0x4 Size=0x4
            unsigned long HeaderSize;// Offset=0x8 Size=0x4
        };
        struct _NDIS_OFFLOAD_ENCAPSULATION::<unnamed-type-IPv4> IPv4;// Offset=0x4 Size=0xc
        struct <unnamed-type-IPv6>// Size=0xc (Id=8171)
        {
            unsigned long Enabled;// Offset=0x0 Size=0x4
            unsigned long EncapsulationType;// Offset=0x4 Size=0x4
            unsigned long HeaderSize;// Offset=0x8 Size=0x4
        };
        struct _NDIS_OFFLOAD_ENCAPSULATION::<unnamed-type-IPv6> IPv6;// Offset=0x10 Size=0xc
    };
};

struct _NDIS_TCP_CONNECTION_OFFLOAD// Size=0x14 (Id=1277)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    unsigned long Encapsulation;// Offset=0x4 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long SupportIPv4:2;// Offset=0x8 Size=0x4 BitOffset=0x0 BitSize=0x2
        unsigned long SupportIPv6:2;// Offset=0x8 Size=0x4 BitOffset=0x2 BitSize=0x2
        unsigned long SupportIPv6ExtensionHeaders:2;// Offset=0x8 Size=0x4 BitOffset=0x4 BitSize=0x2
        unsigned long SupportSack:2;// Offset=0x8 Size=0x4 BitOffset=0x6 BitSize=0x2
        unsigned long CongestionAlgorithm:4;// Offset=0x8 Size=0x4 BitOffset=0x8 BitSize=0x4
    };
    unsigned long TcpConnectionOffloadCapacity;// Offset=0xc Size=0x4
    unsigned long Flags;// Offset=0x10 Size=0x4
};

struct _NDIS_TCP_CONNECTION_OFFLOAD_PARAMETERS// Size=0x3c (Id=662)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    struct _NDIS_OFFLOAD_ENCAPSULATION Encapsulation;// Offset=0x4 Size=0x1c
    unsigned long TicksPerSecond;// Offset=0x20 Size=0x4
    unsigned char TcpAckFrequency;// Offset=0x24 Size=0x1
    unsigned char TcpDelayedAckTicks;// Offset=0x25 Size=0x1
    unsigned char TcpMaximumRetransmissions;// Offset=0x26 Size=0x1
    unsigned char TcpDoubtReachabilityRetransmissions;// Offset=0x27 Size=0x1
    unsigned long TcpSwsPreventionTicks;// Offset=0x28 Size=0x4
    unsigned long TcpDuplicateAckThreshold;// Offset=0x2c Size=0x4
    unsigned long TcpPushTicks;// Offset=0x30 Size=0x4
    unsigned long NceStaleTicks;// Offset=0x34 Size=0x4
    unsigned long CongestionAlgorithm;// Offset=0x38 Size=0x4
};

struct _NDIS_MINIPORT_OFFLOAD// Size=0x4a8 (Id=617)
{
    unsigned char SupportsOffload;// Offset=0x0 Size=0x1
    unsigned char SupportsTopOffload;// Offset=0x1 Size=0x1
    unsigned char SupportsTcpConnectionOffload;// Offset=0x2 Size=0x1
    unsigned char SupportsTopTcpConnectionOffload;// Offset=0x3 Size=0x1
    unsigned char TopConnectionOffloadPaused;// Offset=0x4 Size=0x1
    unsigned char RSCDisallowed;// Offset=0x5 Size=0x1
    struct _NDIS_OFFLOAD MiniportCurrentConfig;// Offset=0x8 Size=0xb4
    struct _NDIS_OFFLOAD TopCapabilities;// Offset=0xbc Size=0xb4
    struct _NDIS_OFFLOAD MiniportInitialConfig;// Offset=0x170 Size=0xb4
    struct _NDIS_OFFLOAD MiniportHardwareCapabilities;// Offset=0x224 Size=0xb4
    struct _NDIS_OFFLOAD_ENCAPSULATION MiniportSetEncapsulation;// Offset=0x2d8 Size=0x1c
    struct _NDIS_OFFLOAD_ENCAPSULATION TopSetEncapsulation;// Offset=0x2f4 Size=0x1c
    struct _NDIS_OFFLOAD_ENCAPSULATION TopMergedEncapsulation;// Offset=0x310 Size=0x1c
    struct _NDIS_OFFLOAD_ENCAPSULATION MiniportMergedEncapsulation;// Offset=0x32c Size=0x1c
    struct _NDIS_TCP_CONNECTION_OFFLOAD TopTcpConnectionOffloadCapabilities;// Offset=0x348 Size=0x14
    struct _NDIS_TCP_CONNECTION_OFFLOAD MiniportTcpConnectionOffloadCurrentConfig;// Offset=0x35c Size=0x14
    struct _NDIS_TCP_CONNECTION_OFFLOAD MiniportHwTcpConnectionOffloadCapabilities;// Offset=0x370 Size=0x14
    struct _NDIS_TCP_CONNECTION_OFFLOAD_PARAMETERS TopTcpConnectionParameters;// Offset=0x384 Size=0x3c
    struct _NDIS_TCP_CONNECTION_OFFLOAD_PARAMETERS MiniportTcpConnectionParameters;// Offset=0x3c0 Size=0x3c
    unsigned char MiniportTask[144];// Offset=0x3fc Size=0x90
    unsigned long MiniportTaskSize;// Offset=0x48c Size=0x4
    unsigned char Ndis5Xsum;// Offset=0x490 Size=0x1
    unsigned char Ndis5LSO;// Offset=0x491 Size=0x1
    unsigned char Ndis5IPsec;// Offset=0x492 Size=0x1
    void * MiniportRequestBuffer;// Offset=0x498 Size=0x8
    unsigned long MiniportRequestOid;// Offset=0x4a0 Size=0x4
    unsigned long MiniportRequestBufferLength;// Offset=0x4a4 Size=0x4
};
