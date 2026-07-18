struct _PCI_EXPRESS_ENHANCED_CAPABILITY_HEADER// Size=0x4 (Id=4380)
{
    unsigned short CapabilityID;// Offset=0x0 Size=0x2
    struct // Size=0x2 (Id=0)
    {
        unsigned short Version:4;// Offset=0x2 Size=0x2 BitOffset=0x0 BitSize=0x4
        unsigned short Next:12;// Offset=0x2 Size=0x2 BitOffset=0x4 BitSize=0xc
    };
};

union _PCI_EXPRESS_PRI_CONTROL_REGISTER// Size=0x2 (Id=3205)
{
    struct // Size=0x2 (Id=0)
    {
        unsigned short Enable:1;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0x1
        unsigned short Reset:1;// Offset=0x0 Size=0x2 BitOffset=0x1 BitSize=0x1
        unsigned short Rsvd:14;// Offset=0x0 Size=0x2 BitOffset=0x2 BitSize=0xe
    };
    unsigned short AsUSHORT;// Offset=0x0 Size=0x2
};

union _PCI_EXPRESS_PRI_STATUS_REGISTER// Size=0x2 (Id=2934)
{
    struct // Size=0x2 (Id=0)
    {
        unsigned short ResponseFailure:1;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0x1
        unsigned short UnexpectedPageRequestGroupIndex:1;// Offset=0x0 Size=0x2 BitOffset=0x1 BitSize=0x1
        unsigned short Rsvd:6;// Offset=0x0 Size=0x2 BitOffset=0x2 BitSize=0x6
        unsigned short Stopped:1;// Offset=0x0 Size=0x2 BitOffset=0x8 BitSize=0x1
        unsigned short Rsvd2:6;// Offset=0x0 Size=0x2 BitOffset=0x9 BitSize=0x6
        unsigned short PrgResponsePasidRequired:1;// Offset=0x0 Size=0x2 BitOffset=0xf BitSize=0x1
    };
    unsigned short AsUSHORT;// Offset=0x0 Size=0x2
};

struct _PCI_EXPRESS_PRI_CAPABILITY// Size=0x10 (Id=4250)
{
    struct _PCI_EXPRESS_ENHANCED_CAPABILITY_HEADER Header;// Offset=0x0 Size=0x4
    union _PCI_EXPRESS_PRI_CONTROL_REGISTER Control;// Offset=0x4 Size=0x2
    union _PCI_EXPRESS_PRI_STATUS_REGISTER Status;// Offset=0x6 Size=0x2
    unsigned long PRCapacity;// Offset=0x8 Size=0x4
    unsigned long PRAllocation;// Offset=0xc Size=0x4
};
