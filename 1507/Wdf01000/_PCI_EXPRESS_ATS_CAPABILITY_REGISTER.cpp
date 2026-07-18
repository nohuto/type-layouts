struct _PCI_EXPRESS_ATS_CAPABILITY_REGISTER// Size=0x2 (Id=2873)
{
    struct // Size=0x2 (Id=0)
    {
        unsigned short InvalidateQueueDepth:5;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0x5
        unsigned short PageAlignedRequest:1;// Offset=0x0 Size=0x2 BitOffset=0x5 BitSize=0x1
        unsigned short GlobalInvalidateSupported:1;// Offset=0x0 Size=0x2 BitOffset=0x6 BitSize=0x1
        unsigned short Reserved:9;// Offset=0x0 Size=0x2 BitOffset=0x7 BitSize=0x9
    };
};
