struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=314)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Revision;// Offset=0x1 Size=0x1
    unsigned short Size;// Offset=0x2 Size=0x2
};

struct _NDIS_HD_SPLIT_CURRENT_CONFIG// Size=0x1c (Id=673)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    unsigned long HardwareCapabilities;// Offset=0x4 Size=0x4
    unsigned long CurrentCapabilities;// Offset=0x8 Size=0x4
    unsigned long HDSplitFlags;// Offset=0xc Size=0x4
    unsigned long HDSplitCombineFlags;// Offset=0x10 Size=0x4
    unsigned long BackfillSize;// Offset=0x14 Size=0x4
    unsigned long MaxHeaderSize;// Offset=0x18 Size=0x4
};
