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

struct _unnamed_1018// Size=0x1 (Id=1018)
{
    struct // Size=0x1 (Id=0)
    {
        unsigned char MarkDeviceFailed:1;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char Reserved:7;// Offset=0x0 Size=0x1 BitOffset=0x1 BitSize=0x7
    };
};

struct _NVME_CONTROLLER_ASYNC_RESET_CONTEXT// Size=0x10 (Id=1019)
{
    struct _IO_WORKITEM * WorkItem;// Offset=0x0 Size=0x8
    enum _NVME_CONTROLLER_RESET_REASON ResetReason;// Offset=0x8 Size=0x4
    struct _unnamed_1018 Flags;// Offset=0xc Size=0x1
    unsigned char Reserved[3];// Offset=0xd Size=0x3
};
