struct _RTL_BALANCED_LINKS// Size=0x10 (Id=625)
{
    struct _RTL_BALANCED_LINKS * Parent;// Offset=0x0 Size=0x4
    struct _RTL_BALANCED_LINKS * LeftChild;// Offset=0x4 Size=0x4
    struct _RTL_BALANCED_LINKS * RightChild;// Offset=0x8 Size=0x4
    char Balance;// Offset=0xc Size=0x1
    unsigned char Reserved[3];// Offset=0xd Size=0x3
};

struct _RTL_AVL_TABLE// Size=0x38 (Id=606)
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

struct _LIST_ENTRY// Size=0x8 (Id=25)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x4
    struct _LIST_ENTRY * Blink;// Offset=0x4 Size=0x4
};

struct _DPH_HEAP_ROOT// Size=0xc0 (Id=543)
{
    unsigned long Signature;// Offset=0x0 Size=0x4
    unsigned long HeapFlags;// Offset=0x4 Size=0x4
    struct _RTL_CRITICAL_SECTION * HeapCritSect;// Offset=0x8 Size=0x4
    unsigned long nRemoteLockAcquired;// Offset=0xc Size=0x4
    struct _DPH_HEAP_BLOCK * pVirtualStorageListHead;// Offset=0x10 Size=0x4
    struct _DPH_HEAP_BLOCK * pVirtualStorageListTail;// Offset=0x14 Size=0x4
    unsigned long nVirtualStorageRanges;// Offset=0x18 Size=0x4
    unsigned long nVirtualStorageBytes;// Offset=0x1c Size=0x4
    struct _RTL_AVL_TABLE BusyNodesTable;// Offset=0x20 Size=0x38
    struct _DPH_HEAP_BLOCK * NodeToAllocate;// Offset=0x58 Size=0x4
    unsigned long nBusyAllocations;// Offset=0x5c Size=0x4
    unsigned long nBusyAllocationBytesCommitted;// Offset=0x60 Size=0x4
    struct _DPH_HEAP_BLOCK * pFreeAllocationListHead;// Offset=0x64 Size=0x4
    struct _DPH_HEAP_BLOCK * pFreeAllocationListTail;// Offset=0x68 Size=0x4
    unsigned long nFreeAllocations;// Offset=0x6c Size=0x4
    unsigned long nFreeAllocationBytesCommitted;// Offset=0x70 Size=0x4
    struct _LIST_ENTRY AvailableAllocationHead;// Offset=0x74 Size=0x8
    unsigned long nAvailableAllocations;// Offset=0x7c Size=0x4
    unsigned long nAvailableAllocationBytesCommitted;// Offset=0x80 Size=0x4
    struct _DPH_HEAP_BLOCK * pUnusedNodeListHead;// Offset=0x84 Size=0x4
    struct _DPH_HEAP_BLOCK * pUnusedNodeListTail;// Offset=0x88 Size=0x4
    unsigned long nUnusedNodes;// Offset=0x8c Size=0x4
    unsigned long nBusyAllocationBytesAccessible;// Offset=0x90 Size=0x4
    struct _DPH_HEAP_BLOCK * pNodePoolListHead;// Offset=0x94 Size=0x4
    struct _DPH_HEAP_BLOCK * pNodePoolListTail;// Offset=0x98 Size=0x4
    unsigned long nNodePools;// Offset=0x9c Size=0x4
    unsigned long nNodePoolBytes;// Offset=0xa0 Size=0x4
    struct _LIST_ENTRY NextHeap;// Offset=0xa4 Size=0x8
    unsigned long ExtraFlags;// Offset=0xac Size=0x4
    unsigned long Seed;// Offset=0xb0 Size=0x4
    void * NormalHeap;// Offset=0xb4 Size=0x4
    struct _RTL_TRACE_BLOCK * CreateStackTrace;// Offset=0xb8 Size=0x4
    void * FirstThread;// Offset=0xbc Size=0x4
};
