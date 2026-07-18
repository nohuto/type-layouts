enum _NVME_CONTROLLER_RESET_REASON
{
    ControllerResetReasonUndefined=0,
    ControllerResetReasonNormalStart=1,
    ControllerResetReasonPowerUp=2,
    ControllerResetReasonTimeoutRecovery=3,
    ControllerResetReasonPanicRecovery=4,
    ControllerResetReasonFirmwareActivation=5,
    ControllerResetReasonAEN=6,
    ControllerResetMarkedUnresponsive=7
};
