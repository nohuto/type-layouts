struct _INTERRUPTER_FLAGS// Size=0x4 (Id=884)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long MessageSignaled:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long PendingDisable:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long Enabled:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long DpcRunning:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long ResetPending:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
    };
};
