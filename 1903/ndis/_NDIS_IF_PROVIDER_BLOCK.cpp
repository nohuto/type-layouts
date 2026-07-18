struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=359)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Revision;// Offset=0x1 Size=0x1
    unsigned short Size;// Offset=0x2 Size=0x2
};

struct _LIST_ENTRY// Size=0x10 (Id=28)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _NDIS_IF_PROVIDER_CHARACTERISTICS// Size=0x28 (Id=1131)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    int  ( * QueryObjectHandler)(void * ,unsigned int ,unsigned long * ,void * );// Offset=0x8 Size=0x8
    int  ( * SetObjectHandler)(void * ,unsigned int ,unsigned long ,void * );// Offset=0x10 Size=0x8
    void * Reserved1;// Offset=0x18 Size=0x8
    void * Reserved2;// Offset=0x20 Size=0x8
};

struct _NDIS_IF_PROVIDER_BLOCK// Size=0x58 (Id=1085)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    struct _LIST_ENTRY Link;// Offset=0x8 Size=0x10
    struct _LIST_ENTRY IfList;// Offset=0x18 Size=0x10
    void * IfProviderContext;// Offset=0x28 Size=0x8
    struct _NDIS_IF_PROVIDER_CHARACTERISTICS ProviderCharacteristics;// Offset=0x30 Size=0x28
};
