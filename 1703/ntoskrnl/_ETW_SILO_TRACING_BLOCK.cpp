struct _EX_FAST_REF// Size=0x8 (Id=93)
{
    union // Size=0x8 (Id=0)
    {
        void * Object;// Offset=0x0 Size=0x8
        struct // Size=0x8 (Id=0)
        {
            unsigned long long RefCnt:4;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x4
        };
        unsigned long long Value;// Offset=0x0 Size=0x8
    };
};

struct _ETW_SILO_TRACING_BLOCK// Size=0x400 (Id=711)
{
    struct _EX_FAST_REF ProcessorBuffers[64];// Offset=0x0 Size=0x200
    unsigned long long EventsLoggedCount[64];// Offset=0x200 Size=0x200
};
