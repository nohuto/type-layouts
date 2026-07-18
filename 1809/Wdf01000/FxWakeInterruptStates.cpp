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
    WakeInterruptDxNotArmedForWake=8,
    WakeInterruptInvokingEvtIsrInDxNotArmedForWake=9,
    WakeInterruptMax=10
};
