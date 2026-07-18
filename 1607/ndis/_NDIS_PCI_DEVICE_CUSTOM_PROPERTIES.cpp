struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=323)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Revision;// Offset=0x1 Size=0x1
    unsigned short Size;// Offset=0x2 Size=0x2
};

struct _NDIS_PCI_DEVICE_CUSTOM_PROPERTIES// Size=0x34 (Id=970)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    unsigned int DeviceType;// Offset=0x4 Size=0x4
    unsigned int CurrentSpeedAndMode;// Offset=0x8 Size=0x4
    unsigned int CurrentPayloadSize;// Offset=0xc Size=0x4
    unsigned int MaxPayloadSize;// Offset=0x10 Size=0x4
    unsigned int MaxReadRequestSize;// Offset=0x14 Size=0x4
    unsigned int CurrentLinkSpeed;// Offset=0x18 Size=0x4
    unsigned int CurrentLinkWidth;// Offset=0x1c Size=0x4
    unsigned int MaxLinkSpeed;// Offset=0x20 Size=0x4
    unsigned int MaxLinkWidth;// Offset=0x24 Size=0x4
    unsigned int PciExpressVersion;// Offset=0x28 Size=0x4
    unsigned int InterruptType;// Offset=0x2c Size=0x4
    unsigned int MaxInterruptMessages;// Offset=0x30 Size=0x4
};
