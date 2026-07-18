struct _EX_PUSH_LOCK// Size=0x4 (Id=81)
{
    union // Size=0x4 (Id=0)
    {
        struct // Size=0x4 (Id=0)
        {
            unsigned long Locked:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
            unsigned long Waiting:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
            unsigned long Waking:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
            unsigned long MultipleShared:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
            unsigned long Shared:28;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1c
        };
        unsigned long Value;// Offset=0x0 Size=0x4
        void * Ptr;// Offset=0x0 Size=0x4
    };
};

struct _RTL_BALANCED_LINKS// Size=0x10 (Id=481)
{
    struct _RTL_BALANCED_LINKS * Parent;// Offset=0x0 Size=0x4
    struct _RTL_BALANCED_LINKS * LeftChild;// Offset=0x4 Size=0x4
    struct _RTL_BALANCED_LINKS * RightChild;// Offset=0x8 Size=0x4
    char Balance;// Offset=0xc Size=0x1
    unsigned char Reserved[3];// Offset=0xd Size=0x3
};

struct _RTL_AVL_TABLE// Size=0x38 (Id=471)
{
    struct _RTL_BALANCED_LINKS BalancedRoot;// Offset=0x0 Size=0x10
    void * OrderedPointer;// Offset=0x10 Size=0x4
    unsigned long WhichOrderedElement;// Offset=0x14 Size=0x4
    unsigned long NumberGenericTableElements;// Offset=0x18 Size=0x4
    unsigned long DepthOfTree;// Offset=0x1c Size=0x4
    struct _RTL_BALANCED_LINKS * RestartKey;// Offset=0x20 Size=0x4
    unsigned long DeleteCount;// Offset=0x24 Size=0x4
    enum _RTL_GENERIC_COMPARE_RESULTS  ( * CompareRoutine)(struct _RTL_AVL_TABLE * ,void * ,void * );// Offset=0x28 Size=0x4
    void *  ( * AllocateRoutine)(struct _RTL_AVL_TABLE * ,unsigned long );// Offset=0x2c Size=0x4
    void  ( * FreeRoutine)(struct _RTL_AVL_TABLE * ,void * );// Offset=0x30 Size=0x4
    void * TableContext;// Offset=0x34 Size=0x4
};

struct _LIST_ENTRY// Size=0x8 (Id=32)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x4
    struct _LIST_ENTRY * Blink;// Offset=0x4 Size=0x4
};

struct _W32PROCESS// Size=0xa8 (Id=138)
{
    struct _EPROCESS * Process;// Offset=0x0 Size=0x4
    unsigned long RefCount;// Offset=0x4 Size=0x4
    unsigned long W32PF_Flags;// Offset=0x8 Size=0x4
    struct _KEVENT * InputIdleEvent;// Offset=0xc Size=0x4
    unsigned long StartCursorHideTime;// Offset=0x10 Size=0x4
    struct _W32PROCESS * NextStart;// Offset=0x14 Size=0x4
    void * pDCAttrList;// Offset=0x18 Size=0x4
    void * pBrushAttrList;// Offset=0x1c Size=0x4
    unsigned long W32Pid;// Offset=0x20 Size=0x4
    long GDIHandleCount;// Offset=0x24 Size=0x4
    unsigned long GDIHandleCountPeak;// Offset=0x28 Size=0x4
    long UserHandleCount;// Offset=0x2c Size=0x4
    unsigned long UserHandleCountPeak;// Offset=0x30 Size=0x4
    struct _EX_PUSH_LOCK GDIPushLock;// Offset=0x34 Size=0x4
    struct _RTL_AVL_TABLE GDIEngUserMemAllocTable;// Offset=0x38 Size=0x38
    struct _LIST_ENTRY GDIDcAttrFreeList;// Offset=0x70 Size=0x8
    struct _LIST_ENTRY GDIBrushAttrFreeList;// Offset=0x78 Size=0x8
    struct _LIST_ENTRY GDIW32PIDLockedBitmaps;// Offset=0x80 Size=0x8
    void * hSecureGdiSharedHandleTable;// Offset=0x88 Size=0x4
    void * DxProcess;// Offset=0x8c Size=0x4
    void * DCompositionProcess;// Offset=0x90 Size=0x4
    unsigned long UMPDSandboxingEnabled;// Offset=0x94 Size=0x4
    void * pWakeReference;// Offset=0x98 Size=0x4
    unsigned long defaultDpiContext;// Offset=0x9c Size=0x4
    unsigned short Dpi;// Offset=0xa0 Size=0x2
    struct // Size=0x4 (Id=0)
    {
        int bChangedGdiGammaRamp:1;// Offset=0xa4 Size=0x4 BitOffset=0x0 BitSize=0x1
        int bReadScreenBits:1;// Offset=0xa4 Size=0x4 BitOffset=0x1 BitSize=0x1
        int bWroteScreenBits:1;// Offset=0xa4 Size=0x4 BitOffset=0x2 BitSize=0x1
    };
};
