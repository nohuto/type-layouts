union _VIRTUAL_CHANNEL_CONTROL// Size=0x2 (Id=3598)
{
    struct // Size=0x2 (Id=0)
    {
        unsigned short LoadVCArbitrationTable:1;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0x1
        unsigned short VCArbitrationSelect:3;// Offset=0x0 Size=0x2 BitOffset=0x1 BitSize=0x3
        unsigned short RsvdP:12;// Offset=0x0 Size=0x2 BitOffset=0x4 BitSize=0xc
    };
    unsigned short AsUSHORT;// Offset=0x0 Size=0x2
};
