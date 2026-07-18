struct _STOR_NVMEOF_HOST_GATEWAY// Size=0x138 (Id=249)
{
    unsigned short Version;// Offset=0x0 Size=0x2
    unsigned short Size;// Offset=0x2 Size=0x2
    unsigned long Flags;// Offset=0x4 Size=0x4
    void * MiniportHandle;// Offset=0x8 Size=0x8
    unsigned short PeriodInMinutes;// Offset=0x10 Size=0x2
    unsigned short NumaNode;// Offset=0x12 Size=0x2
    unsigned char TransportType;// Offset=0x14 Size=0x1
    unsigned char AddressFamily;// Offset=0x15 Size=0x1
    unsigned char TransportAddress[256];// Offset=0x16 Size=0x100
    unsigned char TransportServiceId[32];// Offset=0x116 Size=0x20
};
