enum FxWakeInterruptEvents
{
    WakeInterruptEventInvalid=0,
    WakeInterruptEventIsr=1,
    WakeInterruptEventEnteringD0=2,
    WakeInterruptEventLeavingD0=4,
    WakeInterruptEventD0EntryFailed=8,
    WakeInterruptEventLeavingD0NotArmedForWake=16,
    WakeInterruptEventNull=255
};
