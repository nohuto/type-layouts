struct _NDIS_EVENT_LOG_ENTRY// Size=0x10 (Id=1392)
{
    unsigned short EventId;// Offset=0x0 Size=0x2
    union // Size=0x2 (Id=0)
    {
        struct // Size=0x2 (Id=0)
        {
            unsigned short Timestamp:15;// Offset=0x2 Size=0x2 BitOffset=0x0 BitSize=0xf
            unsigned short TimestampScale:1;// Offset=0x2 Size=0x2 BitOffset=0xf BitSize=0x1
        };
        unsigned short TimestampValue;// Offset=0x2 Size=0x2
    };
    unsigned long StackTrace;// Offset=0x4 Size=0x4
    void * Context;// Offset=0x8 Size=0x8
};
