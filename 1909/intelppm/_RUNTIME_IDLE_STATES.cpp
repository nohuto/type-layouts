struct _anonymous_31// Size=0x8 (Id=31)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=32)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _anonymous_31 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _GEN_ADDR// Size=0xc (Id=463)
{
    unsigned char AddressSpaceID;// Offset=0x0 Size=0x1
    unsigned char BitWidth;// Offset=0x1 Size=0x1
    unsigned char BitOffset;// Offset=0x2 Size=0x1
    unsigned char AccessSize;// Offset=0x3 Size=0x1
    union _LARGE_INTEGER Address;// Offset=0x4 Size=0x8
};

struct _RUNTIME_IDLE_CONTEXT// Size=0x18 (Id=685)
{
    union // Size=0xc (Id=0)
    {
        struct _GEN_ADDR Register;// Offset=0x0 Size=0xc
        struct MWAIT_CONTEXT MwaitContext;// Offset=0x0 Size=0x18
    };
};

struct _RUNTIME_IDLE_STATE// Size=0x58 (Id=550)
{
    struct ACPI_CST_STATE * CstState;// Offset=0x0 Size=0x8
    struct _IDLE_DOMAIN_ENTRY * IdleDomain;// Offset=0x8 Size=0x8
    long  ( * Check)(struct _RUNTIME_IDLE_CONTEXT * );// Offset=0x10 Size=0x8
    void  ( * Handler)(struct _RUNTIME_IDLE_CONTEXT * ,unsigned long );// Offset=0x18 Size=0x8
    struct _RUNTIME_IDLE_CONTEXT Context;// Offset=0x20 Size=0x18
    unsigned long long CompositionContext;// Offset=0x38 Size=0x8
    void  ( * ContextDecode)(struct _RUNTIME_IDLE_CONTEXT * ,unsigned long long ,struct _RUNTIME_IDLE_CONTEXT * );// Offset=0x40 Size=0x8
    struct _IDLE_STATE_ENTRY * IdleStateEntry;// Offset=0x48 Size=0x8
    unsigned char Native;// Offset=0x50 Size=0x1
    unsigned char Autonomous;// Offset=0x51 Size=0x1
    unsigned char CStateType;// Offset=0x52 Size=0x1
};

struct _RUNTIME_IDLE_STATES// Size=0x98 (Id=517)
{
    struct POHANDLE__ * FxHandle;// Offset=0x0 Size=0x8
    unsigned long SelectedState;// Offset=0x8 Size=0x4
    unsigned long TargetState;// Offset=0xc Size=0x4
    unsigned long PreferredState;// Offset=0x10 Size=0x4
    unsigned char PreferredStateCount;// Offset=0x14 Size=0x1
    unsigned char PreferredStates[3];// Offset=0x15 Size=0x3
    unsigned long long IdleTime;// Offset=0x18 Size=0x8
    unsigned long long TotalTime;// Offset=0x20 Size=0x8
    unsigned long MaximumDependencies;// Offset=0x28 Size=0x4
    struct _PEP_PROCESSOR_IDLE_DEPENDENCY * DependencyArray;// Offset=0x30 Size=0x8
    unsigned long Count;// Offset=0x38 Size=0x4
    struct _RUNTIME_IDLE_STATE State[1];// Offset=0x40 Size=0x58
};
