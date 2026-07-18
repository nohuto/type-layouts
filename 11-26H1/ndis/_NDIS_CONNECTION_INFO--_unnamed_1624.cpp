union _NDIS_CONNECTION_INFO::_unnamed_1624// Size=0x4 (Id=1624)
{
    struct <unnamed-type-TcpPortInfo>// Size=0x4 (Id=6737)
    {
        unsigned short SourceTcpPort;// Offset=0x0 Size=0x2
        unsigned short DestinationTcpPort;// Offset=0x2 Size=0x2
    };
    struct _NDIS_CONNECTION_INFO::_unnamed_1625::<unnamed-type-TcpPortInfo> TcpPortInfo;// Offset=0x0 Size=0x4
    struct <unnamed-type-UdpPortInfo>// Size=0x4 (Id=6741)
    {
        unsigned short SourceUdpPort;// Offset=0x0 Size=0x2
        unsigned short DestinationUdpPort;// Offset=0x2 Size=0x2
    };
    struct _NDIS_CONNECTION_INFO::_unnamed_1626::<unnamed-type-UdpPortInfo> UdpPortInfo;// Offset=0x0 Size=0x4
};
