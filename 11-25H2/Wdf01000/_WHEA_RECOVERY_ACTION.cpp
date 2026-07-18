union _WHEA_RECOVERY_ACTION// Size=0x8 (Id=2848)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long NoneAttempted:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long TerminateProcess:1;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x1
        unsigned long long ForwardedToVm:1;// Offset=0x0 Size=0x8 BitOffset=0x2 BitSize=0x1
        unsigned long long MarkPageBad:1;// Offset=0x0 Size=0x8 BitOffset=0x3 BitSize=0x1
        unsigned long long PoisonNotPresent:1;// Offset=0x0 Size=0x8 BitOffset=0x4 BitSize=0x1
        unsigned long long Reserved:59;// Offset=0x0 Size=0x8 BitOffset=0x5 BitSize=0x3b
    };
    unsigned long long AsUINT64;// Offset=0x0 Size=0x8
};
