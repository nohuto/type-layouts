enum _SCSI_UNIT_CONTROL_TYPE
{
    ScsiQuerySupportedUnitControlTypes=0,
    ScsiUnitUsage=1,
    ScsiUnitStart=2,
    ScsiUnitPower=3,
    ScsiUnitPoFxPowerInfo=4,
    ScsiUnitPoFxPowerRequired=5,
    ScsiUnitPoFxPowerActive=6,
    ScsiUnitPoFxPowerSetFState=7,
    ScsiUnitPoFxPowerControl=8,
    ScsiUnitRemove=9,
    ScsiUnitSurpriseRemoval=10,
    ScsiUnitRichDescription=11,
    ScsiUnitQueryBusType=12,
    ScsiUnitControlMax=13,
    MakeUnitControlTypeSizeOfUlong=-1
};
