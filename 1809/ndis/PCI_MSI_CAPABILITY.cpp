struct _PCI_CAPABILITIES_HEADER// Size=0x2 (Id=947)
{
    unsigned char CapabilityID;// Offset=0x0 Size=0x1
    unsigned char Next;// Offset=0x1 Size=0x1
};

struct PCI_MSI_CAPABILITY// Size=0x18 (Id=551)
{
    union // Size=0x4 (Id=0)
    {
        struct _PCI_CAPABILITIES_HEADER Header;// Offset=0x0 Size=0x2
        struct _PCI_MSI_MESSAGE_CONTROL// Size=0x2 (Id=16615)
        {
            unsigned short MSIEnable:1;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0x1
            unsigned short MultipleMessageCapable:3;// Offset=0x0 Size=0x2 BitOffset=0x1 BitSize=0x3
            unsigned short MultipleMessageEnable:3;// Offset=0x0 Size=0x2 BitOffset=0x4 BitSize=0x3
            unsigned short CapableOf64Bits:1;// Offset=0x0 Size=0x2 BitOffset=0x7 BitSize=0x1
            unsigned short PerVectorMaskCapable:1;// Offset=0x0 Size=0x2 BitOffset=0x8 BitSize=0x1
            unsigned short Reserved:7;// Offset=0x0 Size=0x2 BitOffset=0x9 BitSize=0x7
        };
        struct PCI_MSI_CAPABILITY::_PCI_MSI_MESSAGE_CONTROL MessageControl;// Offset=0x2 Size=0x2
        union <unnamed-type-MessageAddressLower>// Size=0x4 (Id=16623)
        {
            struct _PCI_MSI_MESSAGE_ADDRESS// Size=0x4 (Id=16624)
            {
                unsigned long Reserved:2;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x2
                unsigned long Address:30;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1e
            };
            struct PCI_MSI_CAPABILITY::<unnamed-type-MessageAddressLower>::_PCI_MSI_MESSAGE_ADDRESS Register;// Offset=0x0 Size=0x4
            unsigned long Raw;// Offset=0x0 Size=0x4
        };
    };
    union PCI_MSI_CAPABILITY::<unnamed-type-MessageAddressLower> MessageAddressLower;// Offset=0x4 Size=0x4
    union // Size=0xc (Id=0)
    {
        struct PCI_MSI_CAPABILITY::_unnamed_1404::<unnamed-type-Option32Bit> Option32Bit;// Offset=0x8 Size=0xc
        struct PCI_MSI_CAPABILITY::_unnamed_1405::<unnamed-type-Option64Bit> Option64Bit;// Offset=0x8 Size=0x10
    };
};
