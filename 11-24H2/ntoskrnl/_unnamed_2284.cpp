struct _GUID// Size=0x10 (Id=58)
{
    unsigned long Data1;// Offset=0x0 Size=0x4
    unsigned short Data2;// Offset=0x4 Size=0x2
    unsigned short Data3;// Offset=0x6 Size=0x2
    unsigned char Data4[8];// Offset=0x8 Size=0x8
};

struct _unnamed_2284// Size=0x20 (Id=2284)
{
    struct _GUID TargetVolume;// Offset=0x0 Size=0x10
    struct _UNICODE_STRING * CimFiles;// Offset=0x10 Size=0x8
    unsigned long CimFilesCount;// Offset=0x18 Size=0x4
};
