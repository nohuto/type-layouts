union _RAID_REDIRECTION_SUPPORT// Size=0x2 (Id=869)
{
    struct // Size=0x2 (Id=0)
    {
        unsigned short Dpc:1;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0x1
        unsigned short Interrupt:1;// Offset=0x0 Size=0x2 BitOffset=0x1 BitSize=0x1
        unsigned short MessageCount:14;// Offset=0x0 Size=0x2 BitOffset=0x2 BitSize=0xe
    };
    unsigned short AsUshort;// Offset=0x0 Size=0x2
};
