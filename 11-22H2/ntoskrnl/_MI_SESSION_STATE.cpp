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

struct _RTL_AVL_TREE// Size=0x8 (Id=117)
{
    struct _RTL_BALANCED_NODE * Root;// Offset=0x0 Size=0x8
};

struct _MI_SESSION_STATE// Size=0x30 (Id=1376)
{
    struct _EX_PUSH_LOCK IdLock;// Offset=0x0 Size=0x8
    struct _EPROCESS * LeaderProcess;// Offset=0x8 Size=0x8
    struct _EX_PUSH_LOCK InitializeLock;// Offset=0x10 Size=0x8
    void * SessionBase;// Offset=0x18 Size=0x8
    struct _RTL_AVL_TREE SessionIdNodes;// Offset=0x20 Size=0x8
    void * ImageVaStart;// Offset=0x28 Size=0x8
};
