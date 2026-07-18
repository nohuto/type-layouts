union _PCI_EXPRESS_LINK_IDE_STREAM_STATUS_REGISTER// Size=0x4 (Id=1426)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long State:4;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x4
        unsigned long Rsvd:27;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1b
        unsigned long ReceivedIdeFailMsg:1;// Offset=0x0 Size=0x4 BitOffset=0x1f BitSize=0x1
    };
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};
