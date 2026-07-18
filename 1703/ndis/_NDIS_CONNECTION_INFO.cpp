struct _NDIS_CONNECTION_INFO// Size=0x30 (Id=1256)
{
    unsigned char MacAddress[6];// Offset=0x0 Size=0x6
    union // Size=0xc (Id=0)
    {
        struct _NDIS_CONNECTION_INFO::_unnamed_1258::<unnamed-type-IPv4Info> IPv4Info;// Offset=0x8 Size=0xc
        struct _NDIS_CONNECTION_INFO::_unnamed_1259::<unnamed-type-IPv6Info> IPv6Info;// Offset=0x8 Size=0x21
    };
    union // Size=0x4 (Id=0)
    {
        struct _NDIS_CONNECTION_INFO::_unnamed_1261::<unnamed-type-TcpPortInfo> TcpPortInfo;// Offset=0x2c Size=0x4
        struct _NDIS_CONNECTION_INFO::_unnamed_1262::<unnamed-type-UdpPortInfo> UdpPortInfo;// Offset=0x2c Size=0x4
    };
};
