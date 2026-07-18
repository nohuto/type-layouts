union _PCI_EXPRESS_CXL_DVSEC_CONTROL_REGISTER// Size=0x2 (Id=2306)
{
    struct // Size=0x2 (Id=0)
    {
        unsigned short CacheEnable:1;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0x1
        unsigned short IoEnable:1;// Offset=0x0 Size=0x2 BitOffset=0x1 BitSize=0x1
        unsigned short MemEnable:1;// Offset=0x0 Size=0x2 BitOffset=0x2 BitSize=0x1
        unsigned short CacheSFCoverage:5;// Offset=0x0 Size=0x2 BitOffset=0x3 BitSize=0x5
        unsigned short CacheSFGranularity:3;// Offset=0x0 Size=0x2 BitOffset=0x8 BitSize=0x3
        unsigned short CacheCleanEviction:1;// Offset=0x0 Size=0x2 BitOffset=0xb BitSize=0x1
        unsigned short Reserved0:2;// Offset=0x0 Size=0x2 BitOffset=0xc BitSize=0x2
        unsigned short ViralEnable:1;// Offset=0x0 Size=0x2 BitOffset=0xe BitSize=0x1
        unsigned short Reserved1:1;// Offset=0x0 Size=0x2 BitOffset=0xf BitSize=0x1
    };
    unsigned short AsUSHORT;// Offset=0x0 Size=0x2
};
