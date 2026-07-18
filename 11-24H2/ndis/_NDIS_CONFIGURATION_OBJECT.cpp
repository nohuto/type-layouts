struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=242)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Revision;// Offset=0x1 Size=0x1
    unsigned short Size;// Offset=0x2 Size=0x2
};

struct _NDIS_CONFIGURATION_OBJECT// Size=0x18 (Id=1323)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    void * NdisHandle;// Offset=0x8 Size=0x8
    unsigned long Flags;// Offset=0x10 Size=0x4
};
