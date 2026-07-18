union _WDF_USB_CONTROL_SETUP_PACKET::<unnamed-type-Packet>::<unnamed-type-bm>// Size=0x1 (Id=2371)
{
    struct <unnamed-type-Request>// Size=0x1 (Id=23581)
    {
        unsigned char Recipient:2;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x2
        unsigned char Reserved:3;// Offset=0x0 Size=0x1 BitOffset=0x2 BitSize=0x3
        unsigned char Type:2;// Offset=0x0 Size=0x1 BitOffset=0x5 BitSize=0x2
        unsigned char Dir:1;// Offset=0x0 Size=0x1 BitOffset=0x7 BitSize=0x1
    };
    struct _WDF_USB_CONTROL_SETUP_PACKET::<unnamed-type-Packet>::<unnamed-type-bm>::<unnamed-type-Request> Request;// Offset=0x0 Size=0x1
    unsigned char Byte;// Offset=0x0 Size=0x1
};
