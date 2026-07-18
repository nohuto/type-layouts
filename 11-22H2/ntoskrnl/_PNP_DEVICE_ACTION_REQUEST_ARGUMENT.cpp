struct _unnamed_1523// Size=0x4 (Id=1523)
{
    unsigned long ProblemCodeToClear;// Offset=0x0 Size=0x4
};

struct _unnamed_2133// Size=0x4 (Id=2133)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long RebalanceDueToDynamicPartitioning:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long ResetDeviceWhileStopped:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long Reserved:30;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1e
    };
};

union _PNP_REBALANCE_FLAGS// Size=0x4 (Id=2134)
{
    struct _unnamed_2133 u;// Offset=0x0 Size=0x4
    unsigned long AsUlong;// Offset=0x0 Size=0x4
};

struct _unnamed_1524// Size=0x1 (Id=1524)
{
    unsigned char ClearWaitingForFdo;// Offset=0x0 Size=0x1
};

struct _unnamed_1525// Size=0x1 (Id=1525)
{
    unsigned char StopRequired;// Offset=0x0 Size=0x1
};

struct _unnamed_1526// Size=0x4 (Id=1526)
{
    unsigned long Flags;// Offset=0x0 Size=0x4
};

struct _unnamed_1527// Size=0x8 (Id=1527)
{
    struct _PLUGPLAY_CONTROL_STATUS_DATA * ControlStatusData;// Offset=0x0 Size=0x8
};

enum _PNP_DEVICE_IOMMU_DOMAIN_POLICY
{
    IommuDomainPolicyAllowAll=0,
    IommuDomainPolicyBlockPassthrough=1,
    IommuDomainPolicyMax=2
};

struct _unnamed_1529// Size=0x4 (Id=1529)
{
    enum _PNP_DEVICE_IOMMU_DOMAIN_POLICY DomainPolicy;// Offset=0x0 Size=0x4
};

union _PNP_DEVICE_ACTION_REQUEST_ARGUMENT// Size=0x8 (Id=1530)
{
    struct _unnamed_1523 ClearProblem;// Offset=0x0 Size=0x4
    union _PNP_REBALANCE_FLAGS Rebalance;// Offset=0x0 Size=0x4
    struct _unnamed_1524 ReenumerateDeviceOnly;// Offset=0x0 Size=0x1
    struct _unnamed_1525 ResourceRequirementsChanged;// Offset=0x0 Size=0x1
    struct _unnamed_1526 RequestDeviceReset;// Offset=0x0 Size=0x4
    struct _unnamed_1527 SetDeviceProblem;// Offset=0x0 Size=0x8
    struct _unnamed_1529 UpdateConsoleLockState;// Offset=0x0 Size=0x4
    unsigned long long AsUlong64;// Offset=0x0 Size=0x8
};
