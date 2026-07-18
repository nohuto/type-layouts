struct _DEBUG_TRANSPORT_DATA// Size=0xc (Id=1820)
{
    unsigned long HwContextSize;// Offset=0x0 Size=0x4
    unsigned long SharedVisibleDataSize;// Offset=0x4 Size=0x4
    unsigned char UseSerialFraming;// Offset=0x8 Size=0x1
    unsigned char ValidUSBCoreId;// Offset=0x9 Size=0x1
    unsigned char USBCoreId;// Offset=0xa Size=0x1
};

struct _DEBUG_IOMMU_EFI_DATA// Size=0x10 (Id=1053)
{
    void * PciIoProtocolHandle;// Offset=0x0 Size=0x8
    void * Mapping;// Offset=0x8 Size=0x8
};

struct _DEBUG_DEVICE_DESCRIPTOR// Size=0x110 (Id=2420)
{
    unsigned long Bus;// Offset=0x0 Size=0x4
    unsigned long Slot;// Offset=0x4 Size=0x4
    unsigned short Segment;// Offset=0x8 Size=0x2
    unsigned short VendorID;// Offset=0xa Size=0x2
    unsigned short DeviceID;// Offset=0xc Size=0x2
    unsigned char BaseClass;// Offset=0xe Size=0x1
    unsigned char SubClass;// Offset=0xf Size=0x1
    unsigned char ProgIf;// Offset=0x10 Size=0x1
    union // Size=0x1 (Id=0)
    {
        unsigned char Flags;// Offset=0x11 Size=0x1
        struct // Size=0x1 (Id=0)
        {
            unsigned char DbgHalScratchAllocated:1;// Offset=0x11 Size=0x1 BitOffset=0x0 BitSize=0x1
            unsigned char DbgBarsMapped:1;// Offset=0x11 Size=0x1 BitOffset=0x1 BitSize=0x1
            unsigned char DbgScratchAllocated:1;// Offset=0x11 Size=0x1 BitOffset=0x2 BitSize=0x1
            unsigned char DbgUncachedMemory:1;// Offset=0x11 Size=0x1 BitOffset=0x3 BitSize=0x1
            unsigned char DbgSynthetic:1;// Offset=0x11 Size=0x1 BitOffset=0x4 BitSize=0x1
        };
    };
    unsigned char Initialized;// Offset=0x12 Size=0x1
    unsigned char Configured;// Offset=0x13 Size=0x1
    struct DEBUG_DEVICE_ADDRESS BaseAddress[6];// Offset=0x18 Size=0x90
    struct DEBUG_MEMORY_REQUIREMENTS Memory;// Offset=0xa8 Size=0x20
    unsigned long Dbg2TableIndex;// Offset=0xc8 Size=0x4
    unsigned short PortType;// Offset=0xcc Size=0x2
    unsigned short PortSubtype;// Offset=0xce Size=0x2
    void * OemData;// Offset=0xd0 Size=0x8
    unsigned long OemDataLength;// Offset=0xd8 Size=0x4
    enum KD_NAMESPACE_ENUM NameSpace;// Offset=0xdc Size=0x4
    wchar_t * NameSpacePath;// Offset=0xe0 Size=0x8
    unsigned long NameSpacePathLength;// Offset=0xe8 Size=0x4
    unsigned long TransportType;// Offset=0xec Size=0x4
    struct _DEBUG_TRANSPORT_DATA TransportData;// Offset=0xf0 Size=0xc
    struct _DEBUG_IOMMU_EFI_DATA EfiIoMmuData;// Offset=0x100 Size=0x10
};
