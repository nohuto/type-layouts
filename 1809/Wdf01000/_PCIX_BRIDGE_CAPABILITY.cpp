struct _PCI_CAPABILITIES_HEADER// Size=0x2 (Id=4560)
{
    unsigned char CapabilityID;// Offset=0x0 Size=0x1
    unsigned char Next;// Offset=0x1 Size=0x1
};

struct _PCIX_BRIDGE_CAPABILITY// Size=0x20 (Id=3445)
{
    union // Size=0x10 (Id=0)
    {
        struct _PCI_CAPABILITIES_HEADER Header;// Offset=0x0 Size=0x2
        union <unnamed-type-SecondaryStatus>// Size=0x2 (Id=13583)
        {
            unsigned short Bus64Bit:1;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0x1
            unsigned short Bus133MHzCapable:1;// Offset=0x0 Size=0x2 BitOffset=0x1 BitSize=0x1
            unsigned short SplitCompletionDiscarded:1;// Offset=0x0 Size=0x2 BitOffset=0x2 BitSize=0x1
            unsigned short UnexpectedSplitCompletion:1;// Offset=0x0 Size=0x2 BitOffset=0x3 BitSize=0x1
            unsigned short SplitCompletionOverrun:1;// Offset=0x0 Size=0x2 BitOffset=0x4 BitSize=0x1
            unsigned short SplitRequestDelayed:1;// Offset=0x0 Size=0x2 BitOffset=0x5 BitSize=0x1
            unsigned short BusModeFrequency:4;// Offset=0x0 Size=0x2 BitOffset=0x6 BitSize=0x4
            unsigned short Rsvd:2;// Offset=0x0 Size=0x2 BitOffset=0xa BitSize=0x2
            unsigned short Version:2;// Offset=0x0 Size=0x2 BitOffset=0xc BitSize=0x2
            unsigned short Bus266MHzCapable:1;// Offset=0x0 Size=0x2 BitOffset=0xe BitSize=0x1
            unsigned short Bus533MHzCapable:1;// Offset=0x0 Size=0x2 BitOffset=0xf BitSize=0x1
            unsigned short AsUSHORT;// Offset=0x0 Size=0x2
        };
        union _PCIX_BRIDGE_CAPABILITY::<unnamed-type-SecondaryStatus> SecondaryStatus;// Offset=0x2 Size=0x2
        union <unnamed-type-BridgeStatus>// Size=0x4 (Id=13597)
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
            unsigned long AsULONG;// Offset=0x0 Size=0x4
        };
        union _PCIX_BRIDGE_CAPABILITY::<unnamed-type-BridgeStatus> BridgeStatus;// Offset=0x4 Size=0x4
        unsigned short UpstreamSplitTransactionCapacity;// Offset=0x8 Size=0x2
        unsigned short UpstreamSplitTransactionLimit;// Offset=0xa Size=0x2
        unsigned short DownstreamSplitTransactionCapacity;// Offset=0xc Size=0x2
        unsigned short DownstreamSplitTransactionLimit;// Offset=0xe Size=0x2
        union <unnamed-type-EccControlStatus>// Size=0x4 (Id=13617)
        {
            unsigned long SelectSecondaryRegisters:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
            unsigned long ErrorPresentInOtherBank:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
            unsigned long AdditionalCorrectableError:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
            unsigned long AdditionalUncorrectableError:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
            unsigned long ErrorPhase:3;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x3
            unsigned long ErrorCorrected:1;// Offset=0x0 Size=0x4 BitOffset=0x7 BitSize=0x1
            unsigned long Syndrome:8;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x8
            unsigned long ErrorFirstCommand:4;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x4
            unsigned long ErrorSecondCommand:4;// Offset=0x0 Size=0x4 BitOffset=0x14 BitSize=0x4
            unsigned long ErrorUpperAttributes:4;// Offset=0x0 Size=0x4 BitOffset=0x18 BitSize=0x4
            unsigned long ControlUpdateEnable:1;// Offset=0x0 Size=0x4 BitOffset=0x1c BitSize=0x1
            unsigned long Rsvd:1;// Offset=0x0 Size=0x4 BitOffset=0x1d BitSize=0x1
            unsigned long DisableSingleBitCorrection:1;// Offset=0x0 Size=0x4 BitOffset=0x1e BitSize=0x1
            unsigned long EccMode:1;// Offset=0x0 Size=0x4 BitOffset=0x1f BitSize=0x1
            unsigned long AsULONG;// Offset=0x0 Size=0x4
        };
        union _PCIX_BRIDGE_CAPABILITY::<unnamed-type-EccControlStatus> EccControlStatus;// Offset=0x10 Size=0x4
    };
    unsigned long EccFirstAddress;// Offset=0x14 Size=0x4
    unsigned long EccSecondAddress;// Offset=0x18 Size=0x4
    unsigned long EccAttribute;// Offset=0x1c Size=0x4
};
