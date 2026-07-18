struct _EX_PUSH_LOCK// Size=0x8 (Id=85)
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

struct _RTL_AVL_TREE// Size=0x8 (Id=39)
{
    struct _RTL_BALANCED_NODE * Root;// Offset=0x0 Size=0x8
};

struct _MMSESSION// Size=0x20 (Id=609)
{
    struct _EX_PUSH_LOCK SystemSpaceViewLock;// Offset=0x0 Size=0x8
    struct _EX_PUSH_LOCK * SystemSpaceViewLockPointer;// Offset=0x8 Size=0x8
    struct _RTL_AVL_TREE ViewRoot;// Offset=0x10 Size=0x8
    unsigned long ViewCount;// Offset=0x18 Size=0x4
    unsigned long BitmapFailures;// Offset=0x1c Size=0x4
};

struct _MI_SESSION_STATE// Size=0x88 (Id=837)
{
    struct _MMSESSION SystemSession;// Offset=0x0 Size=0x20
    unsigned long DetachTimeStamp;// Offset=0x20 Size=0x4
    unsigned char CodePageEdited;// Offset=0x24 Size=0x1
    unsigned long * DynamicPoolBitBuffer;// Offset=0x28 Size=0x8
    unsigned long long * DynamicVaBitBuffer;// Offset=0x30 Size=0x8
    unsigned long long DynamicVaBitBufferPages;// Offset=0x38 Size=0x8
    void * DynamicVaStart;// Offset=0x40 Size=0x8
    void * ImageVaStart;// Offset=0x48 Size=0x8
    unsigned long * DynamicPtesBitBuffer;// Offset=0x50 Size=0x8
    struct _EX_PUSH_LOCK IdLock;// Offset=0x58 Size=0x8
    struct _EPROCESS * LeaderProcess;// Offset=0x60 Size=0x8
    struct _EX_PUSH_LOCK InitializeLock;// Offset=0x68 Size=0x8
    struct _MMWSL_INSTANCE * WorkingSetList;// Offset=0x70 Size=0x8
    void * SessionBase;// Offset=0x78 Size=0x8
    void * SessionCore;// Offset=0x80 Size=0x8
};
