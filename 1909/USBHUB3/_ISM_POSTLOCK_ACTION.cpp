enum _ISM_POSTLOCK_ACTION
{
    IsmPostLockActionNone=0,
    IsmPostLockActionCompleteIrpWithStatusCancelled=1,
    IsmPostLockActionCompleteIrpWithStatusDeviceBusy=2,
    IsmPostLockActionCompleteIrpWithStatusNoSuchDevice=3,
    IsmPostLockActionCompleteIrpWithStatusInvalidDeviceState=4,
    IsmPostLockActionCompleteIrpWithStatusSuccess=5,
    IsmPostLockActionInvokeClientCallback=6,
    IsmPostLockActionQueueWorkItem=7,
    IsmPostLockActionCompleteIrpWithStatusCancelledAndReturnPending=8
};
