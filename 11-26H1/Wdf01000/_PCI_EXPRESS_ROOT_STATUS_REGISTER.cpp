union _PCI_EXPRESS_ROOT_STATUS_REGISTER// Size=0x4 (Id=1551)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long PMERequestorId:16;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x10
        unsigned long PMEStatus:1;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x1
        unsigned long PMEPending:1;// Offset=0x0 Size=0x4 BitOffset=0x11 BitSize=0x1
        unsigned long Rsvd:14;// Offset=0x0 Size=0x4 BitOffset=0x12 BitSize=0xe
    };
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};
