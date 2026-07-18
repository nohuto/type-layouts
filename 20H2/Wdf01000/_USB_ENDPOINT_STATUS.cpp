union _USB_ENDPOINT_STATUS// Size=0x2 (Id=1756)
{
    unsigned short AsUshort16;// Offset=0x0 Size=0x2
    struct // Size=0x2 (Id=0)
    {
        unsigned short Halt:1;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0x1
        unsigned short Reserved:15;// Offset=0x0 Size=0x2 BitOffset=0x1 BitSize=0xf
    };
};
