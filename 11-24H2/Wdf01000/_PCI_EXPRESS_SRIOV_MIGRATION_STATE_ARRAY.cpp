union _PCI_EXPRESS_SRIOV_MIGRATION_STATE_ARRAY// Size=0x4 (Id=3062)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long VFMigrationStateBIR:3;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x3
        unsigned long VFMigrationStateOffset:29;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1d
    };
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};
