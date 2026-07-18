struct _BLOCK_IO_LAYER_INFORMATION// Size=0x8 (Id=2494)
{
    char * ArcName;// Offset=0x0 Size=0x8
};

struct _GUID// Size=0x10 (Id=112)
{
    unsigned long Data1;// Offset=0x0 Size=0x4
    unsigned short Data2;// Offset=0x4 Size=0x2
    unsigned short Data3;// Offset=0x6 Size=0x2
    unsigned char Data4[8];// Offset=0x8 Size=0x8
};

struct _CIMFS_LAYER_INFORMATION// Size=0x20 (Id=2545)
{
    struct _GUID TargetVolume;// Offset=0x0 Size=0x10
    struct _CIM_FILE_LAYER_INFORMATION * CimFiles;// Offset=0x10 Size=0x8
    unsigned long CimFilesCount;// Offset=0x18 Size=0x4
};

struct _COMPOSITEFS_LAYER_INFORMATION// Size=0x30 (Id=2524)
{
    struct _BOOT_LAYER_INFORMATION * ScratchLayer;// Offset=0x0 Size=0x8
    struct _BACKING_LAYER_INFORMATION * BackingLayers;// Offset=0x8 Size=0x8
    unsigned long BackingLayersCount;// Offset=0x10 Size=0x4
    struct _GUID BootUnionGuid;// Offset=0x14 Size=0x10
    union // Size=0x4 (Id=0)
    {
        unsigned long Flags;// Offset=0x24 Size=0x4
        struct // Size=0x4 (Id=0)
        {
            unsigned long UntrustedScratchLayer:1;// Offset=0x24 Size=0x4 BitOffset=0x0 BitSize=0x1
        };
    };
    unsigned long UntrustedScratchDiskNumber;// Offset=0x28 Size=0x4
};

struct _VSMB_LAYER_INFORMATION// Size=0x4 (Id=2538)
{
    unsigned long Flags;// Offset=0x0 Size=0x4
};

struct _UNICODE_STRING// Size=0x10 (Id=6)
{
    unsigned short Length;// Offset=0x0 Size=0x2
    unsigned short MaximumLength;// Offset=0x2 Size=0x2
    wchar_t * Buffer;// Offset=0x8 Size=0x8
};

struct _VHD_LAYER_INFORMATION// Size=0x18 (Id=2614)
{
    struct _BOOT_LAYER_INFORMATION * ParentLayer;// Offset=0x0 Size=0x8
    struct _UNICODE_STRING VhdFilePath;// Offset=0x8 Size=0x10
};

struct _RAMDISK_LAYER_INFORMATION// Size=0x18 (Id=2541)
{
    struct _MEMORY_ALLOCATION_DESCRIPTOR * MemoryDescriptor;// Offset=0x0 Size=0x8
    unsigned long long DiskLength;// Offset=0x8 Size=0x8
    unsigned long long DiskOffset;// Offset=0x10 Size=0x8
};

union _unnamed_2416// Size=0x30 (Id=2416)
{
    union // Size=0x30 (Id=0)
    {
        struct _BLOCK_IO_LAYER_INFORMATION BlockIo;// Offset=0x0 Size=0x8
        struct _CIMFS_LAYER_INFORMATION Cimfs;// Offset=0x0 Size=0x20
        struct _COMPOSITEFS_LAYER_INFORMATION Composite;// Offset=0x0 Size=0x30
        struct _VSMB_LAYER_INFORMATION Vsmb;// Offset=0x0 Size=0x4
        struct _VHD_LAYER_INFORMATION Vhd;// Offset=0x0 Size=0x18
        struct _RAMDISK_LAYER_INFORMATION Ramdisk;// Offset=0x0 Size=0x18
    };
};
