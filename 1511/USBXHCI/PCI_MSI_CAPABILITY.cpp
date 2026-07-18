struct _PCI_CAPABILITIES_HEADER// Size=0x2 (Id=661)
{
    unsigned char CapabilityID;// Offset=0x0 Size=0x1
    unsigned char Next;// Offset=0x1 Size=0x1
};

struct _PCI_MSI_MESSAGE_CONTROL// Size=0x2 (Id=776)
{
    struct // Size=0x2 (Id=0)
    {
        unsigned short MSIEnable:1;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0x1
        unsigned short MultipleMessageCapable:3;// Offset=0x0 Size=0x2 BitOffset=0x1 BitSize=0x3
        unsigned short MultipleMessageEnable:3;// Offset=0x0 Size=0x2 BitOffset=0x4 BitSize=0x3
        unsigned short CapableOf64Bits:1;// Offset=0x0 Size=0x2 BitOffset=0x7 BitSize=0x1
        unsigned short PerVectorMaskCapable:1;// Offset=0x0 Size=0x2 BitOffset=0x8 BitSize=0x1
        unsigned short Reserved:7;// Offset=0x0 Size=0x2 BitOffset=0x9 BitSize=0x7
    };
};

struct _PCI_MSI_MESSAGE_ADDRESS// Size=0x4 (Id=788)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long Reserved:2;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x2
        unsigned long Address:30;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1e
    };
};

union _unnamed_711// Size=0x4 (Id=711)
{
    struct _PCI_MSI_MESSAGE_ADDRESS Register;// Offset=0x0 Size=0x4
    unsigned long Raw;// Offset=0x0 Size=0x4
};

struct _unnamed_712// Size=0xc (Id=712)
{
    unsigned short MessageData;// Offset=0x0 Size=0x2
    unsigned short Reserved;// Offset=0x2 Size=0x2
    unsigned long MaskBits;// Offset=0x4 Size=0x4
    unsigned long PendingBits;// Offset=0x8 Size=0x4
};

struct _unnamed_713// Size=0x10 (Id=713)
{
    unsigned long MessageAddressUpper;// Offset=0x0 Size=0x4
    unsigned short MessageData;// Offset=0x4 Size=0x2
    unsigned short Reserved;// Offset=0x6 Size=0x2
    unsigned long MaskBits;// Offset=0x8 Size=0x4
    unsigned long PendingBits;// Offset=0xc Size=0x4
};

struct PCI_MSI_CAPABILITY// Size=0x18 (Id=714)
{
    struct _PCI_CAPABILITIES_HEADER Header;// Offset=0x0 Size=0x2
    struct _PCI_MSI_MESSAGE_CONTROL MessageControl;// Offset=0x2 Size=0x2
    union _unnamed_711 MessageAddressLower;// Offset=0x4 Size=0x4
    union // Size=0xc (Id=0)
    {
        struct _unnamed_712 Option32Bit;// Offset=0x8 Size=0xc
        struct _unnamed_713 Option64Bit;// Offset=0x8 Size=0x10
    };
};
