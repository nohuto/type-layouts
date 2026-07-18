struct _PROCESS_MITIGATION_SYSTEM_CALL_DISABLE_POLICY// Size=0x4 (Id=2404)
{
    union // Size=0x4 (Id=0)
    {
        unsigned long Flags;// Offset=0x0 Size=0x4
        struct // Size=0x4 (Id=0)
        {
            unsigned long DisallowWin32kSystemCalls:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
            unsigned long AuditDisallowWin32kSystemCalls:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
            unsigned long ReservedFlags:30;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1e
        };
    };
};
