struct _XSTATE_CONTEXT// Size=0x20 (Id=602)
{
    unsigned long long Mask;// Offset=0x0 Size=0x8
    unsigned long Length;// Offset=0x8 Size=0x4
    unsigned long Reserved1;// Offset=0xc Size=0x4
    struct _XSAVE_AREA * Area;// Offset=0x10 Size=0x8
    void * Buffer;// Offset=0x18 Size=0x8
};

struct _XSTATE_SAVE// Size=0x38 (Id=521)
{
    struct _XSTATE_SAVE * Prev;// Offset=0x0 Size=0x8
    struct _KTHREAD * Thread;// Offset=0x8 Size=0x8
    unsigned char Level;// Offset=0x10 Size=0x1
    struct _XSTATE_CONTEXT XStateContext;// Offset=0x18 Size=0x20
};
