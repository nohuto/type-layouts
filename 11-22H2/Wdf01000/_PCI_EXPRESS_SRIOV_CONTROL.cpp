union _PCI_EXPRESS_SRIOV_CONTROL// Size=0x2 (Id=2859)
{
    struct // Size=0x2 (Id=0)
    {
        unsigned short VFEnable:1;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0x1
        unsigned short VFMigrationEnable:1;// Offset=0x0 Size=0x2 BitOffset=0x1 BitSize=0x1
        unsigned short VFMigrationInterruptEnable:1;// Offset=0x0 Size=0x2 BitOffset=0x2 BitSize=0x1
        unsigned short VFMemorySpaceEnable:1;// Offset=0x0 Size=0x2 BitOffset=0x3 BitSize=0x1
        unsigned short ARICapableHierarchy:1;// Offset=0x0 Size=0x2 BitOffset=0x4 BitSize=0x1
        unsigned short Reserved1:11;// Offset=0x0 Size=0x2 BitOffset=0x5 BitSize=0xb
    };
    unsigned short AsUSHORT;// Offset=0x0 Size=0x2
};
