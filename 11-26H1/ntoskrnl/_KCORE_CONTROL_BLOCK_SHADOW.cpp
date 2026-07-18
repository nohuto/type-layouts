union _KCCB_SHADOW_PROCESSOR_STATE// Size=0x1 (Id=1934)
{
    struct // Size=0x1 (Id=0)
    {
        unsigned char Idle:1;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char Transitioning:1;// Offset=0x0 Size=0x1 BitOffset=0x1 BitSize=0x1
    };
    unsigned char AllState;// Offset=0x0 Size=0x1
};

struct _KCORE_CONTROL_BLOCK_SHADOW// Size=0x40 (Id=1771)
{
    unsigned long long Lock;// Offset=0x0 Size=0x8
    unsigned long long CurrentIsolationDomain;// Offset=0x8 Size=0x8
    unsigned long long NextIsolationDomain;// Offset=0x10 Size=0x8
    unsigned char TotalProcessors;// Offset=0x18 Size=0x1
    unsigned char IdleProcessors;// Offset=0x19 Size=0x1
    unsigned char NewDomainProcessors;// Offset=0x1a Size=0x1
    unsigned char Spare;// Offset=0x1b Size=0x1
    union _KCCB_SHADOW_PROCESSOR_STATE ProcessorStates[4];// Offset=0x1c Size=0x4
    unsigned long long InterruptTargets[4];// Offset=0x20 Size=0x20
};
