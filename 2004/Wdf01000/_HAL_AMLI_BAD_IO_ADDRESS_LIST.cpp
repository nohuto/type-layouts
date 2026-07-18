struct _HAL_AMLI_BAD_IO_ADDRESS_LIST// Size=0x18 (Id=1774)
{
    unsigned long BadAddrBegin;// Offset=0x0 Size=0x4
    unsigned long BadAddrSize;// Offset=0x4 Size=0x4
    unsigned long OSVersionTrigger;// Offset=0x8 Size=0x4
    long  ( * IOHandler)(unsigned char ,unsigned long ,unsigned long ,unsigned long * );// Offset=0x10 Size=0x8
};
