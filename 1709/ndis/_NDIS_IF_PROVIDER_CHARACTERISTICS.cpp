struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=320)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Revision;// Offset=0x1 Size=0x1
    unsigned short Size;// Offset=0x2 Size=0x2
};

struct _NDIS_IF_PROVIDER_CHARACTERISTICS// Size=0x28 (Id=1023)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    int  ( * QueryObjectHandler)(void * ,unsigned int ,unsigned long * ,void * );// Offset=0x8 Size=0x8
    int  ( * SetObjectHandler)(void * ,unsigned int ,unsigned long ,void * );// Offset=0x10 Size=0x8
    void * Reserved1;// Offset=0x18 Size=0x8
    void * Reserved2;// Offset=0x20 Size=0x8
};
