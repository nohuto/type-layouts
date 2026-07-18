struct PCI_X_CAPABILITY::<unnamed-type-Status>::<unnamed-type-bits>// Size=0x4 (Id=3725)
{
    struct // Size=0x4 (Id=0)
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
};
