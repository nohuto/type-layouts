enum _WDF_IO_FORWARD_PROGRESS_RESERVED_POLICY
{
    WdfIoForwardProgressInvalidPolicy=0,
    WdfIoForwardProgressReservedPolicyAlwaysUseReservedRequest=1,
    WdfIoForwardProgressReservedPolicyUseExamine=2,
    WdfIoForwardProgressReservedPolicyPagingIO=3
};

struct _WDF_IO_FORWARD_PROGRESS_RESERVED_POLICY_SETTINGS// Size=0x8 (Id=782)
{
    union // Size=0x8 (Id=0)
    {
        union <unnamed-type-Policy>// Size=0x8 (Id=19077)
        {
            struct <unnamed-type-ExaminePolicy>// Size=0x8 (Id=19078)
            {
                enum _WDF_IO_FORWARD_PROGRESS_ACTION  ( * EvtIoWdmIrpForForwardProgress)(struct WDFQUEUE__ * ,struct _IRP * );// Offset=0x0 Size=0x8
            };
            struct _WDF_IO_FORWARD_PROGRESS_RESERVED_POLICY_SETTINGS::<unnamed-type-Policy>::<unnamed-type-ExaminePolicy> ExaminePolicy;// Offset=0x0 Size=0x8
        };
        union _WDF_IO_FORWARD_PROGRESS_RESERVED_POLICY_SETTINGS::<unnamed-type-Policy> Policy;// Offset=0x0 Size=0x8
    };
};

struct _WDF_IO_QUEUE_FORWARD_PROGRESS_POLICY_V1_17// Size=0x28 (Id=2965)
{
    unsigned long Size;// Offset=0x0 Size=0x4
    unsigned long TotalForwardProgressRequests;// Offset=0x4 Size=0x4
    enum _WDF_IO_FORWARD_PROGRESS_RESERVED_POLICY ForwardProgressReservedPolicy;// Offset=0x8 Size=0x4
    struct _WDF_IO_FORWARD_PROGRESS_RESERVED_POLICY_SETTINGS ForwardProgressReservePolicySettings;// Offset=0x10 Size=0x8
    long  ( * EvtIoAllocateResourcesForReservedRequest)(struct WDFQUEUE__ * ,struct WDFREQUEST__ * );// Offset=0x18 Size=0x8
    long  ( * EvtIoAllocateRequestResources)(struct WDFQUEUE__ * ,struct WDFREQUEST__ * );// Offset=0x20 Size=0x8
};
