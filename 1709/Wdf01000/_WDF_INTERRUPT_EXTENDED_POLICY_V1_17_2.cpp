enum _WDF_INTERRUPT_POLICY
{
    WdfIrqPolicyMachineDefault=0,
    WdfIrqPolicyAllCloseProcessors=1,
    WdfIrqPolicyOneCloseProcessor=2,
    WdfIrqPolicyAllProcessorsInMachine=3,
    WdfIrqPolicySpecifiedProcessors=4,
    WdfIrqPolicySpreadMessagesAcrossAllProcessors=5
};

enum _WDF_INTERRUPT_PRIORITY
{
    WdfIrqPriorityUndefined=0,
    WdfIrqPriorityLow=1,
    WdfIrqPriorityNormal=2,
    WdfIrqPriorityHigh=3
};

struct _GROUP_AFFINITY// Size=0x10 (Id=764)
{
    unsigned long long Mask;// Offset=0x0 Size=0x8
    unsigned short Group;// Offset=0x8 Size=0x2
    unsigned short Reserved[3];// Offset=0xa Size=0x6
};

struct _WDF_INTERRUPT_EXTENDED_POLICY_V1_17// Size=0x20 (Id=1904)
{
    unsigned long Size;// Offset=0x0 Size=0x4
    enum _WDF_INTERRUPT_POLICY Policy;// Offset=0x4 Size=0x4
    enum _WDF_INTERRUPT_PRIORITY Priority;// Offset=0x8 Size=0x4
    struct _GROUP_AFFINITY TargetProcessorSetAndGroup;// Offset=0x10 Size=0x10
};
