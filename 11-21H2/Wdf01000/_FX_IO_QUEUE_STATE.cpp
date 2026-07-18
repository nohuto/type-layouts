enum _FX_IO_QUEUE_STATE
{
    FxIoQueueAcceptRequests=1,
    FxIoQueueDispatchRequests=2,
    FxIoQueueNoRequests=4,
    FxIoQueueDriverNoRequests=8,
    FxIoQueuePnpHeld=16,
    FxIoQueueShutdown=65536
};
