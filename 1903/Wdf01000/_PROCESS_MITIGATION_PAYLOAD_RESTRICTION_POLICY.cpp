struct _PROCESS_MITIGATION_PAYLOAD_RESTRICTION_POLICY// Size=0x4 (Id=4878)
{
    union // Size=0x4 (Id=0)
    {
        unsigned long Flags;// Offset=0x0 Size=0x4
        struct // Size=0x4 (Id=0)
        {
            unsigned long EnableExportAddressFilter:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
            unsigned long AuditExportAddressFilter:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
            unsigned long EnableExportAddressFilterPlus:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
            unsigned long AuditExportAddressFilterPlus:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
            unsigned long EnableImportAddressFilter:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
            unsigned long AuditImportAddressFilter:1;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1
            unsigned long EnableRopStackPivot:1;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1
            unsigned long AuditRopStackPivot:1;// Offset=0x0 Size=0x4 BitOffset=0x7 BitSize=0x1
            unsigned long EnableRopCallerCheck:1;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x1
            unsigned long AuditRopCallerCheck:1;// Offset=0x0 Size=0x4 BitOffset=0x9 BitSize=0x1
            unsigned long EnableRopSimExec:1;// Offset=0x0 Size=0x4 BitOffset=0xa BitSize=0x1
            unsigned long AuditRopSimExec:1;// Offset=0x0 Size=0x4 BitOffset=0xb BitSize=0x1
            unsigned long ReservedFlags:20;// Offset=0x0 Size=0x4 BitOffset=0xc BitSize=0x14
        };
    };
};
