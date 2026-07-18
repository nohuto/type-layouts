struct _GENERIC_DROM_HEADER// Size=0x10 (Id=626)
{
    unsigned char Reserved1[13];// Offset=0x0 Size=0xd
    unsigned char Version;// Offset=0xd Size=0x1
    struct // Size=0x2 (Id=0)
    {
        unsigned short Length:12;// Offset=0xe Size=0x2 BitOffset=0x0 BitSize=0xc
        unsigned short Reserved2:4;// Offset=0xe Size=0x2 BitOffset=0xc BitSize=0x4
    };
};
