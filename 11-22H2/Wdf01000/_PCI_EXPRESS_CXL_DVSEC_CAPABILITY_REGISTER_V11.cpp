union _PCI_EXPRESS_CXL_DVSEC_CAPABILITY_REGISTER_V11// Size=0x2 (Id=3178)
{
    struct // Size=0x2 (Id=0)
    {
        unsigned short CacheCapable:1;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0x1
        unsigned short IoCapable:1;// Offset=0x0 Size=0x2 BitOffset=0x1 BitSize=0x1
        unsigned short MemCapable:1;// Offset=0x0 Size=0x2 BitOffset=0x2 BitSize=0x1
        unsigned short MemHwInitMode:1;// Offset=0x0 Size=0x2 BitOffset=0x3 BitSize=0x1
        unsigned short HdmCount:2;// Offset=0x0 Size=0x2 BitOffset=0x4 BitSize=0x2
        unsigned short Reserved0:8;// Offset=0x0 Size=0x2 BitOffset=0x6 BitSize=0x8
        unsigned short ViralCapable:1;// Offset=0x0 Size=0x2 BitOffset=0xe BitSize=0x1
        unsigned short Reserved1:1;// Offset=0x0 Size=0x2 BitOffset=0xf BitSize=0x1
    };
    unsigned short AsUSHORT;// Offset=0x0 Size=0x2
};
