struct _KERNEL_STACK_SEGMENT// Size=0x20 (Id=493)
{
    unsigned long long StackBase;// Offset=0x0 Size=0x8
    unsigned long long StackLimit;// Offset=0x8 Size=0x8
    unsigned long long KernelStack;// Offset=0x10 Size=0x8
    unsigned long long InitialStack;// Offset=0x18 Size=0x8
};

struct _KSTACK_CONTROL// Size=0x30 (Id=73)
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
    struct _KERNEL_STACK_SEGMENT Previous;// Offset=0x10 Size=0x20
};
