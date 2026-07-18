struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=334)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Revision;// Offset=0x1 Size=0x1
    unsigned short Size;// Offset=0x2 Size=0x2
};

struct _RTL_QUERY_REGISTRY_TABLE// Size=0x38 (Id=548)
{
    long  ( * QueryRoutine)(wchar_t * ,unsigned long ,void * ,unsigned long ,void * ,void * );// Offset=0x0 Size=0x8
    unsigned long Flags;// Offset=0x8 Size=0x4
    wchar_t * Name;// Offset=0x10 Size=0x8
    void * EntryContext;// Offset=0x18 Size=0x8
    unsigned long DefaultType;// Offset=0x20 Size=0x4
    void * DefaultData;// Offset=0x28 Size=0x8
    unsigned long DefaultLength;// Offset=0x30 Size=0x4
};

struct _NDIS_WRAPPER_CONFIGURATION_HANDLE// Size=0x88 (Id=385)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    struct _NDIS_MINIPORT_BLOCK * Miniport;// Offset=0x8 Size=0x8
    unsigned long Flags;// Offset=0x10 Size=0x4
    struct _RTL_QUERY_REGISTRY_TABLE ParametersQueryTable[2];// Offset=0x18 Size=0x70
};
