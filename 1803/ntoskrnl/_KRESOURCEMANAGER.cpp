struct _LIST_ENTRY// Size=0x10 (Id=22)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _DISPATCHER_HEADER// Size=0x18 (Id=736)
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
                unsigned char SchedulerAssist:1;// Offset=0x2 Size=0x1 BitOffset=0x6 BitSize=0x1
                unsigned char ThreadReservedControlFlags:1;// Offset=0x2 Size=0x1 BitOffset=0x7 BitSize=0x1
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

struct _KEVENT// Size=0x18 (Id=69)
{
    struct _DISPATCHER_HEADER Header;// Offset=0x0 Size=0x18
};

enum _KRESOURCEMANAGER_STATE
{
    KResourceManagerUninitialized=0,
    KResourceManagerOffline=1,
    KResourceManagerOnline=2
};

struct _KMUTANT// Size=0x38 (Id=1029)
{
    struct _DISPATCHER_HEADER Header;// Offset=0x0 Size=0x18
    struct _LIST_ENTRY MutantListEntry;// Offset=0x18 Size=0x10
    struct _KTHREAD * OwnerThread;// Offset=0x28 Size=0x8
    unsigned char Abandoned;// Offset=0x30 Size=0x1
    unsigned char ApcDisable;// Offset=0x31 Size=0x1
};

struct _RTL_BALANCED_LINKS// Size=0x20 (Id=1433)
{
    struct _RTL_BALANCED_LINKS * Parent;// Offset=0x0 Size=0x8
    struct _RTL_BALANCED_LINKS * LeftChild;// Offset=0x8 Size=0x8
    struct _RTL_BALANCED_LINKS * RightChild;// Offset=0x10 Size=0x8
    char Balance;// Offset=0x18 Size=0x1
    unsigned char Reserved[3];// Offset=0x19 Size=0x3
};

struct _KTMOBJECT_NAMESPACE_LINK// Size=0x28 (Id=1447)
{
    struct _RTL_BALANCED_LINKS Links;// Offset=0x0 Size=0x20
    unsigned char Expired;// Offset=0x20 Size=0x1
};

struct _GUID// Size=0x10 (Id=41)
{
    unsigned long Data1;// Offset=0x0 Size=0x4
    unsigned short Data2;// Offset=0x4 Size=0x2
    unsigned short Data3;// Offset=0x6 Size=0x2
    unsigned char Data4[8];// Offset=0x8 Size=0x8
};

struct _KQUEUE// Size=0x40 (Id=1545)
{
    struct _DISPATCHER_HEADER Header;// Offset=0x0 Size=0x18
    struct _LIST_ENTRY EntryListHead;// Offset=0x18 Size=0x10
    unsigned long CurrentCount;// Offset=0x28 Size=0x4
    unsigned long MaximumCount;// Offset=0x2c Size=0x4
    struct _LIST_ENTRY ThreadListHead;// Offset=0x30 Size=0x10
};

struct _UNICODE_STRING// Size=0x10 (Id=29)
{
    unsigned short Length;// Offset=0x0 Size=0x2
    unsigned short MaximumLength;// Offset=0x2 Size=0x2
    wchar_t * Buffer;// Offset=0x8 Size=0x8
};

struct _RTL_AVL_TABLE// Size=0x68 (Id=1376)
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

struct _KTMOBJECT_NAMESPACE// Size=0xa8 (Id=1590)
{
    struct _RTL_AVL_TABLE Table;// Offset=0x0 Size=0x68
    struct _KMUTANT Mutex;// Offset=0x68 Size=0x38
    unsigned short LinksOffset;// Offset=0xa0 Size=0x2
    unsigned short GuidOffset;// Offset=0xa2 Size=0x2
    unsigned char Expired;// Offset=0xa4 Size=0x1
};

struct _KRESOURCEMANAGER_COMPLETION_BINDING// Size=0x28 (Id=1332)
{
    struct _LIST_ENTRY NotificationListHead;// Offset=0x0 Size=0x10
    void * Port;// Offset=0x10 Size=0x8
    unsigned long long Key;// Offset=0x18 Size=0x8
    struct _EPROCESS * BindingProcess;// Offset=0x20 Size=0x8
};

struct _KRESOURCEMANAGER// Size=0x250 (Id=1149)
{
    struct _KEVENT NotificationAvailable;// Offset=0x0 Size=0x18
    unsigned long cookie;// Offset=0x18 Size=0x4
    enum _KRESOURCEMANAGER_STATE State;// Offset=0x1c Size=0x4
    unsigned long Flags;// Offset=0x20 Size=0x4
    struct _KMUTANT Mutex;// Offset=0x28 Size=0x38
    struct _KTMOBJECT_NAMESPACE_LINK NamespaceLink;// Offset=0x60 Size=0x28
    struct _GUID RmId;// Offset=0x88 Size=0x10
    struct _KQUEUE NotificationQueue;// Offset=0x98 Size=0x40
    struct _KMUTANT NotificationMutex;// Offset=0xd8 Size=0x38
    struct _LIST_ENTRY EnlistmentHead;// Offset=0x110 Size=0x10
    unsigned long EnlistmentCount;// Offset=0x120 Size=0x4
    long  ( * NotificationRoutine)(struct _KENLISTMENT * ,void * ,void * ,unsigned long ,union _LARGE_INTEGER * ,unsigned long ,void * );// Offset=0x128 Size=0x8
    void * Key;// Offset=0x130 Size=0x8
    struct _LIST_ENTRY ProtocolListHead;// Offset=0x138 Size=0x10
    struct _LIST_ENTRY PendingPropReqListHead;// Offset=0x148 Size=0x10
    struct _LIST_ENTRY CRMListEntry;// Offset=0x158 Size=0x10
    struct _KTM * Tm;// Offset=0x168 Size=0x8
    struct _UNICODE_STRING Description;// Offset=0x170 Size=0x10
    struct _KTMOBJECT_NAMESPACE Enlistments;// Offset=0x180 Size=0xa8
    struct _KRESOURCEMANAGER_COMPLETION_BINDING CompletionBinding;// Offset=0x228 Size=0x28
};
