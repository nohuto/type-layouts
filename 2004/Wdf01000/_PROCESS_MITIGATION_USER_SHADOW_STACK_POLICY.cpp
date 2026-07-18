struct _PROCESS_MITIGATION_USER_SHADOW_STACK_POLICY// Size=0x4 (Id=2755)
{
    union // Size=0x4 (Id=0)
    {
        unsigned long Flags;// Offset=0x0 Size=0x4
        struct // Size=0x4 (Id=0)
        {
            unsigned long EnableUserShadowStack:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
            unsigned long AuditUserShadowStack:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
            unsigned long SetContextIpValidation:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
            unsigned long AuditSetContextIpValidation:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
            unsigned long EnableUserShadowStackStrictMode:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
            unsigned long BlockNonCetBinaries:1;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1
            unsigned long BlockNonCetBinariesNonEhcont:1;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1
            unsigned long AuditBlockNonCetBinaries:1;// Offset=0x0 Size=0x4 BitOffset=0x7 BitSize=0x1
            unsigned long CetDynamicApisOutOfProcOnly:1;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x1
            unsigned long SetContextIpValidationRelaxedMode:1;// Offset=0x0 Size=0x4 BitOffset=0x9 BitSize=0x1
            unsigned long ReservedFlags:22;// Offset=0x0 Size=0x4 BitOffset=0xa BitSize=0x16
        };
    };
};
