struct _WHEA_PCIXDEVICE_ID// Size=0x10 (Id=1526)
{
    unsigned short VendorId;// Offset=0x0 Size=0x2
    unsigned short DeviceId;// Offset=0x2 Size=0x2
    struct // Size=0x8 (Id=0)
    {
        unsigned long ClassCode:24;// Offset=0x4 Size=0x4 BitOffset=0x0 BitSize=0x18
        unsigned long FunctionNumber:8;// Offset=0x4 Size=0x4 BitOffset=0x18 BitSize=0x8
        unsigned long DeviceNumber:8;// Offset=0x8 Size=0x4 BitOffset=0x0 BitSize=0x8
        unsigned long BusNumber:8;// Offset=0x8 Size=0x4 BitOffset=0x8 BitSize=0x8
        unsigned long SegmentNumber:8;// Offset=0x8 Size=0x4 BitOffset=0x10 BitSize=0x8
        unsigned long Reserved1:8;// Offset=0x8 Size=0x4 BitOffset=0x18 BitSize=0x8
    };
    unsigned long Reserved2;// Offset=0xc Size=0x4
};
