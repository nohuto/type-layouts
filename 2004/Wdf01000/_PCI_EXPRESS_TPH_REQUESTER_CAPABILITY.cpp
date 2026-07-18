struct _PCI_EXPRESS_ENHANCED_CAPABILITY_HEADER// Size=0x4 (Id=2982)
{
    unsigned short CapabilityID;// Offset=0x0 Size=0x2
    struct // Size=0x2 (Id=0)
    {
        unsigned short Version:4;// Offset=0x2 Size=0x2 BitOffset=0x0 BitSize=0x4
        unsigned short Next:12;// Offset=0x2 Size=0x2 BitOffset=0x4 BitSize=0xc
    };
};

union _PCI_EXPRESS_TPH_REQUESTER_CAPABILITY_REGISTER// Size=0x4 (Id=1817)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long NoStModeSupported:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long InteruptVectorModeSupported:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long DeviceSpecificModeSupported:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long Rsvd:5;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x5
        unsigned long ExtendedTPHRequesterSupported:1;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x1
        unsigned long StTableLocation:2;// Offset=0x0 Size=0x4 BitOffset=0x9 BitSize=0x2
        unsigned long Rsvd2:5;// Offset=0x0 Size=0x4 BitOffset=0xb BitSize=0x5
        unsigned long StTableSize:11;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0xb
        unsigned long Rsvd3:5;// Offset=0x0 Size=0x4 BitOffset=0x1b BitSize=0x5
    };
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};

union _PCI_EXPRESS_TPH_REQUESTER_CONTROL_REGISTER// Size=0x4 (Id=2379)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long StModeSelect:3;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x3
        unsigned long Rsvd:5;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x5
        unsigned long TphRequesterEnable:2;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x2
        unsigned long Rsvd2:22;// Offset=0x0 Size=0x4 BitOffset=0xa BitSize=0x16
    };
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};

struct _PCI_EXPRESS_TPH_REQUESTER_CAPABILITY// Size=0xc (Id=2778)
{
    struct _PCI_EXPRESS_ENHANCED_CAPABILITY_HEADER Header;// Offset=0x0 Size=0x4
    union _PCI_EXPRESS_TPH_REQUESTER_CAPABILITY_REGISTER RequesterCapability;// Offset=0x4 Size=0x4
    union _PCI_EXPRESS_TPH_REQUESTER_CONTROL_REGISTER RequesterControl;// Offset=0x8 Size=0x4
};
