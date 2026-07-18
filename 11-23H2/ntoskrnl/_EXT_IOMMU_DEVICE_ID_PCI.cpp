struct _EXT_IOMMU_DEVICE_ID_PCI// Size=0x10 (Id=428)
{
    union // Size=0x8 (Id=0)
    {
        unsigned long long AsUINT64;// Offset=0x0 Size=0x8
        unsigned short PciSegmentNumber;// Offset=0x0 Size=0x2
        struct // Size=0x2 (Id=0)
        {
            unsigned short PhantomFunctionBits:2;// Offset=0x2 Size=0x2 BitOffset=0x0 BitSize=0x2
            unsigned short Reserved:6;// Offset=0x2 Size=0x2 BitOffset=0x2 BitSize=0x6
            unsigned short StartBusNumber:8;// Offset=0x2 Size=0x2 BitOffset=0x8 BitSize=0x8
        };
        unsigned short Bdf;// Offset=0x4 Size=0x2
        unsigned short DevicePathLength;// Offset=0x6 Size=0x2
    };
    unsigned short * DevicePath;// Offset=0x8 Size=0x8
};
