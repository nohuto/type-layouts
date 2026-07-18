struct _WMI_TRACE_MESSAGE_PACKET// Size=0x4 (Id=2848)
{
    unsigned short MessageNumber;// Offset=0x0 Size=0x2
    unsigned short OptionFlags;// Offset=0x2 Size=0x2
};

struct _MESSAGE_TRACE_HEADER// Size=0x8 (Id=3309)
{
    union // Size=0x4 (Id=0)
    {
        unsigned long Marker;// Offset=0x0 Size=0x4
        unsigned short Size;// Offset=0x0 Size=0x2
        unsigned char Reserved;// Offset=0x2 Size=0x1
        unsigned char Version;// Offset=0x3 Size=0x1
    };
    union // Size=0x4 (Id=0)
    {
        unsigned long Header;// Offset=0x4 Size=0x4
        struct _WMI_TRACE_MESSAGE_PACKET Packet;// Offset=0x4 Size=0x4
    };
};

struct _MESSAGE_TRACE// Size=0xc (Id=1852)
{
    struct _MESSAGE_TRACE_HEADER MessageHeader;// Offset=0x0 Size=0x8
    unsigned char Data;// Offset=0x8 Size=0x1
};
