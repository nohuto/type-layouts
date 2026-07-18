enum FxIoQueuePowerState
{
    FxIoQueuePowerInvalid=0,
    FxIoQueuePowerOn=1,
    FxIoQueuePowerOff=2,
    FxIoQueuePowerStartingTransition=3,
    FxIoQueuePowerStopping=4,
    FxIoQueuePowerStoppingNotifyingDriver=5,
    FxIoQueuePowerStoppingDriverNotified=6,
    FxIoQueuePowerPurge=7,
    FxIoQueuePowerPurgeNotifyingDriver=8,
    FxIoQueuePowerPurgeDriverNotified=9,
    FxIoQueuePowerRestarting=10,
    FxIoQueuePowerRestartingNotifyingDriver=11,
    FxIoQueuePowerRestartingDriverNotified=12,
    FxIoQueuePowerLast=13
};
