union _WHEA_RECOVERY_ACTION// Size=0x8 (Id=2206)
{
    union // Size=0x8 (Id=0)
    {
        struct // Size=0x8 (Id=0)
        {
            unsigned long NoneAttempted:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
            unsigned long TerminateProcess:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
            unsigned long ForwardedToVm:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
            unsigned long MarkPageBad:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
            unsigned long Reserved:29;// Offset=0x4 Size=0x4 BitOffset=0x0 BitSize=0x1d
        };
        unsigned long AsULONG;// Offset=0x0 Size=0x4
    };
};
