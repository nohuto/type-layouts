struct _WNF_NODE_HEADER// Size=0x4 (Id=880)
{
    unsigned short NodeTypeCode;// Offset=0x0 Size=0x2
    unsigned short NodeByteSize;// Offset=0x2 Size=0x2
};

struct _EX_RUNDOWN_REF// Size=0x8 (Id=458)
{
    union // Size=0x8 (Id=0)
    {
        unsigned long long Count;// Offset=0x0 Size=0x8
        void * Ptr;// Offset=0x0 Size=0x8
    };
};

enum _WNF_DATA_SCOPE
{
    WnfDataScopeSystem=0,
    WnfDataScopeSession=1,
    WnfDataScopeUser=2,
    WnfDataScopeProcess=3,
    WnfDataScopeMachine=4,
    WnfDataScopePhysicalMachine=5
};

struct _LIST_ENTRY// Size=0x10 (Id=3)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
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

struct _WNF_LOCK// Size=0x8 (Id=881)
{
    struct _EX_PUSH_LOCK PushLock;// Offset=0x0 Size=0x8
};

struct _RTL_AVL_TREE// Size=0x8 (Id=120)
{
    struct _RTL_BALANCED_NODE * Root;// Offset=0x0 Size=0x8
};

struct _WNF_SCOPE_INSTANCE// Size=0x50 (Id=885)
{
    struct _WNF_NODE_HEADER Header;// Offset=0x0 Size=0x4
    struct _EX_RUNDOWN_REF RunRef;// Offset=0x8 Size=0x8
    enum _WNF_DATA_SCOPE DataScope;// Offset=0x10 Size=0x4
    unsigned long InstanceIdSize;// Offset=0x14 Size=0x4
    void * InstanceIdData;// Offset=0x18 Size=0x8
    struct _LIST_ENTRY ResolverListEntry;// Offset=0x20 Size=0x10
    struct _WNF_LOCK NameSetLock;// Offset=0x30 Size=0x8
    struct _RTL_AVL_TREE NameSet;// Offset=0x38 Size=0x8
    void * PermanentDataStore;// Offset=0x40 Size=0x8
    void * VolatilePermanentDataStore;// Offset=0x48 Size=0x8
};
