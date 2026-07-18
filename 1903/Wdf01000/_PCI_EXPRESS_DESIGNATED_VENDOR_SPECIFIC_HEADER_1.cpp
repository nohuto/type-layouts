union _PCI_EXPRESS_DESIGNATED_VENDOR_SPECIFIC_HEADER_1// Size=0x4 (Id=2544)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long DvsecVendorId:16;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x10
        unsigned long DvsecVersion:4;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x4
        unsigned long DvsecLength:12;// Offset=0x0 Size=0x4 BitOffset=0x14 BitSize=0xc
    };
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};
