struct _unnamed_213// Size=0x4 (Id=213)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned int NotSupported:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned int Overflow:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned int ContextCorrupt:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned int RestartIpErrorIpNotValid:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned int NoRecoveryContext:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned int MiscOrAddrNotValid:1;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1
        unsigned int InvalidAddressMode:1;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1
        unsigned int HighIrql:1;// Offset=0x0 Size=0x4 BitOffset=0x7 BitSize=0x1
        unsigned int InterruptsDisabled:1;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x1
        unsigned int SwapBusy:1;// Offset=0x0 Size=0x4 BitOffset=0x9 BitSize=0x1
        unsigned int StackOverflow:1;// Offset=0x0 Size=0x4 BitOffset=0xa BitSize=0x1
        unsigned int Reserved:21;// Offset=0x0 Size=0x4 BitOffset=0xb BitSize=0x15
    };
};

struct _unnamed_214// Size=0x4 (Id=214)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned int RecoveryAttempted:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned int HvHandled:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned int Reserved:30;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1e
    };
};

struct _XPF_RECOVERY_INFO// Size=0x14 (Id=215)
{
    struct _unnamed_213 FailureReason;// Offset=0x0 Size=0x4
    struct _unnamed_214 Action;// Offset=0x4 Size=0x4
    unsigned char ActionRequired;// Offset=0x8 Size=0x1
    unsigned char RecoverySucceeded;// Offset=0x9 Size=0x1
    unsigned char RecoveryKernel;// Offset=0xa Size=0x1
    unsigned char Reserved;// Offset=0xb Size=0x1
    unsigned short Reserved2;// Offset=0xc Size=0x2
    unsigned short Reserved3;// Offset=0xe Size=0x2
    unsigned int Reserved4;// Offset=0x10 Size=0x4
};
