enum _PCI_BUSMASTER_RID_TYPE
{
    BusmasterRidInvalid=0,
    BusmasterRidFromDeviceRid=1,
    BusmasterRidFromBridgeRid=2,
    BusmasterRidFromMultipleBridges=3
};

struct _unnamed_1428// Size=0x4 (Id=1428)
{
    unsigned char Bus;// Offset=0x0 Size=0x1
    unsigned char Device;// Offset=0x1 Size=0x1
    unsigned char Function;// Offset=0x2 Size=0x1
    unsigned char Reserved;// Offset=0x3 Size=0x1
};

struct _unnamed_1429// Size=0x2 (Id=1429)
{
    unsigned char SecondaryBus;// Offset=0x0 Size=0x1
    unsigned char SubordinateBus;// Offset=0x1 Size=0x1
};

struct _PCI_BUSMASTER_DESCRIPTOR// Size=0xc (Id=1430)
{
    enum _PCI_BUSMASTER_RID_TYPE Type;// Offset=0x0 Size=0x4
    unsigned long Segment;// Offset=0x4 Size=0x4
    union // Size=0xc (Id=0)
    {
        struct _unnamed_1428 DeviceRid;// Offset=0x8 Size=0x4
        struct _unnamed_1428 BridgeRid;// Offset=0x8 Size=0x4
        struct _unnamed_1429 MultipleBridges;// Offset=0x8 Size=0x2
    };
};
