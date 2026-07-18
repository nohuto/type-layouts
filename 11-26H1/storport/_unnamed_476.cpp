union _unnamed_476// Size=0x8 (Id=476)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long ManuallyAdded:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long OnFabric:1;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x1
        unsigned long long SupportsPersistence:1;// Offset=0x0 Size=0x8 BitOffset=0x2 BitSize=0x1
        unsigned long long RemovalInProgress:1;// Offset=0x0 Size=0x8 BitOffset=0x3 BitSize=0x1
        unsigned long long TransportQueueing:1;// Offset=0x0 Size=0x8 BitOffset=0x4 BitSize=0x1
        unsigned long long DirectQueueing:1;// Offset=0x0 Size=0x8 BitOffset=0x5 BitSize=0x1
        unsigned long long AuthenticationRequired:1;// Offset=0x0 Size=0x8 BitOffset=0x6 BitSize=0x1
        unsigned long long SecureChannelRequired:1;// Offset=0x0 Size=0x8 BitOffset=0x7 BitSize=0x1
        unsigned long long Enabled:1;// Offset=0x0 Size=0x8 BitOffset=0x8 BitSize=0x1
        unsigned long long AddedToAdapter:1;// Offset=0x0 Size=0x8 BitOffset=0x9 BitSize=0x1
        unsigned long long StopAllWork:1;// Offset=0x0 Size=0x8 BitOffset=0xa BitSize=0x1
        unsigned long long PermanentStopAllWork:1;// Offset=0x0 Size=0x8 BitOffset=0xb BitSize=0x1
        unsigned long long CreateIoQueues:1;// Offset=0x0 Size=0x8 BitOffset=0xc BitSize=0x1
        unsigned long long ReconnectIoQueues:1;// Offset=0x0 Size=0x8 BitOffset=0xd BitSize=0x1
        unsigned long long IndividualIoQueueDeletion:1;// Offset=0x0 Size=0x8 BitOffset=0xe BitSize=0x1
        unsigned long long MultipleIoCommandSets:1;// Offset=0x0 Size=0x8 BitOffset=0xf BitSize=0x1
        unsigned long long ScanNamespaces:1;// Offset=0x0 Size=0x8 BitOffset=0x10 BitSize=0x1
        unsigned long long NoActiveNamespaces:1;// Offset=0x0 Size=0x8 BitOffset=0x11 BitSize=0x1
        unsigned long long InvalidNamespaceIdList:1;// Offset=0x0 Size=0x8 BitOffset=0x12 BitSize=0x1
        unsigned long long WriteCacheEnabled:1;// Offset=0x0 Size=0x8 BitOffset=0x13 BitSize=0x1
        unsigned long long OCPCloudSSD:1;// Offset=0x0 Size=0x8 BitOffset=0x14 BitSize=0x1
        unsigned long long HealthInfoLogExamined:1;// Offset=0x0 Size=0x8 BitOffset=0x15 BitSize=0x1
        unsigned long long MFNDChildController:1;// Offset=0x0 Size=0x8 BitOffset=0x16 BitSize=0x1
        unsigned long long MFNDParentController:1;// Offset=0x0 Size=0x8 BitOffset=0x17 BitSize=0x1
        unsigned long long QueryOCPErrorRecoveryLogFailed:1;// Offset=0x0 Size=0x8 BitOffset=0x18 BitSize=0x1
        unsigned long long InconsistentActiveNSIdentified:1;// Offset=0x0 Size=0x8 BitOffset=0x19 BitSize=0x1
        unsigned long long NoActiveNSIdentified:1;// Offset=0x0 Size=0x8 BitOffset=0x1a BitSize=0x1
        unsigned long long FallbackToLegacySqCqMapping:1;// Offset=0x0 Size=0x8 BitOffset=0x1b BitSize=0x1
        unsigned long long ReadOnly:1;// Offset=0x0 Size=0x8 BitOffset=0x1c BitSize=0x1
        unsigned long long KeepAliveExpired:1;// Offset=0x0 Size=0x8 BitOffset=0x1d BitSize=0x1
        unsigned long long UnsentAsyncEventCommand:1;// Offset=0x0 Size=0x8 BitOffset=0x1e BitSize=0x1
        unsigned long long TerminateCommandTimeoutDetectThread:1;// Offset=0x0 Size=0x8 BitOffset=0x1f BitSize=0x1
        unsigned long long BypassDmaApi:1;// Offset=0x0 Size=0x8 BitOffset=0x20 BitSize=0x1
        unsigned long long RedoDiscovery:1;// Offset=0x0 Size=0x8 BitOffset=0x21 BitSize=0x1
        unsigned long long QuiesceCompletionDPCs:1;// Offset=0x0 Size=0x8 BitOffset=0x22 BitSize=0x1
        unsigned long long EnduranceWarningLogged:1;// Offset=0x0 Size=0x8 BitOffset=0x23 BitSize=0x1
        unsigned long long LowSpareWarningLogged:1;// Offset=0x0 Size=0x8 BitOffset=0x24 BitSize=0x1
        unsigned long long Unresponsive:1;// Offset=0x0 Size=0x8 BitOffset=0x25 BitSize=0x1
        unsigned long long CloudSSDLogExamined:1;// Offset=0x0 Size=0x8 BitOffset=0x26 BitSize=0x1
        unsigned long long Reserved:25;// Offset=0x0 Size=0x8 BitOffset=0x27 BitSize=0x19
    };
    unsigned long long AsUlonglong;// Offset=0x0 Size=0x8
};
