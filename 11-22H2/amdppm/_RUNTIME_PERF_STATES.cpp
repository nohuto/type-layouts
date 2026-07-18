struct _RUNTIME_PERF_STATES// Size=0x50 (Id=521)
{
    long  ( * PStateHandler)(unsigned long long ,unsigned long long ,unsigned long long ,unsigned long );// Offset=0x0 Size=0x8
    long  ( * TStateHandler)(unsigned long long ,unsigned long long ,unsigned long long ,unsigned long );// Offset=0x8 Size=0x8
    long  ( * TStateHandlerHidden)(unsigned long ,unsigned long long ,unsigned long long ,unsigned long long ,unsigned long );// Offset=0x10 Size=0x8
    long  ( * PStateHandlerHidden)(unsigned long ,unsigned long long ,unsigned long long ,unsigned long long ,unsigned long );// Offset=0x18 Size=0x8
    unsigned long  ( * FlagHandler)(unsigned long ,unsigned long );// Offset=0x20 Size=0x8
    unsigned long long PStateContext;// Offset=0x28 Size=0x8
    unsigned long long TStateContext;// Offset=0x30 Size=0x8
    struct _RUNTIME_PERF_STATE * States;// Offset=0x38 Size=0x8
    unsigned long StateCount;// Offset=0x40 Size=0x4
    unsigned long PStateCount;// Offset=0x44 Size=0x4
    unsigned long TStateCount;// Offset=0x48 Size=0x4
};
