union _PCI_EXPRESS_PRI_STATUS_REGISTER// Size=0x2 (Id=2748)
{
    struct // Size=0x2 (Id=0)
    {
        unsigned short ResponseFailure:1;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0x1
        unsigned short UnexpectedPageRequestGroupIndex:1;// Offset=0x0 Size=0x2 BitOffset=0x1 BitSize=0x1
        unsigned short Rsvd:6;// Offset=0x0 Size=0x2 BitOffset=0x2 BitSize=0x6
        unsigned short Stopped:1;// Offset=0x0 Size=0x2 BitOffset=0x8 BitSize=0x1
        unsigned short Rsvd2:6;// Offset=0x0 Size=0x2 BitOffset=0x9 BitSize=0x6
        unsigned short PrgResponsePasidRequired:1;// Offset=0x0 Size=0x2 BitOffset=0xf BitSize=0x1
    };
    unsigned short AsUSHORT;// Offset=0x0 Size=0x2
};
