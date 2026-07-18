enum _PCI_LINK_SPEED
{
    PciLinkSpeed2_5Gts=0,
    PciLinkSpeed5_0Gts=1,
    PciLinkSpeed8_0Gts=2,
    PciLinkSpeed16_0Gts=3,
    PciLinkSpeed32_0Gts=4,
    PciLinkSpeed64_0Gts=5,
    PciLinkSpeedMax=6
};

struct _unnamed_707// Size=0x28 (Id=707)
{
    long long UpDataBytes;// Offset=0x0 Size=0x8
    long long DownDataBytes;// Offset=0x8 Size=0x8
    unsigned long long ScaleUpStartTimestamp;// Offset=0x10 Size=0x8
    unsigned long long ScaleDownStartTimestamp;// Offset=0x18 Size=0x8
    enum _PCI_LINK_SPEED MaxSupportedLinkSpeed;// Offset=0x20 Size=0x4
    enum _PCI_LINK_SPEED MaxLinkSpeed;// Offset=0x24 Size=0x4
};
