struct _GUID// Size=0x10 (Id=78)
{
    unsigned long Data1;// Offset=0x0 Size=0x4
    unsigned short Data2;// Offset=0x4 Size=0x2
    unsigned short Data3;// Offset=0x6 Size=0x2
    unsigned char Data4[8];// Offset=0x8 Size=0x8
};

struct _TARGET_DEVICE_REMOVAL_NOTIFICATION// Size=0x20 (Id=2797)
{
    unsigned short Version;// Offset=0x0 Size=0x2
    unsigned short Size;// Offset=0x2 Size=0x2
    struct _GUID Event;// Offset=0x4 Size=0x10
    struct _FILE_OBJECT * FileObject;// Offset=0x18 Size=0x8
};
