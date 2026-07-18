struct _PCI_CAPABILITIES_HEADER// Size=0x2 (Id=1021)
{
    unsigned char CapabilityID;// Offset=0x0 Size=0x1
    unsigned char Next;// Offset=0x1 Size=0x1
};

struct _anonymous_995// Size=0x2 (Id=995)
{
    struct // Size=0x2 (Id=0)
    {
        unsigned short TableSize:11;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0xb
        unsigned short Reserved:3;// Offset=0x0 Size=0x2 BitOffset=0xb BitSize=0x3
        unsigned short FunctionMask:1;// Offset=0x0 Size=0x2 BitOffset=0xe BitSize=0x1
        unsigned short MSIXEnable:1;// Offset=0x0 Size=0x2 BitOffset=0xf BitSize=0x1
    };
};

struct PCI_MSIX_CAPABILITY// Size=0xc (Id=996)
{
    struct _PCI_CAPABILITIES_HEADER Header;// Offset=0x0 Size=0x2
    struct _anonymous_995 MessageControl;// Offset=0x2 Size=0x2
    struct MSIX_TABLE_POINTER MessageTable;// Offset=0x4 Size=0x4
    struct MSIX_TABLE_POINTER PBATable;// Offset=0x8 Size=0x4
};
