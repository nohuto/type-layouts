union _HSM_MUX_FLAGS// Size=0x4 (Id=699)
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
