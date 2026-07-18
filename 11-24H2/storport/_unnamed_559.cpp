union _unnamed_559// Size=0x4 (Id=559)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long SystemPoweringDown:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long DevicePoweringUp:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long DevicePoweringDown:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long KsrPowerDownInProgress:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long SetSystemPowerRequestFailed:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long SystemPoweringUp:1;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1
        unsigned long Reserved:26;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1a
    };
    unsigned long AsUlong;// Offset=0x0 Size=0x4
};
