union _NVME_COMMAND_EXTENSION_FLAGS// Size=0x4 (Id=838)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long AdminCommand:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long NeedDataTransfer:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long PrpSet:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long Outstanding:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long ReassignedToSubOptimalSubmissionQueue:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long InternalCommand:1;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1
        unsigned long Polling:1;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1
        unsigned long RetryExhausted:1;// Offset=0x0 Size=0x4 BitOffset=0x7 BitSize=0x1
        unsigned long ExecuteInIsolation:1;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x1
        unsigned long WriteToDevice:1;// Offset=0x0 Size=0x4 BitOffset=0x9 BitSize=0x1
        unsigned long SystemBufferShifted:1;// Offset=0x0 Size=0x4 BitOffset=0xa BitSize=0x1
        unsigned long SkipPowerActiveReference:1;// Offset=0x0 Size=0x4 BitOffset=0xb BitSize=0x1
        unsigned long ReleasePowerReferenceAfterCmdSent:1;// Offset=0x0 Size=0x4 BitOffset=0xc BitSize=0x1
        unsigned long SkipProcessInResetRecovery:1;// Offset=0x0 Size=0x4 BitOffset=0xd BitSize=0x1
        unsigned long IsSent:1;// Offset=0x0 Size=0x4 BitOffset=0xe BitSize=0x1
        unsigned long IsProcessed:1;// Offset=0x0 Size=0x4 BitOffset=0xf BitSize=0x1
        unsigned long Synchronous:1;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x1
        unsigned long Reserved:15;// Offset=0x0 Size=0x4 BitOffset=0x11 BitSize=0xf
    };
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};
