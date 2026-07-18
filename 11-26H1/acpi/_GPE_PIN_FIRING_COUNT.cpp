struct _GPE_PIN_FIRING_COUNT// Size=0xc (Id=374)
{
    unsigned long TotalFiringCount;// Offset=0x0 Size=0x4
    unsigned short CurrentFiringCount;// Offset=0x4 Size=0x2
    unsigned short ConsecutiveStormingEpochs;// Offset=0x6 Size=0x2
    union // Size=0x1 (Id=0)
    {
        struct // Size=0x1 (Id=0)
        {
            unsigned char Stormed:1;// Offset=0x8 Size=0x1 BitOffset=0x0 BitSize=0x1
            unsigned char Mitigated:1;// Offset=0x8 Size=0x1 BitOffset=0x1 BitSize=0x1
            unsigned char CurrentOverflow:1;// Offset=0x8 Size=0x1 BitOffset=0x2 BitSize=0x1
            unsigned char TotalOverflow:1;// Offset=0x8 Size=0x1 BitOffset=0x3 BitSize=0x1
            unsigned char Reserved:4;// Offset=0x8 Size=0x1 BitOffset=0x4 BitSize=0x4
        };
        unsigned char AsUchar;// Offset=0x8 Size=0x1
    };
};
