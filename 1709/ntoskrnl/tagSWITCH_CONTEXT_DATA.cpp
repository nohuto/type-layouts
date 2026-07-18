struct _GUID// Size=0x10 (Id=40)
{
    unsigned long Data1;// Offset=0x0 Size=0x4
    unsigned short Data2;// Offset=0x4 Size=0x2
    unsigned short Data3;// Offset=0x6 Size=0x2
    unsigned char Data4[8];// Offset=0x8 Size=0x8
};

struct tagSWITCH_CONTEXT_DATA// Size=0x340 (Id=1239)
{
    unsigned long long ullOsMaxVersionTested;// Offset=0x0 Size=0x8
    unsigned long ulTargetPlatform;// Offset=0x8 Size=0x4
    unsigned long long ullContextMinimum;// Offset=0x10 Size=0x8
    struct _GUID guPlatform;// Offset=0x18 Size=0x10
    struct _GUID guMinPlatform;// Offset=0x28 Size=0x10
    unsigned long ulContextSource;// Offset=0x38 Size=0x4
    unsigned long ulElementCount;// Offset=0x3c Size=0x4
    struct _GUID guElements[48];// Offset=0x40 Size=0x300
};
