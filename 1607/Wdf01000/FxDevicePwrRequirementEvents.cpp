enum FxDevicePwrRequirementEvents
{
    DprEventInvalid=0,
    DprEventRegisteredWithPox=1,
    DprEventUnregisteredWithPox=2,
    DprEventPoxRequiresPower=4,
    DprEventPoxDoesNotRequirePower=8,
    DprEventDeviceGoingToDx=16,
    DprEventDeviceReturnedToD0=32,
    DprEventNull=255
};
