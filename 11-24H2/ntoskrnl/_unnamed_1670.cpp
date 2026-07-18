struct _unnamed_1663// Size=0x4 (Id=1663)
{
    unsigned long ProblemCodeToClear;// Offset=0x0 Size=0x4
};

struct _unnamed_2330// Size=0x4 (Id=2330)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long RebalanceDueToDynamicPartitioning:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long ResetDeviceWhileStopped:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long Reserved:30;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1e
    };
};

union _PNP_REBALANCE_FLAGS// Size=0x4 (Id=2331)
{
    struct _unnamed_2330 u;// Offset=0x0 Size=0x4
    unsigned long AsUlong;// Offset=0x0 Size=0x4
};

struct _unnamed_1664// Size=0x1 (Id=1664)
{
    unsigned char ClearWaitingForFdo;// Offset=0x0 Size=0x1
};

struct _unnamed_1665// Size=0x1 (Id=1665)
{
    unsigned char StopRequired;// Offset=0x0 Size=0x1
};

struct _unnamed_1666// Size=0x4 (Id=1666)
{
    unsigned long Flags;// Offset=0x0 Size=0x4
};

struct _unnamed_1667// Size=0x8 (Id=1667)
{
    struct _PLUGPLAY_CONTROL_STATUS_DATA * ControlStatusData;// Offset=0x0 Size=0x8
};

enum _PNP_DEVICE_IOMMU_DOMAIN_POLICY
{
    IommuDomainPolicyAllowAll=0,
    IommuDomainPolicyBlockPassthrough=1,
    IommuDomainPolicyMax=2
};

struct _unnamed_1669// Size=0x4 (Id=1669)
{
    enum _PNP_DEVICE_IOMMU_DOMAIN_POLICY DomainPolicy;// Offset=0x0 Size=0x4
};

union _unnamed_1670// Size=0x8 (Id=1670)
{
    struct _unnamed_1663 ClearProblem;// Offset=0x0 Size=0x4
    union _PNP_REBALANCE_FLAGS Rebalance;// Offset=0x0 Size=0x4
    struct _unnamed_1664 ReenumerateDeviceOnly;// Offset=0x0 Size=0x1
    struct _unnamed_1665 ResourceRequirementsChanged;// Offset=0x0 Size=0x1
    struct _unnamed_1666 RequestDeviceReset;// Offset=0x0 Size=0x4
    struct _unnamed_1667 SetDeviceProblem;// Offset=0x0 Size=0x8
    struct _unnamed_1669 UpdateConsoleLockState;// Offset=0x0 Size=0x4
    unsigned long long AsUlong64;// Offset=0x0 Size=0x8
};
