struct _WHEA_PCIEXPRESS_DEVICE_ID// Size=0x10 (Id=2094)
{
    unsigned short VendorID;// Offset=0x0 Size=0x2
    unsigned short DeviceID;// Offset=0x2 Size=0x2
    struct // Size=0xc (Id=0)
    {
        unsigned long ClassCode:24;// Offset=0x4 Size=0x4 BitOffset=0x0 BitSize=0x18
        unsigned long FunctionNumber:8;// Offset=0x4 Size=0x4 BitOffset=0x18 BitSize=0x8
        unsigned long DeviceNumber:8;// Offset=0x8 Size=0x4 BitOffset=0x0 BitSize=0x8
        unsigned long Segment:16;// Offset=0x8 Size=0x4 BitOffset=0x8 BitSize=0x10
        unsigned long PrimaryBusNumber:8;// Offset=0x8 Size=0x4 BitOffset=0x18 BitSize=0x8
        unsigned long SecondaryBusNumber:8;// Offset=0xc Size=0x4 BitOffset=0x0 BitSize=0x8
        unsigned long Reserved1:3;// Offset=0xc Size=0x4 BitOffset=0x8 BitSize=0x3
        unsigned long SlotNumber:13;// Offset=0xc Size=0x4 BitOffset=0xb BitSize=0xd
        unsigned long Reserved2:8;// Offset=0xc Size=0x4 BitOffset=0x18 BitSize=0x8
    };
};
