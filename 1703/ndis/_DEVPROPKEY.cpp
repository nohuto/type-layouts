struct _GUID// Size=0x10 (Id=3)
{
    unsigned long Data1;// Offset=0x0 Size=0x4
    unsigned short Data2;// Offset=0x4 Size=0x2
    unsigned short Data3;// Offset=0x6 Size=0x2
    unsigned char Data4[8];// Offset=0x8 Size=0x8
};

struct _DEVPROPKEY// Size=0x14 (Id=99)
{
    struct _GUID fmtid;// Offset=0x0 Size=0x10
    unsigned long pid;// Offset=0x10 Size=0x4
};
