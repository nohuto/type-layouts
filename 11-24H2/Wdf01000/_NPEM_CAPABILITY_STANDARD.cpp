union _NPEM_CAPABILITY_STANDARD// Size=0x4 (Id=3741)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long Capable:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long ResetCapable:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long OkCapable:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long LocateCapable:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long FailCapable:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long RebuildCapable:1;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1
        unsigned long PFACapable:1;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1
        unsigned long HotSpareCapable:1;// Offset=0x0 Size=0x4 BitOffset=0x7 BitSize=0x1
        unsigned long InACriticalArrayCapable:1;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x1
        unsigned long InAFailedArrayCapable:1;// Offset=0x0 Size=0x4 BitOffset=0x9 BitSize=0x1
        unsigned long InvalidDeviceTypeCapable:1;// Offset=0x0 Size=0x4 BitOffset=0xa BitSize=0x1
        unsigned long DisabledCapable:1;// Offset=0x0 Size=0x4 BitOffset=0xb BitSize=0x1
        unsigned long Rsvd:20;// Offset=0x0 Size=0x4 BitOffset=0xc BitSize=0x14
    };
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};
