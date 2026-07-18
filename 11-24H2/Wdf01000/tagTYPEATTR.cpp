struct _GUID// Size=0x10 (Id=86)
{
    unsigned long Data1;// Offset=0x0 Size=0x4
    unsigned short Data2;// Offset=0x4 Size=0x2
    unsigned short Data3;// Offset=0x6 Size=0x2
    unsigned char Data4[8];// Offset=0x8 Size=0x8
};

struct tagTYPEATTR// Size=0x60 (Id=875)
{
    struct _GUID guid;// Offset=0x0 Size=0x10
    unsigned long lcid;// Offset=0x10 Size=0x4
    unsigned long dwReserved;// Offset=0x14 Size=0x4
    long memidConstructor;// Offset=0x18 Size=0x4
    long memidDestructor;// Offset=0x1c Size=0x4
    wchar_t * lpstrSchema;// Offset=0x20 Size=0x8
    unsigned long cbSizeInstance;// Offset=0x28 Size=0x4
    enum tagTYPEKIND typekind;// Offset=0x2c Size=0x4
    unsigned short cFuncs;// Offset=0x30 Size=0x2
    unsigned short cVars;// Offset=0x32 Size=0x2
    unsigned short cImplTypes;// Offset=0x34 Size=0x2
    unsigned short cbSizeVft;// Offset=0x36 Size=0x2
    unsigned short cbAlignment;// Offset=0x38 Size=0x2
    unsigned short wTypeFlags;// Offset=0x3a Size=0x2
    unsigned short wMajorVerNum;// Offset=0x3c Size=0x2
    unsigned short wMinorVerNum;// Offset=0x3e Size=0x2
    struct tagTYPEDESC tdescAlias;// Offset=0x40 Size=0x10
    struct tagIDLDESC idldescType;// Offset=0x50 Size=0x10
};
