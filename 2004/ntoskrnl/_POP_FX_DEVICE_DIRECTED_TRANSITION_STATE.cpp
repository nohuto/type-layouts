struct _POP_FX_DEVICE_DIRECTED_TRANSITION_STATE// Size=0x10 (Id=1732)
{
    void * CompletionContext;// Offset=0x0 Size=0x8
    long CompletionStatus;// Offset=0x8 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long DIrpPending:1;// Offset=0xc Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long DIrpCompleted:1;// Offset=0xc Size=0x4 BitOffset=0x1 BitSize=0x1
    };
};
