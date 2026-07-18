union _USB_SUPERSPEED_ENDPOINT_COMPANION_DESCRIPTOR::<unnamed-type-bmAttributes>// Size=0x1 (Id=2536)
{
    unsigned char AsUchar;// Offset=0x0 Size=0x1
    struct <unnamed-type-Bulk>// Size=0x1 (Id=16613)
    {
        unsigned char MaxStreams:5;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x5
        unsigned char Reserved1:3;// Offset=0x0 Size=0x1 BitOffset=0x5 BitSize=0x3
    };
    struct _USB_SUPERSPEED_ENDPOINT_COMPANION_DESCRIPTOR::<unnamed-type-bmAttributes>::<unnamed-type-Bulk> Bulk;// Offset=0x0 Size=0x1
    struct <unnamed-type-Isochronous>// Size=0x1 (Id=16617)
    {
        unsigned char Mult:2;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x2
        unsigned char Reserved2:5;// Offset=0x0 Size=0x1 BitOffset=0x2 BitSize=0x5
        unsigned char SspCompanion:1;// Offset=0x0 Size=0x1 BitOffset=0x7 BitSize=0x1
    };
    struct _USB_SUPERSPEED_ENDPOINT_COMPANION_DESCRIPTOR::<unnamed-type-bmAttributes>::<unnamed-type-Isochronous> Isochronous;// Offset=0x0 Size=0x1
};
