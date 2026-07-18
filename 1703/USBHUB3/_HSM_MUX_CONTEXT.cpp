union _HSM_MUX_FLAGS// Size=0x4 (Id=548)
{
    unsigned long AsUlong32;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long InterruptReferenceReleasePending:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long FailInterruptReferenceAcquired:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long HubResetEnabled:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long FailDsmRegistration:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long HubResetInProgress:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
    };
};

struct _LIST_ENTRY// Size=0x10 (Id=4)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _HSM_MUX_CONTEXT// Size=0x50 (Id=462)
{
    unsigned long long MuxLock;// Offset=0x0 Size=0x8
    unsigned long OutstandingPortChanges;// Offset=0x8 Size=0x4
    unsigned long OutstandingPnPOperations;// Offset=0xc Size=0x4
    unsigned long OutstandingResetOperations;// Offset=0x10 Size=0x4
    unsigned long NumberOfInterruptReferencesHeld;// Offset=0x14 Size=0x4
    unsigned long NumberOfPowerReferencesHeld;// Offset=0x18 Size=0x4
    unsigned long NumberOfDevicePowerReferencesHeld;// Offset=0x1c Size=0x4
    union _HSM_MUX_FLAGS HubMuxFlags;// Offset=0x20 Size=0x4
    unsigned long NumberOfPSMs;// Offset=0x24 Size=0x4
    struct _LIST_ENTRY PSMListHead;// Offset=0x28 Size=0x10
    unsigned long NumberOfDSMs;// Offset=0x38 Size=0x4
    struct _LIST_ENTRY DSMListHead;// Offset=0x40 Size=0x10
};
