union _DISPATCHER_HEADER::_unnamed_821::_unnamed_821::_unnamed_821// Size=0x1 (Id=821)
{
    unsigned char Timer2Flags;// Offset=0x0 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char Timer2Inserted:1;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char Timer2Expiring:1;// Offset=0x0 Size=0x1 BitOffset=0x1 BitSize=0x1
        unsigned char Timer2CancelPending:1;// Offset=0x0 Size=0x1 BitOffset=0x2 BitSize=0x1
        unsigned char Timer2SetPending:1;// Offset=0x0 Size=0x1 BitOffset=0x3 BitSize=0x1
        unsigned char Timer2Running:1;// Offset=0x0 Size=0x1 BitOffset=0x4 BitSize=0x1
        unsigned char Timer2Disabled:1;// Offset=0x0 Size=0x1 BitOffset=0x5 BitSize=0x1
        unsigned char Timer2ReservedFlags:2;// Offset=0x0 Size=0x1 BitOffset=0x6 BitSize=0x2
    };
};
