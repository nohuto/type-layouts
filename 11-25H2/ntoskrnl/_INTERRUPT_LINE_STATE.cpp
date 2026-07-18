enum _KINTERRUPT_POLARITY
{
    InterruptPolarityUnknown=0,
    InterruptActiveHigh=1,
    InterruptRisingEdge=1,
    InterruptActiveLow=2,
    InterruptFallingEdge=2,
    InterruptActiveBoth=3,
    InterruptActiveBothTriggerLow=3,
    InterruptActiveBothTriggerHigh=4
};

enum _KINTERRUPT_MODE
{
    LevelSensitive=0,
    Latched=1
};

struct _INTERRUPT_LINE// Size=0x8 (Id=268)
{
    unsigned long UnitId;// Offset=0x0 Size=0x4
    long Line;// Offset=0x4 Size=0x4
};

enum _INTERRUPT_TARGET_TYPE
{
    InterruptTargetInvalid=0,
    InterruptTargetAllIncludingSelf=1,
    InterruptTargetAllExcludingSelf=2,
    InterruptTargetSelfOnly=3,
    InterruptTargetPhysical=4,
    InterruptTargetLogicalFlat=5,
    InterruptTargetLogicalClustered=6,
    InterruptTargetRemapIndex=7,
    InterruptTargetHypervisor=8
};

struct _unnamed_300// Size=0x10 (Id=300)
{
    unsigned long Low32;// Offset=0x0 Size=0x4
    unsigned long High32;// Offset=0x4 Size=0x4
    unsigned long long InterruptData;// Offset=0x8 Size=0x8
};

struct _INTERRUPT_TARGET// Size=0x18 (Id=301)
{
    enum _INTERRUPT_TARGET_TYPE Target;// Offset=0x0 Size=0x4
    union // Size=0x10 (Id=0)
    {
        unsigned long PhysicalTarget;// Offset=0x8 Size=0x4
        unsigned long LogicalFlatTarget;// Offset=0x8 Size=0x4
        unsigned long RemapIndex;// Offset=0x8 Size=0x4
        unsigned long ClusterId;// Offset=0x8 Size=0x4
        unsigned long ClusterMask;// Offset=0xc Size=0x4
        struct _unnamed_300 HypervisorTarget;// Offset=0x8 Size=0x10
    };
};

struct _INTERRUPT_LINE_STATE// Size=0x38 (Id=327)
{
    enum _KINTERRUPT_POLARITY Polarity;// Offset=0x0 Size=0x4
    unsigned char EmulateActiveBoth;// Offset=0x4 Size=0x1
    enum _KINTERRUPT_MODE TriggerMode;// Offset=0x8 Size=0x4
    unsigned long Flags;// Offset=0xc Size=0x4
    struct _INTERRUPT_LINE Routing;// Offset=0x10 Size=0x8
    struct _INTERRUPT_TARGET ProcessorTarget;// Offset=0x18 Size=0x18
    unsigned long Vector;// Offset=0x30 Size=0x4
    unsigned long Priority;// Offset=0x34 Size=0x4
};
