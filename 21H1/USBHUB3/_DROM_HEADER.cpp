struct _DROM_HEADER// Size=0x10 (Id=580)
{
    unsigned char Reserved1;// Offset=0x0 Size=0x1
    unsigned long Reserved2;// Offset=0x1 Size=0x4
    unsigned long Reserved3;// Offset=0x5 Size=0x4
    unsigned long Crc32;// Offset=0x9 Size=0x4
    unsigned char Version;// Offset=0xd Size=0x1
    struct // Size=0x2 (Id=0)
    {
        unsigned short Length:12;// Offset=0xe Size=0x2 BitOffset=0x0 BitSize=0xc
        unsigned short Reserved4:4;// Offset=0xe Size=0x2 BitOffset=0xc BitSize=0x4
    };
};
