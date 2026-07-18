enum _WHEA_PCI_RECOVERY_STATUS
{
    WheaPciREcoveryStatusUnknown=0,
    WheaPciRecoveryStatusNoError=1,
    WheaPciRecoveryStatusLinkDisableTimeout=2,
    WheaPciRecoveryStatusLinkEnableTimeout=3,
    WheaPciRecoveryStatusRpBusyTimeout=4,
    WheaPciRecoveryStatusComplexTree=5,
    WheaPciRecoveryStatusBusNotFound=6,
    WheaPciRecoveryStatusDeviceNotFound=7,
    WheaPciRecoveryStatusDdaAerNotRecoverable=8,
    WheaPciRecoveryStatusFailedRecovery=9
};
