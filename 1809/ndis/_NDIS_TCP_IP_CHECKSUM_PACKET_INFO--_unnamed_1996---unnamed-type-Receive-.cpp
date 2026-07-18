struct _NDIS_TCP_IP_CHECKSUM_PACKET_INFO::_unnamed_1996::<unnamed-type-Receive>// Size=0x4 (Id=1996)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long NdisPacketTcpChecksumFailed:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long NdisPacketUdpChecksumFailed:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long NdisPacketIpChecksumFailed:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long NdisPacketTcpChecksumSucceeded:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long NdisPacketUdpChecksumSucceeded:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long NdisPacketIpChecksumSucceeded:1;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1
        unsigned long NdisPacketLoopback:1;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1
    };
};
