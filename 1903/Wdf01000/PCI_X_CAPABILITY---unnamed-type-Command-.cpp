union PCI_X_CAPABILITY::<unnamed-type-Command>// Size=0x2 (Id=4282)
{
    struct <unnamed-type-bits>// Size=0x2 (Id=76524)
    {
        unsigned short DataParityErrorRecoveryEnable:1;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0x1
        unsigned short EnableRelaxedOrdering:1;// Offset=0x0 Size=0x2 BitOffset=0x1 BitSize=0x1
        unsigned short MaxMemoryReadByteCount:2;// Offset=0x0 Size=0x2 BitOffset=0x2 BitSize=0x2
        unsigned short MaxOutstandingSplitTransactions:3;// Offset=0x0 Size=0x2 BitOffset=0x4 BitSize=0x3
        unsigned short Reserved:9;// Offset=0x0 Size=0x2 BitOffset=0x7 BitSize=0x9
    };
    struct PCI_X_CAPABILITY::<unnamed-type-Command>::<unnamed-type-bits> bits;// Offset=0x0 Size=0x2
    unsigned short AsUSHORT;// Offset=0x0 Size=0x2
};
