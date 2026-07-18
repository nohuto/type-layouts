struct _KSSTREAM_POINTER_OFFSET// Size=0x10 (Id=2069)
{
    union // Size=0x8 (Id=0)
    {
        unsigned char * Data;// Offset=0x0 Size=0x8
        struct _KSMAPPING * Mappings;// Offset=0x0 Size=0x8
    };
    unsigned long Count;// Offset=0x8 Size=0x4
    unsigned long Remaining;// Offset=0xc Size=0x4
};

struct _KSSTREAM_POINTER// Size=0x40 (Id=2049)
{
    void * Context;// Offset=0x0 Size=0x8
    struct _KSPIN * Pin;// Offset=0x8 Size=0x8
    struct KSSTREAM_HEADER * StreamHeader;// Offset=0x10 Size=0x8
    struct _KSSTREAM_POINTER_OFFSET * Offset;// Offset=0x18 Size=0x8
    struct _KSSTREAM_POINTER_OFFSET OffsetIn;// Offset=0x20 Size=0x10
    struct _KSSTREAM_POINTER_OFFSET OffsetOut;// Offset=0x30 Size=0x10
};
