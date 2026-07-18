struct _MS_EXT_CONFIG_DESC_HEADER// Size=0x10 (Id=363)
{
    unsigned long dwLength;// Offset=0x0 Size=0x4
    unsigned short bcdVersion;// Offset=0x4 Size=0x2
    unsigned short wIndex;// Offset=0x6 Size=0x2
    unsigned char bCount;// Offset=0x8 Size=0x1
    unsigned char reserved[7];// Offset=0x9 Size=0x7
};

struct _MS_EXT_CONFIG_DESC_FUNCTION// Size=0x18 (Id=370)
{
    unsigned char bFirstInterfaceNumber;// Offset=0x0 Size=0x1
    unsigned char bInterfaceCount;// Offset=0x1 Size=0x1
    unsigned char CompatibleID[8];// Offset=0x2 Size=0x8
    unsigned char SubCompatibleID[8];// Offset=0xa Size=0x8
    unsigned char reserved[6];// Offset=0x12 Size=0x6
};

struct _MS_EXT_CONFIG_DESC// Size=0x28 (Id=269)
{
    struct _MS_EXT_CONFIG_DESC_HEADER Header;// Offset=0x0 Size=0x10
    struct _MS_EXT_CONFIG_DESC_FUNCTION Function[1];// Offset=0x10 Size=0x18
};
