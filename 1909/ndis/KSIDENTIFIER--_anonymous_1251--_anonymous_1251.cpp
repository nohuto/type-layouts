struct _GUID// Size=0x10 (Id=4)
{
    unsigned long Data1;// Offset=0x0 Size=0x4
    unsigned short Data2;// Offset=0x4 Size=0x2
    unsigned short Data3;// Offset=0x6 Size=0x2
    unsigned char Data4[8];// Offset=0x8 Size=0x8
};

struct KSIDENTIFIER::_anonymous_1251::_anonymous_1251// Size=0x18 (Id=1251)
{
    struct _GUID Set;// Offset=0x0 Size=0x10
    unsigned long Id;// Offset=0x10 Size=0x4
    unsigned long Flags;// Offset=0x14 Size=0x4
};
