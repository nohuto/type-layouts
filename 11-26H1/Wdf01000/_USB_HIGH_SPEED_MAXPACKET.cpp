union _USB_HIGH_SPEED_MAXPACKET// Size=0x2 (Id=2254)
{
    struct _MP// Size=0x2 (Id=22687)
    {
        unsigned short MaxPacket:11;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0xb
        unsigned short HSmux:2;// Offset=0x0 Size=0x2 BitOffset=0xb BitSize=0x2
        unsigned short Reserved:3;// Offset=0x0 Size=0x2 BitOffset=0xd BitSize=0x3
    };
    unsigned short us;// Offset=0x0 Size=0x2
};
