union _NDIS_PM_WOL_PATTERN::_WOL_PATTERN// Size=0x28 (Id=1701)
{
    union // Size=0x28 (Id=0)
    {
        struct _IPV4_TCP_SYN_WOL_PACKET_PARAMETERS// Size=0x10 (Id=9196)
        {
            unsigned long Flags;// Offset=0x0 Size=0x4
            unsigned char IPv4SourceAddress[4];// Offset=0x4 Size=0x4
            unsigned char IPv4DestAddress[4];// Offset=0x8 Size=0x4
            unsigned short TCPSourcePortNumber;// Offset=0xc Size=0x2
            unsigned short TCPDestPortNumber;// Offset=0xe Size=0x2
        };
        struct _NDIS_PM_WOL_PATTERN::_WOL_PATTERN::_IPV4_TCP_SYN_WOL_PACKET_PARAMETERS IPv4TcpSynParameters;// Offset=0x0 Size=0x10
        struct _IPV6_TCP_SYN_WOL_PACKET_PARAMETERS// Size=0x28 (Id=9203)
        {
            unsigned long Flags;// Offset=0x0 Size=0x4
            unsigned char IPv6SourceAddress[16];// Offset=0x4 Size=0x10
            unsigned char IPv6DestAddress[16];// Offset=0x14 Size=0x10
            unsigned short TCPSourcePortNumber;// Offset=0x24 Size=0x2
            unsigned short TCPDestPortNumber;// Offset=0x26 Size=0x2
        };
        struct _NDIS_PM_WOL_PATTERN::_WOL_PATTERN::_IPV6_TCP_SYN_WOL_PACKET_PARAMETERS IPv6TcpSynParameters;// Offset=0x0 Size=0x28
        struct _EAPOL_REQUEST_ID_MESSAGE_WOL_PACKET_PARAMETERS// Size=0x4 (Id=9210)
        {
            unsigned long Flags;// Offset=0x0 Size=0x4
        };
        struct _NDIS_PM_WOL_PATTERN::_WOL_PATTERN::_EAPOL_REQUEST_ID_MESSAGE_WOL_PACKET_PARAMETERS EapolRequestIdMessageParameters;// Offset=0x0 Size=0x4
        struct _WOL_BITMAP_PATTERN// Size=0x14 (Id=9213)
        {
            unsigned long Flags;// Offset=0x0 Size=0x4
            unsigned long MaskOffset;// Offset=0x4 Size=0x4
            unsigned long MaskSize;// Offset=0x8 Size=0x4
            unsigned long PatternOffset;// Offset=0xc Size=0x4
            unsigned long PatternSize;// Offset=0x10 Size=0x4
        };
        struct _NDIS_PM_WOL_PATTERN::_WOL_PATTERN::_WOL_BITMAP_PATTERN WoLBitMapPattern;// Offset=0x0 Size=0x14
    };
};
