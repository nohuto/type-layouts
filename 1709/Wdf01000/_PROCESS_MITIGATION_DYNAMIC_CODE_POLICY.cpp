struct _PROCESS_MITIGATION_DYNAMIC_CODE_POLICY// Size=0x4 (Id=3353)
{
    union // Size=0x4 (Id=0)
    {
        unsigned long Flags;// Offset=0x0 Size=0x4
        struct // Size=0x4 (Id=0)
        {
            unsigned long ProhibitDynamicCode:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
            unsigned long AllowThreadOptOut:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
            unsigned long AllowRemoteDowngrade:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
            unsigned long AuditProhibitDynamicCode:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
            unsigned long ReservedFlags:28;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1c
        };
    };
};
