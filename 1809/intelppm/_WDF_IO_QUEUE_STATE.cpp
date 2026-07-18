enum _WDF_IO_QUEUE_STATE
{
    WdfIoQueueAcceptRequests=1,
    WdfIoQueueDispatchRequests=2,
    WdfIoQueueNoRequests=4,
    WdfIoQueueDriverNoRequests=8,
    WdfIoQueuePnpHeld=16
};
