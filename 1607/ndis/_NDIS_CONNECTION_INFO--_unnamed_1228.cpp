union _NDIS_CONNECTION_INFO::_unnamed_1228// Size=0x4 (Id=1228)
{
    struct <unnamed-type-TcpPortInfo>// Size=0x4 (Id=5594)
    {
        unsigned short SourceTcpPort;// Offset=0x0 Size=0x2
        unsigned short DestinationTcpPort;// Offset=0x2 Size=0x2
    };
    struct _NDIS_CONNECTION_INFO::_unnamed_1229::<unnamed-type-TcpPortInfo> TcpPortInfo;// Offset=0x0 Size=0x4
    struct <unnamed-type-UdpPortInfo>// Size=0x4 (Id=5598)
    {
        unsigned short SourceUdpPort;// Offset=0x0 Size=0x2
        unsigned short DestinationUdpPort;// Offset=0x2 Size=0x2
    };
    struct _NDIS_CONNECTION_INFO::_unnamed_1230::<unnamed-type-UdpPortInfo> UdpPortInfo;// Offset=0x0 Size=0x4
};
