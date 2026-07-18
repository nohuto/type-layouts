struct _PCI_CAPABILITIES_HEADER// Size=0x2 (Id=3281)
{
    unsigned char CapabilityID;// Offset=0x0 Size=0x1
    unsigned char Next;// Offset=0x1 Size=0x1
};

struct _PCI_ADVANCED_FEATURES_CAPABILITY// Size=0x6 (Id=1583)
{
    union // Size=0x5 (Id=0)
    {
        struct _PCI_CAPABILITIES_HEADER Header;// Offset=0x0 Size=0x2
        unsigned char Length;// Offset=0x2 Size=0x1
        union <unnamed-type-Capabilities>// Size=0x1 (Id=9733)
        {
            unsigned char FunctionLevelResetSupported:1;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x1
            unsigned char TransactionsPendingSupported:1;// Offset=0x0 Size=0x1 BitOffset=0x1 BitSize=0x1
            unsigned char Rsvd:6;// Offset=0x0 Size=0x1 BitOffset=0x2 BitSize=0x6
            unsigned char AsUCHAR;// Offset=0x0 Size=0x1
        };
        union _PCI_ADVANCED_FEATURES_CAPABILITY::<unnamed-type-Capabilities> Capabilities;// Offset=0x3 Size=0x1
        union <unnamed-type-Control>// Size=0x1 (Id=9739)
        {
            unsigned char InitiateFunctionLevelReset:1;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x1
            unsigned char Rsvd:7;// Offset=0x0 Size=0x1 BitOffset=0x1 BitSize=0x7
            unsigned char AsUCHAR;// Offset=0x0 Size=0x1
        };
        union _PCI_ADVANCED_FEATURES_CAPABILITY::<unnamed-type-Control> Control;// Offset=0x4 Size=0x1
        union <unnamed-type-Status>// Size=0x1 (Id=9744)
        {
            unsigned char TransactionsPending:1;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x1
            unsigned char Rsvd:7;// Offset=0x0 Size=0x1 BitOffset=0x1 BitSize=0x7
            unsigned char AsUCHAR;// Offset=0x0 Size=0x1
        };
        union _PCI_ADVANCED_FEATURES_CAPABILITY::<unnamed-type-Status> Status;// Offset=0x5 Size=0x1
    };
};
