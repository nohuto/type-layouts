struct _LIST_ENTRY// Size=0x10 (Id=31)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _NDIS_WAN_PACKET// Size=0x70 (Id=1351)
{
    struct _LIST_ENTRY WanPacketQueue;// Offset=0x0 Size=0x10
    unsigned char * CurrentBuffer;// Offset=0x10 Size=0x8
    unsigned long CurrentLength;// Offset=0x18 Size=0x4
    unsigned char * StartBuffer;// Offset=0x20 Size=0x8
    unsigned char * EndBuffer;// Offset=0x28 Size=0x8
    void * ProtocolReserved1;// Offset=0x30 Size=0x8
    void * ProtocolReserved2;// Offset=0x38 Size=0x8
    void * ProtocolReserved3;// Offset=0x40 Size=0x8
    void * ProtocolReserved4;// Offset=0x48 Size=0x8
    void * MacReserved1;// Offset=0x50 Size=0x8
    void * MacReserved2;// Offset=0x58 Size=0x8
    void * MacReserved3;// Offset=0x60 Size=0x8
    void * MacReserved4;// Offset=0x68 Size=0x8
};
