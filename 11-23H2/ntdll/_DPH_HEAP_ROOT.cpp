struct _RTL_BALANCED_LINKS// Size=0x20 (Id=690)
{
    struct _RTL_BALANCED_LINKS * Parent;// Offset=0x0 Size=0x8
    struct _RTL_BALANCED_LINKS * LeftChild;// Offset=0x8 Size=0x8
    struct _RTL_BALANCED_LINKS * RightChild;// Offset=0x10 Size=0x8
    char Balance;// Offset=0x18 Size=0x1
    unsigned char Reserved[3];// Offset=0x19 Size=0x3
};

struct _RTL_AVL_TABLE// Size=0x68 (Id=666)
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

struct _LIST_ENTRY// Size=0x10 (Id=34)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _DPH_HEAP_ROOT// Size=0x168 (Id=600)
{
    unsigned long Signature;// Offset=0x0 Size=0x4
    unsigned long HeapFlags;// Offset=0x4 Size=0x4
    struct _RTL_CRITICAL_SECTION * HeapCritSect;// Offset=0x8 Size=0x8
    unsigned long nRemoteLockAcquired;// Offset=0x10 Size=0x4
    struct _DPH_HEAP_BLOCK * pVirtualStorageListHead;// Offset=0x18 Size=0x8
    struct _DPH_HEAP_BLOCK * pVirtualStorageListTail;// Offset=0x20 Size=0x8
    unsigned long nVirtualStorageRanges;// Offset=0x28 Size=0x4
    unsigned long long nVirtualStorageBytes;// Offset=0x30 Size=0x8
    struct _RTL_AVL_TABLE BusyNodesTable;// Offset=0x38 Size=0x68
    struct _DPH_HEAP_BLOCK * NodeToAllocate;// Offset=0xa0 Size=0x8
    unsigned long nBusyAllocations;// Offset=0xa8 Size=0x4
    unsigned long long nBusyAllocationBytesCommitted;// Offset=0xb0 Size=0x8
    struct _DPH_HEAP_BLOCK * pFreeAllocationListHead;// Offset=0xb8 Size=0x8
    struct _DPH_HEAP_BLOCK * pFreeAllocationListTail;// Offset=0xc0 Size=0x8
    unsigned long nFreeAllocations;// Offset=0xc8 Size=0x4
    unsigned long long nFreeAllocationBytesCommitted;// Offset=0xd0 Size=0x8
    struct _LIST_ENTRY AvailableAllocationHead;// Offset=0xd8 Size=0x10
    unsigned long nAvailableAllocations;// Offset=0xe8 Size=0x4
    unsigned long long nAvailableAllocationBytesCommitted;// Offset=0xf0 Size=0x8
    struct _DPH_HEAP_BLOCK * pUnusedNodeListHead;// Offset=0xf8 Size=0x8
    struct _DPH_HEAP_BLOCK * pUnusedNodeListTail;// Offset=0x100 Size=0x8
    unsigned long nUnusedNodes;// Offset=0x108 Size=0x4
    unsigned long long nBusyAllocationBytesAccessible;// Offset=0x110 Size=0x8
    struct _DPH_HEAP_BLOCK * pNodePoolListHead;// Offset=0x118 Size=0x8
    struct _DPH_HEAP_BLOCK * pNodePoolListTail;// Offset=0x120 Size=0x8
    unsigned long nNodePools;// Offset=0x128 Size=0x4
    unsigned long long nNodePoolBytes;// Offset=0x130 Size=0x8
    struct _LIST_ENTRY NextHeap;// Offset=0x138 Size=0x10
    unsigned long ExtraFlags;// Offset=0x148 Size=0x4
    unsigned long Seed;// Offset=0x14c Size=0x4
    void * NormalHeap;// Offset=0x150 Size=0x8
    struct _RTL_TRACE_BLOCK * CreateStackTrace;// Offset=0x158 Size=0x8
    void * FirstThread;// Offset=0x160 Size=0x8
};
