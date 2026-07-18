enum _PERFINFO_DYNAMIC_TICK_VETO_REASON
{
    DynamicTickVetoNone=0,
    DynamicTickVetoProcBusy=1,
    DynamicTickVetoSoftwareTimer=2,
    DynamicTickVetoClockConstraint=3,
    DynamicTickVetoClockOutOfSync=4,
    DynamicTickVetoClockUpdateFailed=5,
    DynamicTickVetoNoDeepSleep=6,
    DynamicTickVetoMax=7
};
