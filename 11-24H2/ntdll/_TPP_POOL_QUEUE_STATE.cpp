union _TPP_POOL_QUEUE_STATE// Size=0x8 (Id=360)
{
    long long Exchange;// Offset=0x0 Size=0x8
    struct // Size=0x4 (Id=0)
    {
        long RunningThreadGoal:16;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x10
        unsigned long PendingReleaseCount:16;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x10
    };
    unsigned long QueueLength;// Offset=0x4 Size=0x4
};
