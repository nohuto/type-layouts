union NVME_COMPLETION_DW0_MFND_OPERATION_FEATURE// Size=0x4 (Id=692)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long OperationModeFlag:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long OperationPrivilegeFlag:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long Reserved:30;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1e
    };
    unsigned long AsUlong;// Offset=0x0 Size=0x4
};
