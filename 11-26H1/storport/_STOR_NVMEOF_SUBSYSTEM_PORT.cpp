struct _STOR_NVMEOF_SUBSYSTEM_PORT// Size=0x240 (Id=259)
{
    unsigned short Version;// Offset=0x0 Size=0x2
    unsigned short Size;// Offset=0x2 Size=0x2
    unsigned long Flags;// Offset=0x4 Size=0x4
    void * HostGatewayHandle;// Offset=0x8 Size=0x8
    void * MiniportHandle;// Offset=0x10 Size=0x8
    unsigned short PortId;// Offset=0x18 Size=0x2
    unsigned short Reserved0;// Offset=0x1a Size=0x2
    unsigned char Nqn[256];// Offset=0x1c Size=0x100
    unsigned char TransportAddress[256];// Offset=0x11c Size=0x100
    unsigned char TransportServiceId[32];// Offset=0x21c Size=0x20
};
