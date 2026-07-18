struct _WMI_TRACE_MESSAGE_PACKET// Size=0x4 (Id=2230)
{
    unsigned short MessageNumber;// Offset=0x0 Size=0x2
    unsigned short OptionFlags;// Offset=0x2 Size=0x2
};

struct _MESSAGE_TRACE_HEADER// Size=0x8 (Id=3353)
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

struct _GUID// Size=0x10 (Id=175)
{
    unsigned long Data1;// Offset=0x0 Size=0x4
    unsigned short Data2;// Offset=0x4 Size=0x2
    unsigned short Data3;// Offset=0x6 Size=0x2
    unsigned char Data4[8];// Offset=0x8 Size=0x8
};

struct _MESSAGE_TRACE_USER// Size=0x28 (Id=2383)
{
    struct _MESSAGE_TRACE_HEADER MessageHeader;// Offset=0x0 Size=0x8
    struct _GUID MessageGuid;// Offset=0x8 Size=0x10
    unsigned long MessageFlags;// Offset=0x18 Size=0x4
    unsigned long DataSize;// Offset=0x1c Size=0x4
    unsigned long long Data;// Offset=0x20 Size=0x8
};
