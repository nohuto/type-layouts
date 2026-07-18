struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=359)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Revision;// Offset=0x1 Size=0x1
    unsigned short Size;// Offset=0x2 Size=0x2
};

enum _NDIS_DEVICE_POWER_STATE
{
    NdisDeviceStateUnspecified=0,
    NdisDeviceStateD0=1,
    NdisDeviceStateD1=2,
    NdisDeviceStateD2=3,
    NdisDeviceStateD3=4,
    NdisDeviceStateMaximum=5
};

struct _NDIS_PM_CAPABILITIES// Size=0x3c (Id=539)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    unsigned long Flags;// Offset=0x4 Size=0x4
    unsigned long SupportedWoLPacketPatterns;// Offset=0x8 Size=0x4
    unsigned long NumTotalWoLPatterns;// Offset=0xc Size=0x4
    unsigned long MaxWoLPatternSize;// Offset=0x10 Size=0x4
    unsigned long MaxWoLPatternOffset;// Offset=0x14 Size=0x4
    unsigned long MaxWoLPacketSaveBuffer;// Offset=0x18 Size=0x4
    unsigned long SupportedProtocolOffloads;// Offset=0x1c Size=0x4
    unsigned long NumArpOffloadIPv4Addresses;// Offset=0x20 Size=0x4
    unsigned long NumNSOffloadIPv6Addresses;// Offset=0x24 Size=0x4
    enum _NDIS_DEVICE_POWER_STATE MinMagicPacketWakeUp;// Offset=0x28 Size=0x4
    enum _NDIS_DEVICE_POWER_STATE MinPatternWakeUp;// Offset=0x2c Size=0x4
    enum _NDIS_DEVICE_POWER_STATE MinLinkChangeWakeUp;// Offset=0x30 Size=0x4
    unsigned long SupportedWakeUpEvents;// Offset=0x34 Size=0x4
    unsigned long MediaSpecificWakeUpEvents;// Offset=0x38 Size=0x4
};
