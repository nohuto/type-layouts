struct _PCI_CAPABILITIES_HEADER// Size=0x2 (Id=2911)
{
    unsigned char CapabilityID;// Offset=0x0 Size=0x1
    unsigned char Next;// Offset=0x1 Size=0x1
};

struct _PCI_SUBSYSTEM_IDS_CAPABILITY// Size=0x8 (Id=2712)
{
    struct _PCI_CAPABILITIES_HEADER Header;// Offset=0x0 Size=0x2
    unsigned short Reserved;// Offset=0x2 Size=0x2
    unsigned short SubVendorID;// Offset=0x4 Size=0x2
    unsigned short SubSystemID;// Offset=0x6 Size=0x2
};
