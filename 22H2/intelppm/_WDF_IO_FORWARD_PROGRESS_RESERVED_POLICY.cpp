enum _WDF_IO_FORWARD_PROGRESS_RESERVED_POLICY
{
    WdfIoForwardProgressInvalidPolicy=0,
    WdfIoForwardProgressReservedPolicyAlwaysUseReservedRequest=1,
    WdfIoForwardProgressReservedPolicyUseExamine=2,
    WdfIoForwardProgressReservedPolicyPagingIO=3
};
