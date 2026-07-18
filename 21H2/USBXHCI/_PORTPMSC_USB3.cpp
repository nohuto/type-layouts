union _PORTPMSC_USB3// Size=0x4 (Id=737)
{
    unsigned long AsUlong32;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long U1Timeout:8;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x8
        unsigned long U2Timeout:8;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x8
        unsigned long ForceLinkPMAccept:1;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x1
        unsigned long Reserved:15;// Offset=0x0 Size=0x4 BitOffset=0x11 BitSize=0xf
    };
};
