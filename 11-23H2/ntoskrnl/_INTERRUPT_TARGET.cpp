enum _INTERRUPT_TARGET_TYPE
{
    InterruptTargetInvalid=0,
    InterruptTargetAllIncludingSelf=1,
    InterruptTargetAllExcludingSelf=2,
    InterruptTargetSelfOnly=3,
    InterruptTargetPhysical=4,
    InterruptTargetLogicalFlat=5,
    InterruptTargetLogicalClustered=6,
    InterruptTargetRemapIndex=7,
    InterruptTargetHypervisor=8
};

struct _unnamed_281// Size=0x10 (Id=281)
{
    unsigned long Low32;// Offset=0x0 Size=0x4
    unsigned long High32;// Offset=0x4 Size=0x4
    unsigned long long InterruptData;// Offset=0x8 Size=0x8
};

struct _INTERRUPT_TARGET// Size=0x18 (Id=282)
{
    enum _INTERRUPT_TARGET_TYPE Target;// Offset=0x0 Size=0x4
    union // Size=0x10 (Id=0)
    {
        unsigned long PhysicalTarget;// Offset=0x8 Size=0x4
        unsigned long LogicalFlatTarget;// Offset=0x8 Size=0x4
        unsigned long RemapIndex;// Offset=0x8 Size=0x4
        unsigned long ClusterId;// Offset=0x8 Size=0x4
        unsigned long ClusterMask;// Offset=0xc Size=0x4
        struct _unnamed_281 HypervisorTarget;// Offset=0x8 Size=0x10
    };
};
