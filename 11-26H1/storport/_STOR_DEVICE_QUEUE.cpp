struct _STOR_DEVICE_QUEUE// Size=0x40 (Id=722)
{
    union // Size=0x4 (Id=0)
    {
        struct // Size=0x4 (Id=0)
        {
            unsigned long Busy:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
            unsigned long Pause:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
            unsigned long Locked:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
            unsigned long Reserved0:29;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1d
        };
        unsigned long State;// Offset=0x0 Size=0x4
    };
    unsigned long CircularShadowQueueDepth;// Offset=0x4 Size=0x4
    unsigned long CircularShadowQueueRefillThreshold;// Offset=0x8 Size=0x4
    unsigned long CircularShadowQueueSwitchThreshold;// Offset=0xc Size=0x4
    unsigned long RefillShadowQueueInProgress;// Offset=0x10 Size=0x4
    unsigned char QueueUsage;// Offset=0x14 Size=0x1
    unsigned char Reserved1[3];// Offset=0x15 Size=0x3
    struct _STOR_DEVICE_SUBQUEUE * SubIoQueues[1];// Offset=0x18 Size=0x8
};
