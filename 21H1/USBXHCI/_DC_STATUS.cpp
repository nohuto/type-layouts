union _DC_STATUS// Size=0x4 (Id=452)
{
    unsigned long AsUlong32;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long EventRingNotEmpty:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long SystemBusReset:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long Reserved0:22;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x16
        unsigned long DebugPortNumber:8;// Offset=0x0 Size=0x4 BitOffset=0x18 BitSize=0x8
    };
};
