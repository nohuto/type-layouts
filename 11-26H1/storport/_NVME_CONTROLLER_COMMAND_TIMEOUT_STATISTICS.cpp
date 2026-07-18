struct _NVME_CONTROLLER_COMMAND_TIMEOUT_STATISTICS// Size=0x10 (Id=1121)
{
    unsigned long CommandTimeoutDetectedCount;// Offset=0x0 Size=0x4
    unsigned char CurrentHistoryRecordIndex;// Offset=0x4 Size=0x1
    unsigned char HistoryRecordsCount;// Offset=0x5 Size=0x1
    unsigned char Reserved[2];// Offset=0x6 Size=0x2
    struct _NVME_CONTROLLER_COMMAND_TIMEOUT_RECORD * CommandTimeoutHistoryRecords;// Offset=0x8 Size=0x8
};
