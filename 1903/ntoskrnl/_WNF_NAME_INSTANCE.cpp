struct _WNF_NODE_HEADER// Size=0x4 (Id=642)
{
    unsigned short NodeTypeCode;// Offset=0x0 Size=0x2
    unsigned short NodeByteSize;// Offset=0x2 Size=0x2
};

struct _EX_RUNDOWN_REF// Size=0x8 (Id=194)
{
    union // Size=0x8 (Id=0)
    {
        unsigned long long Count;// Offset=0x0 Size=0x8
        void * Ptr;// Offset=0x0 Size=0x8
    };
};

struct _RTL_BALANCED_NODE// Size=0x18 (Id=39)
{
    union // Size=0x10 (Id=0)
    {
        struct _RTL_BALANCED_NODE * Children[2];// Offset=0x0 Size=0x10
        struct _RTL_BALANCED_NODE * Left;// Offset=0x0 Size=0x8
        struct _RTL_BALANCED_NODE * Right;// Offset=0x8 Size=0x8
    };
    union // Size=0x1 (Id=0)
    {
        struct // Size=0x1 (Id=0)
        {
            union // Size=0x1 (Id=0)
            {
                unsigned char Red:1;// Offset=0x10 Size=0x1 BitOffset=0x0 BitSize=0x1
                unsigned char Balance:2;// Offset=0x10 Size=0x1 BitOffset=0x0 BitSize=0x2
            };
        };
        unsigned long long ParentValue;// Offset=0x10 Size=0x8
    };
};

struct _WNF_STATE_NAME_STRUCT// Size=0x8 (Id=646)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long Version:4;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x4
        unsigned long long NameLifetime:2;// Offset=0x0 Size=0x8 BitOffset=0x4 BitSize=0x2
        unsigned long long DataScope:4;// Offset=0x0 Size=0x8 BitOffset=0x6 BitSize=0x4
        unsigned long long PermanentData:1;// Offset=0x0 Size=0x8 BitOffset=0xa BitSize=0x1
        unsigned long long Sequence:53;// Offset=0x0 Size=0x8 BitOffset=0xb BitSize=0x35
    };
};

struct _WNF_STATE_NAME_REGISTRATION// Size=0x18 (Id=859)
{
    unsigned long MaxStateSize;// Offset=0x0 Size=0x4
    struct _WNF_TYPE_ID * TypeId;// Offset=0x8 Size=0x8
    struct _SECURITY_DESCRIPTOR * SecurityDescriptor;// Offset=0x10 Size=0x8
};

struct _EX_PUSH_LOCK// Size=0x8 (Id=92)
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

struct _WNF_LOCK// Size=0x8 (Id=643)
{
    struct _EX_PUSH_LOCK PushLock;// Offset=0x0 Size=0x8
};

struct _LIST_ENTRY// Size=0x10 (Id=22)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _WNF_NAME_INSTANCE// Size=0xa8 (Id=648)
{
    struct _WNF_NODE_HEADER Header;// Offset=0x0 Size=0x4
    struct _EX_RUNDOWN_REF RunRef;// Offset=0x8 Size=0x8
    struct _RTL_BALANCED_NODE TreeLinks;// Offset=0x10 Size=0x18
    struct _WNF_STATE_NAME_STRUCT StateName;// Offset=0x28 Size=0x8
    struct _WNF_SCOPE_INSTANCE * ScopeInstance;// Offset=0x30 Size=0x8
    struct _WNF_STATE_NAME_REGISTRATION StateNameInfo;// Offset=0x38 Size=0x18
    struct _WNF_LOCK StateDataLock;// Offset=0x50 Size=0x8
    struct _WNF_STATE_DATA * StateData;// Offset=0x58 Size=0x8
    unsigned long CurrentChangeStamp;// Offset=0x60 Size=0x4
    void * PermanentDataStore;// Offset=0x68 Size=0x8
    struct _WNF_LOCK StateSubscriptionListLock;// Offset=0x70 Size=0x8
    struct _LIST_ENTRY StateSubscriptionListHead;// Offset=0x78 Size=0x10
    struct _LIST_ENTRY TemporaryNameListEntry;// Offset=0x88 Size=0x10
    struct _EPROCESS * CreatorProcess;// Offset=0x98 Size=0x8
    long DataSubscribersCount;// Offset=0xa0 Size=0x4
    long CurrentDeliveryCount;// Offset=0xa4 Size=0x4
};
