struct _WHEA_DRIVER_BUFFER_SET// Size=0x28 (Id=2835)
{
    unsigned long Version;// Offset=0x0 Size=0x4
    unsigned char * Data;// Offset=0x4 Size=0x8
    unsigned long DataSize;// Offset=0xc Size=0x4
    struct _GUID * SectionTypeGuid;// Offset=0x10 Size=0x8
    unsigned char * SectionFriendlyName;// Offset=0x18 Size=0x8
    unsigned char * Flags;// Offset=0x20 Size=0x8
};
