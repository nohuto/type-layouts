struct _GUID// Size=0x10 (Id=112)
{
    unsigned long Data1;// Offset=0x0 Size=0x4
    unsigned short Data2;// Offset=0x4 Size=0x2
    unsigned short Data3;// Offset=0x6 Size=0x2
    unsigned char Data4[8];// Offset=0x8 Size=0x8
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
