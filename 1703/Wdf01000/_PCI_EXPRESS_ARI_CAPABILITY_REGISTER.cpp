struct _PCI_EXPRESS_ARI_CAPABILITY_REGISTER// Size=0x2 (Id=1757)
{
    struct // Size=0x2 (Id=0)
    {
        unsigned short MfvcFunctionGroupsCapability:1;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0x1
        unsigned short AcsFunctionGroupsCapability:1;// Offset=0x0 Size=0x2 BitOffset=0x1 BitSize=0x1
        unsigned short Reserved:6;// Offset=0x0 Size=0x2 BitOffset=0x2 BitSize=0x6
        unsigned short NextFunctionNumber:8;// Offset=0x0 Size=0x2 BitOffset=0x8 BitSize=0x8
    };
};
