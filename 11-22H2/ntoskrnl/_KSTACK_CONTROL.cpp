union _KERNEL_SHADOW_STACK_LIMIT// Size=0x8 (Id=1087)
{
    unsigned long long AllFields;// Offset=0x0 Size=0x8
    struct // Size=0x8 (Id=0)
    {
        unsigned long long ShadowStackType:3;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x3
        unsigned long long Unused:9;// Offset=0x0 Size=0x8 BitOffset=0x3 BitSize=0x9
        unsigned long long ShadowStackLimitPfn:52;// Offset=0x0 Size=0x8 BitOffset=0xc BitSize=0x34
    };
};

struct _KERNEL_STACK_SEGMENT// Size=0x40 (Id=1736)
{
    unsigned long long StackBase;// Offset=0x0 Size=0x8
    unsigned long long StackLimit;// Offset=0x8 Size=0x8
    unsigned long long KernelStack;// Offset=0x10 Size=0x8
    unsigned long long InitialStack;// Offset=0x18 Size=0x8
    unsigned long long KernelShadowStackBase;// Offset=0x20 Size=0x8
    union _KERNEL_SHADOW_STACK_LIMIT KernelShadowStackLimit;// Offset=0x28 Size=0x8
    unsigned long long KernelShadowStack;// Offset=0x30 Size=0x8
    unsigned long long KernelShadowStackInitial;// Offset=0x38 Size=0x8
};

struct _KSTACK_CONTROL// Size=0x50 (Id=505)
{
    unsigned long long StackBase;// Offset=0x0 Size=0x8
    union // Size=0x8 (Id=0)
    {
        unsigned long long ActualLimit;// Offset=0x8 Size=0x8
        struct // Size=0x8 (Id=0)
        {
            unsigned long long StackExpansion:1;// Offset=0x8 Size=0x8 BitOffset=0x0 BitSize=0x1
        };
    };
    struct _KERNEL_STACK_SEGMENT Previous;// Offset=0x10 Size=0x40
};
