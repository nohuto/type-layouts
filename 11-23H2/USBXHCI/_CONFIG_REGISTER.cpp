union _CONFIG_REGISTER// Size=0x4 (Id=854)
{
    unsigned long AsUlong32;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long NumberOfDeviceSlotsEnabled:8;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x8
        unsigned long U3EntryEnable:1;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x1
        unsigned long ConfigurationInformationEnable:1;// Offset=0x0 Size=0x4 BitOffset=0x9 BitSize=0x1
        unsigned long Reserved0:22;// Offset=0x0 Size=0x4 BitOffset=0xa BitSize=0x16
    };
};
