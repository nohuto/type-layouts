struct _BLOCK_IO_LAYER_INFORMATION// Size=0x8 (Id=2456)
{
    char * ArcName;// Offset=0x0 Size=0x8
};

struct _GUID// Size=0x10 (Id=647)
{
    unsigned long Data1;// Offset=0x0 Size=0x4
    unsigned short Data2;// Offset=0x4 Size=0x2
    unsigned short Data3;// Offset=0x6 Size=0x2
    unsigned char Data4[8];// Offset=0x8 Size=0x8
};

struct _CIMFS_LAYER_INFORMATION// Size=0x30 (Id=2423)
{
    struct _GUID TargetVolume;// Offset=0x0 Size=0x10
    struct _UNICODE_STRING * CimFiles;// Offset=0x10 Size=0x8
    unsigned long CimFilesCount;// Offset=0x18 Size=0x4
    unsigned long MountFlags;// Offset=0x1c Size=0x4
    unsigned char ParentIsVsmb;// Offset=0x20 Size=0x1
    char * ParentDeviceArcName;// Offset=0x28 Size=0x8
};

union _unnamed_2404// Size=0x30 (Id=2404)
{
    struct _BLOCK_IO_LAYER_INFORMATION BlockIo;// Offset=0x0 Size=0x8
    struct _CIMFS_LAYER_INFORMATION Cimfs;// Offset=0x0 Size=0x30
};

struct _COMPOSITEFS_LAYER_INFORMATION// Size=0x38 (Id=2405)
{
    unsigned long DeviceType;// Offset=0x0 Size=0x4
    union _unnamed_2404 u;// Offset=0x8 Size=0x30
};
