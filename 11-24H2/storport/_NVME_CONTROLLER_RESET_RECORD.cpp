struct _unnamed_10// Size=0x8 (Id=10)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=11)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_10 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

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

struct _NVME_CONTROLLER_RESET_RECORD// Size=0x10 (Id=1379)
{
    union _LARGE_INTEGER Timestamp;// Offset=0x0 Size=0x8
    enum _NVME_CONTROLLER_RESET_REASON ResetInitiateReason;// Offset=0x8 Size=0x4
    enum _NVME_CONTROLLER_RESET_FAILURE_REASON ResetFailureReason;// Offset=0xc Size=0x4
};
