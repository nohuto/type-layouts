struct _ETW_READY_THREAD_EVENT// Size=0x8 (Id=3382)
{
    unsigned long ThreadId;// Offset=0x0 Size=0x4
    unsigned char AdjustReason;// Offset=0x4 Size=0x1
    char AdjustIncrement;// Offset=0x5 Size=0x1
    union // Size=0x1 (Id=0)
    {
        struct // Size=0x1 (Id=0)
        {
            unsigned char ExecutingDpc:1;// Offset=0x6 Size=0x1 BitOffset=0x0 BitSize=0x1
            unsigned char KernelStackNotResident:1;// Offset=0x6 Size=0x1 BitOffset=0x1 BitSize=0x1
            unsigned char ProcessOutOfMemory:1;// Offset=0x6 Size=0x1 BitOffset=0x2 BitSize=0x1
            unsigned char DirectSwitchAttempt:1;// Offset=0x6 Size=0x1 BitOffset=0x3 BitSize=0x1
            unsigned char Reserved:4;// Offset=0x6 Size=0x1 BitOffset=0x4 BitSize=0x4
        };
        unsigned char Flags;// Offset=0x6 Size=0x1
    };
    unsigned char SpareByte;// Offset=0x7 Size=0x1
};
