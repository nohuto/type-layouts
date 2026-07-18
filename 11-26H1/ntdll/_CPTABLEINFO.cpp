struct _CPTABLEINFO// Size=0x40 (Id=871)
{
    unsigned short CodePage;// Offset=0x0 Size=0x2
    unsigned short MaximumCharacterSize;// Offset=0x2 Size=0x2
    unsigned short DefaultChar;// Offset=0x4 Size=0x2
    unsigned short UniDefaultChar;// Offset=0x6 Size=0x2
    unsigned short TransDefaultChar;// Offset=0x8 Size=0x2
    unsigned short TransUniDefaultChar;// Offset=0xa Size=0x2
    unsigned short DBCSCodePage;// Offset=0xc Size=0x2
    unsigned char LeadByte[12];// Offset=0xe Size=0xc
    unsigned short * MultiByteTable;// Offset=0x20 Size=0x8
    void * WideCharTable;// Offset=0x28 Size=0x8
    unsigned short * DBCSRanges;// Offset=0x30 Size=0x8
    unsigned short * DBCSOffsets;// Offset=0x38 Size=0x8
};
