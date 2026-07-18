struct _RTL_AVL_TREE// Size=0x8 (Id=120)
{
    struct _RTL_BALANCED_NODE * Root;// Offset=0x0 Size=0x8
};

struct _EX_PUSH_LOCK// Size=0x8 (Id=122)
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

struct _LIST_ENTRY// Size=0x10 (Id=3)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _EX_RUNDOWN_REF// Size=0x8 (Id=456)
{
    union // Size=0x8 (Id=0)
    {
        unsigned long long Count;// Offset=0x0 Size=0x8
        void * Ptr;// Offset=0x0 Size=0x8
    };
};

struct _MI_ENCLAVE_STATE// Size=0x48 (Id=1164)
{
    struct _RTL_AVL_TREE EnclaveRegions;// Offset=0x0 Size=0x8
    void * EnclaveMetadataPage;// Offset=0x8 Size=0x8
    struct _RTL_BITMAP * EnclaveMetadataBitMap;// Offset=0x10 Size=0x8
    struct _EX_PUSH_LOCK EnclaveMetadataEntryLock;// Offset=0x18 Size=0x8
    long EnclaveMetadataPageLock;// Offset=0x20 Size=0x4
    struct _LIST_ENTRY EnclaveList;// Offset=0x28 Size=0x10
    struct _EX_PUSH_LOCK EnclaveListLock;// Offset=0x38 Size=0x8
    struct _EX_RUNDOWN_REF ShutdownRundown;// Offset=0x40 Size=0x8
};
