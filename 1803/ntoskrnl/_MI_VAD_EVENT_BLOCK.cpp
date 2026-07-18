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

struct _KGATE// Size=0x18 (Id=860)
{
    struct _DISPATCHER_HEADER Header;// Offset=0x0 Size=0x18
};

struct _MMSECURE_FLAGS// Size=0x4 (Id=1648)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long ReadOnly:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long ReadWrite:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long SecNoChange:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long NoDelete:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long RequiresPteReversal:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long ExclusiveSecure:1;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1
        unsigned long UserModeOnly:1;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1
        unsigned long NoInherit:1;// Offset=0x0 Size=0x4 BitOffset=0x7 BitSize=0x1
        unsigned long Spare:4;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x4
    };
};

union _unnamed_1453// Size=0x8 (Id=1453)
{
    struct _MMSECURE_FLAGS Flags;// Offset=0x0 Size=0x4
    unsigned long FlagsLong;// Offset=0x0 Size=0x4
    void * StartVa;// Offset=0x0 Size=0x8
};

struct _MMADDRESS_LIST// Size=0x10 (Id=1454)
{
    union _unnamed_1453 u1;// Offset=0x0 Size=0x8
    void * EndVa;// Offset=0x8 Size=0x8
};

struct _RTL_BITMAP_EX// Size=0x10 (Id=648)
{
    unsigned long long SizeOfBitMap;// Offset=0x0 Size=0x8
    unsigned long long * Buffer;// Offset=0x8 Size=0x8
};

struct _MI_LARGEPAGE_IMAGE_INFO// Size=0x10 (Id=786)
{
    unsigned char LargeImageBias;// Offset=0x0 Size=0x1
    unsigned char Spare[3];// Offset=0x1 Size=0x3
    unsigned long long ActualImageViewSize;// Offset=0x8 Size=0x8
};

struct _MI_SUB64K_FREE_RANGES// Size=0x38 (Id=919)
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

struct _MI_RFG_PROTECTED_STACK// Size=0x18 (Id=1398)
{
    void * ControlStackBase;// Offset=0x0 Size=0x8
    struct _MMVAD_SHORT * ControlStackVad;// Offset=0x8 Size=0x8
    void * OwnerThread;// Offset=0x10 Size=0x8
};

struct _MI_VAD_EVENT_BLOCK// Size=0x48 (Id=696)
{
    struct _MI_VAD_EVENT_BLOCK * Next;// Offset=0x0 Size=0x8
    union // Size=0x40 (Id=0)
    {
        struct _KGATE Gate;// Offset=0x8 Size=0x18
        struct _MMADDRESS_LIST SecureInfo;// Offset=0x8 Size=0x10
        struct _RTL_BITMAP_EX BitMap;// Offset=0x8 Size=0x10
        struct _MMINPAGE_SUPPORT * InPageSupport;// Offset=0x8 Size=0x8
        struct _MI_LARGEPAGE_IMAGE_INFO LargePage;// Offset=0x8 Size=0x10
        struct _ETHREAD * CreatingThread;// Offset=0x8 Size=0x8
        struct _MI_SUB64K_FREE_RANGES PebTebRfg;// Offset=0x8 Size=0x38
        struct _MI_RFG_PROTECTED_STACK RfgProtectedStack;// Offset=0x8 Size=0x18
        struct _MMVAD_SHORT * PlaceholderVad;// Offset=0x8 Size=0x8
        unsigned long WaitReason;// Offset=0x40 Size=0x4
    };
};
