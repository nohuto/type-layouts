struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=210)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Revision;// Offset=0x1 Size=0x1
    unsigned short Size;// Offset=0x2 Size=0x2
};

struct _NDIS_SHARED_MEMORY_PROVIDER_CHARACTERISTICS// Size=0x20 (Id=1460)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    unsigned long Flags;// Offset=0x4 Size=0x4
    void * ProviderContext;// Offset=0x8 Size=0x8
    int  ( * AllocateSharedMemoryHandler)(void * ,struct _NDIS_SHARED_MEMORY_PARAMETERS * ,void ** );// Offset=0x10 Size=0x8
    void  ( * FreeSharedMemoryHandler)(void * ,void * );// Offset=0x18 Size=0x8
};
