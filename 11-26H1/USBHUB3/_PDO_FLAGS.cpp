union _PDO_FLAGS// Size=0x4 (Id=772)
{
    unsigned long AsUlong32;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long InD0:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long ArmedForWake:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long RequiresArmingForWake:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long WaitWakePending:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long SupportsFunctionSuspend:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long InBootPath:1;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1
        unsigned long ResetOnLastResume:1;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1
        unsigned long ProgrammingLostOnLastReset:1;// Offset=0x0 Size=0x4 BitOffset=0x7 BitSize=0x1
        unsigned long PowerLostOnLastReset:1;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x1
        unsigned long DeviceGone:1;// Offset=0x0 Size=0x4 BitOffset=0x9 BitSize=0x1
        unsigned long QueryStopped:1;// Offset=0x0 Size=0x4 BitOffset=0xa BitSize=0x1
        unsigned long QueryRemoved:1;// Offset=0x0 Size=0x4 BitOffset=0xb BitSize=0x1
        unsigned long IdleStateMachineInitialized:1;// Offset=0x0 Size=0x4 BitOffset=0xc BitSize=0x1
        unsigned long ReportPortAsDisabled:1;// Offset=0x0 Size=0x4 BitOffset=0xd BitSize=0x1
        unsigned long WakeNotificationSent:1;// Offset=0x0 Size=0x4 BitOffset=0xe BitSize=0x1
        unsigned long WerReferenceHeld:1;// Offset=0x0 Size=0x4 BitOffset=0xf BitSize=0x1
    };
};
