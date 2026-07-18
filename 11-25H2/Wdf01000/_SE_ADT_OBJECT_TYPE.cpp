struct _GUID// Size=0x10 (Id=118)
{
    unsigned long Data1;// Offset=0x0 Size=0x4
    unsigned short Data2;// Offset=0x4 Size=0x2
    unsigned short Data3;// Offset=0x6 Size=0x2
    unsigned char Data4[8];// Offset=0x8 Size=0x8
};

struct _SE_ADT_OBJECT_TYPE// Size=0x18 (Id=2283)
{
    struct _GUID ObjectType;// Offset=0x0 Size=0x10
    unsigned short Flags;// Offset=0x10 Size=0x2
    unsigned short Level;// Offset=0x12 Size=0x2
    unsigned long AccessMask;// Offset=0x14 Size=0x4
};
