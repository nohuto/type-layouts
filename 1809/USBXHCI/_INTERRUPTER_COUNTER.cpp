struct _INTERRUPTER_COUNTER// Size=0x38 (Id=515)
{
    unsigned long IsrCount;// Offset=0x0 Size=0x4
    unsigned long DpcCount;// Offset=0x4 Size=0x4
    unsigned long EventCount;// Offset=0x8 Size=0x4
    unsigned long WorkItemCount;// Offset=0xc Size=0x4
    unsigned long RequeueCount;// Offset=0x10 Size=0x4
    unsigned long QueuedWorkItem;// Offset=0x14 Size=0x4
    unsigned long QueuedDpc;// Offset=0x18 Size=0x4
    unsigned long EventRingBusy;// Offset=0x1c Size=0x4
    unsigned long ResetPending;// Offset=0x20 Size=0x4
    unsigned long EventRingFull;// Offset=0x24 Size=0x4
    unsigned long DpcTimeExpired;// Offset=0x28 Size=0x4
    unsigned long DpcWatchdogExpired;// Offset=0x2c Size=0x4
    struct _PCW_INSTANCE * PcwInstanceHandle;// Offset=0x30 Size=0x8
};
