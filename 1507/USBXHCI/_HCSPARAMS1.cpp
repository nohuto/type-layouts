union _HCSPARAMS1// Size=0x4 (Id=508)
{
    unsigned long AsUlong32;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long NumberOfDeviceSlots:8;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x8
        unsigned long NumberOfInterrupters:11;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0xb
        unsigned long Reserved0:5;// Offset=0x0 Size=0x4 BitOffset=0x13 BitSize=0x5
        unsigned long NumberOfPorts:8;// Offset=0x0 Size=0x4 BitOffset=0x18 BitSize=0x8
    };
};
