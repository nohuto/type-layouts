union _PCI_EXPRESS_CXL_DVSEC_LOCK_REGISTER// Size=0x2 (Id=407)
{
    struct // Size=0x2 (Id=0)
    {
        unsigned short ConfigLock:1;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0x1
        unsigned short Reserved:15;// Offset=0x0 Size=0x2 BitOffset=0x1 BitSize=0xf
    };
    unsigned short AsUSHORT;// Offset=0x0 Size=0x2
};
