union _ENDPOINT_FLAGS// Size=0x4 (Id=558)
{
    unsigned long AsUlong32;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long CancelReportedSinceMappingStart:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long CommandCompletionFailureReported:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long PurgeTransferRingQueuesAfterHalt:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long OkToReportFSE:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long FSEReceived:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long HaltedCompletionCodeReceived:1;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1
        unsigned long DropFSE:1;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1
        unsigned long OkToCompleteEndpointResetRequest:1;// Offset=0x0 Size=0x4 BitOffset=0x7 BitSize=0x1
    };
};
