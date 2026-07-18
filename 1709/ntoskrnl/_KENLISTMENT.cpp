struct _RTL_BALANCED_LINKS// Size=0x20 (Id=1338)
{
    struct _RTL_BALANCED_LINKS * Parent;// Offset=0x0 Size=0x8
    struct _RTL_BALANCED_LINKS * LeftChild;// Offset=0x8 Size=0x8
    struct _RTL_BALANCED_LINKS * RightChild;// Offset=0x10 Size=0x8
    char Balance;// Offset=0x18 Size=0x1
    unsigned char Reserved[3];// Offset=0x19 Size=0x3
};

struct _KTMOBJECT_NAMESPACE_LINK// Size=0x28 (Id=1349)
{
    struct _RTL_BALANCED_LINKS Links;// Offset=0x0 Size=0x20
    unsigned char Expired;// Offset=0x20 Size=0x1
};

struct _GUID// Size=0x10 (Id=40)
{
    unsigned long Data1;// Offset=0x0 Size=0x4
    unsigned short Data2;// Offset=0x4 Size=0x2
    unsigned short Data3;// Offset=0x6 Size=0x2
    unsigned char Data4[8];// Offset=0x8 Size=0x8
};

struct _LIST_ENTRY// Size=0x10 (Id=23)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _DISPATCHER_HEADER// Size=0x18 (Id=711)
{
    union // Size=0x4 (Id=0)
    {
        long Lock;// Offset=0x0 Size=0x4
        long LockNV;// Offset=0x0 Size=0x4
        unsigned char Type;// Offset=0x0 Size=0x1
        unsigned char Signalling;// Offset=0x1 Size=0x1
        unsigned char Size;// Offset=0x2 Size=0x1
        unsigned char Reserved1;// Offset=0x3 Size=0x1
        unsigned char TimerType;// Offset=0x0 Size=0x1
        union // Size=0x1 (Id=0)
        {
            unsigned char TimerControlFlags;// Offset=0x1 Size=0x1
            struct // Size=0x1 (Id=0)
            {
                unsigned char Absolute:1;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x1
                unsigned char Wake:1;// Offset=0x1 Size=0x1 BitOffset=0x1 BitSize=0x1
                unsigned char EncodedTolerableDelay:6;// Offset=0x1 Size=0x1 BitOffset=0x2 BitSize=0x6
            };
        };
        unsigned char Hand;// Offset=0x2 Size=0x1
        unsigned char TimerMiscFlags;// Offset=0x3 Size=0x1
        struct // Size=0x1 (Id=0)
        {
            unsigned char Index:6;// Offset=0x3 Size=0x1 BitOffset=0x0 BitSize=0x6
            unsigned char Inserted:1;// Offset=0x3 Size=0x1 BitOffset=0x6 BitSize=0x1
            unsigned char Expired:1;// Offset=0x3 Size=0x1 BitOffset=0x7 BitSize=0x1
        };
        unsigned char Timer2Type;// Offset=0x0 Size=0x1
        union // Size=0x1 (Id=0)
        {
            unsigned char Timer2Flags;// Offset=0x1 Size=0x1
            struct // Size=0x1 (Id=0)
            {
                unsigned char Timer2Inserted:1;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x1
                unsigned char Timer2Expiring:1;// Offset=0x1 Size=0x1 BitOffset=0x1 BitSize=0x1
                unsigned char Timer2CancelPending:1;// Offset=0x1 Size=0x1 BitOffset=0x2 BitSize=0x1
                unsigned char Timer2SetPending:1;// Offset=0x1 Size=0x1 BitOffset=0x3 BitSize=0x1
                unsigned char Timer2Running:1;// Offset=0x1 Size=0x1 BitOffset=0x4 BitSize=0x1
                unsigned char Timer2Disabled:1;// Offset=0x1 Size=0x1 BitOffset=0x5 BitSize=0x1
                unsigned char Timer2ReservedFlags:2;// Offset=0x1 Size=0x1 BitOffset=0x6 BitSize=0x2
            };
        };
        unsigned char Timer2ComponentId;// Offset=0x2 Size=0x1
        unsigned char Timer2RelativeId;// Offset=0x3 Size=0x1
        unsigned char QueueType;// Offset=0x0 Size=0x1
        union // Size=0x1 (Id=0)
        {
            unsigned char QueueControlFlags;// Offset=0x1 Size=0x1
            struct // Size=0x1 (Id=0)
            {
                unsigned char Abandoned:1;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x1
                unsigned char DisableIncrement:1;// Offset=0x1 Size=0x1 BitOffset=0x1 BitSize=0x1
                unsigned char QueueReservedControlFlags:6;// Offset=0x1 Size=0x1 BitOffset=0x2 BitSize=0x6
            };
        };
        unsigned char QueueSize;// Offset=0x2 Size=0x1
        unsigned char QueueReserved;// Offset=0x3 Size=0x1
        unsigned char ThreadType;// Offset=0x0 Size=0x1
        unsigned char ThreadReserved;// Offset=0x1 Size=0x1
        union // Size=0x1 (Id=0)
        {
            unsigned char ThreadControlFlags;// Offset=0x2 Size=0x1
            struct // Size=0x1 (Id=0)
            {
                unsigned char CycleProfiling:1;// Offset=0x2 Size=0x1 BitOffset=0x0 BitSize=0x1
                unsigned char CounterProfiling:1;// Offset=0x2 Size=0x1 BitOffset=0x1 BitSize=0x1
                unsigned char GroupScheduling:1;// Offset=0x2 Size=0x1 BitOffset=0x2 BitSize=0x1
                unsigned char AffinitySet:1;// Offset=0x2 Size=0x1 BitOffset=0x3 BitSize=0x1
                unsigned char Tagged:1;// Offset=0x2 Size=0x1 BitOffset=0x4 BitSize=0x1
                unsigned char EnergyProfiling:1;// Offset=0x2 Size=0x1 BitOffset=0x5 BitSize=0x1
                unsigned char ThreadReservedControlFlags:2;// Offset=0x2 Size=0x1 BitOffset=0x6 BitSize=0x2
            };
        };
        unsigned char DebugActive;// Offset=0x3 Size=0x1
        struct // Size=0x1 (Id=0)
        {
            unsigned char ActiveDR7:1;// Offset=0x3 Size=0x1 BitOffset=0x0 BitSize=0x1
            unsigned char Instrumented:1;// Offset=0x3 Size=0x1 BitOffset=0x1 BitSize=0x1
            unsigned char Minimal:1;// Offset=0x3 Size=0x1 BitOffset=0x2 BitSize=0x1
            unsigned char Reserved4:3;// Offset=0x3 Size=0x1 BitOffset=0x3 BitSize=0x3
            unsigned char UmsScheduled:1;// Offset=0x3 Size=0x1 BitOffset=0x6 BitSize=0x1
            unsigned char UmsPrimary:1;// Offset=0x3 Size=0x1 BitOffset=0x7 BitSize=0x1
        };
        unsigned char MutantType;// Offset=0x0 Size=0x1
        unsigned char MutantSize;// Offset=0x1 Size=0x1
        unsigned char DpcActive;// Offset=0x2 Size=0x1
        unsigned char MutantReserved;// Offset=0x3 Size=0x1
    };
    long SignalState;// Offset=0x4 Size=0x4
    struct _LIST_ENTRY WaitListHead;// Offset=0x8 Size=0x10
};

struct _KMUTANT// Size=0x38 (Id=951)
{
    struct _DISPATCHER_HEADER Header;// Offset=0x0 Size=0x18
    struct _LIST_ENTRY MutantListEntry;// Offset=0x18 Size=0x10
    struct _KTHREAD * OwnerThread;// Offset=0x28 Size=0x8
    unsigned char Abandoned;// Offset=0x30 Size=0x1
    unsigned char ApcDisable;// Offset=0x31 Size=0x1
};

enum _KENLISTMENT_STATE
{
    KEnlistmentUninitialized=0,
    KEnlistmentActive=256,
    KEnlistmentPreparing=257,
    KEnlistmentPrepared=258,
    KEnlistmentInDoubt=259,
    KEnlistmentCommitted=260,
    KEnlistmentCommittedNotify=261,
    KEnlistmentCommitRequested=262,
    KEnlistmentAborted=263,
    KEnlistmentDelegated=264,
    KEnlistmentDelegatedDisconnected=265,
    KEnlistmentPrePreparing=266,
    KEnlistmentForgotten=267,
    KEnlistmentRecovering=268,
    KEnlistmentAborting=269,
    KEnlistmentReadOnly=270,
    KEnlistmentOutcomeUnavailable=271,
    KEnlistmentOffline=272,
    KEnlistmentPrePrepared=273,
    KEnlistmentInitialized=274
};

struct _KENLISTMENT_HISTORY// Size=0x8 (Id=1445)
{
    unsigned long Notification;// Offset=0x0 Size=0x4
    enum _KENLISTMENT_STATE NewState;// Offset=0x4 Size=0x4
};

struct _KENLISTMENT// Size=0x1e0 (Id=961)
{
    unsigned long cookie;// Offset=0x0 Size=0x4
    struct _KTMOBJECT_NAMESPACE_LINK NamespaceLink;// Offset=0x8 Size=0x28
    struct _GUID EnlistmentId;// Offset=0x30 Size=0x10
    struct _KMUTANT Mutex;// Offset=0x40 Size=0x38
    struct _LIST_ENTRY NextSameTx;// Offset=0x78 Size=0x10
    struct _LIST_ENTRY NextSameRm;// Offset=0x88 Size=0x10
    struct _KRESOURCEMANAGER * ResourceManager;// Offset=0x98 Size=0x8
    struct _KTRANSACTION * Transaction;// Offset=0xa0 Size=0x8
    enum _KENLISTMENT_STATE State;// Offset=0xa8 Size=0x4
    unsigned long Flags;// Offset=0xac Size=0x4
    unsigned long NotificationMask;// Offset=0xb0 Size=0x4
    void * Key;// Offset=0xb8 Size=0x8
    unsigned long KeyRefCount;// Offset=0xc0 Size=0x4
    void * RecoveryInformation;// Offset=0xc8 Size=0x8
    unsigned long RecoveryInformationLength;// Offset=0xd0 Size=0x4
    void * DynamicNameInformation;// Offset=0xd8 Size=0x8
    unsigned long DynamicNameInformationLength;// Offset=0xe0 Size=0x4
    struct _KTMNOTIFICATION_PACKET * FinalNotification;// Offset=0xe8 Size=0x8
    struct _KENLISTMENT * SupSubEnlistment;// Offset=0xf0 Size=0x8
    void * SupSubEnlHandle;// Offset=0xf8 Size=0x8
    void * SubordinateTxHandle;// Offset=0x100 Size=0x8
    struct _GUID CrmEnlistmentEnId;// Offset=0x108 Size=0x10
    struct _GUID CrmEnlistmentTmId;// Offset=0x118 Size=0x10
    struct _GUID CrmEnlistmentRmId;// Offset=0x128 Size=0x10
    unsigned long NextHistory;// Offset=0x138 Size=0x4
    struct _KENLISTMENT_HISTORY History[20];// Offset=0x13c Size=0xa0
};
