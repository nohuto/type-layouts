union _NDIS_TCP_IP_CHECKSUM_PACKET_INFO::_unnamed_2203// Size=0x4 (Id=2203)
{
    struct <unnamed-type-Transmit>// Size=0x4 (Id=11527)
    {
        unsigned long NdisPacketChecksumV4:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long NdisPacketChecksumV6:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long NdisPacketTcpChecksum:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long NdisPacketUdpChecksum:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long NdisPacketIpChecksum:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
    };
    struct _NDIS_TCP_IP_CHECKSUM_PACKET_INFO::_unnamed_2204::<unnamed-type-Transmit> Transmit;// Offset=0x0 Size=0x4
    struct <unnamed-type-Receive>// Size=0x4 (Id=11534)
    {
        unsigned long NdisPacketTcpChecksumFailed:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long NdisPacketUdpChecksumFailed:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long NdisPacketIpChecksumFailed:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long NdisPacketTcpChecksumSucceeded:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long NdisPacketUdpChecksumSucceeded:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long NdisPacketIpChecksumSucceeded:1;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1
        unsigned long NdisPacketLoopback:1;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1
    };
    struct _NDIS_TCP_IP_CHECKSUM_PACKET_INFO::_unnamed_2205::<unnamed-type-Receive> Receive;// Offset=0x0 Size=0x4
    unsigned long Value;// Offset=0x0 Size=0x4
};
