struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=334)
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

struct _NDIS_PM_COUNTED_STRING// Size=0x84 (Id=1862)
{
    unsigned short Length;// Offset=0x0 Size=0x2
    wchar_t String[65];// Offset=0x2 Size=0x82
};

struct _NDIS_PM_WOL_PATTERN// Size=0xc4 (Id=1499)
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
        union _WOL_PATTERN// Size=0x28 (Id=10212)
        {
            struct _IPV4_TCP_SYN_WOL_PACKET_PARAMETERS// Size=0x10 (Id=10213)
            {
                unsigned long Flags;// Offset=0x0 Size=0x4
                unsigned char IPv4SourceAddress[4];// Offset=0x4 Size=0x4
                unsigned char IPv4DestAddress[4];// Offset=0x8 Size=0x4
                unsigned short TCPSourcePortNumber;// Offset=0xc Size=0x2
                unsigned short TCPDestPortNumber;// Offset=0xe Size=0x2
            };
            struct _NDIS_PM_WOL_PATTERN::_WOL_PATTERN::_IPV4_TCP_SYN_WOL_PACKET_PARAMETERS IPv4TcpSynParameters;// Offset=0x0 Size=0x10
            struct _IPV6_TCP_SYN_WOL_PACKET_PARAMETERS// Size=0x28 (Id=10220)
            {
                unsigned long Flags;// Offset=0x0 Size=0x4
                unsigned char IPv6SourceAddress[16];// Offset=0x4 Size=0x10
                unsigned char IPv6DestAddress[16];// Offset=0x14 Size=0x10
                unsigned short TCPSourcePortNumber;// Offset=0x24 Size=0x2
                unsigned short TCPDestPortNumber;// Offset=0x26 Size=0x2
            };
            struct _NDIS_PM_WOL_PATTERN::_WOL_PATTERN::_IPV6_TCP_SYN_WOL_PACKET_PARAMETERS IPv6TcpSynParameters;// Offset=0x0 Size=0x28
            struct _EAPOL_REQUEST_ID_MESSAGE_WOL_PACKET_PARAMETERS// Size=0x4 (Id=10227)
            {
                unsigned long Flags;// Offset=0x0 Size=0x4
            };
            struct _NDIS_PM_WOL_PATTERN::_WOL_PATTERN::_EAPOL_REQUEST_ID_MESSAGE_WOL_PACKET_PARAMETERS EapolRequestIdMessageParameters;// Offset=0x0 Size=0x4
            struct _WOL_BITMAP_PATTERN// Size=0x14 (Id=10230)
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
