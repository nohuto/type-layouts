enum _NVME_CONTROLLER_RESET_FAILURE_REASON
{
    ControllerResetFailureNone=0,
    ControllerResetFailureDeviceGone=1,
    ControllerResetFailureCtrlReadyTimeout=2,
    ControllerResetFailureCtrlStopTimeout=3,
    ControllerResetFailureDpcTimeout=4,
    ControllerResetFailureDisableCtrl=5,
    ControllerResetFailureEnableCtrl=6
};
