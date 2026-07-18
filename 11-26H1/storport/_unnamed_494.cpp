struct _unnamed_494// Size=0x4 (Id=494)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long NamespaceWaitForAllIOCompleteTimedOut:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long SubmissionQueueQuiesceTimedOut:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long CompletionDpcQuiesceTimedOut:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long CompletionQueuePollingQuiesceTimedOut:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long AttemptToSendZombieCommand:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long Reserved0:27;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1b
    };
};
