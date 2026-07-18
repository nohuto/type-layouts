union _PCIX_BRIDGE_CAPABILITY::<unnamed-type-SecondaryStatus>// Size=0x2 (Id=1882)
{
    struct // Size=0x2 (Id=0)
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
    };
    unsigned short AsUSHORT;// Offset=0x0 Size=0x2
};
