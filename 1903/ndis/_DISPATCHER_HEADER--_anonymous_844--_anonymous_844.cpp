struct _DISPATCHER_HEADER::_anonymous_844::_anonymous_844// Size=0x4 (Id=844)
{
    unsigned char QueueType;// Offset=0x0 Size=0x1
    union // Size=0x1 (Id=0)
    {
        unsigned char QueueControlFlags;// Offset=0x1 Size=0x1
        struct // Size=0x1 (Id=0)
        {
            unsigned char Abandoned:1;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x1
            unsigned char DisableIncrement:1;// Offset=0x1 Size=0x1 BitOffset=0x1 BitSize=0x1
            unsigned char QueueReservedControlFlags:6;// Offset=0x1 Size=0x1 BitOffset=0x2 BitSize=0x6
        };
    };
    unsigned char QueueSize;// Offset=0x2 Size=0x1
    unsigned char QueueReserved;// Offset=0x3 Size=0x1
};
