struct _unnamed_1660// Size=0x4 (Id=1660)
{
    unsigned long ProblemCodeToClear;// Offset=0x0 Size=0x4
};

struct _unnamed_2327// Size=0x4 (Id=2327)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long RebalanceDueToDynamicPartitioning:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long ResetDeviceWhileStopped:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long Reserved:30;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1e
    };
};

union _PNP_REBALANCE_FLAGS// Size=0x4 (Id=2328)
{
    struct _unnamed_2327 u;// Offset=0x0 Size=0x4
    unsigned long AsUlong;// Offset=0x0 Size=0x4
};

struct _unnamed_1661// Size=0x1 (Id=1661)
{
    unsigned char ClearWaitingForFdo;// Offset=0x0 Size=0x1
};

struct _unnamed_1662// Size=0x1 (Id=1662)
{
    unsigned char StopRequired;// Offset=0x0 Size=0x1
};

struct _unnamed_1663// Size=0x4 (Id=1663)
{
    unsigned long Flags;// Offset=0x0 Size=0x4
};

struct _unnamed_1664// Size=0x8 (Id=1664)
{
    struct _PLUGPLAY_CONTROL_STATUS_DATA * ControlStatusData;// Offset=0x0 Size=0x8
};

enum _PNP_DEVICE_IOMMU_DOMAIN_POLICY
{
    IommuDomainPolicyAllowAll=0,
    IommuDomainPolicyBlockPassthrough=1,
    IommuDomainPolicyMax=2
};

struct _unnamed_1666// Size=0x4 (Id=1666)
{
    enum _PNP_DEVICE_IOMMU_DOMAIN_POLICY DomainPolicy;// Offset=0x0 Size=0x4
};

union _unnamed_1667// Size=0x8 (Id=1667)
{
    struct _unnamed_1660 ClearProblem;// Offset=0x0 Size=0x4
    union _PNP_REBALANCE_FLAGS Rebalance;// Offset=0x0 Size=0x4
    struct _unnamed_1661 ReenumerateDeviceOnly;// Offset=0x0 Size=0x1
    struct _unnamed_1662 ResourceRequirementsChanged;// Offset=0x0 Size=0x1
    struct _unnamed_1663 RequestDeviceReset;// Offset=0x0 Size=0x4
    struct _unnamed_1664 SetDeviceProblem;// Offset=0x0 Size=0x8
    struct _unnamed_1666 UpdateConsoleLockState;// Offset=0x0 Size=0x4
    unsigned long long AsUlong64;// Offset=0x0 Size=0x8
};

struct _PNP_DEVICE_ACTION_REQUEST_ARGUMENT// Size=0x10 (Id=1668)
{
    void * PdcActivatorHandle;// Offset=0x0 Size=0x8
    union _unnamed_1667 u;// Offset=0x8 Size=0x8
};
