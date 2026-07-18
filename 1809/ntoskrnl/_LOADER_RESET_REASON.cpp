struct _unnamed_1706// Size=0x8 (Id=1706)
{
    unsigned char Pch;// Offset=0x0 Size=0x1
    unsigned char EmbeddedController;// Offset=0x1 Size=0x1
    unsigned char Reserved[6];// Offset=0x2 Size=0x6
};

union _unnamed_1707// Size=0x8 (Id=1707)
{
    struct _unnamed_1706 Component;// Offset=0x0 Size=0x8
    unsigned long long AsULONG64;// Offset=0x0 Size=0x8
    unsigned char AsBytes[8];// Offset=0x0 Size=0x8
};

struct _LOADER_RESET_REASON// Size=0x30 (Id=1708)
{
    unsigned char Supplied;// Offset=0x0 Size=0x1
    union _unnamed_1707 Basic;// Offset=0x8 Size=0x8
    unsigned long AdditionalInfo[8];// Offset=0x10 Size=0x20
};
