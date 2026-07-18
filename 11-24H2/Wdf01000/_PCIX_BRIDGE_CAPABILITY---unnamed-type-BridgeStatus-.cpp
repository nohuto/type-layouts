union _PCIX_BRIDGE_CAPABILITY::<unnamed-type-BridgeStatus>// Size=0x4 (Id=3595)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long FunctionNumber:3;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x3
        unsigned long DeviceNumber:5;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x5
        unsigned long BusNumber:8;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x8
        unsigned long Device64Bit:1;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x1
        unsigned long Device133MHzCapable:1;// Offset=0x0 Size=0x4 BitOffset=0x11 BitSize=0x1
        unsigned long SplitCompletionDiscarded:1;// Offset=0x0 Size=0x4 BitOffset=0x12 BitSize=0x1
        unsigned long UnexpectedSplitCompletion:1;// Offset=0x0 Size=0x4 BitOffset=0x13 BitSize=0x1
        unsigned long SplitCompletionOverrun:1;// Offset=0x0 Size=0x4 BitOffset=0x14 BitSize=0x1
        unsigned long SplitRequestDelayed:1;// Offset=0x0 Size=0x4 BitOffset=0x15 BitSize=0x1
        unsigned long Rsvd:7;// Offset=0x0 Size=0x4 BitOffset=0x16 BitSize=0x7
        unsigned long DIMCapable:1;// Offset=0x0 Size=0x4 BitOffset=0x1d BitSize=0x1
        unsigned long Device266MHzCapable:1;// Offset=0x0 Size=0x4 BitOffset=0x1e BitSize=0x1
        unsigned long Device533MHzCapable:1;// Offset=0x0 Size=0x4 BitOffset=0x1f BitSize=0x1
    };
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};
