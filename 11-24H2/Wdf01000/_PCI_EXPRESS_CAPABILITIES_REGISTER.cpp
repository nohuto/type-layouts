union _PCI_EXPRESS_CAPABILITIES_REGISTER// Size=0x2 (Id=3888)
{
    struct // Size=0x2 (Id=0)
    {
        unsigned short CapabilityVersion:4;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0x4
        unsigned short DeviceType:4;// Offset=0x0 Size=0x2 BitOffset=0x4 BitSize=0x4
        unsigned short SlotImplemented:1;// Offset=0x0 Size=0x2 BitOffset=0x8 BitSize=0x1
        unsigned short InterruptMessageNumber:5;// Offset=0x0 Size=0x2 BitOffset=0x9 BitSize=0x5
        unsigned short Rsvd:2;// Offset=0x0 Size=0x2 BitOffset=0xe BitSize=0x2
    };
    unsigned short AsUSHORT;// Offset=0x0 Size=0x2
};
