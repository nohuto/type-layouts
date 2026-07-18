struct _WNF_NODE_HEADER// Size=0x4 (Id=642)
{
    unsigned short NodeTypeCode;// Offset=0x0 Size=0x2
    unsigned short NodeByteSize;// Offset=0x2 Size=0x2
};

struct _LIST_ENTRY// Size=0x10 (Id=22)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
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

struct _WNF_PROCESS_CONTEXT// Size=0x88 (Id=651)
{
    struct _WNF_NODE_HEADER Header;// Offset=0x0 Size=0x4
    struct _EPROCESS * Process;// Offset=0x8 Size=0x8
    struct _LIST_ENTRY WnfProcessesListEntry;// Offset=0x10 Size=0x10
    void * ImplicitScopeInstances[3];// Offset=0x20 Size=0x18
    struct _WNF_LOCK TemporaryNamesListLock;// Offset=0x38 Size=0x8
    struct _LIST_ENTRY TemporaryNamesListHead;// Offset=0x40 Size=0x10
    struct _WNF_LOCK ProcessSubscriptionListLock;// Offset=0x50 Size=0x8
    struct _LIST_ENTRY ProcessSubscriptionListHead;// Offset=0x58 Size=0x10
    struct _WNF_LOCK DeliveryPendingListLock;// Offset=0x68 Size=0x8
    struct _LIST_ENTRY DeliveryPendingListHead;// Offset=0x70 Size=0x10
    struct _KEVENT * NotificationEvent;// Offset=0x80 Size=0x8
};
