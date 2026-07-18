union _USB_PORT_EXT_STATUS// Size=0x4 (Id=2195)
{
    unsigned long AsUlong32;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long RxSublinkSpeedID:4;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x4
        unsigned long TxSublinkSpeedID:4;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x4
        unsigned long RxLaneCount:4;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x4
        unsigned long TxLaneCount:4;// Offset=0x0 Size=0x4 BitOffset=0xc BitSize=0x4
        unsigned long Reserved:16;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x10
    };
};
