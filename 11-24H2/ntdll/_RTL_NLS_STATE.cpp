struct _CPTABLEINFO// Size=0x40 (Id=860)
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

struct _RTL_NLS_STATE// Size=0xb8 (Id=797)
{
    struct _CPTABLEINFO DefaultAcpTableInfo;// Offset=0x0 Size=0x40
    struct _CPTABLEINFO DefaultOemTableInfo;// Offset=0x40 Size=0x40
    unsigned short * ActiveCodePageData;// Offset=0x80 Size=0x8
    unsigned short * OemCodePageData;// Offset=0x88 Size=0x8
    unsigned short * LeadByteInfo;// Offset=0x90 Size=0x8
    unsigned short * OemLeadByteInfo;// Offset=0x98 Size=0x8
    unsigned short * CaseMappingData;// Offset=0xa0 Size=0x8
    unsigned short * UnicodeUpcaseTable844;// Offset=0xa8 Size=0x8
    unsigned short * UnicodeLowercaseTable844;// Offset=0xb0 Size=0x8
};
