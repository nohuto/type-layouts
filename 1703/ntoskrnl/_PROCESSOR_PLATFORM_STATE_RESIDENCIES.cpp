struct _PROCESSOR_PLATFORM_STATE_RESIDENCY// Size=0x10 (Id=1511)
{
    unsigned long long Residency;// Offset=0x0 Size=0x8
    unsigned long long TransitionCount;// Offset=0x8 Size=0x8
};

struct _PROCESSOR_PLATFORM_STATE_RESIDENCIES// Size=0x18 (Id=1076)
{
    unsigned long Count;// Offset=0x0 Size=0x4
    struct _PROCESSOR_PLATFORM_STATE_RESIDENCY States[1];// Offset=0x8 Size=0x10
};
