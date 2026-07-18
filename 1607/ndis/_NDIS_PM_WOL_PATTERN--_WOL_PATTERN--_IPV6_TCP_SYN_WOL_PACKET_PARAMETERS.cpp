struct _NDIS_PM_WOL_PATTERN::_WOL_PATTERN::_IPV6_TCP_SYN_WOL_PACKET_PARAMETERS// Size=0x28 (Id=1664)
{
    unsigned long Flags;// Offset=0x0 Size=0x4
    unsigned char IPv6SourceAddress[16];// Offset=0x4 Size=0x10
    unsigned char IPv6DestAddress[16];// Offset=0x14 Size=0x10
    unsigned short TCPSourcePortNumber;// Offset=0x24 Size=0x2
    unsigned short TCPDestPortNumber;// Offset=0x26 Size=0x2
};
