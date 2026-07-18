union _PCI_EXPRESS_CXL_DVSEC_STATUS_REGISTER// Size=0x2 (Id=3670)
{
    struct // Size=0x2 (Id=0)
    {
        unsigned short Reserved0:14;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0xe
        unsigned short ViralStatus:1;// Offset=0x0 Size=0x2 BitOffset=0xe BitSize=0x1
        unsigned short Reserved1:1;// Offset=0x0 Size=0x2 BitOffset=0xf BitSize=0x1
    };
    unsigned short AsUSHORT;// Offset=0x0 Size=0x2
};
