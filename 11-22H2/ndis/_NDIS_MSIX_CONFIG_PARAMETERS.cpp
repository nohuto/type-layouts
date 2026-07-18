struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=232)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Revision;// Offset=0x1 Size=0x1
    unsigned short Size;// Offset=0x2 Size=0x2
};

enum _NDIS_MSIX_TABLE_CONFIG
{
    NdisMSIXTableConfigSetTableEntry=0,
    NdisMSIXTableConfigMaskTableEntry=1,
    NdisMSIXTableConfigUnmaskTableEntry=2,
    NdisMSIXTableConfigMax=3
};

struct _NDIS_MSIX_CONFIG_PARAMETERS// Size=0x10 (Id=1940)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    enum _NDIS_MSIX_TABLE_CONFIG ConfigOperation;// Offset=0x4 Size=0x4
    unsigned long TableEntry;// Offset=0x8 Size=0x4
    unsigned long MessageNumber;// Offset=0xc Size=0x4
};
