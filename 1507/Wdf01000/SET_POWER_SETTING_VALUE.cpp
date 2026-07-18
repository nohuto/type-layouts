struct _GUID// Size=0x10 (Id=175)
{
    unsigned long Data1;// Offset=0x0 Size=0x4
    unsigned short Data2;// Offset=0x4 Size=0x2
    unsigned short Data3;// Offset=0x6 Size=0x2
    unsigned char Data4[8];// Offset=0x8 Size=0x8
};

struct SET_POWER_SETTING_VALUE// Size=0x20 (Id=3537)
{
    unsigned long Version;// Offset=0x0 Size=0x4
    struct _GUID Guid;// Offset=0x4 Size=0x10
    enum SYSTEM_POWER_CONDITION PowerCondition;// Offset=0x14 Size=0x4
    unsigned long DataLength;// Offset=0x18 Size=0x4
    unsigned char Data[1];// Offset=0x1c Size=0x1
};
