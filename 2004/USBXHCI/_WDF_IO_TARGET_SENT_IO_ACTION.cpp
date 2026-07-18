enum _WDF_IO_TARGET_SENT_IO_ACTION
{
    WdfIoTargetSentIoUndefined=0,
    WdfIoTargetCancelSentIo=1,
    WdfIoTargetWaitForSentIoToComplete=2,
    WdfIoTargetLeaveSentIoPending=3
};
