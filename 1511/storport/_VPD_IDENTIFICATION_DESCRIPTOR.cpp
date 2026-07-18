struct _VPD_IDENTIFICATION_DESCRIPTOR// Size=0x4 (Id=189)
{
    struct // Size=0x2 (Id=0)
    {
        unsigned char CodeSet:4;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x4
        unsigned char Reserved:4;// Offset=0x0 Size=0x1 BitOffset=0x4 BitSize=0x4
        unsigned char IdentifierType:4;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x4
        unsigned char Association:2;// Offset=0x1 Size=0x1 BitOffset=0x4 BitSize=0x2
        unsigned char Reserved2:2;// Offset=0x1 Size=0x1 BitOffset=0x6 BitSize=0x2
    };
    unsigned char Reserved3;// Offset=0x2 Size=0x1
    unsigned char IdentifierLength;// Offset=0x3 Size=0x1
    unsigned char Identifier[0];
};
