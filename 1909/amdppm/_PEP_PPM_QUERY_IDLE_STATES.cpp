struct _PEP_PROCESSOR_IDLE_STATE// Size=0x4 (Id=688)
{
    union // Size=0x4 (Id=0)
    {
        unsigned long Ulong;// Offset=0x0 Size=0x4
        struct // Size=0x4 (Id=0)
        {
            unsigned long Interruptible:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
            unsigned long CacheCoherent:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
            unsigned long ThreadContextRetained:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
            unsigned long CStateType:4;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x4
            unsigned long Reserved:25;// Offset=0x0 Size=0x4 BitOffset=0x7 BitSize=0x19
        };
    };
};

struct _PEP_PPM_QUERY_IDLE_STATES// Size=0xc (Id=473)
{
    unsigned long Count;// Offset=0x0 Size=0x4
    unsigned long MaximumCoordinatedProcessors;// Offset=0x4 Size=0x4
    struct _PEP_PROCESSOR_IDLE_STATE IdleStates[1];// Offset=0x8 Size=0x4
};
