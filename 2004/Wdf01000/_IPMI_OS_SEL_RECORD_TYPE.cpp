enum _IPMI_OS_SEL_RECORD_TYPE
{
    IpmiOsSelRecordTypeWhea=0,
    IpmiOsSelRecordTypeOther=1,
    IpmiOsSelRecordTypeWheaErrorXpfMca=2,
    IpmiOsSelRecordTypeWheaErrorPci=3,
    IpmiOsSelRecordTypeWheaErrorNmi=4,
    IpmiOsSelRecordTypeWheaErrorOther=5,
    IpmiOsSelRecordTypeRaw=6,
    IpmiOsSelRecordTypeDriver=7,
    IpmiOsSelRecordTypeBugcheckRecovery=8,
    IpmiOsSelRecordTypeBugcheckData=9,
    IpmiOsSelRecordTypeMax=10
};
