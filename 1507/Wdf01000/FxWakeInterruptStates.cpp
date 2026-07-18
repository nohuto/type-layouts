enum FxWakeInterruptStates
{
    WakeInterruptInvalid=0,
    WakeInterruptFailed=1,
    WakeInterruptD0=2,
    WakeInterruptDx=3,
    WakeInterruptWaking=4,
    WakeInterruptInvokingEvtIsrPostWake=5,
    WakeInterruptCompletingD0=6,
    WakeInterruptInvokingEvtIsrInD0=7,
    WakeInterruptMax=8
};
