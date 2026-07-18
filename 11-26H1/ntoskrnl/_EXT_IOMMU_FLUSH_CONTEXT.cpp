struct _unnamed_343// Size=0x10 (Id=343)
{
    unsigned int Status;// Offset=0x0 Size=0x4
    unsigned long long PhysicalAddress;// Offset=0x8 Size=0x8
};

struct _unnamed_344// Size=0x10 (Id=344)
{
    unsigned long long * StatusAddr;// Offset=0x0 Size=0x8
    unsigned long long OldStatus;// Offset=0x8 Size=0x8
};

struct _EXT_IOMMU_FLUSH_CONTEXT// Size=0x10 (Id=345)
{
    union // Size=0x10 (Id=0)
    {
        struct _unnamed_343 Intel;// Offset=0x0 Size=0x10
        struct _unnamed_344 Amd;// Offset=0x0 Size=0x10
    };
};
