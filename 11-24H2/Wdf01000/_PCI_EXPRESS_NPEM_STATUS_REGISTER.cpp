union _PCI_EXPRESS_NPEM_STATUS_REGISTER// Size=0x4 (Id=2781)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long CommandCompleted:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long Rsvd:23;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x17
        unsigned long EnclosureSpecificStatus:8;// Offset=0x0 Size=0x4 BitOffset=0x18 BitSize=0x8
    };
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};
