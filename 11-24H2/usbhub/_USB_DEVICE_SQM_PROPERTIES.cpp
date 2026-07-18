union _USB_DEVICE_SQM_PROPERTIES// Size=0x4 (Id=380)
{
    unsigned long AsUlong;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long Reserved1:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long Reserved2:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long Virtualized:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long IsOnXhci:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long HostSpecialFiles:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long ValidBOSDescriptor:1;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1
        unsigned long SupportsStreams:1;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1
        unsigned long SupportsMultipleConfigurations:1;// Offset=0x0 Size=0x4 BitOffset=0x7 BitSize=0x1
        unsigned long Reserved3:1;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x1
        unsigned long IsSuperSpeedCapable:1;// Offset=0x0 Size=0x4 BitOffset=0x9 BitSize=0x1
    };
};
