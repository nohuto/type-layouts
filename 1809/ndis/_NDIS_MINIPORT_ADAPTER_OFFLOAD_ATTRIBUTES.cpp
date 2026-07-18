struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=355)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Revision;// Offset=0x1 Size=0x1
    unsigned short Size;// Offset=0x2 Size=0x2
};

struct _NDIS_MINIPORT_ADAPTER_OFFLOAD_ATTRIBUTES// Size=0x28 (Id=1565)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    struct _NDIS_OFFLOAD * DefaultOffloadConfiguration;// Offset=0x8 Size=0x8
    struct _NDIS_OFFLOAD * HardwareOffloadCapabilities;// Offset=0x10 Size=0x8
    struct _NDIS_TCP_CONNECTION_OFFLOAD * DefaultTcpConnectionOffloadConfiguration;// Offset=0x18 Size=0x8
    struct _NDIS_TCP_CONNECTION_OFFLOAD * TcpConnectionOffloadHardwareCapabilities;// Offset=0x20 Size=0x8
};
