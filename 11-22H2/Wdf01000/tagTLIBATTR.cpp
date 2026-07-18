struct _GUID// Size=0x10 (Id=79)
{
    unsigned long Data1;// Offset=0x0 Size=0x4
    unsigned short Data2;// Offset=0x4 Size=0x2
    unsigned short Data3;// Offset=0x6 Size=0x2
    unsigned char Data4[8];// Offset=0x8 Size=0x8
};

struct tagTLIBATTR// Size=0x20 (Id=3664)
{
    struct _GUID guid;// Offset=0x0 Size=0x10
    unsigned long lcid;// Offset=0x10 Size=0x4
    enum tagSYSKIND syskind;// Offset=0x14 Size=0x4
    unsigned short wMajorVerNum;// Offset=0x18 Size=0x2
    unsigned short wMinorVerNum;// Offset=0x1a Size=0x2
    unsigned short wLibFlags;// Offset=0x1c Size=0x2
};
