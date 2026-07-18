struct _unnamed_339// Size=0x10 (Id=339)
{
    unsigned int Status;// Offset=0x0 Size=0x4
    unsigned long long PhysicalAddress;// Offset=0x8 Size=0x8
};

struct _unnamed_340// Size=0x10 (Id=340)
{
    unsigned long long * StatusAddr;// Offset=0x0 Size=0x8
    unsigned long long OldStatus;// Offset=0x8 Size=0x8
};

struct _EXT_IOMMU_FLUSH_CONTEXT// Size=0x10 (Id=341)
{
    union // Size=0x10 (Id=0)
    {
        struct _unnamed_339 Intel;// Offset=0x0 Size=0x10
        struct _unnamed_340 Amd;// Offset=0x0 Size=0x10
    };
};
