union _PCI_EXPRESS_CXL_DVSEC_CAPABILITY_REGISTER_V2// Size=0x2 (Id=2415)
{
    struct // Size=0x2 (Id=0)
    {
        unsigned short DisableCaching:1;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0x1
        unsigned short InitiateCacheWriteBack:1;// Offset=0x0 Size=0x2 BitOffset=0x1 BitSize=0x1
        unsigned short InitiateCxlReset:1;// Offset=0x0 Size=0x2 BitOffset=0x2 BitSize=0x1
        unsigned short ResetMemClrEnable:1;// Offset=0x0 Size=0x2 BitOffset=0x3 BitSize=0x1
        unsigned short Reserved1:12;// Offset=0x0 Size=0x2 BitOffset=0x4 BitSize=0xc
    };
    unsigned short AsUSHORT;// Offset=0x0 Size=0x2
};
