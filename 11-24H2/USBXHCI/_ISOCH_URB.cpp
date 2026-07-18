struct _USBD_ISO_PACKET_DESCRIPTOR// Size=0xc (Id=966)
{
    unsigned long Offset;// Offset=0x0 Size=0x4
    unsigned long Length;// Offset=0x4 Size=0x4
    long Status;// Offset=0x8 Size=0x4
};

struct _ISOCH_URB// Size=0x18 (Id=567)
{
    unsigned long StartFrame;// Offset=0x0 Size=0x4
    unsigned long NumberOfPackets;// Offset=0x4 Size=0x4
    unsigned long ErrorCount;// Offset=0x8 Size=0x4
    struct _USBD_ISO_PACKET_DESCRIPTOR IsochPacket[1];// Offset=0xc Size=0xc
};
