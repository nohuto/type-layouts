struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=320)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Revision;// Offset=0x1 Size=0x1
    unsigned short Size;// Offset=0x2 Size=0x2
};

struct _NET_BUFFER_LIST_POOL_PARAMETERS// Size=0x10 (Id=824)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    unsigned char ProtocolId;// Offset=0x4 Size=0x1
    unsigned char fAllocateNetBuffer;// Offset=0x5 Size=0x1
    unsigned short ContextSize;// Offset=0x6 Size=0x2
    unsigned long PoolTag;// Offset=0x8 Size=0x4
    unsigned long DataSize;// Offset=0xc Size=0x4
};
