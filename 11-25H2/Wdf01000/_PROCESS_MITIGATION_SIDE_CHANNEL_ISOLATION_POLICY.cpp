struct _PROCESS_MITIGATION_SIDE_CHANNEL_ISOLATION_POLICY// Size=0x4 (Id=3589)
{
    union // Size=0x4 (Id=0)
    {
        unsigned long Flags;// Offset=0x0 Size=0x4
        struct // Size=0x4 (Id=0)
        {
            unsigned long SmtBranchTargetIsolation:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
            unsigned long IsolateSecurityDomain:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
            unsigned long DisablePageCombine:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
            unsigned long SpeculativeStoreBypassDisable:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
            unsigned long RestrictCoreSharing:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
            unsigned long ReservedFlags:27;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1b
        };
    };
};
