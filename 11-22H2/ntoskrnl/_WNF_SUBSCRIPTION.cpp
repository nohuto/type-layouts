struct _WNF_NODE_HEADER// Size=0x4 (Id=979)
{
    unsigned short NodeTypeCode;// Offset=0x0 Size=0x2
    unsigned short NodeByteSize;// Offset=0x2 Size=0x2
};

struct _EX_RUNDOWN_REF// Size=0x8 (Id=253)
{
    union // Size=0x8 (Id=0)
    {
        unsigned long long Count;// Offset=0x0 Size=0x8
        void * Ptr;// Offset=0x0 Size=0x8
    };
};

struct _LIST_ENTRY// Size=0x10 (Id=4)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _WNF_STATE_NAME_STRUCT// Size=0x8 (Id=983)
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

enum _WNF_SUBSCRIPTION_STATE
{
    WNF_SUB_STATE_QUIESCENT=0,
    WNF_SUB_STATE_READY_TO_DELIVER=1,
    WNF_SUB_STATE_IN_DELIVERY=2,
    WNF_SUB_STATE_RETRY=3
};

struct _WNF_SUBSCRIPTION// Size=0x88 (Id=987)
{
    struct _WNF_NODE_HEADER Header;// Offset=0x0 Size=0x4
    struct _EX_RUNDOWN_REF RunRef;// Offset=0x8 Size=0x8
    unsigned long long SubscriptionId;// Offset=0x10 Size=0x8
    struct _LIST_ENTRY ProcessSubscriptionListEntry;// Offset=0x18 Size=0x10
    struct _EPROCESS * Process;// Offset=0x28 Size=0x8
    struct _WNF_NAME_INSTANCE * NameInstance;// Offset=0x30 Size=0x8
    struct _WNF_STATE_NAME_STRUCT StateName;// Offset=0x38 Size=0x8
    struct _LIST_ENTRY StateSubscriptionListEntry;// Offset=0x40 Size=0x10
    unsigned long long CallbackRoutine;// Offset=0x50 Size=0x8
    void * CallbackContext;// Offset=0x58 Size=0x8
    unsigned long CurrentChangeStamp;// Offset=0x60 Size=0x4
    unsigned long SubscribedEventSet;// Offset=0x64 Size=0x4
    struct _LIST_ENTRY PendingSubscriptionListEntry;// Offset=0x68 Size=0x10
    enum _WNF_SUBSCRIPTION_STATE SubscriptionState;// Offset=0x78 Size=0x4
    unsigned long SignaledEventSet;// Offset=0x7c Size=0x4
    unsigned long InDeliveryEventSet;// Offset=0x80 Size=0x4
};
