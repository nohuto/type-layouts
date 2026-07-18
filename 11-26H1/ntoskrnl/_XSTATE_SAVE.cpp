struct _XSTATE_CONTEXT// Size=0x20 (Id=2223)
{
    unsigned long long Mask;// Offset=0x0 Size=0x8
    unsigned long Length;// Offset=0x8 Size=0x4
    unsigned char Flags;// Offset=0xc Size=0x1
    unsigned char Reserved0[3];// Offset=0xd Size=0x3
    struct _XSAVE_AREA * Area;// Offset=0x10 Size=0x8
    void * Buffer;// Offset=0x18 Size=0x8
};

struct _XSTATE_SAVE// Size=0x38 (Id=769)
{
    struct _XSTATE_SAVE * Prev;// Offset=0x0 Size=0x8
    struct _KTHREAD * Thread;// Offset=0x8 Size=0x8
    unsigned char Level;// Offset=0x10 Size=0x1
    struct _XSTATE_CONTEXT XStateContext;// Offset=0x18 Size=0x20
};
