enum _WDF_IO_FORWARD_PROGRESS_RESERVED_POLICY
{
    WdfIoForwardProgressInvalidPolicy=0,
    WdfIoForwardProgressReservedPolicyAlwaysUseReservedRequest=1,
    WdfIoForwardProgressReservedPolicyUseExamine=2,
    WdfIoForwardProgressReservedPolicyPagingIO=3
};

struct _LIST_ENTRY// Size=0x10 (Id=127)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _FXIO_FORWARD_PROGRESS_CONTEXT// Size=0x68 (Id=770)
{
    unsigned long m_NumberOfReservedRequests;// Offset=0x0 Size=0x4
    class FxIoQueueForwardProgressAllocateResourcesReserved m_IoReservedResourcesAllocate;// Offset=0x8 Size=0x8
    class FxIoQueueForwardProgressAllocateResources m_IoResourcesAllocate;// Offset=0x10 Size=0x8
    class FxIoQueueForwardProgressExamineIrp m_IoExamineIrp;// Offset=0x18 Size=0x8
    enum _WDF_IO_FORWARD_PROGRESS_RESERVED_POLICY m_Policy;// Offset=0x20 Size=0x4
    struct _LIST_ENTRY m_ReservedRequestList;// Offset=0x28 Size=0x10
    struct _LIST_ENTRY m_ReservedRequestInUseList;// Offset=0x38 Size=0x10
    struct _LIST_ENTRY m_PendedIrpList;// Offset=0x48 Size=0x10
    class MxLockNoDynam m_PendedReserveLock;// Offset=0x58 Size=0x10
    void _FXIO_FORWARD_PROGRESS_CONTEXT();
};
