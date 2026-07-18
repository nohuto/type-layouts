struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=320)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Revision;// Offset=0x1 Size=0x1
    unsigned short Size;// Offset=0x2 Size=0x2
};

struct _LIST_ENTRY// Size=0x10 (Id=29)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _NDIS_POOL_HEADER// Size=0x20 (Id=986)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    unsigned long long ListLock;// Offset=0x8 Size=0x8
    struct _LIST_ENTRY AllocatedList;// Offset=0x10 Size=0x10
};
