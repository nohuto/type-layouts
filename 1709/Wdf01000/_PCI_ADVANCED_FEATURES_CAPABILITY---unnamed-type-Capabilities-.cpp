union _PCI_ADVANCED_FEATURES_CAPABILITY::<unnamed-type-Capabilities>// Size=0x1 (Id=3831)
{
    struct // Size=0x1 (Id=0)
    {
        unsigned char FunctionLevelResetSupported:1;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char TransactionsPendingSupported:1;// Offset=0x0 Size=0x1 BitOffset=0x1 BitSize=0x1
        unsigned char Rsvd:6;// Offset=0x0 Size=0x1 BitOffset=0x2 BitSize=0x6
    };
    unsigned char AsUCHAR;// Offset=0x0 Size=0x1
};
