struct _DISPATCHER_HEADER::_anonymous_811::_anonymous_811// Size=0x4 (Id=811)
{
    unsigned char TimerType;// Offset=0x0 Size=0x1
    union // Size=0x1 (Id=0)
    {
        unsigned char TimerControlFlags;// Offset=0x1 Size=0x1
        struct // Size=0x1 (Id=0)
        {
            unsigned char Absolute:1;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x1
            unsigned char Wake:1;// Offset=0x1 Size=0x1 BitOffset=0x1 BitSize=0x1
            unsigned char EncodedTolerableDelay:6;// Offset=0x1 Size=0x1 BitOffset=0x2 BitSize=0x6
        };
    };
    unsigned char Hand;// Offset=0x2 Size=0x1
    union // Size=0x1 (Id=0)
    {
        unsigned char TimerMiscFlags;// Offset=0x3 Size=0x1
        struct // Size=0x1 (Id=0)
        {
            unsigned char Index:6;// Offset=0x3 Size=0x1 BitOffset=0x0 BitSize=0x6
            unsigned char Inserted:1;// Offset=0x3 Size=0x1 BitOffset=0x6 BitSize=0x1
            unsigned char Expired:1;// Offset=0x3 Size=0x1 BitOffset=0x7 BitSize=0x1
        };
    };
};
