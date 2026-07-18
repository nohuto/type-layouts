struct _GUID// Size=0x10 (Id=107)
{
    unsigned long Data1;// Offset=0x0 Size=0x4
    unsigned short Data2;// Offset=0x4 Size=0x2
    unsigned short Data3;// Offset=0x6 Size=0x2
    unsigned char Data4[8];// Offset=0x8 Size=0x8
};

struct NOTIFY_USER_POWER_SETTING// Size=0x10 (Id=2730)
{
    struct _GUID Guid;// Offset=0x0 Size=0x10
};
