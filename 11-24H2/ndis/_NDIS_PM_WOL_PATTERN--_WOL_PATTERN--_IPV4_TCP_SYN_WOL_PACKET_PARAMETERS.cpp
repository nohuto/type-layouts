struct _NDIS_PM_WOL_PATTERN::_WOL_PATTERN::_IPV4_TCP_SYN_WOL_PACKET_PARAMETERS// Size=0x10 (Id=2163)
{
    unsigned long Flags;// Offset=0x0 Size=0x4
    unsigned char IPv4SourceAddress[4];// Offset=0x4 Size=0x4
    unsigned char IPv4DestAddress[4];// Offset=0x8 Size=0x4
    unsigned short TCPSourcePortNumber;// Offset=0xc Size=0x2
    unsigned short TCPDestPortNumber;// Offset=0xe Size=0x2
};
