struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=211)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Revision;// Offset=0x1 Size=0x1
    unsigned short Size;// Offset=0x2 Size=0x2
};

struct _NDIS_GENERIC_OBJECT// Size=0x20 (Id=1488)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    void * Caller;// Offset=0x8 Size=0x8
    void * CallersCaller;// Offset=0x10 Size=0x8
    struct _DRIVER_OBJECT * DriverObject;// Offset=0x18 Size=0x8
};
