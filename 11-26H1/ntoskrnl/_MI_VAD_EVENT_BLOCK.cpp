struct _MI_QUOTA_TRACKER// Size=0x1 (Id=1510)
{
    union // Size=0x1 (Id=0)
    {
        struct // Size=0x1 (Id=0)
        {
            unsigned char OwningProcess:4;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x4
            unsigned char ChargedBytes:4;// Offset=0x0 Size=0x1 BitOffset=0x4 BitSize=0x4
        };
        unsigned char EntireField;// Offset=0x0 Size=0x1
    };
};

struct _RTL_BITMAP_EX// Size=0x10 (Id=1254)
{
    unsigned long long SizeOfBitMap;// Offset=0x0 Size=0x8
    unsigned long long * Buffer;// Offset=0x8 Size=0x8
};

struct _LIST_ENTRY// Size=0x10 (Id=3)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _DISPATCHER_HEADER// Size=0x18 (Id=174)
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

struct _KGATE// Size=0x18 (Id=1524)
{
    struct _DISPATCHER_HEADER Header;// Offset=0x0 Size=0x18
};

struct _MMSECURE_FLAGS// Size=0x8 (Id=1969)
{
    union // Size=0x8 (Id=0)
    {
        struct // Size=0x8 (Id=0)
        {
            unsigned long long ReadOnly:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
            unsigned long long ReadWrite:1;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x1
            unsigned long long SecNoChange:1;// Offset=0x0 Size=0x8 BitOffset=0x2 BitSize=0x1
            unsigned long long NoDelete:1;// Offset=0x0 Size=0x8 BitOffset=0x3 BitSize=0x1
            unsigned long long RequiresPteReversal:1;// Offset=0x0 Size=0x8 BitOffset=0x4 BitSize=0x1
            unsigned long long ExclusiveSecure:1;// Offset=0x0 Size=0x8 BitOffset=0x5 BitSize=0x1
            unsigned long long UserModeOnly:1;// Offset=0x0 Size=0x8 BitOffset=0x6 BitSize=0x1
            unsigned long long NoInherit:1;// Offset=0x0 Size=0x8 BitOffset=0x7 BitSize=0x1
            unsigned long long CheckVad:1;// Offset=0x0 Size=0x8 BitOffset=0x8 BitSize=0x1
            unsigned long long Spare:3;// Offset=0x0 Size=0x8 BitOffset=0x9 BitSize=0x3
            unsigned long long DoNotUse:52;// Offset=0x0 Size=0x8 BitOffset=0xc BitSize=0x34
        };
        unsigned long long EntireField;// Offset=0x0 Size=0x8
        void * StartVa;// Offset=0x0 Size=0x8
    };
};

union _unnamed_1786// Size=0x8 (Id=1786)
{
    struct _MMSECURE_FLAGS Flags;// Offset=0x0 Size=0x8
    void * StartVa;// Offset=0x0 Size=0x8
};

struct _MI_SECURED_VAD_LIST// Size=0x20 (Id=1787)
{
    union _unnamed_1786 u1;// Offset=0x0 Size=0x8
    void * EndVa;// Offset=0x8 Size=0x8
    void * SecuredProcess;// Offset=0x10 Size=0x8
    struct _MMVAD_SHORT * SecuredVad;// Offset=0x18 Size=0x8
};

struct _MI_WRITE_WATCH_BLOCK// Size=0x18 (Id=1795)
{
    struct _RTL_BITMAP_EX BitMap;// Offset=0x0 Size=0x10
    long Lock;// Offset=0x10 Size=0x4
};

struct _MI_ROTATE_EVENT_BLOCK// Size=0x10 (Id=1414)
{
    struct _MMINPAGE_SUPPORT * InPageSupport;// Offset=0x0 Size=0x8
    unsigned long Flags;// Offset=0x8 Size=0x4
};

struct _MI_LARGEPAGE_VAD_INFO// Size=0x28 (Id=2326)
{
    unsigned char LargeImageBias;// Offset=0x0 Size=0x1
    unsigned char Spare[3];// Offset=0x1 Size=0x3
    unsigned long long ActualImageViewSize;// Offset=0x8 Size=0x8
    unsigned long long CommittedPages;// Offset=0x10 Size=0x8
    struct _EPROCESS * OwningProcess;// Offset=0x18 Size=0x8
    struct _EPARTITION * ReferencedPartition;// Offset=0x20 Size=0x8
};

struct _RTL_BALANCED_NODE// Size=0x18 (Id=116)
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

union _unnamed_2203// Size=0x8 (Id=2203)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long ViewPageSize:2;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x2
    };
    struct _CONTROL_AREA * ControlArea;// Offset=0x0 Size=0x8
};

struct _MI_PHYSICAL_VIEW// Size=0x50 (Id=2204)
{
    struct _RTL_BITMAP_EX BitMap;// Offset=0x0 Size=0x10
    struct _RTL_BALANCED_NODE PhysicalNode;// Offset=0x10 Size=0x18
    struct _MMVAD_SHORT * Vad;// Offset=0x28 Size=0x8
    struct _AWEINFO * AweInfo;// Offset=0x30 Size=0x8
    union _unnamed_2203 u1;// Offset=0x38 Size=0x8
    unsigned long long ResidentCharge;// Offset=0x40 Size=0x8
    unsigned char AgeStamp;// Offset=0x48 Size=0x1
};

struct _MI_SUB64K_FREE_RANGES// Size=0x38 (Id=1611)
{
    struct _RTL_BITMAP_EX BitMap;// Offset=0x0 Size=0x10
    struct _LIST_ENTRY ListEntry;// Offset=0x10 Size=0x10
    struct _MMVAD_SHORT * Vad;// Offset=0x20 Size=0x8
    unsigned long SetBits;// Offset=0x28 Size=0x4
    unsigned long FullSetBits;// Offset=0x2c Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long SubListIndex:2;// Offset=0x30 Size=0x4 BitOffset=0x0 BitSize=0x2
        unsigned long Hint:30;// Offset=0x30 Size=0x4 BitOffset=0x2 BitSize=0x1e
    };
};

enum _MI_FIXUP_FLAGS
{
    MiFixupBaseRelocation=1,
    MiFixupConditional=2,
    MiFixupPrivate=4,
    MiFixupRevert=8,
    MiFixupDeoptimize=16,
    MiFixupNoICacheFlush=32,
    MiFixupBatchICacheFlush=64
};

struct _MI_VAD_PRIVATE_FIXUPS// Size=0x20 (Id=1601)
{
    struct _RTL_BITMAP_EX BitMap;// Offset=0x0 Size=0x10
    enum _MI_FIXUP_FLAGS FixupFlags;// Offset=0x10 Size=0x4
    unsigned long long PrivateDiff;// Offset=0x18 Size=0x8
};

struct _MI_VAD_EVENT_BLOCK// Size=0x68 (Id=1310)
{
    struct _MI_VAD_EVENT_BLOCK * Next;// Offset=0x0 Size=0x8
    unsigned short WaitReason;// Offset=0x8 Size=0x2
    unsigned char Attributes;// Offset=0xa Size=0x1
    struct _MI_QUOTA_TRACKER QuotaTracker;// Offset=0xb Size=0x1
    void  ( * DeleteFunction)(struct _MI_VAD_EVENT_BLOCK * );// Offset=0x10 Size=0x8
    union // Size=0x68 (Id=0)
    {
        struct _RTL_BITMAP_EX BitMap;// Offset=0x18 Size=0x10
        struct _KGATE Gate;// Offset=0x18 Size=0x18
        struct _MI_SECURED_VAD_LIST SecureInfo;// Offset=0x18 Size=0x20
        struct _MI_WRITE_WATCH_BLOCK WriteWatch;// Offset=0x18 Size=0x18
        struct _MI_ROTATE_EVENT_BLOCK Rotate;// Offset=0x18 Size=0x10
        struct _MI_LARGEPAGE_VAD_INFO LargePage;// Offset=0x18 Size=0x28
        struct _MI_PHYSICAL_VIEW AweView;// Offset=0x18 Size=0x50
        struct _ETHREAD * CreatingThread;// Offset=0x18 Size=0x8
        struct _MI_SUB64K_FREE_RANGES PebTeb;// Offset=0x18 Size=0x38
        struct _MMVAD_SHORT * PlaceholderVad;// Offset=0x18 Size=0x8
        void * HotPatchEntry;// Offset=0x18 Size=0x8
        struct _MI_VAD_PRIVATE_FIXUPS PrivateFixups;// Offset=0x18 Size=0x20
    };
};
