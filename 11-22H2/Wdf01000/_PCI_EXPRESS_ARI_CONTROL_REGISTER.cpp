struct _PCI_EXPRESS_ARI_CONTROL_REGISTER// Size=0x2 (Id=239)
{
    struct // Size=0x2 (Id=0)
    {
        unsigned short MfvcFunctionGroupsEnable:1;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0x1
        unsigned short AcsFunctionGroupsEnable:1;// Offset=0x0 Size=0x2 BitOffset=0x1 BitSize=0x1
        unsigned short Reserved1:2;// Offset=0x0 Size=0x2 BitOffset=0x2 BitSize=0x2
        unsigned short FunctionGroup:3;// Offset=0x0 Size=0x2 BitOffset=0x4 BitSize=0x3
        unsigned short Reserved2:9;// Offset=0x0 Size=0x2 BitOffset=0x7 BitSize=0x9
    };
};
