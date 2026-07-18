struct _unnamed_1741// Size=0x4 (Id=1741)
{
    unsigned long ProblemCodeToClear;// Offset=0x0 Size=0x4
};

struct _unnamed_2443// Size=0x4 (Id=2443)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long RebalanceDueToDynamicPartitioning:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long ResetDeviceWhileStopped:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long Reserved:30;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1e
    };
};

union _PNP_REBALANCE_FLAGS// Size=0x4 (Id=2444)
{
    struct _unnamed_2443 u;// Offset=0x0 Size=0x4
    unsigned long AsUlong;// Offset=0x0 Size=0x4
};

struct _unnamed_1742// Size=0x1 (Id=1742)
{
    unsigned char ClearWaitingForFdo;// Offset=0x0 Size=0x1
};

struct _unnamed_1743// Size=0x1 (Id=1743)
{
    unsigned char StopRequired;// Offset=0x0 Size=0x1
};

struct _unnamed_1744// Size=0x4 (Id=1744)
{
    unsigned long Flags;// Offset=0x0 Size=0x4
};

struct _unnamed_1745// Size=0x8 (Id=1745)
{
    struct _PLUGPLAY_CONTROL_STATUS_DATA * ControlStatusData;// Offset=0x0 Size=0x8
};

enum _PNP_DEVICE_IOMMU_DOMAIN_POLICY
{
    IommuDomainPolicyAllowAll=0,
    IommuDomainPolicyBlockPassthrough=1,
    IommuDomainPolicyMax=2
};

struct _unnamed_1747// Size=0x4 (Id=1747)
{
    enum _PNP_DEVICE_IOMMU_DOMAIN_POLICY DomainPolicy;// Offset=0x0 Size=0x4
};

union _unnamed_1748// Size=0x8 (Id=1748)
{
    struct _unnamed_1741 ClearProblem;// Offset=0x0 Size=0x4
    union _PNP_REBALANCE_FLAGS Rebalance;// Offset=0x0 Size=0x4
    struct _unnamed_1742 ReenumerateDeviceOnly;// Offset=0x0 Size=0x1
    struct _unnamed_1743 ResourceRequirementsChanged;// Offset=0x0 Size=0x1
    struct _unnamed_1744 RequestDeviceReset;// Offset=0x0 Size=0x4
    struct _unnamed_1745 SetDeviceProblem;// Offset=0x0 Size=0x8
    struct _unnamed_1747 UpdateConsoleLockState;// Offset=0x0 Size=0x4
    unsigned long long AsUlong64;// Offset=0x0 Size=0x8
};
