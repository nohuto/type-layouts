struct _SINGLE_LIST_ENTRY// Size=0x8 (Id=50)
{
    struct _SINGLE_LIST_ENTRY * Next;// Offset=0x0 Size=0x8
};

struct _NDIS_PM_PACKET_PATTERN// Size=0x18 (Id=949)
{
    unsigned long Priority;// Offset=0x0 Size=0x4
    unsigned long Reserved;// Offset=0x4 Size=0x4
    unsigned long MaskSize;// Offset=0x8 Size=0x4
    unsigned long PatternOffset;// Offset=0xc Size=0x4
    unsigned long PatternSize;// Offset=0x10 Size=0x4
    unsigned long PatternFlags;// Offset=0x14 Size=0x4
};

struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=239)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Revision;// Offset=0x1 Size=0x1
    unsigned short Size;// Offset=0x2 Size=0x2
};

enum _NDIS_PM_WOL_PACKET
{
    NdisPMWoLPacketUnspecified=0,
    NdisPMWoLPacketBitmapPattern=1,
    NdisPMWoLPacketMagicPacket=2,
    NdisPMWoLPacketIPv4TcpSyn=3,
    NdisPMWoLPacketIPv6TcpSyn=4,
    NdisPMWoLPacketEapolRequestIdMessage=5,
    NdisPMWoLPacketMaximum=6
};

struct _NDIS_PM_COUNTED_STRING// Size=0x84 (Id=2095)
{
    unsigned short Length;// Offset=0x0 Size=0x2
    wchar_t String[65];// Offset=0x2 Size=0x82
};

struct _NDIS_PM_WOL_PATTERN// Size=0xc4 (Id=1738)
{
    union // Size=0x9c (Id=0)
    {
        struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
        unsigned long Flags;// Offset=0x4 Size=0x4
        unsigned long Priority;// Offset=0x8 Size=0x4
        enum _NDIS_PM_WOL_PACKET WoLPacketType;// Offset=0xc Size=0x4
        struct _NDIS_PM_COUNTED_STRING FriendlyName;// Offset=0x10 Size=0x84
        unsigned long PatternId;// Offset=0x94 Size=0x4
        unsigned long NextWoLPatternOffset;// Offset=0x98 Size=0x4
        union _WOL_PATTERN// Size=0x28 (Id=10250)
        {
            struct _IPV4_TCP_SYN_WOL_PACKET_PARAMETERS// Size=0x10 (Id=10251)
            {
                unsigned long Flags;// Offset=0x0 Size=0x4
                unsigned char IPv4SourceAddress[4];// Offset=0x4 Size=0x4
                unsigned char IPv4DestAddress[4];// Offset=0x8 Size=0x4
                unsigned short TCPSourcePortNumber;// Offset=0xc Size=0x2
                unsigned short TCPDestPortNumber;// Offset=0xe Size=0x2
            };
            struct _NDIS_PM_WOL_PATTERN::_WOL_PATTERN::_IPV4_TCP_SYN_WOL_PACKET_PARAMETERS IPv4TcpSynParameters;// Offset=0x0 Size=0x10
            struct _IPV6_TCP_SYN_WOL_PACKET_PARAMETERS// Size=0x28 (Id=10258)
            {
                unsigned long Flags;// Offset=0x0 Size=0x4
                unsigned char IPv6SourceAddress[16];// Offset=0x4 Size=0x10
                unsigned char IPv6DestAddress[16];// Offset=0x14 Size=0x10
                unsigned short TCPSourcePortNumber;// Offset=0x24 Size=0x2
                unsigned short TCPDestPortNumber;// Offset=0x26 Size=0x2
            };
            struct _NDIS_PM_WOL_PATTERN::_WOL_PATTERN::_IPV6_TCP_SYN_WOL_PACKET_PARAMETERS IPv6TcpSynParameters;// Offset=0x0 Size=0x28
            struct _EAPOL_REQUEST_ID_MESSAGE_WOL_PACKET_PARAMETERS// Size=0x4 (Id=10265)
            {
                unsigned long Flags;// Offset=0x0 Size=0x4
            };
            struct _NDIS_PM_WOL_PATTERN::_WOL_PATTERN::_EAPOL_REQUEST_ID_MESSAGE_WOL_PACKET_PARAMETERS EapolRequestIdMessageParameters;// Offset=0x0 Size=0x4
            struct _WOL_BITMAP_PATTERN// Size=0x14 (Id=10268)
            {
                unsigned long Flags;// Offset=0x0 Size=0x4
                unsigned long MaskOffset;// Offset=0x4 Size=0x4
                unsigned long MaskSize;// Offset=0x8 Size=0x4
                unsigned long PatternOffset;// Offset=0xc Size=0x4
                unsigned long PatternSize;// Offset=0x10 Size=0x4
            };
            struct _NDIS_PM_WOL_PATTERN::_WOL_PATTERN::_WOL_BITMAP_PATTERN WoLBitMapPattern;// Offset=0x0 Size=0x14
        };
        union _NDIS_PM_WOL_PATTERN::_WOL_PATTERN WoLPattern;// Offset=0x9c Size=0x28
    };
};

enum _NDIS_PM_PROTOCOL_OFFLOAD_TYPE
{
    NdisPMProtocolOffloadIdUnspecified=0,
    NdisPMProtocolOffloadIdIPv4ARP=1,
    NdisPMProtocolOffloadIdIPv6NS=2,
    NdisPMProtocolOffload80211RSNRekey=3,
    NdisPMProtocolOffload80211RSNRekeyV2=4,
    NdisPMProtocolOffloadIdMaximum=5
};

struct _NDIS_PM_PROTOCOL_OFFLOAD// Size=0x100 (Id=1543)
{
    union // Size=0x9c (Id=0)
    {
        struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
        unsigned long Flags;// Offset=0x4 Size=0x4
        unsigned long Priority;// Offset=0x8 Size=0x4
        enum _NDIS_PM_PROTOCOL_OFFLOAD_TYPE ProtocolOffloadType;// Offset=0xc Size=0x4
        struct _NDIS_PM_COUNTED_STRING FriendlyName;// Offset=0x10 Size=0x84
        unsigned long ProtocolOffloadId;// Offset=0x94 Size=0x4
        unsigned long NextProtocolOffloadOffset;// Offset=0x98 Size=0x4
        union _PROTOCOL_OFFLOAD_PARAMETERS// Size=0x60 (Id=10180)
        {
            struct _IPV4_ARP_PARAMETERS// Size=0x14 (Id=10181)
            {
                unsigned long Flags;// Offset=0x0 Size=0x4
                unsigned char RemoteIPv4Address[4];// Offset=0x4 Size=0x4
                unsigned char HostIPv4Address[4];// Offset=0x8 Size=0x4
                unsigned char MacAddress[6];// Offset=0xc Size=0x6
            };
            struct _NDIS_PM_PROTOCOL_OFFLOAD::_PROTOCOL_OFFLOAD_PARAMETERS::_IPV4_ARP_PARAMETERS IPv4ARPParameters;// Offset=0x0 Size=0x14
            struct _IPV6_NS_PARAMETERS// Size=0x4c (Id=10188)
            {
                unsigned long Flags;// Offset=0x0 Size=0x4
                unsigned char RemoteIPv6Address[16];// Offset=0x4 Size=0x10
                unsigned char SolicitedNodeIPv6Address[16];// Offset=0x14 Size=0x10
                unsigned char MacAddress[6];// Offset=0x24 Size=0x6
                unsigned char TargetIPv6Addresses[2][16];// Offset=0x2a Size=0x20
            };
            struct _NDIS_PM_PROTOCOL_OFFLOAD::_PROTOCOL_OFFLOAD_PARAMETERS::_IPV6_NS_PARAMETERS IPv6NSParameters;// Offset=0x0 Size=0x4c
            struct _DOT11_RSN_REKEY_PARAMETERS// Size=0x30 (Id=10196)
            {
                unsigned long Flags;// Offset=0x0 Size=0x4
                unsigned char KCK[16];// Offset=0x4 Size=0x10
                unsigned char KEK[16];// Offset=0x14 Size=0x10
                unsigned long long KeyReplayCounter;// Offset=0x28 Size=0x8
            };
            struct _NDIS_PM_PROTOCOL_OFFLOAD::_PROTOCOL_OFFLOAD_PARAMETERS::_DOT11_RSN_REKEY_PARAMETERS Dot11RSNRekeyParameters;// Offset=0x0 Size=0x30
            struct _DOT11_RSN_REKEY_PARAMETERS_V2// Size=0x60 (Id=10202)
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
        union _NDIS_PM_PROTOCOL_OFFLOAD::_PROTOCOL_OFFLOAD_PARAMETERS ProtocolOffloadParameters;// Offset=0xa0 Size=0x60
    };
};

struct _NDIS_PACKET_PATTERN_ENTRY// Size=0x130 (Id=1273)
{
    struct _SINGLE_LIST_ENTRY Link;// Offset=0x0 Size=0x8
    struct _SINGLE_LIST_ENTRY DupLink;// Offset=0x8 Size=0x8
    unsigned long Size;// Offset=0x10 Size=0x4
    void * Source;// Offset=0x18 Size=0x8
    unsigned long Priority;// Offset=0x20 Size=0x4
    unsigned long EffectivePriority;// Offset=0x24 Size=0x4
    unsigned long Id;// Offset=0x28 Size=0x4
    unsigned long PortNumber;// Offset=0x2c Size=0x4
    union // Size=0xf4 (Id=0)
    {
        struct _NDIS_PM_PACKET_PATTERN Pattern;// Offset=0x30 Size=0x18
        struct _NDIS_PM_WOL_PATTERN WoLPattern;// Offset=0x30 Size=0xc4
        struct _NDIS_PM_PROTOCOL_OFFLOAD ProtocolOffload;// Offset=0x30 Size=0x100
    };
};
