struct _PCI_EXPRESS_ENHANCED_CAPABILITY_HEADER// Size=0x4 (Id=4787)
{
    unsigned short CapabilityID;// Offset=0x0 Size=0x2
    struct // Size=0x2 (Id=0)
    {
        unsigned short Version:4;// Offset=0x2 Size=0x2 BitOffset=0x0 BitSize=0x4
        unsigned short Next:12;// Offset=0x2 Size=0x2 BitOffset=0x4 BitSize=0xc
    };
};

union _PCI_EXPRESS_PTM_CAPABILITY_REGISTER// Size=0x4 (Id=2333)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long RequesterCapable:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long ResponderCapable:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long RootCapable:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long Rsvd:5;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x5
        unsigned long LocalGranularity:8;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x8
        unsigned long Rsvd2:16;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x10
    };
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};

union _PCI_EXPRESS_PTM_CONTROL_REGISTER// Size=0x4 (Id=3258)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long Enable:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long RootSelect:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long Rsvd:6;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x6
        unsigned long EffectiveGranularity:8;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x8
        unsigned long Rsvd2:16;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x10
    };
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};

struct _PCI_EXPRESS_PTM_CAPABILITY// Size=0xc (Id=4972)
{
    struct _PCI_EXPRESS_ENHANCED_CAPABILITY_HEADER Header;// Offset=0x0 Size=0x4
    union _PCI_EXPRESS_PTM_CAPABILITY_REGISTER PtmCapability;// Offset=0x4 Size=0x4
    union _PCI_EXPRESS_PTM_CONTROL_REGISTER PtmControl;// Offset=0x8 Size=0x4
};
