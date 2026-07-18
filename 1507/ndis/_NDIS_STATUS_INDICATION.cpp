struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=313)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Revision;// Offset=0x1 Size=0x1
    unsigned short Size;// Offset=0x2 Size=0x2
};

struct _GUID// Size=0x10 (Id=3)
{
    unsigned long Data1;// Offset=0x0 Size=0x4
    unsigned short Data2;// Offset=0x4 Size=0x2
    unsigned short Data3;// Offset=0x6 Size=0x2
    unsigned char Data4[8];// Offset=0x8 Size=0x8
};

struct _NDIS_STATUS_INDICATION// Size=0x70 (Id=1337)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    void * SourceHandle;// Offset=0x8 Size=0x8
    unsigned long PortNumber;// Offset=0x10 Size=0x4
    int StatusCode;// Offset=0x14 Size=0x4
    unsigned long Flags;// Offset=0x18 Size=0x4
    void * DestinationHandle;// Offset=0x20 Size=0x8
    void * RequestId;// Offset=0x28 Size=0x8
    void * StatusBuffer;// Offset=0x30 Size=0x8
    unsigned long StatusBufferSize;// Offset=0x38 Size=0x4
    struct _GUID Guid;// Offset=0x3c Size=0x10
    void * NdisReserved[4];// Offset=0x50 Size=0x20
};
