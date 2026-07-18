union _HUBPDO_CLEANUP_FLAGS// Size=0x4 (Id=386)
{
    unsigned long ul;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long WaitPdoIo:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long DisconnectFromHub:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long IoDeletePdo:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long ResetPortData:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long IoDeleted:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
    };
};
