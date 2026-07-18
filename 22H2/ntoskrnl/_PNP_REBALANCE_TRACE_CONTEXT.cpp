enum _PNP_REBALANCE_REASON
{
    RebalanceReasonUnknown=0,
    RebalanceReasonRequirementsChanged=1,
    RebalanceReasonNewDevice=2
};

enum _PNP_REBALANCE_FAILURE
{
    RebalanceFailureNone=0,
    RebalanceFailureDisabled=1,
    RebalanceFailureNoMemory=2,
    RebalanceFailureQueryStopUnexpectedVeto=3,
    RebalanceFailureNoRequirements=4,
    RebalanceFailureNoCandidates=5,
    RebalanceFailureNoConfiguration=6
};

enum _PNP_DEVNODE_QUERY_REBALANCE_VETO_REASON
{
    DeviceQueryRebalanceSucceeded=0,
    DeviceQueryStopFailed=1,
    DeviceFailedGetNewResourceRequirement=2,
    DeviceInUnexpectedState=3,
    DeviceNotSupportQueryRebalance=4
};

struct _PNP_RESOURCE_CONFLICT_TRACE_CONTEXT// Size=0x18 (Id=2006)
{
    unsigned char ResourceType;// Offset=0x0 Size=0x1
    unsigned long AlternativeCount;// Offset=0x4 Size=0x4
    struct _IO_RESOURCE_DESCRIPTOR * ResourceRequests;// Offset=0x8 Size=0x8
    void * ArbiterInstance;// Offset=0x10 Size=0x8
};

struct _PNP_REBALANCE_TRACE_CONTEXT// Size=0x70 (Id=1547)
{
    unsigned long DeviceCount;// Offset=0x0 Size=0x4
    unsigned long RebalancePhase;// Offset=0x4 Size=0x4
    enum _PNP_REBALANCE_REASON Reason[2];// Offset=0x8 Size=0x8
    enum _PNP_REBALANCE_FAILURE Failure[2];// Offset=0x10 Size=0x8
    struct _DEVICE_NODE * SubtreeRoot;// Offset=0x18 Size=0x8
    unsigned char SubtreeIncludesRoot;// Offset=0x20 Size=0x1
    struct _DEVICE_NODE * TriggerRoot;// Offset=0x28 Size=0x8
    unsigned char RebalanceDueToDynamicPartitioning;// Offset=0x30 Size=0x1
    unsigned long long BeginTime;// Offset=0x38 Size=0x8
    struct _DEVICE_NODE * VetoNode[2];// Offset=0x40 Size=0x10
    enum _PNP_DEVNODE_QUERY_REBALANCE_VETO_REASON VetoQueryRebalanceReason[2];// Offset=0x50 Size=0x8
    struct _PNP_RESOURCE_CONFLICT_TRACE_CONTEXT ConflictContext;// Offset=0x58 Size=0x18
};
