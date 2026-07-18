union _PCI_EXPRESS_PRI_CONTROL_REGISTER// Size=0x2 (Id=2494)
{
    struct // Size=0x2 (Id=0)
    {
        unsigned short Enable:1;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0x1
        unsigned short Reset:1;// Offset=0x0 Size=0x2 BitOffset=0x1 BitSize=0x1
        unsigned short Rsvd:14;// Offset=0x0 Size=0x2 BitOffset=0x2 BitSize=0xe
    };
    unsigned short AsUSHORT;// Offset=0x0 Size=0x2
};
