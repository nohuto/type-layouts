struct _PCI_CAPABILITIES_HEADER// Size=0x2 (Id=4785)
{
    unsigned char CapabilityID;// Offset=0x0 Size=0x1
    unsigned char Next;// Offset=0x1 Size=0x1
};

struct _PCI_FPB_CAPABILITY_HEADER// Size=0x4 (Id=1733)
{
    struct _PCI_CAPABILITIES_HEADER Header;// Offset=0x0 Size=0x2
    unsigned short Reserved;// Offset=0x2 Size=0x2
};
