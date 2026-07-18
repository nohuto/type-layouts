struct _PCI_PMCSR// Size=0x2 (Id=3894)
{
    struct // Size=0x2 (Id=0)
    {
        unsigned short PowerState:2;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0x2
        unsigned short Rsvd1:1;// Offset=0x0 Size=0x2 BitOffset=0x2 BitSize=0x1
        unsigned short NoSoftReset:1;// Offset=0x0 Size=0x2 BitOffset=0x3 BitSize=0x1
        unsigned short Rsvd2:4;// Offset=0x0 Size=0x2 BitOffset=0x4 BitSize=0x4
        unsigned short PMEEnable:1;// Offset=0x0 Size=0x2 BitOffset=0x8 BitSize=0x1
        unsigned short DataSelect:4;// Offset=0x0 Size=0x2 BitOffset=0x9 BitSize=0x4
        unsigned short DataScale:2;// Offset=0x0 Size=0x2 BitOffset=0xd BitSize=0x2
        unsigned short PMEStatus:1;// Offset=0x0 Size=0x2 BitOffset=0xf BitSize=0x1
    };
};

union _PCI_PM_CAPABILITY::<unnamed-type-PMCSR>// Size=0x2 (Id=1636)
{
    struct _PCI_PMCSR ControlStatus;// Offset=0x0 Size=0x2
    unsigned short AsUSHORT;// Offset=0x0 Size=0x2
};
