struct _unnamed_129// Size=0x4 (Id=129)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long EnableExportAddressFilter:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long AuditExportAddressFilter:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long EnableExportAddressFilterPlus:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long AuditExportAddressFilterPlus:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long EnableRopStackPivot:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long AuditRopStackPivot:1;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1
        unsigned long EnableRopCallerCheck:1;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1
        unsigned long AuditRopCallerCheck:1;// Offset=0x0 Size=0x4 BitOffset=0x7 BitSize=0x1
        unsigned long EnableRopSimExec:1;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x1
        unsigned long AuditRopSimExec:1;// Offset=0x0 Size=0x4 BitOffset=0x9 BitSize=0x1
        unsigned long EnableImportAddressFilter:1;// Offset=0x0 Size=0x4 BitOffset=0xa BitSize=0x1
        unsigned long AuditImportAddressFilter:1;// Offset=0x0 Size=0x4 BitOffset=0xb BitSize=0x1
        unsigned long DisablePageCombine:1;// Offset=0x0 Size=0x4 BitOffset=0xc BitSize=0x1
        unsigned long SpeculativeStoreBypassDisable:1;// Offset=0x0 Size=0x4 BitOffset=0xd BitSize=0x1
        unsigned long CetUserShadowStacks:1;// Offset=0x0 Size=0x4 BitOffset=0xe BitSize=0x1
        unsigned long AuditCetUserShadowStacks:1;// Offset=0x0 Size=0x4 BitOffset=0xf BitSize=0x1
        unsigned long AuditCetUserShadowStacksLogged:1;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x1
        unsigned long UserCetSetContextIpValidation:1;// Offset=0x0 Size=0x4 BitOffset=0x11 BitSize=0x1
        unsigned long AuditUserCetSetContextIpValidation:1;// Offset=0x0 Size=0x4 BitOffset=0x12 BitSize=0x1
        unsigned long AuditUserCetSetContextIpValidationLogged:1;// Offset=0x0 Size=0x4 BitOffset=0x13 BitSize=0x1
        unsigned long CetUserShadowStacksStrictMode:1;// Offset=0x0 Size=0x4 BitOffset=0x14 BitSize=0x1
        unsigned long BlockNonCetBinaries:1;// Offset=0x0 Size=0x4 BitOffset=0x15 BitSize=0x1
        unsigned long BlockNonCetBinariesNonEhcont:1;// Offset=0x0 Size=0x4 BitOffset=0x16 BitSize=0x1
        unsigned long AuditBlockNonCetBinaries:1;// Offset=0x0 Size=0x4 BitOffset=0x17 BitSize=0x1
        unsigned long AuditBlockNonCetBinariesLogged:1;// Offset=0x0 Size=0x4 BitOffset=0x18 BitSize=0x1
        unsigned long XtendedControlFlowGuard_Deprecated:1;// Offset=0x0 Size=0x4 BitOffset=0x19 BitSize=0x1
        unsigned long AuditXtendedControlFlowGuard_Deprecated:1;// Offset=0x0 Size=0x4 BitOffset=0x1a BitSize=0x1
        unsigned long PointerAuthUserIp:1;// Offset=0x0 Size=0x4 BitOffset=0x1b BitSize=0x1
        unsigned long AuditPointerAuthUserIp:1;// Offset=0x0 Size=0x4 BitOffset=0x1c BitSize=0x1
        unsigned long AuditPointerAuthUserIpLogged:1;// Offset=0x0 Size=0x4 BitOffset=0x1d BitSize=0x1
        unsigned long CetDynamicApisOutOfProcOnly:1;// Offset=0x0 Size=0x4 BitOffset=0x1e BitSize=0x1
        unsigned long UserCetSetContextIpValidationRelaxedMode:1;// Offset=0x0 Size=0x4 BitOffset=0x1f BitSize=0x1
    };
};
