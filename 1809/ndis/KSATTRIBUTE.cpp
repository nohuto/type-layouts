struct _GUID// Size=0x10 (Id=534)
{
    unsigned long Data1;// Offset=0x0 Size=0x4
    unsigned short Data2;// Offset=0x4 Size=0x2
    unsigned short Data3;// Offset=0x6 Size=0x2
    unsigned char Data4[8];// Offset=0x8 Size=0x8
};

struct KSATTRIBUTE// Size=0x18 (Id=2014)
{
    unsigned long Size;// Offset=0x0 Size=0x4
    unsigned long Flags;// Offset=0x4 Size=0x4
    struct _GUID Attribute;// Offset=0x8 Size=0x10
};
