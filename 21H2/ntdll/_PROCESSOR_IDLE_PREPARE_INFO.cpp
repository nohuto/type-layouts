struct _PROCESSOR_IDLE_CONSTRAINTS// Size=0x30 (Id=701)
{
    unsigned long long TotalTime;// Offset=0x0 Size=0x8
    unsigned long long IdleTime;// Offset=0x8 Size=0x8
    unsigned long long ExpectedIdleDuration;// Offset=0x10 Size=0x8
    unsigned long long MaxIdleDuration;// Offset=0x18 Size=0x8
    unsigned long OverrideState;// Offset=0x20 Size=0x4
    unsigned long TimeCheck;// Offset=0x24 Size=0x4
    unsigned char PromotePercent;// Offset=0x28 Size=0x1
    unsigned char DemotePercent;// Offset=0x29 Size=0x1
    unsigned char Parked;// Offset=0x2a Size=0x1
    unsigned char Interruptible;// Offset=0x2b Size=0x1
    unsigned char PlatformIdle;// Offset=0x2c Size=0x1
    unsigned char ExpectedWakeReason;// Offset=0x2d Size=0x1
    unsigned char IdleStateMax;// Offset=0x2e Size=0x1
};

struct _PROCESSOR_IDLE_PREPARE_INFO// Size=0x58 (Id=727)
{
    void * Context;// Offset=0x0 Size=0x8
    struct _PROCESSOR_IDLE_CONSTRAINTS Constraints;// Offset=0x8 Size=0x30
    unsigned long DependencyCount;// Offset=0x38 Size=0x4
    unsigned long DependencyUsed;// Offset=0x3c Size=0x4
    struct _PROCESSOR_IDLE_DEPENDENCY * DependencyArray;// Offset=0x40 Size=0x8
    unsigned long PlatformIdleStateIndex;// Offset=0x48 Size=0x4
    unsigned long ProcessorIdleStateIndex;// Offset=0x4c Size=0x4
    unsigned long IdleSelectFailureMask;// Offset=0x50 Size=0x4
};
