struct _MS_EXT_PROP_DESC_HEADER// Size=0xa (Id=833)
{
    unsigned long dwLength;// Offset=0x0 Size=0x4
    unsigned short bcdVersion;// Offset=0x4 Size=0x2
    unsigned short wIndex;// Offset=0x6 Size=0x2
    unsigned short wCount;// Offset=0x8 Size=0x2
};

struct _MS_EXT_PROP_DESC_CUSTOM_PROP// Size=0xc (Id=818)
{
    unsigned long dwSize;// Offset=0x0 Size=0x4
    unsigned long dwPropertyDataType;// Offset=0x4 Size=0x4
    unsigned short wPropertyNameLength;// Offset=0x8 Size=0x2
    wchar_t PropertyName[1];// Offset=0xa Size=0x2
};

struct _MS_EXT_PROP_DESC// Size=0x16 (Id=779)
{
    struct _MS_EXT_PROP_DESC_HEADER Header;// Offset=0x0 Size=0xa
    struct _MS_EXT_PROP_DESC_CUSTOM_PROP CustomSection[1];// Offset=0xa Size=0xc
};
