union _PCI_EXPRESS_DOE_CAPABILITIES_REGISTER// Size=0x4 (Id=3200)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long InterruptSupport:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long InterruptMessageNumber:10;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0xa
        unsigned long AttentionSupport:1;// Offset=0x0 Size=0x4 BitOffset=0xb BitSize=0x1
        unsigned long AsyncSupport:1;// Offset=0x0 Size=0x4 BitOffset=0xc BitSize=0x1
        unsigned long Rsvd:19;// Offset=0x0 Size=0x4 BitOffset=0xd BitSize=0x13
    };
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};
