union _RAID_REDIRECTION_SUPPORT// Size=0x2 (Id=510)
{
    struct // Size=0x2 (Id=0)
    {
        unsigned short Dpc:1;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0x1
        unsigned short Interrupt:1;// Offset=0x0 Size=0x2 BitOffset=0x1 BitSize=0x1
        unsigned short MessageCount:8;// Offset=0x0 Size=0x2 BitOffset=0x2 BitSize=0x8
        unsigned short Reserved:6;// Offset=0x0 Size=0x2 BitOffset=0xa BitSize=0x6
    };
    unsigned short AsUshort;// Offset=0x0 Size=0x2
};
