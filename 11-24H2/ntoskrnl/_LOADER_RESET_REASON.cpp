struct _unnamed_2353// Size=0x8 (Id=2353)
{
    unsigned char Pch;// Offset=0x0 Size=0x1
    unsigned char EmbeddedController;// Offset=0x1 Size=0x1
    unsigned char Reserved[6];// Offset=0x2 Size=0x6
};

union _unnamed_2354// Size=0x8 (Id=2354)
{
    struct _unnamed_2353 Component;// Offset=0x0 Size=0x8
    unsigned long long AsULONG64;// Offset=0x0 Size=0x8
    unsigned char AsBytes[8];// Offset=0x0 Size=0x8
};

struct _LOADER_RESET_REASON// Size=0x30 (Id=2355)
{
    unsigned char Supplied;// Offset=0x0 Size=0x1
    union _unnamed_2354 Basic;// Offset=0x8 Size=0x8
    unsigned long AdditionalInfo[8];// Offset=0x10 Size=0x20
};
