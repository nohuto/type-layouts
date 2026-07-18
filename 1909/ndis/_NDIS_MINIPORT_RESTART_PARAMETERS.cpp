struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=359)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Revision;// Offset=0x1 Size=0x1
    unsigned short Size;// Offset=0x2 Size=0x2
};

struct _NDIS_MINIPORT_RESTART_PARAMETERS// Size=0x18 (Id=1025)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    struct _NDIS_RESTART_ATTRIBUTES * RestartAttributes;// Offset=0x8 Size=0x8
    unsigned long Flags;// Offset=0x10 Size=0x4
};
