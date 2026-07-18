struct _NDIS_TCP_IP_CHECKSUM_PACKET_INFO::_unnamed_1909::<unnamed-type-Transmit>// Size=0x4 (Id=1909)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long NdisPacketChecksumV4:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long NdisPacketChecksumV6:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long NdisPacketTcpChecksum:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long NdisPacketUdpChecksum:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long NdisPacketIpChecksum:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
    };
};
