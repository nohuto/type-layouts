struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=355)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Revision;// Offset=0x1 Size=0x1
    unsigned short Size;// Offset=0x2 Size=0x2
};

struct _NDIS_DRIVER_WRAPPER_HANDLE// Size=0x10 (Id=1412)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    void * NdisWrapperHandle;// Offset=0x8 Size=0x8
};
