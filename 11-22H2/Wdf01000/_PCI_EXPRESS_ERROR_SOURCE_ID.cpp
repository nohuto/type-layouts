union _PCI_EXPRESS_ERROR_SOURCE_ID// Size=0x4 (Id=2949)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned short CorrectableSourceIdFun:3;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0x3
        unsigned short CorrectableSourceIdDev:5;// Offset=0x0 Size=0x2 BitOffset=0x3 BitSize=0x5
        unsigned short CorrectableSourceIdBus:8;// Offset=0x0 Size=0x2 BitOffset=0x8 BitSize=0x8
        unsigned short UncorrectableSourceIdFun:3;// Offset=0x2 Size=0x2 BitOffset=0x0 BitSize=0x3
        unsigned short UncorrectableSourceIdDev:5;// Offset=0x2 Size=0x2 BitOffset=0x3 BitSize=0x5
        unsigned short UncorrectableSourceIdBus:8;// Offset=0x2 Size=0x2 BitOffset=0x8 BitSize=0x8
    };
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};
