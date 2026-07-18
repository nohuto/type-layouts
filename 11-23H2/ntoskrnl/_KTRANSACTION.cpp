struct _LIST_ENTRY// Size=0x10 (Id=3)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _DISPATCHER_HEADER// Size=0x18 (Id=159)
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
            unsigned char Reserved4:2;// Offset=0x3 Size=0x1 BitOffset=0x3 BitSize=0x2
            unsigned char AltSyscall:1;// Offset=0x3 Size=0x1 BitOffset=0x5 BitSize=0x1
            unsigned char Emulation:1;// Offset=0x3 Size=0x1 BitOffset=0x6 BitSize=0x1
            unsigned char Reserved5:1;// Offset=0x3 Size=0x1 BitOffset=0x7 BitSize=0x1
        };
        unsigned char MutantType;// Offset=0x0 Size=0x1
        unsigned char MutantSize;// Offset=0x1 Size=0x1
        unsigned char DpcActive;// Offset=0x2 Size=0x1
        unsigned char MutantReserved;// Offset=0x3 Size=0x1
    };
    long SignalState;// Offset=0x4 Size=0x4
    struct _LIST_ENTRY WaitListHead;// Offset=0x8 Size=0x10
};

struct _KEVENT// Size=0x18 (Id=20)
{
    struct _DISPATCHER_HEADER Header;// Offset=0x0 Size=0x18
};

struct _KMUTANT// Size=0x38 (Id=1522)
{
    struct _DISPATCHER_HEADER Header;// Offset=0x0 Size=0x18
    struct _LIST_ENTRY MutantListEntry;// Offset=0x18 Size=0x10
    struct _KTHREAD * OwnerThread;// Offset=0x28 Size=0x8
    union // Size=0x1 (Id=0)
    {
        unsigned char MutantFlags;// Offset=0x30 Size=0x1
        struct // Size=0x1 (Id=0)
        {
            union // Size=0x31 (Id=0)
            {
                unsigned char Abandoned:1;// Offset=0x30 Size=0x1 BitOffset=0x0 BitSize=0x1
                unsigned char Spare1:7;// Offset=0x30 Size=0x1 BitOffset=0x1 BitSize=0x7
                unsigned char Abandoned2:1;// Offset=0x30 Size=0x1 BitOffset=0x0 BitSize=0x1
            };
            unsigned char AbEnabled:1;// Offset=0x30 Size=0x1 BitOffset=0x1 BitSize=0x1
            unsigned char Spare2:6;// Offset=0x30 Size=0x1 BitOffset=0x2 BitSize=0x6
        };
    };
    unsigned char ApcDisable;// Offset=0x31 Size=0x1
};

struct _RTL_BALANCED_LINKS// Size=0x20 (Id=1971)
{
    struct _RTL_BALANCED_LINKS * Parent;// Offset=0x0 Size=0x8
    struct _RTL_BALANCED_LINKS * LeftChild;// Offset=0x8 Size=0x8
    struct _RTL_BALANCED_LINKS * RightChild;// Offset=0x10 Size=0x8
    char Balance;// Offset=0x18 Size=0x1
    unsigned char Reserved[3];// Offset=0x19 Size=0x3
};

struct _KTMOBJECT_NAMESPACE_LINK// Size=0x28 (Id=1987)
{
    struct _RTL_BALANCED_LINKS Links;// Offset=0x0 Size=0x20
    unsigned char Expired;// Offset=0x20 Size=0x1
};

struct _GUID// Size=0x10 (Id=112)
{
    unsigned long Data1;// Offset=0x0 Size=0x4
    unsigned short Data2;// Offset=0x4 Size=0x2
    unsigned short Data3;// Offset=0x6 Size=0x2
    unsigned char Data4[8];// Offset=0x8 Size=0x8
};

enum _KTRANSACTION_STATE
{
    KTransactionUninitialized=0,
    KTransactionActive=1,
    KTransactionPreparing=2,
    KTransactionPrepared=3,
    KTransactionInDoubt=4,
    KTransactionCommitted=5,
    KTransactionAborted=6,
    KTransactionDelegated=7,
    KTransactionPrePreparing=8,
    KTransactionForgotten=9,
    KTransactionRecovering=10,
    KTransactionPrePrepared=11
};

struct _unnamed_1962// Size=0x8 (Id=1962)
{
    unsigned int idxRecord;// Offset=0x0 Size=0x4
    unsigned long cidContainer;// Offset=0x4 Size=0x4
};

union _CLS_LSN// Size=0x8 (Id=1963)
{
    struct _unnamed_1962 offset;// Offset=0x0 Size=0x8
    unsigned long long ullOffset;// Offset=0x0 Size=0x8
};

struct _unnamed_9// Size=0x8 (Id=9)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=1101)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_9 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _UNICODE_STRING// Size=0x10 (Id=510)
{
    unsigned short Length;// Offset=0x0 Size=0x2
    unsigned short MaximumLength;// Offset=0x2 Size=0x2
    wchar_t * Buffer;// Offset=0x8 Size=0x8
};

struct _WORK_QUEUE_ITEM// Size=0x20 (Id=21)
{
    struct _LIST_ENTRY List;// Offset=0x0 Size=0x10
    void  ( * WorkerRoutine)(void * );// Offset=0x10 Size=0x8
    void * Parameter;// Offset=0x18 Size=0x8
};

struct _SINGLE_LIST_ENTRY// Size=0x8 (Id=939)
{
    struct _SINGLE_LIST_ENTRY * Next;// Offset=0x0 Size=0x8
};

struct _KDPC// Size=0x40 (Id=83)
{
    union // Size=0x4 (Id=0)
    {
        unsigned long TargetInfoAsUlong;// Offset=0x0 Size=0x4
        unsigned char Type;// Offset=0x0 Size=0x1
        unsigned char Importance;// Offset=0x1 Size=0x1
        unsigned short Number;// Offset=0x2 Size=0x2
    };
    struct _SINGLE_LIST_ENTRY DpcListEntry;// Offset=0x8 Size=0x8
    unsigned long long ProcessorHistory;// Offset=0x10 Size=0x8
    void  ( * DeferredRoutine)(struct _KDPC * ,void * ,void * ,void * );// Offset=0x18 Size=0x8
    void * DeferredContext;// Offset=0x20 Size=0x8
    void * SystemArgument1;// Offset=0x28 Size=0x8
    void * SystemArgument2;// Offset=0x30 Size=0x8
    void * DpcData;// Offset=0x38 Size=0x8
};

struct _unnamed_11// Size=0x8 (Id=11)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    unsigned long HighPart;// Offset=0x4 Size=0x4
};

union _ULARGE_INTEGER// Size=0x8 (Id=509)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    unsigned long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_11 u;// Offset=0x0 Size=0x8
    unsigned long long QuadPart;// Offset=0x0 Size=0x8
};

struct _KTIMER// Size=0x40 (Id=1807)
{
    struct _DISPATCHER_HEADER Header;// Offset=0x0 Size=0x18
    union _ULARGE_INTEGER DueTime;// Offset=0x18 Size=0x8
    struct _LIST_ENTRY TimerListEntry;// Offset=0x20 Size=0x10
    struct _KDPC * Dpc;// Offset=0x30 Size=0x8
    unsigned short Processor;// Offset=0x38 Size=0x2
    unsigned short TimerType;// Offset=0x3a Size=0x2
    unsigned long Period;// Offset=0x3c Size=0x4
};

enum _KTRANSACTION_OUTCOME
{
    KTxOutcomeUninitialized=0,
    KTxOutcomeUndetermined=1,
    KTxOutcomeCommitted=2,
    KTxOutcomeAborted=3,
    KTxOutcomeUnavailable=4
};

struct _KTRANSACTION_HISTORY// Size=0x8 (Id=2235)
{
    enum <unnamed-enum-KTMOH_CommitTransaction_Result> RecordType;// Offset=0x0 Size=0x4
    unsigned long Payload;// Offset=0x4 Size=0x4
};

struct _KTRANSACTION// Size=0x2d8 (Id=2120)
{
    struct _KEVENT OutcomeEvent;// Offset=0x0 Size=0x18
    unsigned long cookie;// Offset=0x18 Size=0x4
    struct _KMUTANT Mutex;// Offset=0x20 Size=0x38
    struct _KTRANSACTION * TreeTx;// Offset=0x58 Size=0x8
    struct _KTMOBJECT_NAMESPACE_LINK GlobalNamespaceLink;// Offset=0x60 Size=0x28
    struct _KTMOBJECT_NAMESPACE_LINK TmNamespaceLink;// Offset=0x88 Size=0x28
    struct _GUID UOW;// Offset=0xb0 Size=0x10
    enum _KTRANSACTION_STATE State;// Offset=0xc0 Size=0x4
    unsigned long Flags;// Offset=0xc4 Size=0x4
    struct _LIST_ENTRY EnlistmentHead;// Offset=0xc8 Size=0x10
    unsigned long EnlistmentCount;// Offset=0xd8 Size=0x4
    unsigned long RecoverableEnlistmentCount;// Offset=0xdc Size=0x4
    unsigned long PrePrepareRequiredEnlistmentCount;// Offset=0xe0 Size=0x4
    unsigned long PrepareRequiredEnlistmentCount;// Offset=0xe4 Size=0x4
    unsigned long OutcomeRequiredEnlistmentCount;// Offset=0xe8 Size=0x4
    unsigned long PendingResponses;// Offset=0xec Size=0x4
    struct _KENLISTMENT * SuperiorEnlistment;// Offset=0xf0 Size=0x8
    union _CLS_LSN LastLsn;// Offset=0xf8 Size=0x8
    struct _LIST_ENTRY PromotedEntry;// Offset=0x100 Size=0x10
    struct _KTRANSACTION * PromoterTransaction;// Offset=0x110 Size=0x8
    void * PromotePropagation;// Offset=0x118 Size=0x8
    unsigned long IsolationLevel;// Offset=0x120 Size=0x4
    unsigned long IsolationFlags;// Offset=0x124 Size=0x4
    union _LARGE_INTEGER Timeout;// Offset=0x128 Size=0x8
    struct _UNICODE_STRING Description;// Offset=0x130 Size=0x10
    struct _KTHREAD * RollbackThread;// Offset=0x140 Size=0x8
    struct _WORK_QUEUE_ITEM RollbackWorkItem;// Offset=0x148 Size=0x20
    struct _KDPC RollbackDpc;// Offset=0x168 Size=0x40
    struct _KTIMER RollbackTimer;// Offset=0x1a8 Size=0x40
    struct _LIST_ENTRY LsnOrderedEntry;// Offset=0x1e8 Size=0x10
    enum _KTRANSACTION_OUTCOME Outcome;// Offset=0x1f8 Size=0x4
    struct _KTM * Tm;// Offset=0x200 Size=0x8
    long long CommitReservation;// Offset=0x208 Size=0x8
    struct _KTRANSACTION_HISTORY TransactionHistory[10];// Offset=0x210 Size=0x50
    unsigned long TransactionHistoryCount;// Offset=0x260 Size=0x4
    void * DTCPrivateInformation;// Offset=0x268 Size=0x8
    unsigned long DTCPrivateInformationLength;// Offset=0x270 Size=0x4
    struct _KMUTANT DTCPrivateInformationMutex;// Offset=0x278 Size=0x38
    void * PromotedTxSelfHandle;// Offset=0x2b0 Size=0x8
    unsigned long PendingPromotionCount;// Offset=0x2b8 Size=0x4
    struct _KEVENT PromotionCompletedEvent;// Offset=0x2c0 Size=0x18
};
