struct _KERNEL_STACK_SEGMENT// Size=0x10 (Id=551)
{
    unsigned long StackBase;// Offset=0x0 Size=0x4
    unsigned long StackLimit;// Offset=0x4 Size=0x4
    unsigned long KernelStack;// Offset=0x8 Size=0x4
    unsigned long InitialStack;// Offset=0xc Size=0x4
};

struct _KSTACK_CONTROL// Size=0x20 (Id=62)
{
    unsigned long StackBase;// Offset=0x0 Size=0x4
    union // Size=0x4 (Id=0)
    {
        unsigned long ActualLimit;// Offset=0x4 Size=0x4
        struct // Size=0x4 (Id=0)
        {
            unsigned long StackExpansion:1;// Offset=0x4 Size=0x4 BitOffset=0x0 BitSize=0x1
        };
    };
    struct _KTRAP_FRAME * PreviousTrapFrame;// Offset=0x8 Size=0x4
    void * PreviousExceptionList;// Offset=0xc Size=0x4
    struct _KERNEL_STACK_SEGMENT Previous;// Offset=0x10 Size=0x10
};
