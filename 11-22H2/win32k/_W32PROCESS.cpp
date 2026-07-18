struct _EX_PUSH_LOCK// Size=0x8 (Id=98)
{
    union // Size=0x8 (Id=0)
    {
        struct // Size=0x8 (Id=0)
        {
            unsigned long long Locked:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
            unsigned long long Waiting:1;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x1
            unsigned long long Waking:1;// Offset=0x0 Size=0x8 BitOffset=0x2 BitSize=0x1
            unsigned long long MultipleShared:1;// Offset=0x0 Size=0x8 BitOffset=0x3 BitSize=0x1
            unsigned long long Shared:60;// Offset=0x0 Size=0x8 BitOffset=0x4 BitSize=0x3c
        };
        unsigned long long Value;// Offset=0x0 Size=0x8
        void * Ptr;// Offset=0x0 Size=0x8
    };
};

struct _RTL_BALANCED_LINKS// Size=0x20 (Id=541)
{
    struct _RTL_BALANCED_LINKS * Parent;// Offset=0x0 Size=0x8
    struct _RTL_BALANCED_LINKS * LeftChild;// Offset=0x8 Size=0x8
    struct _RTL_BALANCED_LINKS * RightChild;// Offset=0x10 Size=0x8
    char Balance;// Offset=0x18 Size=0x1
    unsigned char Reserved[3];// Offset=0x19 Size=0x3
};

struct _RTL_AVL_TABLE// Size=0x68 (Id=530)
{
    struct _RTL_BALANCED_LINKS BalancedRoot;// Offset=0x0 Size=0x20
    void * OrderedPointer;// Offset=0x20 Size=0x8
    unsigned long WhichOrderedElement;// Offset=0x28 Size=0x4
    unsigned long NumberGenericTableElements;// Offset=0x2c Size=0x4
    unsigned long DepthOfTree;// Offset=0x30 Size=0x4
    struct _RTL_BALANCED_LINKS * RestartKey;// Offset=0x38 Size=0x8
    unsigned long DeleteCount;// Offset=0x40 Size=0x4
    enum _RTL_GENERIC_COMPARE_RESULTS  ( * CompareRoutine)(struct _RTL_AVL_TABLE * ,void * ,void * );// Offset=0x48 Size=0x8
    void *  ( * AllocateRoutine)(struct _RTL_AVL_TABLE * ,unsigned long );// Offset=0x50 Size=0x8
    void  ( * FreeRoutine)(struct _RTL_AVL_TABLE * ,void * );// Offset=0x58 Size=0x8
    void * TableContext;// Offset=0x60 Size=0x8
};

struct _LIST_ENTRY// Size=0x10 (Id=48)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _W32PROCESS// Size=0x128 (Id=160)
{
    struct _EPROCESS * Process;// Offset=0x0 Size=0x8
    unsigned long RefCount;// Offset=0x8 Size=0x4
    unsigned long W32PF_Flags;// Offset=0xc Size=0x4
    struct _KEVENT * InputIdleEvent;// Offset=0x10 Size=0x8
    unsigned long StartCursorHideTime;// Offset=0x18 Size=0x4
    struct _W32PROCESS * NextStart;// Offset=0x20 Size=0x8
    void * pDCAttrList;// Offset=0x28 Size=0x8
    void * pBrushAttrList;// Offset=0x30 Size=0x8
    unsigned long W32Pid;// Offset=0x38 Size=0x4
    long GDIHandleCount;// Offset=0x3c Size=0x4
    unsigned long GDIHandleCountPeak;// Offset=0x40 Size=0x4
    long UserHandleCount;// Offset=0x44 Size=0x4
    unsigned long UserHandleCountPeak;// Offset=0x48 Size=0x4
    struct _EX_PUSH_LOCK GDIPushLock;// Offset=0x50 Size=0x8
    struct _RTL_AVL_TABLE GDIEngUserMemAllocTable;// Offset=0x58 Size=0x68
    struct _LIST_ENTRY GDIDcAttrFreeList;// Offset=0xc0 Size=0x10
    struct _LIST_ENTRY GDIBrushAttrFreeList;// Offset=0xd0 Size=0x10
    struct _LIST_ENTRY GDIW32PIDLockedBitmaps;// Offset=0xe0 Size=0x10
    void * hSecureGdiSharedHandleTable;// Offset=0xf0 Size=0x8
    void * DxProcess;// Offset=0xf8 Size=0x8
    void * DCompositionProcess;// Offset=0x100 Size=0x8
    unsigned long UMPDSandboxingEnabled;// Offset=0x108 Size=0x4
    void * pWakeReference;// Offset=0x110 Size=0x8
    unsigned long defaultDpiContext;// Offset=0x118 Size=0x4
    unsigned short Dpi;// Offset=0x11c Size=0x2
    struct // Size=0x4 (Id=0)
    {
        unsigned int bChangedGdiGammaRamp:1;// Offset=0x120 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned int bReadScreenBits:1;// Offset=0x120 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned int bWroteScreenBits:1;// Offset=0x120 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned int bGUIConverted:1;// Offset=0x120 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned int bImEnabled:1;// Offset=0x120 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned int bGDILimitReachedAtLeastOnce:1;// Offset=0x120 Size=0x4 BitOffset=0x5 BitSize=0x1
    };
    unsigned long Cookie;// Offset=0x124 Size=0x4
};
