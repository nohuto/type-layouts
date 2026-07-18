struct _PCI_CAPABILITIES_HEADER// Size=0x2 (Id=3810)
{
    unsigned char CapabilityID;// Offset=0x0 Size=0x1
    unsigned char Next;// Offset=0x1 Size=0x1
};

struct PCI_X_CAPABILITY// Size=0x8 (Id=3347)
{
    union // Size=0x4 (Id=0)
    {
        struct _PCI_CAPABILITIES_HEADER Header;// Offset=0x0 Size=0x2
        union <unnamed-type-Command>// Size=0x2 (Id=73452)
        {
            struct <unnamed-type-bits>// Size=0x2 (Id=73453)
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
        union PCI_X_CAPABILITY::<unnamed-type-Command> Command;// Offset=0x2 Size=0x2
        union <unnamed-type-Status>// Size=0x4 (Id=73462)
        {
            struct <unnamed-type-bits>// Size=0x4 (Id=73463)
            {
                unsigned long FunctionNumber:3;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x3
                unsigned long DeviceNumber:5;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x5
                unsigned long BusNumber:8;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x8
                unsigned long Device64Bit:1;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x1
                unsigned long Capable133MHz:1;// Offset=0x0 Size=0x4 BitOffset=0x11 BitSize=0x1
                unsigned long SplitCompletionDiscarded:1;// Offset=0x0 Size=0x4 BitOffset=0x12 BitSize=0x1
                unsigned long UnexpectedSplitCompletion:1;// Offset=0x0 Size=0x4 BitOffset=0x13 BitSize=0x1
                unsigned long DeviceComplexity:1;// Offset=0x0 Size=0x4 BitOffset=0x14 BitSize=0x1
                unsigned long DesignedMaxMemoryReadByteCount:2;// Offset=0x0 Size=0x4 BitOffset=0x15 BitSize=0x2
                unsigned long DesignedMaxOutstandingSplitTransactions:3;// Offset=0x0 Size=0x4 BitOffset=0x17 BitSize=0x3
                unsigned long DesignedMaxCumulativeReadSize:3;// Offset=0x0 Size=0x4 BitOffset=0x1a BitSize=0x3
                unsigned long ReceivedSplitCompletionErrorMessage:1;// Offset=0x0 Size=0x4 BitOffset=0x1d BitSize=0x1
                unsigned long CapablePCIX266:1;// Offset=0x0 Size=0x4 BitOffset=0x1e BitSize=0x1
                unsigned long CapablePCIX533:1;// Offset=0x0 Size=0x4 BitOffset=0x1f BitSize=0x1
            };
            struct PCI_X_CAPABILITY::<unnamed-type-Status>::<unnamed-type-bits> bits;// Offset=0x0 Size=0x4
            unsigned long AsULONG;// Offset=0x0 Size=0x4
        };
    };
    union PCI_X_CAPABILITY::<unnamed-type-Status> Status;// Offset=0x4 Size=0x4
};
