struct _unnamed_693// Size=0x1 (Id=693)
{
    struct // Size=0x1 (Id=0)
    {
        unsigned char MaxStreams:5;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x5
        unsigned char Reserved1:3;// Offset=0x0 Size=0x1 BitOffset=0x5 BitSize=0x3
    };
};

struct _unnamed_694// Size=0x1 (Id=694)
{
    struct // Size=0x1 (Id=0)
    {
        unsigned char Mult:2;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x2
        unsigned char Reserved2:5;// Offset=0x0 Size=0x1 BitOffset=0x2 BitSize=0x5
        unsigned char SspCompanion:1;// Offset=0x0 Size=0x1 BitOffset=0x7 BitSize=0x1
    };
};

union _unnamed_695// Size=0x1 (Id=695)
{
    unsigned char AsUchar;// Offset=0x0 Size=0x1
    struct _unnamed_693 Bulk;// Offset=0x0 Size=0x1
    struct _unnamed_694 Isochronous;// Offset=0x0 Size=0x1
};

struct _USB_SUPERSPEED_ENDPOINT_COMPANION_DESCRIPTOR// Size=0x6 (Id=696)
{
    unsigned char bLength;// Offset=0x0 Size=0x1
    unsigned char bDescriptorType;// Offset=0x1 Size=0x1
    unsigned char bMaxBurst;// Offset=0x2 Size=0x1
    union _unnamed_695 bmAttributes;// Offset=0x3 Size=0x1
    unsigned short wBytesPerInterval;// Offset=0x4 Size=0x2
};
