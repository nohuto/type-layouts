struct _GUID// Size=0x10 (Id=4)
{
    unsigned long Data1;// Offset=0x0 Size=0x4
    unsigned short Data2;// Offset=0x4 Size=0x2
    unsigned short Data3;// Offset=0x6 Size=0x2
    unsigned char Data4[8];// Offset=0x8 Size=0x8
};

struct KSCOMPONENTID// Size=0x48 (Id=813)
{
    struct _GUID Manufacturer;// Offset=0x0 Size=0x10
    struct _GUID Product;// Offset=0x10 Size=0x10
    struct _GUID Component;// Offset=0x20 Size=0x10
    struct _GUID Name;// Offset=0x30 Size=0x10
    unsigned long Version;// Offset=0x40 Size=0x4
    unsigned long Revision;// Offset=0x44 Size=0x4
};
