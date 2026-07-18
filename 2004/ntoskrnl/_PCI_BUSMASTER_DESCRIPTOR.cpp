enum _PCI_BUSMASTER_RID_TYPE
{
    BusmasterRidInvalid=0,
    BusmasterRidFromDeviceRid=1,
    BusmasterRidFromBridgeRid=2,
    BusmasterRidFromMultipleBridges=3
};

struct _anonymous_1169// Size=0x4 (Id=1169)
{
    unsigned char Bus;// Offset=0x0 Size=0x1
    unsigned char Device;// Offset=0x1 Size=0x1
    unsigned char Function;// Offset=0x2 Size=0x1
    unsigned char Reserved;// Offset=0x3 Size=0x1
};

struct _anonymous_1170// Size=0x2 (Id=1170)
{
    unsigned char SecondaryBus;// Offset=0x0 Size=0x1
    unsigned char SubordinateBus;// Offset=0x1 Size=0x1
};

struct _PCI_BUSMASTER_DESCRIPTOR// Size=0xc (Id=1171)
{
    enum _PCI_BUSMASTER_RID_TYPE Type;// Offset=0x0 Size=0x4
    unsigned long Segment;// Offset=0x4 Size=0x4
    union // Size=0xc (Id=0)
    {
        struct _anonymous_1169 DeviceRid;// Offset=0x8 Size=0x4
        struct _anonymous_1169 BridgeRid;// Offset=0x8 Size=0x4
        struct _anonymous_1170 MultipleBridges;// Offset=0x8 Size=0x2
    };
};
