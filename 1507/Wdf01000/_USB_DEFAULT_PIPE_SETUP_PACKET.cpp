union _BM_REQUEST_TYPE// Size=0x1 (Id=2040)
{
    struct _BM// Size=0x1 (Id=4887)
    {
        unsigned char Recipient:2;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x2
        unsigned char Reserved:3;// Offset=0x0 Size=0x1 BitOffset=0x2 BitSize=0x3
        unsigned char Type:2;// Offset=0x0 Size=0x1 BitOffset=0x5 BitSize=0x2
        unsigned char Dir:1;// Offset=0x0 Size=0x1 BitOffset=0x7 BitSize=0x1
    };
    unsigned char B;// Offset=0x0 Size=0x1
};

struct _USB_DEFAULT_PIPE_SETUP_PACKET// Size=0x8 (Id=3334)
{
    union // Size=0x4 (Id=0)
    {
        union _BM_REQUEST_TYPE bmRequestType;// Offset=0x0 Size=0x1
        unsigned char bRequest;// Offset=0x1 Size=0x1
        union _wValue// Size=0x2 (Id=14021)
        {
            unsigned char LowByte;// Offset=0x0 Size=0x1
            unsigned char HiByte;// Offset=0x1 Size=0x1
            unsigned short W;// Offset=0x0 Size=0x2
        };
        union _USB_DEFAULT_PIPE_SETUP_PACKET::_wValue wValue;// Offset=0x2 Size=0x2
        union _wIndex// Size=0x2 (Id=14026)
        {
            unsigned char LowByte;// Offset=0x0 Size=0x1
            unsigned char HiByte;// Offset=0x1 Size=0x1
            unsigned short W;// Offset=0x0 Size=0x2
        };
        union _USB_DEFAULT_PIPE_SETUP_PACKET::_wIndex wIndex;// Offset=0x4 Size=0x2
    };
    unsigned short wLength;// Offset=0x6 Size=0x2
};
