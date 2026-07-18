union _EXT_IOMMU_CREATE_DEVICE_FLAGS// Size=0x4 (Id=317)
{
    unsigned int AsUINT32;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned int WildCard:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned int ForceCreate:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned int LiveTraffic:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned int DeviceIsReserved:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned int Reserved:28;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1c
    };
};
