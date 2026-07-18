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

struct _IPMI_OS_SEL_RECORD// Size=0x15 (Id=1728)
{
    unsigned long Signature;// Offset=0x0 Size=0x4
    unsigned long Version;// Offset=0x4 Size=0x4
    unsigned long Length;// Offset=0x8 Size=0x4
    enum _IPMI_OS_SEL_RECORD_TYPE RecordType;// Offset=0xc Size=0x4
    unsigned long DataLength;// Offset=0x10 Size=0x4
    unsigned char Data[1];// Offset=0x14 Size=0x1
};
