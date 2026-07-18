struct _PEP_PROCESSOR_IDLE_DEPENDENCY// Size=0x10 (Id=794)
{
    union // Size=0x8 (Id=0)
    {
        struct POHANDLE__ * TargetProcessor;// Offset=0x0 Size=0x8
        void * DeviceContext;// Offset=0x0 Size=0x8
    };
    unsigned char ExpectedState;// Offset=0x8 Size=0x1
    unsigned char AllowDeeperStates;// Offset=0x9 Size=0x1
    unsigned char LooseDependency;// Offset=0xa Size=0x1
};

struct _PEP_PLATFORM_IDLE_STATE// Size=0x30 (Id=756)
{
    union // Size=0x8 (Id=0)
    {
        struct POHANDLE__ * InitiatingProcessor;// Offset=0x0 Size=0x8
        void * DeviceContext;// Offset=0x0 Size=0x8
    };
    unsigned char InitiatingState;// Offset=0x8 Size=0x1
    unsigned long Latency;// Offset=0xc Size=0x4
    unsigned long BreakEvenDuration;// Offset=0x10 Size=0x4
    unsigned long DependencyArrayUsed;// Offset=0x14 Size=0x4
    unsigned long DependencyArrayCount;// Offset=0x18 Size=0x4
    struct _PEP_PROCESSOR_IDLE_DEPENDENCY DependencyArray[1];// Offset=0x20 Size=0x10
};
