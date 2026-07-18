union _PCI_EXPRESS_NPEM_CONTROL_REGISTER// Size=0x4 (Id=1701)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long Enable:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long InitiateReset:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long OkControl:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long LocateControl:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long FailControl:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long RebuildControl:1;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1
        unsigned long PFAControl:1;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1
        unsigned long HotSpareControl:1;// Offset=0x0 Size=0x4 BitOffset=0x7 BitSize=0x1
        unsigned long InACriticalArrayControl:1;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x1
        unsigned long InAFailedArrayControl:1;// Offset=0x0 Size=0x4 BitOffset=0x9 BitSize=0x1
        unsigned long InvalidDeviceTypeControl:1;// Offset=0x0 Size=0x4 BitOffset=0xa BitSize=0x1
        unsigned long DisabledControl:1;// Offset=0x0 Size=0x4 BitOffset=0xb BitSize=0x1
        unsigned long Rsvd:12;// Offset=0x0 Size=0x4 BitOffset=0xc BitSize=0xc
        unsigned long EnclosureSpecificControls:8;// Offset=0x0 Size=0x4 BitOffset=0x18 BitSize=0x8
    };
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};
