struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=316)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Revision;// Offset=0x1 Size=0x1
    unsigned short Size;// Offset=0x2 Size=0x2
};

struct _IPSEC_OFFLOAD_V2_DELETE_SA// Size=0x18 (Id=1452)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    struct _IPSEC_OFFLOAD_V2_DELETE_SA * Next;// Offset=0x8 Size=0x8
    void * OffloadHandle;// Offset=0x10 Size=0x8
};
