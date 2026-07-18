struct _NVME_CONTROLLER_RESET_STATISTICS// Size=0x48 (Id=1387)
{
    unsigned long PanicResetSuccessCount;// Offset=0x0 Size=0x4
    unsigned long PanicResetFailureOrBailoutCount;// Offset=0x4 Size=0x4
    unsigned long ControllerResetSuccessCount;// Offset=0x8 Size=0x4
    unsigned long ControllerResetFailureCount;// Offset=0xc Size=0x4
    unsigned long NVMSubsystemResetSuccessCount;// Offset=0x10 Size=0x4
    unsigned long NVMSubsystemResetFailureCount;// Offset=0x14 Size=0x4
    unsigned long FLRSuccessCount;// Offset=0x18 Size=0x4
    unsigned long FLRFailureCount;// Offset=0x1c Size=0x4
    unsigned long BusSpecificResetSuccessCount;// Offset=0x20 Size=0x4
    unsigned long BusSpecificResetFailureCount;// Offset=0x24 Size=0x4
    unsigned long PLDRSuccessCount;// Offset=0x28 Size=0x4
    unsigned long PLDRFailureCount;// Offset=0x2c Size=0x4
    unsigned char Reserved[14];// Offset=0x30 Size=0xe
    unsigned char CurrentResetHistoryRecordIndex;// Offset=0x3e Size=0x1
    unsigned char ResetHistoryRecordsCount;// Offset=0x3f Size=0x1
    struct _NVME_CONTROLLER_RESET_RECORD * ControllerResetHistoryRecords;// Offset=0x40 Size=0x8
};
