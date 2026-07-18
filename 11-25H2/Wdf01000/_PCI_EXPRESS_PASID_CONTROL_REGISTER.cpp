union _PCI_EXPRESS_PASID_CONTROL_REGISTER// Size=0x2 (Id=1270)
{
    struct // Size=0x2 (Id=0)
    {
        unsigned short PASIDEnable:1;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0x1
        unsigned short ExecutePermissionEnable:1;// Offset=0x0 Size=0x2 BitOffset=0x1 BitSize=0x1
        unsigned short PrivilegedModeEnable:1;// Offset=0x0 Size=0x2 BitOffset=0x2 BitSize=0x1
        unsigned short Rsvd:13;// Offset=0x0 Size=0x2 BitOffset=0x3 BitSize=0xd
    };
    unsigned short AsUSHORT;// Offset=0x0 Size=0x2
};
