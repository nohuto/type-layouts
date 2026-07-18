struct _GUID// Size=0x10 (Id=86)
{
    unsigned long Data1;// Offset=0x0 Size=0x4
    unsigned short Data2;// Offset=0x4 Size=0x2
    unsigned short Data3;// Offset=0x6 Size=0x2
    unsigned char Data4[8];// Offset=0x8 Size=0x8
};

struct _WHEA_ERROR_SOURCE_CONFIGURATION_DEVICE_DRIVER// Size=0x54 (Id=2817)
{
    unsigned long Version;// Offset=0x0 Size=0x4
    struct _GUID SourceGuid;// Offset=0x4 Size=0x10
    unsigned short LogTag;// Offset=0x14 Size=0x2
    unsigned char Reserved[6];// Offset=0x16 Size=0x6
    long  ( * Initialize)(void * ,unsigned long );// Offset=0x1c Size=0x8
    void  ( * Uninitialize)(void * );// Offset=0x24 Size=0x8
    unsigned long MaxSectionDataLength;// Offset=0x2c Size=0x4
    unsigned long MaxSectionsPerReport;// Offset=0x30 Size=0x4
    struct _GUID CreatorId;// Offset=0x34 Size=0x10
    struct _GUID PartitionId;// Offset=0x44 Size=0x10
};
