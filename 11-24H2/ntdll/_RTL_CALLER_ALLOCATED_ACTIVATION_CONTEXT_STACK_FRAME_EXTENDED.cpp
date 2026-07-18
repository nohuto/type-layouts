struct _RTL_ACTIVATION_CONTEXT_STACK_FRAME// Size=0x18 (Id=810)
{
    struct _RTL_ACTIVATION_CONTEXT_STACK_FRAME * Previous;// Offset=0x0 Size=0x8
    struct _ACTIVATION_CONTEXT * ActivationContext;// Offset=0x8 Size=0x8
    unsigned long Flags;// Offset=0x10 Size=0x4
};

struct _RTL_CALLER_ALLOCATED_ACTIVATION_CONTEXT_STACK_FRAME_EXTENDED// Size=0x48 (Id=767)
{
    unsigned long long Size;// Offset=0x0 Size=0x8
    unsigned long Format;// Offset=0x8 Size=0x4
    struct _RTL_ACTIVATION_CONTEXT_STACK_FRAME Frame;// Offset=0x10 Size=0x18
    void * Extra1;// Offset=0x28 Size=0x8
    void * Extra2;// Offset=0x30 Size=0x8
    void * Extra3;// Offset=0x38 Size=0x8
    void * Extra4;// Offset=0x40 Size=0x8
};
