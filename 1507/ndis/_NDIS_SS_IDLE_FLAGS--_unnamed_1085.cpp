union _NDIS_SS_IDLE_FLAGS::_unnamed_1085// Size=0x4 (Id=1085)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long TimerRunning:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long IdleWorkItemScheduled:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long IdleRequestSubmitted:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long SuspendPowerIrpRequested:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long DeviceSuspended:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long ResumePowerIrpRequested:1;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1
        unsigned long CancelWorkItemScheduled:1;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1
        unsigned long IdleRequestCanceled:1;// Offset=0x0 Size=0x4 BitOffset=0x7 BitSize=0x1
        unsigned long ForceIdleTransition:1;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x1
        unsigned long Stopped:1;// Offset=0x0 Size=0x4 BitOffset=0x9 BitSize=0x1
        unsigned long DeviceGone:1;// Offset=0x0 Size=0x4 BitOffset=0xa BitSize=0x1
    };
    unsigned long Value;// Offset=0x0 Size=0x4
};
