struct _PROCESS_MITIGATION_CONTROL_FLOW_GUARD_POLICY// Size=0x4 (Id=3865)
{
    union // Size=0x4 (Id=0)
    {
        unsigned long Flags;// Offset=0x0 Size=0x4
        struct // Size=0x4 (Id=0)
        {
            unsigned long EnableControlFlowGuard:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
            unsigned long EnableExportSuppression:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
            unsigned long StrictMode:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
            unsigned long ReservedFlags:29;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1d
        };
    };
};
