struct _unnamed_1529// Size=0x4 (Id=1529)
{
    unsigned long ProblemCodeToClear;// Offset=0x0 Size=0x4
};

struct _unnamed_2139// Size=0x4 (Id=2139)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long RebalanceDueToDynamicPartitioning:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long ResetDeviceWhileStopped:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long Reserved:30;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1e
    };
};

union _PNP_REBALANCE_FLAGS// Size=0x4 (Id=2140)
{
    struct _unnamed_2139 u;// Offset=0x0 Size=0x4
    unsigned long AsUlong;// Offset=0x0 Size=0x4
};

struct _unnamed_1530// Size=0x1 (Id=1530)
{
    unsigned char ClearWaitingForFdo;// Offset=0x0 Size=0x1
};

struct _unnamed_1531// Size=0x1 (Id=1531)
{
    unsigned char StopRequired;// Offset=0x0 Size=0x1
};

struct _unnamed_1532// Size=0x4 (Id=1532)
{
    unsigned long Flags;// Offset=0x0 Size=0x4
};

struct _unnamed_1533// Size=0x8 (Id=1533)
{
    struct _PLUGPLAY_CONTROL_STATUS_DATA * ControlStatusData;// Offset=0x0 Size=0x8
};

enum _PNP_DEVICE_IOMMU_DOMAIN_POLICY
{
    IommuDomainPolicyAllowAll=0,
    IommuDomainPolicyBlockPassthrough=1,
    IommuDomainPolicyMax=2
};

struct _unnamed_1535// Size=0x4 (Id=1535)
{
    enum _PNP_DEVICE_IOMMU_DOMAIN_POLICY DomainPolicy;// Offset=0x0 Size=0x4
};

union _PNP_DEVICE_ACTION_REQUEST_ARGUMENT// Size=0x8 (Id=1536)
{
    struct _unnamed_1529 ClearProblem;// Offset=0x0 Size=0x4
    union _PNP_REBALANCE_FLAGS Rebalance;// Offset=0x0 Size=0x4
    struct _unnamed_1530 ReenumerateDeviceOnly;// Offset=0x0 Size=0x1
    struct _unnamed_1531 ResourceRequirementsChanged;// Offset=0x0 Size=0x1
    struct _unnamed_1532 RequestDeviceReset;// Offset=0x0 Size=0x4
    struct _unnamed_1533 SetDeviceProblem;// Offset=0x0 Size=0x8
    struct _unnamed_1535 UpdateConsoleLockState;// Offset=0x0 Size=0x4
    unsigned long long AsUlong64;// Offset=0x0 Size=0x8
};
