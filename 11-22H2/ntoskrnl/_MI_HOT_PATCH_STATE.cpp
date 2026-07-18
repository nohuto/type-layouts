struct _RTL_AVL_TREE// Size=0x8 (Id=117)
{
    struct _RTL_BALANCED_NODE * Root;// Offset=0x0 Size=0x8
};

struct _EX_PUSH_LOCK// Size=0x8 (Id=120)
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

struct _MI_HOT_PATCH_PROCESS_CONTEXT// Size=0x18 (Id=1848)
{
    struct _EPROCESS * Process;// Offset=0x0 Size=0x8
    void * ProcessHandle;// Offset=0x8 Size=0x8
    unsigned long TbFlushStamp;// Offset=0x10 Size=0x4
};

struct _MI_HOT_PATCH_STATE// Size=0x60 (Id=1469)
{
    struct _RTL_AVL_TREE UserSidPatchLists;// Offset=0x0 Size=0x8
    struct _RTL_AVL_TREE GlobalHotPatchList;// Offset=0x8 Size=0x8
    struct _RTL_AVL_TREE PreviouslyRegisteredHotPatchList;// Offset=0x10 Size=0x8
    struct _RTL_AVL_TREE SecureImageActivePatches;// Offset=0x18 Size=0x8
    struct _EX_PUSH_LOCK HotPatchListLock;// Offset=0x20 Size=0x8
    struct _MI_HOT_PATCH_PROCESS_CONTEXT HotPatchProcessContext;// Offset=0x28 Size=0x18
    struct _KLDR_DATA_TABLE_ENTRY * InProgressPatchTableEntry;// Offset=0x40 Size=0x8
    struct _KLDR_DATA_TABLE_ENTRY * InProgressBaseTableEntry;// Offset=0x48 Size=0x8
    char ReadyForPatchOperations;// Offset=0x50 Size=0x1
    unsigned long HotPatchReserveSize;// Offset=0x54 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long HotPatchingEnabled:1;// Offset=0x58 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long EnforcePatchSequenceNumbers:1;// Offset=0x58 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long HotPatchTestExecuted:1;// Offset=0x58 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long Spare:29;// Offset=0x58 Size=0x4 BitOffset=0x3 BitSize=0x1d
    };
};
