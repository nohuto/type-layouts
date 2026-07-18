union _PCI_EXPRESS_PASID_CAPABILITY_REGISTER// Size=0x2 (Id=2854)
{
    struct // Size=0x2 (Id=0)
    {
        unsigned short Rsvd:1;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0x1
        unsigned short ExecutePermissionSupported:1;// Offset=0x0 Size=0x2 BitOffset=0x1 BitSize=0x1
        unsigned short PrivilegedModeSupported:1;// Offset=0x0 Size=0x2 BitOffset=0x2 BitSize=0x1
        unsigned short Rsvd2:5;// Offset=0x0 Size=0x2 BitOffset=0x3 BitSize=0x5
        unsigned short MaxPASIDWidth:5;// Offset=0x0 Size=0x2 BitOffset=0x8 BitSize=0x5
        unsigned short Rsvd3:3;// Offset=0x0 Size=0x2 BitOffset=0xd BitSize=0x3
    };
    unsigned short AsUSHORT;// Offset=0x0 Size=0x2
};
