union _KPRCBFLAG// Size=0x4 (Id=340)
{
    long PrcbFlags;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long BamQosLevel:8;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x8
        unsigned long PendingQosUpdate:2;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x2
        unsigned long CacheIsolationEnabled:1;// Offset=0x0 Size=0x4 BitOffset=0xa BitSize=0x1
        unsigned long TracepointActive:1;// Offset=0x0 Size=0x4 BitOffset=0xb BitSize=0x1
        unsigned long PrcbFlagsReserved:20;// Offset=0x0 Size=0x4 BitOffset=0xc BitSize=0x14
    };
};

struct _KDESCRIPTOR// Size=0x10 (Id=658)
{
    unsigned short Pad[3];// Offset=0x0 Size=0x6
    unsigned short Limit;// Offset=0x6 Size=0x2
    void * Base;// Offset=0x8 Size=0x8
};

struct _KSPECIAL_REGISTERS// Size=0xf0 (Id=597)
{
    unsigned long long Cr0;// Offset=0x0 Size=0x8
    unsigned long long Cr2;// Offset=0x8 Size=0x8
    unsigned long long Cr3;// Offset=0x10 Size=0x8
    unsigned long long Cr4;// Offset=0x18 Size=0x8
    unsigned long long KernelDr0;// Offset=0x20 Size=0x8
    unsigned long long KernelDr1;// Offset=0x28 Size=0x8
    unsigned long long KernelDr2;// Offset=0x30 Size=0x8
    unsigned long long KernelDr3;// Offset=0x38 Size=0x8
    unsigned long long KernelDr6;// Offset=0x40 Size=0x8
    unsigned long long KernelDr7;// Offset=0x48 Size=0x8
    struct _KDESCRIPTOR Gdtr;// Offset=0x50 Size=0x10
    struct _KDESCRIPTOR Idtr;// Offset=0x60 Size=0x10
    unsigned short Tr;// Offset=0x70 Size=0x2
    unsigned short Ldtr;// Offset=0x72 Size=0x2
    unsigned long MxCsr;// Offset=0x74 Size=0x4
    unsigned long long DebugControl;// Offset=0x78 Size=0x8
    unsigned long long LastBranchToRip;// Offset=0x80 Size=0x8
    unsigned long long LastBranchFromRip;// Offset=0x88 Size=0x8
    unsigned long long LastExceptionToRip;// Offset=0x90 Size=0x8
    unsigned long long LastExceptionFromRip;// Offset=0x98 Size=0x8
    unsigned long long Cr8;// Offset=0xa0 Size=0x8
    unsigned long long MsrGsBase;// Offset=0xa8 Size=0x8
    unsigned long long MsrGsSwap;// Offset=0xb0 Size=0x8
    unsigned long long MsrStar;// Offset=0xb8 Size=0x8
    unsigned long long MsrLStar;// Offset=0xc0 Size=0x8
    unsigned long long MsrCStar;// Offset=0xc8 Size=0x8
    unsigned long long MsrSyscallMask;// Offset=0xd0 Size=0x8
    unsigned long long Xcr0;// Offset=0xd8 Size=0x8
    unsigned long long MsrFsBase;// Offset=0xe0 Size=0x8
    unsigned long long SpecialPadding0;// Offset=0xe8 Size=0x8
};

struct _M128A// Size=0x10 (Id=503)
{
    unsigned long long Low;// Offset=0x0 Size=0x8
    long long High;// Offset=0x8 Size=0x8
};

struct _XSAVE_FORMAT// Size=0x200 (Id=578)
{
    unsigned short ControlWord;// Offset=0x0 Size=0x2
    unsigned short StatusWord;// Offset=0x2 Size=0x2
    unsigned char TagWord;// Offset=0x4 Size=0x1
    unsigned char Reserved1;// Offset=0x5 Size=0x1
    unsigned short ErrorOpcode;// Offset=0x6 Size=0x2
    unsigned long ErrorOffset;// Offset=0x8 Size=0x4
    unsigned short ErrorSelector;// Offset=0xc Size=0x2
    unsigned short Reserved2;// Offset=0xe Size=0x2
    unsigned long DataOffset;// Offset=0x10 Size=0x4
    unsigned short DataSelector;// Offset=0x14 Size=0x2
    unsigned short Reserved3;// Offset=0x16 Size=0x2
    unsigned long MxCsr;// Offset=0x18 Size=0x4
    unsigned long MxCsr_Mask;// Offset=0x1c Size=0x4
    struct _M128A FloatRegisters[8];// Offset=0x20 Size=0x80
    struct _M128A XmmRegisters[16];// Offset=0xa0 Size=0x100
    unsigned char Reserved4[96];// Offset=0x1a0 Size=0x60
};

struct _CONTEXT// Size=0x4d0 (Id=492)
{
    unsigned long long P1Home;// Offset=0x0 Size=0x8
    unsigned long long P2Home;// Offset=0x8 Size=0x8
    unsigned long long P3Home;// Offset=0x10 Size=0x8
    unsigned long long P4Home;// Offset=0x18 Size=0x8
    unsigned long long P5Home;// Offset=0x20 Size=0x8
    unsigned long long P6Home;// Offset=0x28 Size=0x8
    unsigned long ContextFlags;// Offset=0x30 Size=0x4
    unsigned long MxCsr;// Offset=0x34 Size=0x4
    unsigned short SegCs;// Offset=0x38 Size=0x2
    unsigned short SegDs;// Offset=0x3a Size=0x2
    unsigned short SegEs;// Offset=0x3c Size=0x2
    unsigned short SegFs;// Offset=0x3e Size=0x2
    unsigned short SegGs;// Offset=0x40 Size=0x2
    unsigned short SegSs;// Offset=0x42 Size=0x2
    unsigned long EFlags;// Offset=0x44 Size=0x4
    unsigned long long Dr0;// Offset=0x48 Size=0x8
    unsigned long long Dr1;// Offset=0x50 Size=0x8
    unsigned long long Dr2;// Offset=0x58 Size=0x8
    unsigned long long Dr3;// Offset=0x60 Size=0x8
    unsigned long long Dr6;// Offset=0x68 Size=0x8
    unsigned long long Dr7;// Offset=0x70 Size=0x8
    unsigned long long Rax;// Offset=0x78 Size=0x8
    unsigned long long Rcx;// Offset=0x80 Size=0x8
    unsigned long long Rdx;// Offset=0x88 Size=0x8
    unsigned long long Rbx;// Offset=0x90 Size=0x8
    unsigned long long Rsp;// Offset=0x98 Size=0x8
    unsigned long long Rbp;// Offset=0xa0 Size=0x8
    unsigned long long Rsi;// Offset=0xa8 Size=0x8
    unsigned long long Rdi;// Offset=0xb0 Size=0x8
    unsigned long long R8;// Offset=0xb8 Size=0x8
    unsigned long long R9;// Offset=0xc0 Size=0x8
    unsigned long long R10;// Offset=0xc8 Size=0x8
    unsigned long long R11;// Offset=0xd0 Size=0x8
    unsigned long long R12;// Offset=0xd8 Size=0x8
    unsigned long long R13;// Offset=0xe0 Size=0x8
    unsigned long long R14;// Offset=0xe8 Size=0x8
    unsigned long long R15;// Offset=0xf0 Size=0x8
    unsigned long long Rip;// Offset=0xf8 Size=0x8
    union // Size=0x200 (Id=0)
    {
        struct _XSAVE_FORMAT FltSave;// Offset=0x100 Size=0x200
        struct _M128A Header[2];// Offset=0x100 Size=0x20
        struct _M128A Legacy[8];// Offset=0x120 Size=0x80
        struct _M128A Xmm0;// Offset=0x1a0 Size=0x10
        struct _M128A Xmm1;// Offset=0x1b0 Size=0x10
        struct _M128A Xmm2;// Offset=0x1c0 Size=0x10
        struct _M128A Xmm3;// Offset=0x1d0 Size=0x10
        struct _M128A Xmm4;// Offset=0x1e0 Size=0x10
        struct _M128A Xmm5;// Offset=0x1f0 Size=0x10
    };
    struct _M128A Xmm6;// Offset=0x200 Size=0x10
    struct _M128A Xmm7;// Offset=0x210 Size=0x10
    struct _M128A Xmm8;// Offset=0x220 Size=0x10
    struct _M128A Xmm9;// Offset=0x230 Size=0x10
    struct _M128A Xmm10;// Offset=0x240 Size=0x10
    struct _M128A Xmm11;// Offset=0x250 Size=0x10
    struct _M128A Xmm12;// Offset=0x260 Size=0x10
    struct _M128A Xmm13;// Offset=0x270 Size=0x10
    struct _M128A Xmm14;// Offset=0x280 Size=0x10
    struct _M128A Xmm15;// Offset=0x290 Size=0x10
    struct _M128A VectorRegister[26];// Offset=0x300 Size=0x1a0
    unsigned long long VectorControl;// Offset=0x4a0 Size=0x8
    unsigned long long DebugControl;// Offset=0x4a8 Size=0x8
    unsigned long long LastBranchToRip;// Offset=0x4b0 Size=0x8
    unsigned long long LastBranchFromRip;// Offset=0x4b8 Size=0x8
    unsigned long long LastExceptionToRip;// Offset=0x4c0 Size=0x8
    unsigned long long LastExceptionFromRip;// Offset=0x4c8 Size=0x8
};

struct _KPROCESSOR_STATE// Size=0x5c0 (Id=373)
{
    struct _KSPECIAL_REGISTERS SpecialRegisters;// Offset=0x0 Size=0xf0
    struct _CONTEXT ContextFrame;// Offset=0xf0 Size=0x4d0
};

struct _KSPIN_LOCK_QUEUE// Size=0x10 (Id=73)
{
    struct _KSPIN_LOCK_QUEUE * Next;// Offset=0x0 Size=0x8
    unsigned long long * Lock;// Offset=0x8 Size=0x8
};

struct _PP_LOOKASIDE_LIST// Size=0x10 (Id=95)
{
    struct _GENERAL_LOOKASIDE * P;// Offset=0x0 Size=0x8
    struct _GENERAL_LOOKASIDE * L;// Offset=0x8 Size=0x8
};

struct _anonymous_79// Size=0x10 (Id=79)
{
    struct // Size=0x10 (Id=0)
    {
        unsigned long long Depth:16;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x10
        unsigned long long Sequence:48;// Offset=0x0 Size=0x8 BitOffset=0x10 BitSize=0x30
        unsigned long long Reserved:4;// Offset=0x8 Size=0x8 BitOffset=0x0 BitSize=0x4
        unsigned long long NextEntry:60;// Offset=0x8 Size=0x8 BitOffset=0x4 BitSize=0x3c
    };
};

union _SLIST_HEADER// Size=0x10 (Id=80)
{
    unsigned long long Alignment;// Offset=0x0 Size=0x8
    unsigned long long Region;// Offset=0x8 Size=0x8
    struct _anonymous_79 HeaderX64;// Offset=0x0 Size=0x10
};

struct _SINGLE_LIST_ENTRY// Size=0x8 (Id=51)
{
    struct _SINGLE_LIST_ENTRY * Next;// Offset=0x0 Size=0x8
};

enum _POOL_TYPE
{
    NonPagedPool=0,
    NonPagedPoolExecute=0,
    PagedPool=1,
    NonPagedPoolMustSucceed=2,
    DontUseThisType=3,
    NonPagedPoolCacheAligned=4,
    PagedPoolCacheAligned=5,
    NonPagedPoolCacheAlignedMustS=6,
    MaxPoolType=7,
    NonPagedPoolBase=0,
    NonPagedPoolBaseMustSucceed=2,
    NonPagedPoolBaseCacheAligned=4,
    NonPagedPoolBaseCacheAlignedMustS=6,
    NonPagedPoolSession=32,
    PagedPoolSession=33,
    NonPagedPoolMustSucceedSession=34,
    DontUseThisTypeSession=35,
    NonPagedPoolCacheAlignedSession=36,
    PagedPoolCacheAlignedSession=37,
    NonPagedPoolCacheAlignedMustSSession=38,
    NonPagedPoolNx=512,
    NonPagedPoolNxCacheAligned=516,
    NonPagedPoolSessionNx=544
};

struct _LIST_ENTRY// Size=0x10 (Id=23)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _GENERAL_LOOKASIDE_POOL// Size=0x60 (Id=313)
{
    union // Size=0x10 (Id=0)
    {
        union _SLIST_HEADER ListHead;// Offset=0x0 Size=0x10
        struct _SINGLE_LIST_ENTRY SingleListHead;// Offset=0x0 Size=0x8
        unsigned short Depth;// Offset=0x10 Size=0x2
    };
    unsigned short MaximumDepth;// Offset=0x12 Size=0x2
    unsigned long TotalAllocates;// Offset=0x14 Size=0x4
    union // Size=0x4 (Id=0)
    {
        unsigned long AllocateMisses;// Offset=0x18 Size=0x4
        unsigned long AllocateHits;// Offset=0x18 Size=0x4
    };
    unsigned long TotalFrees;// Offset=0x1c Size=0x4
    union // Size=0x4 (Id=0)
    {
        unsigned long FreeMisses;// Offset=0x20 Size=0x4
        unsigned long FreeHits;// Offset=0x20 Size=0x4
    };
    enum _POOL_TYPE Type;// Offset=0x24 Size=0x4
    unsigned long Tag;// Offset=0x28 Size=0x4
    unsigned long Size;// Offset=0x2c Size=0x4
    union // Size=0x8 (Id=0)
    {
        void *  ( * AllocateEx)(enum _POOL_TYPE ,unsigned long long ,unsigned long ,struct _LOOKASIDE_LIST_EX * );// Offset=0x30 Size=0x8
        void *  ( * Allocate)(enum _POOL_TYPE ,unsigned long long ,unsigned long );// Offset=0x30 Size=0x8
    };
    union // Size=0x8 (Id=0)
    {
        void  ( * FreeEx)(void * ,struct _LOOKASIDE_LIST_EX * );// Offset=0x38 Size=0x8
        void  ( * Free)(void * );// Offset=0x38 Size=0x8
    };
    struct _LIST_ENTRY ListEntry;// Offset=0x40 Size=0x10
    unsigned long LastTotalAllocates;// Offset=0x50 Size=0x4
    union // Size=0x4 (Id=0)
    {
        unsigned long LastAllocateMisses;// Offset=0x54 Size=0x4
        unsigned long LastAllocateHits;// Offset=0x54 Size=0x4
    };
    unsigned long Future[2];// Offset=0x58 Size=0x8
};

struct _anonymous_31// Size=0x8 (Id=31)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=85)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _anonymous_31 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _KAFFINITY_EX// Size=0xa8 (Id=383)
{
    unsigned short Count;// Offset=0x0 Size=0x2
    unsigned short Size;// Offset=0x2 Size=0x2
    unsigned long Reserved;// Offset=0x4 Size=0x4
    unsigned long long Bitmap[20];// Offset=0x8 Size=0xa0
};

struct _KSTATIC_AFFINITY_BLOCK// Size=0x2a0 (Id=225)
{
    union // Size=0xa8 (Id=0)
    {
        struct _KAFFINITY_EX KeFlushTbAffinity;// Offset=0x0 Size=0xa8
        struct _KAFFINITY_EX KeFlushWbAffinity;// Offset=0x0 Size=0xa8
        struct _KAFFINITY_EX KeSyncContextAffinity;// Offset=0x0 Size=0xa8
    };
    struct _KAFFINITY_EX KeFlushTbDeepIdleAffinity;// Offset=0xa8 Size=0xa8
    struct _KAFFINITY_EX KeIpiSendAffinity;// Offset=0x150 Size=0xa8
    struct _KAFFINITY_EX KeIpiSendIpiSet;// Offset=0x1f8 Size=0xa8
};

struct _KDPC_LIST// Size=0x10 (Id=480)
{
    struct _SINGLE_LIST_ENTRY ListHead;// Offset=0x0 Size=0x8
    struct _SINGLE_LIST_ENTRY * LastEntry;// Offset=0x8 Size=0x8
};

struct _KDPC_DATA// Size=0x28 (Id=232)
{
    struct _KDPC_LIST DpcList;// Offset=0x0 Size=0x10
    unsigned long long DpcLock;// Offset=0x10 Size=0x8
    long DpcQueueDepth;// Offset=0x18 Size=0x4
    unsigned long DpcCount;// Offset=0x1c Size=0x4
    struct _KDPC * ActiveDpc;// Offset=0x20 Size=0x8
};

struct _anonymous_11// Size=0x8 (Id=11)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    unsigned long HighPart;// Offset=0x4 Size=0x4
};

union _ULARGE_INTEGER// Size=0x8 (Id=12)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    unsigned long HighPart;// Offset=0x4 Size=0x4
    struct _anonymous_11 u;// Offset=0x0 Size=0x8
    unsigned long long QuadPart;// Offset=0x0 Size=0x8
};

struct _KTIMER_TABLE_ENTRY// Size=0x20 (Id=663)
{
    unsigned long long Lock;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY Entry;// Offset=0x8 Size=0x10
    union _ULARGE_INTEGER Time;// Offset=0x18 Size=0x8
};

struct _KTIMER_TABLE_STATE// Size=0x18 (Id=657)
{
    unsigned long long LastTimerExpiration[2];// Offset=0x0 Size=0x10
    unsigned long LastTimerHand[2];// Offset=0x10 Size=0x8
};

struct _KTIMER_TABLE// Size=0x4218 (Id=588)
{
    struct _KTIMER * TimerExpiry[64];// Offset=0x0 Size=0x200
    struct _KTIMER_TABLE_ENTRY TimerEntries[2][256];// Offset=0x200 Size=0x4000
    struct _KTIMER_TABLE_STATE TableState;// Offset=0x4200 Size=0x18
};

struct _DISPATCHER_HEADER// Size=0x18 (Id=287)
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

struct _KGATE// Size=0x18 (Id=332)
{
    struct _DISPATCHER_HEADER Header;// Offset=0x0 Size=0x18
};

struct _KDPC// Size=0x40 (Id=179)
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

struct _RTL_RB_TREE// Size=0x10 (Id=38)
{
    struct _RTL_BALANCED_NODE * Root;// Offset=0x0 Size=0x8
    union // Size=0x1 (Id=0)
    {
        struct // Size=0x1 (Id=0)
        {
            unsigned char Encoded:1;// Offset=0x8 Size=0x1 BitOffset=0x0 BitSize=0x1
        };
        struct _RTL_BALANCED_NODE * Min;// Offset=0x8 Size=0x8
    };
};

struct _PROC_IDLE_POLICY// Size=0x6 (Id=639)
{
    unsigned char PromotePercent;// Offset=0x0 Size=0x1
    unsigned char DemotePercent;// Offset=0x1 Size=0x1
    unsigned char PromotePercentBase;// Offset=0x2 Size=0x1
    unsigned char DemotePercentBase;// Offset=0x3 Size=0x1
    unsigned char AllowScaling;// Offset=0x4 Size=0x1
    unsigned char ForceLightIdle;// Offset=0x5 Size=0x1
};

union _PPM_IDLE_SYNCHRONIZATION_STATE// Size=0x4 (Id=527)
{
    long AsLong;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        long RefCount:24;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x18
        unsigned long State:8;// Offset=0x0 Size=0x4 BitOffset=0x18 BitSize=0x8
    };
};

struct _PROC_FEEDBACK// Size=0x90 (Id=500)
{
    unsigned long long Lock;// Offset=0x0 Size=0x8
    unsigned long long CyclesLast;// Offset=0x8 Size=0x8
    unsigned long long CyclesActive;// Offset=0x10 Size=0x8
    struct _PROC_FEEDBACK_COUNTER * Counters[2];// Offset=0x18 Size=0x10
    unsigned long long LastUpdateTime;// Offset=0x28 Size=0x8
    unsigned long long UnscaledTime;// Offset=0x30 Size=0x8
    long long UnaccountedTime;// Offset=0x38 Size=0x8
    unsigned long long ScaledTime[2];// Offset=0x40 Size=0x10
    unsigned long long UnaccountedKernelTime;// Offset=0x50 Size=0x8
    unsigned long long PerformanceScaledKernelTime;// Offset=0x58 Size=0x8
    unsigned long UserTimeLast;// Offset=0x60 Size=0x4
    unsigned long KernelTimeLast;// Offset=0x64 Size=0x4
    unsigned long long IdleGenerationNumberLast;// Offset=0x68 Size=0x8
    unsigned long long HvActiveTimeLast;// Offset=0x70 Size=0x8
    unsigned long long StallCyclesLast;// Offset=0x78 Size=0x8
    unsigned long long StallTime;// Offset=0x80 Size=0x8
    unsigned char KernelTimesIndex;// Offset=0x88 Size=0x1
    unsigned char CounterDiscardsIdleTime;// Offset=0x89 Size=0x1
};

enum _PROC_HYPERVISOR_STATE
{
    ProcHypervisorNone=0,
    ProcHypervisorPresent=1,
    ProcHypervisorPower=2,
    ProcHypervisorHvCounters=3
};

struct _PPM_FFH_THROTTLE_STATE_INFO// Size=0x20 (Id=507)
{
    unsigned char EnableLogging;// Offset=0x0 Size=0x1
    unsigned long MismatchCount;// Offset=0x4 Size=0x4
    unsigned char Initialized;// Offset=0x8 Size=0x1
    unsigned long long LastValue;// Offset=0x10 Size=0x8
    union _LARGE_INTEGER LastLogTickCount;// Offset=0x18 Size=0x8
};

struct _PROC_IDLE_SNAP// Size=0x10 (Id=608)
{
    unsigned long long Time;// Offset=0x0 Size=0x8
    unsigned long long Idle;// Offset=0x8 Size=0x8
};

struct _PROC_PERF_CHECK_CONTEXT// Size=0x40 (Id=525)
{
    struct _PROC_PERF_DOMAIN * Domain;// Offset=0x0 Size=0x8
    struct _PROC_PERF_CONSTRAINT * Constraint;// Offset=0x8 Size=0x8
    struct _PROC_PERF_CHECK * PerfCheck;// Offset=0x10 Size=0x8
    struct _PROC_PERF_LOAD * Load;// Offset=0x18 Size=0x8
    struct _PROC_PERF_HISTORY * PerfHistory;// Offset=0x20 Size=0x8
    unsigned long Utility;// Offset=0x28 Size=0x4
    unsigned long AffinitizedUtility;// Offset=0x2c Size=0x4
    unsigned long MediaUtility;// Offset=0x30 Size=0x4
    unsigned short LatestAffinitizedPercent;// Offset=0x34 Size=0x2
    unsigned short AveragePerformancePercent;// Offset=0x36 Size=0x2
    unsigned long RelativePerformance;// Offset=0x38 Size=0x4
    unsigned char NtProcessor;// Offset=0x3c Size=0x1
};

enum _KHETERO_CPU_QOS
{
    KHeteroCpuQosDefault=0,
    KHeteroCpuQosHigh=0,
    KHeteroCpuQosMedium=1,
    KHeteroCpuQosLow=2,
    KHeteroCpuQosMultimedia=3,
    KHeteroCpuQosDeadline=4,
    KHeteroCpuQosDynamic=5,
    KHeteroCpuQosMax=5
};

struct _PROCESSOR_POWER_STATE// Size=0x200 (Id=472)
{
    struct _PPM_IDLE_STATES * IdleStates;// Offset=0x0 Size=0x8
    struct _PROC_IDLE_ACCOUNTING * IdleAccounting;// Offset=0x8 Size=0x8
    unsigned long long IdleTimeLast;// Offset=0x10 Size=0x8
    unsigned long long IdleTimeTotal;// Offset=0x18 Size=0x8
    unsigned long long IdleTimeEntry;// Offset=0x20 Size=0x8
    unsigned long long IdleTimeExpiration;// Offset=0x28 Size=0x8
    unsigned char NonInterruptibleTransition;// Offset=0x30 Size=0x1
    unsigned char PepWokenTransition;// Offset=0x31 Size=0x1
    unsigned char HvTargetState;// Offset=0x32 Size=0x1
    unsigned char SoftParked;// Offset=0x33 Size=0x1
    unsigned long TargetIdleState;// Offset=0x34 Size=0x4
    struct _PROC_IDLE_POLICY IdlePolicy;// Offset=0x38 Size=0x6
    union _PPM_IDLE_SYNCHRONIZATION_STATE Synchronization;// Offset=0x40 Size=0x4
    struct _PROC_FEEDBACK PerfFeedback;// Offset=0x48 Size=0x90
    enum _PROC_HYPERVISOR_STATE Hypervisor;// Offset=0xd8 Size=0x4
    unsigned long LastSysTime;// Offset=0xdc Size=0x4
    unsigned long long WmiDispatchPtr;// Offset=0xe0 Size=0x8
    long WmiInterfaceEnabled;// Offset=0xe8 Size=0x4
    struct _PPM_FFH_THROTTLE_STATE_INFO FFHThrottleStateInfo;// Offset=0xf0 Size=0x20
    struct _KDPC PerfActionDpc;// Offset=0x110 Size=0x40
    long PerfActionMask;// Offset=0x150 Size=0x4
    struct _PROC_IDLE_SNAP HvIdleCheck;// Offset=0x158 Size=0x10
    struct _PROC_PERF_CHECK_CONTEXT CheckContext;// Offset=0x168 Size=0x40
    struct _PPM_CONCURRENCY_ACCOUNTING * Concurrency;// Offset=0x1a8 Size=0x8
    struct _PPM_CONCURRENCY_ACCOUNTING * ClassConcurrency;// Offset=0x1b0 Size=0x8
    unsigned char ArchitecturalEfficiencyClass;// Offset=0x1b8 Size=0x1
    unsigned char PerformanceSchedulingClass;// Offset=0x1b9 Size=0x1
    unsigned char EfficiencySchedulingClass;// Offset=0x1ba Size=0x1
    unsigned char Unused;// Offset=0x1bb Size=0x1
    unsigned char Parked;// Offset=0x1bc Size=0x1
    unsigned char LongPriorQosPeriod;// Offset=0x1bd Size=0x1
    union // Size=0x8 (Id=0)
    {
        unsigned long long SnapTimeLast;// Offset=0x1c0 Size=0x8
        unsigned long long EnergyConsumed;// Offset=0x1c0 Size=0x8
    };
    unsigned long long ActiveTime;// Offset=0x1c8 Size=0x8
    unsigned long long TotalTime;// Offset=0x1d0 Size=0x8
    struct _POP_FX_DEVICE * FxDevice;// Offset=0x1d8 Size=0x8
    unsigned long long LastQosTranstionTsc;// Offset=0x1e0 Size=0x8
    unsigned long long QosTransitionHysteresis;// Offset=0x1e8 Size=0x8
    enum _KHETERO_CPU_QOS RequestedQosClass;// Offset=0x1f0 Size=0x4
    enum _KHETERO_CPU_QOS ResolvedQosClass;// Offset=0x1f4 Size=0x4
    unsigned short QosEquivalencyMask;// Offset=0x1f8 Size=0x2
    unsigned short HwFeedbackTableIndex;// Offset=0x1fa Size=0x2
    unsigned char HwFeedbackParkHint;// Offset=0x1fc Size=0x1
    unsigned char HwFeedbackPerformanceClass;// Offset=0x1fd Size=0x1
    unsigned char HwFeedbackEfficiencyClass;// Offset=0x1fe Size=0x1
    unsigned char HeteroCoreType;// Offset=0x1ff Size=0x1
};

struct _KTIMER// Size=0x40 (Id=512)
{
    struct _DISPATCHER_HEADER Header;// Offset=0x0 Size=0x18
    union _ULARGE_INTEGER DueTime;// Offset=0x18 Size=0x8
    struct _LIST_ENTRY TimerListEntry;// Offset=0x20 Size=0x10
    struct _KDPC * Dpc;// Offset=0x30 Size=0x8
    unsigned short Processor;// Offset=0x38 Size=0x2
    unsigned short TimerType;// Offset=0x3a Size=0x2
    unsigned long Period;// Offset=0x3c Size=0x4
};

enum _PROCESSOR_CACHE_TYPE
{
    CacheUnified=0,
    CacheInstruction=1,
    CacheData=2,
    CacheTrace=3
};

struct _CACHE_DESCRIPTOR// Size=0xc (Id=362)
{
    unsigned char Level;// Offset=0x0 Size=0x1
    unsigned char Associativity;// Offset=0x1 Size=0x1
    unsigned short LineSize;// Offset=0x2 Size=0x2
    unsigned long Size;// Offset=0x4 Size=0x4
    enum _PROCESSOR_CACHE_TYPE Type;// Offset=0x8 Size=0x4
};

struct _SYNCH_COUNTERS// Size=0xb8 (Id=515)
{
    unsigned long SpinLockAcquireCount;// Offset=0x0 Size=0x4
    unsigned long SpinLockContentionCount;// Offset=0x4 Size=0x4
    unsigned long SpinLockSpinCount;// Offset=0x8 Size=0x4
    unsigned long IpiSendRequestBroadcastCount;// Offset=0xc Size=0x4
    unsigned long IpiSendRequestRoutineCount;// Offset=0x10 Size=0x4
    unsigned long IpiSendSoftwareInterruptCount;// Offset=0x14 Size=0x4
    unsigned long ExInitializeResourceCount;// Offset=0x18 Size=0x4
    unsigned long ExReInitializeResourceCount;// Offset=0x1c Size=0x4
    unsigned long ExDeleteResourceCount;// Offset=0x20 Size=0x4
    unsigned long ExecutiveResourceAcquiresCount;// Offset=0x24 Size=0x4
    unsigned long ExecutiveResourceContentionsCount;// Offset=0x28 Size=0x4
    unsigned long ExecutiveResourceReleaseExclusiveCount;// Offset=0x2c Size=0x4
    unsigned long ExecutiveResourceReleaseSharedCount;// Offset=0x30 Size=0x4
    unsigned long ExecutiveResourceConvertsCount;// Offset=0x34 Size=0x4
    unsigned long ExAcqResExclusiveAttempts;// Offset=0x38 Size=0x4
    unsigned long ExAcqResExclusiveAcquiresExclusive;// Offset=0x3c Size=0x4
    unsigned long ExAcqResExclusiveAcquiresExclusiveRecursive;// Offset=0x40 Size=0x4
    unsigned long ExAcqResExclusiveWaits;// Offset=0x44 Size=0x4
    unsigned long ExAcqResExclusiveNotAcquires;// Offset=0x48 Size=0x4
    unsigned long ExAcqResSharedAttempts;// Offset=0x4c Size=0x4
    unsigned long ExAcqResSharedAcquiresExclusive;// Offset=0x50 Size=0x4
    unsigned long ExAcqResSharedAcquiresShared;// Offset=0x54 Size=0x4
    unsigned long ExAcqResSharedAcquiresSharedRecursive;// Offset=0x58 Size=0x4
    unsigned long ExAcqResSharedWaits;// Offset=0x5c Size=0x4
    unsigned long ExAcqResSharedNotAcquires;// Offset=0x60 Size=0x4
    unsigned long ExAcqResSharedStarveExclusiveAttempts;// Offset=0x64 Size=0x4
    unsigned long ExAcqResSharedStarveExclusiveAcquiresExclusive;// Offset=0x68 Size=0x4
    unsigned long ExAcqResSharedStarveExclusiveAcquiresShared;// Offset=0x6c Size=0x4
    unsigned long ExAcqResSharedStarveExclusiveAcquiresSharedRecursive;// Offset=0x70 Size=0x4
    unsigned long ExAcqResSharedStarveExclusiveWaits;// Offset=0x74 Size=0x4
    unsigned long ExAcqResSharedStarveExclusiveNotAcquires;// Offset=0x78 Size=0x4
    unsigned long ExAcqResSharedWaitForExclusiveAttempts;// Offset=0x7c Size=0x4
    unsigned long ExAcqResSharedWaitForExclusiveAcquiresExclusive;// Offset=0x80 Size=0x4
    unsigned long ExAcqResSharedWaitForExclusiveAcquiresShared;// Offset=0x84 Size=0x4
    unsigned long ExAcqResSharedWaitForExclusiveAcquiresSharedRecursive;// Offset=0x88 Size=0x4
    unsigned long ExAcqResSharedWaitForExclusiveWaits;// Offset=0x8c Size=0x4
    unsigned long ExAcqResSharedWaitForExclusiveNotAcquires;// Offset=0x90 Size=0x4
    unsigned long ExSetResOwnerPointerExclusive;// Offset=0x94 Size=0x4
    unsigned long ExSetResOwnerPointerSharedNew;// Offset=0x98 Size=0x4
    unsigned long ExSetResOwnerPointerSharedOld;// Offset=0x9c Size=0x4
    unsigned long ExTryToAcqExclusiveAttempts;// Offset=0xa0 Size=0x4
    unsigned long ExTryToAcqExclusiveAcquires;// Offset=0xa4 Size=0x4
    unsigned long ExBoostExclusiveOwner;// Offset=0xa8 Size=0x4
    unsigned long ExBoostSharedOwners;// Offset=0xac Size=0x4
    unsigned long ExEtwSynchTrackingNotificationsCount;// Offset=0xb0 Size=0x4
    unsigned long ExEtwSynchTrackingNotificationsAccountedCount;// Offset=0xb4 Size=0x4
};

struct _FILESYSTEM_DISK_COUNTERS// Size=0x10 (Id=224)
{
    unsigned long long FsBytesRead;// Offset=0x0 Size=0x8
    unsigned long long FsBytesWritten;// Offset=0x8 Size=0x8
};

struct _KENTROPY_TIMING_STATE// Size=0x150 (Id=519)
{
    unsigned long EntropyCount;// Offset=0x0 Size=0x4
    unsigned long Buffer[64];// Offset=0x4 Size=0x100
    struct _KDPC Dpc;// Offset=0x108 Size=0x40
    unsigned long LastDeliveredBuffer;// Offset=0x148 Size=0x4
};

struct _anonymous_44// Size=0x38 (Id=44)
{
    unsigned long UpdateCycle;// Offset=0x0 Size=0x4
    union // Size=0x2 (Id=0)
    {
        short PairLocal;// Offset=0x4 Size=0x2
        unsigned char PairLocalLow;// Offset=0x4 Size=0x1
    };
    struct // Size=0x1 (Id=0)
    {
        unsigned char PairLocalForceStibp:1;// Offset=0x5 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char Reserved:4;// Offset=0x5 Size=0x1 BitOffset=0x1 BitSize=0x4
        unsigned char Frozen:1;// Offset=0x5 Size=0x1 BitOffset=0x5 BitSize=0x1
        unsigned char ForceUntrusted:1;// Offset=0x5 Size=0x1 BitOffset=0x6 BitSize=0x1
        unsigned char SynchIpi:1;// Offset=0x5 Size=0x1 BitOffset=0x7 BitSize=0x1
    };
    union // Size=0x2 (Id=0)
    {
        short PairRemote;// Offset=0x6 Size=0x2
        unsigned char PairRemoteLow;// Offset=0x6 Size=0x1
    };
    unsigned char Reserved2;// Offset=0x7 Size=0x1
    unsigned char Trace[24];// Offset=0x8 Size=0x18
    unsigned long long LocalDomain;// Offset=0x20 Size=0x8
    unsigned long long RemoteDomain;// Offset=0x28 Size=0x8
    struct _KTHREAD * Thread;// Offset=0x30 Size=0x8
};

struct _IOP_IRP_STACK_PROFILER// Size=0x54 (Id=490)
{
    unsigned long Profile[20];// Offset=0x0 Size=0x50
    unsigned long TotalIrps;// Offset=0x50 Size=0x4
};

struct _KSECURE_FAULT_INFORMATION// Size=0x10 (Id=297)
{
    unsigned long long FaultCode;// Offset=0x0 Size=0x8
    unsigned long long FaultVa;// Offset=0x8 Size=0x8
};

struct _KSHARED_READY_QUEUE// Size=0x270 (Id=401)
{
    unsigned long long Lock;// Offset=0x0 Size=0x8
    unsigned long ReadySummary;// Offset=0x8 Size=0x4
    struct _LIST_ENTRY ReadyListHead[32];// Offset=0x10 Size=0x200
    char RunningSummary[64];// Offset=0x210 Size=0x40
    unsigned char Span;// Offset=0x250 Size=0x1
    unsigned char LowProcIndex;// Offset=0x251 Size=0x1
    unsigned char QueueIndex;// Offset=0x252 Size=0x1
    unsigned char ProcCount;// Offset=0x253 Size=0x1
    unsigned char ScanOwner;// Offset=0x254 Size=0x1
    unsigned char Spare[3];// Offset=0x255 Size=0x3
    unsigned long long Affinity;// Offset=0x258 Size=0x8
    unsigned long ReadyThreadCount;// Offset=0x260 Size=0x4
    unsigned long long ReadyQueueExpectedRunTime;// Offset=0x268 Size=0x8
};

struct _KTIMER_EXPIRATION_TRACE// Size=0x10 (Id=499)
{
    unsigned long long InterruptTime;// Offset=0x0 Size=0x8
    union _LARGE_INTEGER PerformanceCounter;// Offset=0x8 Size=0x8
};

struct _MACHINE_FRAME// Size=0x28 (Id=638)
{
    unsigned long long Rip;// Offset=0x0 Size=0x8
    unsigned short SegCs;// Offset=0x8 Size=0x2
    unsigned short Fill1[3];// Offset=0xa Size=0x6
    unsigned long EFlags;// Offset=0x10 Size=0x4
    unsigned long Fill2;// Offset=0x14 Size=0x4
    unsigned long long Rsp;// Offset=0x18 Size=0x8
    unsigned short SegSs;// Offset=0x20 Size=0x2
    unsigned short Fill3[3];// Offset=0x22 Size=0x6
};

struct _MACHINE_CHECK_CONTEXT// Size=0x50 (Id=427)
{
    struct _MACHINE_FRAME MachineFrame;// Offset=0x0 Size=0x28
    unsigned long long Rax;// Offset=0x28 Size=0x8
    unsigned long long Rcx;// Offset=0x30 Size=0x8
    unsigned long long Rdx;// Offset=0x38 Size=0x8
    unsigned long long GsBase;// Offset=0x40 Size=0x8
    unsigned long long Cr3;// Offset=0x48 Size=0x8
};

struct _KLOCK_QUEUE_HANDLE// Size=0x18 (Id=403)
{
    struct _KSPIN_LOCK_QUEUE LockQueue;// Offset=0x0 Size=0x10
    unsigned char OldIrql;// Offset=0x10 Size=0x1
};

struct _KREQUEST_PACKET// Size=0x20 (Id=298)
{
    void * CurrentPacket[3];// Offset=0x0 Size=0x18
    void  ( * WorkerRoutine)(void * ,void * ,void * ,void * );// Offset=0x18 Size=0x8
};

struct _REQUEST_MAILBOX// Size=0x40 (Id=282)
{
    struct _REQUEST_MAILBOX * Next;// Offset=0x0 Size=0x8
    unsigned long long RequestSummary;// Offset=0x8 Size=0x8
    struct _KREQUEST_PACKET RequestPacket;// Offset=0x10 Size=0x20
    long * NodeTargetCountAddr;// Offset=0x30 Size=0x8
    long NodeTargetCount;// Offset=0x38 Size=0x4
};

struct _KPRCB// Size=0xaf00 (Id=45)
{
    unsigned long MxCsr;// Offset=0x0 Size=0x4
    unsigned char LegacyNumber;// Offset=0x4 Size=0x1
    unsigned char ReservedMustBeZero;// Offset=0x5 Size=0x1
    unsigned char InterruptRequest;// Offset=0x6 Size=0x1
    unsigned char IdleHalt;// Offset=0x7 Size=0x1
    struct _KTHREAD * CurrentThread;// Offset=0x8 Size=0x8
    struct _KTHREAD * NextThread;// Offset=0x10 Size=0x8
    struct _KTHREAD * IdleThread;// Offset=0x18 Size=0x8
    unsigned char NestingLevel;// Offset=0x20 Size=0x1
    unsigned char ClockOwner;// Offset=0x21 Size=0x1
    union // Size=0x1 (Id=0)
    {
        unsigned char PendingTickFlags;// Offset=0x22 Size=0x1
        struct // Size=0x1 (Id=0)
        {
            unsigned char PendingTick:1;// Offset=0x22 Size=0x1 BitOffset=0x0 BitSize=0x1
            unsigned char PendingBackupTick:1;// Offset=0x22 Size=0x1 BitOffset=0x1 BitSize=0x1
        };
    };
    unsigned char IdleState;// Offset=0x23 Size=0x1
    unsigned long Number;// Offset=0x24 Size=0x4
    unsigned long long RspBase;// Offset=0x28 Size=0x8
    unsigned long long PrcbLock;// Offset=0x30 Size=0x8
    char * PriorityState;// Offset=0x38 Size=0x8
    char CpuType;// Offset=0x40 Size=0x1
    char CpuID;// Offset=0x41 Size=0x1
    union // Size=0x2 (Id=0)
    {
        unsigned short CpuStep;// Offset=0x42 Size=0x2
        unsigned char CpuStepping;// Offset=0x42 Size=0x1
    };
    unsigned char CpuModel;// Offset=0x43 Size=0x1
    unsigned long MHz;// Offset=0x44 Size=0x4
    unsigned long long HalReserved[8];// Offset=0x48 Size=0x40
    unsigned short MinorVersion;// Offset=0x88 Size=0x2
    unsigned short MajorVersion;// Offset=0x8a Size=0x2
    unsigned char BuildType;// Offset=0x8c Size=0x1
    unsigned char CpuVendor;// Offset=0x8d Size=0x1
    unsigned char LegacyCoresPerPhysicalProcessor;// Offset=0x8e Size=0x1
    unsigned char LegacyLogicalProcessorsPerCore;// Offset=0x8f Size=0x1
    unsigned long long TscFrequency;// Offset=0x90 Size=0x8
    unsigned long CoresPerPhysicalProcessor;// Offset=0x98 Size=0x4
    unsigned long LogicalProcessorsPerCore;// Offset=0x9c Size=0x4
    unsigned long long PrcbPad04[4];// Offset=0xa0 Size=0x20
    struct _KNODE * ParentNode;// Offset=0xc0 Size=0x8
    unsigned long long GroupSetMember;// Offset=0xc8 Size=0x8
    unsigned char Group;// Offset=0xd0 Size=0x1
    unsigned char GroupIndex;// Offset=0xd1 Size=0x1
    unsigned char PrcbPad05[2];// Offset=0xd2 Size=0x2
    unsigned long InitialApicId;// Offset=0xd4 Size=0x4
    unsigned long ScbOffset;// Offset=0xd8 Size=0x4
    unsigned long ApicMask;// Offset=0xdc Size=0x4
    void * AcpiReserved;// Offset=0xe0 Size=0x8
    unsigned long CFlushSize;// Offset=0xe8 Size=0x4
    union _KPRCBFLAG PrcbFlags;// Offset=0xec Size=0x4
    unsigned long long PrcbPad11[2];// Offset=0xf0 Size=0x10
    struct _KPROCESSOR_STATE ProcessorState;// Offset=0x100 Size=0x5c0
    struct _XSAVE_AREA_HEADER * ExtendedSupervisorState;// Offset=0x6c0 Size=0x8
    unsigned long ProcessorSignature;// Offset=0x6c8 Size=0x4
    unsigned long ProcessorFlags;// Offset=0x6cc Size=0x4
    union // Size=0x6d8 (Id=0)
    {
        unsigned short BpbRetpolineExitSpecCtrl;// Offset=0x6d0 Size=0x2
        unsigned short BpbTrappedRetpolineExitSpecCtrl;// Offset=0x6d2 Size=0x2
        union // Size=0x2 (Id=0)
        {
            unsigned short BpbTrappedBpbState;// Offset=0x6d4 Size=0x2
            struct // Size=0x2 (Id=0)
            {
                unsigned short BpbTrappedCpuIdle:1;// Offset=0x6d4 Size=0x2 BitOffset=0x0 BitSize=0x1
                unsigned short BpbTrappedFlushRsbOnTrap:1;// Offset=0x6d4 Size=0x2 BitOffset=0x1 BitSize=0x1
                unsigned short BpbTrappedIbpbOnReturn:1;// Offset=0x6d4 Size=0x2 BitOffset=0x2 BitSize=0x1
                unsigned short BpbTrappedIbpbOnTrap:1;// Offset=0x6d4 Size=0x2 BitOffset=0x3 BitSize=0x1
                unsigned short BpbTrappedIbpbOnRetpolineExit:1;// Offset=0x6d4 Size=0x2 BitOffset=0x4 BitSize=0x1
                unsigned short BpbTrappedBpbStateReserved:3;// Offset=0x6d4 Size=0x2 BitOffset=0x5 BitSize=0x3
                unsigned short BpbTrappedBpbStateReserved2:8;// Offset=0x6d4 Size=0x2 BitOffset=0x8 BitSize=0x8
            };
        };
        union // Size=0x1 (Id=0)
        {
            unsigned char BpbRetpolineState;// Offset=0x6d6 Size=0x1
            struct // Size=0x1 (Id=0)
            {
                unsigned char BpbRunningNonRetpolineCode:1;// Offset=0x6d6 Size=0x1 BitOffset=0x0 BitSize=0x1
                unsigned char BpbIndirectCallsSafe:1;// Offset=0x6d6 Size=0x1 BitOffset=0x1 BitSize=0x1
                unsigned char BpbRetpolineEnabled:1;// Offset=0x6d6 Size=0x1 BitOffset=0x2 BitSize=0x1
                unsigned char BpbRetpolineStateReserved:5;// Offset=0x6d6 Size=0x1 BitOffset=0x3 BitSize=0x5
            };
        };
        unsigned char PrcbPad12b;// Offset=0x6d7 Size=0x1
        unsigned long long PrcbPad12a;// Offset=0x6d0 Size=0x8
    };
    union // Size=0x6f0 (Id=0)
    {
        unsigned long long TrappedSecurityDomain;// Offset=0x6d8 Size=0x8
        union // Size=0x2 (Id=0)
        {
            unsigned short BpbState;// Offset=0x6e0 Size=0x2
            struct // Size=0x2 (Id=0)
            {
                unsigned short BpbCpuIdle:1;// Offset=0x6e0 Size=0x2 BitOffset=0x0 BitSize=0x1
                unsigned short BpbFlushRsbOnTrap:1;// Offset=0x6e0 Size=0x2 BitOffset=0x1 BitSize=0x1
                unsigned short BpbIbpbOnReturn:1;// Offset=0x6e0 Size=0x2 BitOffset=0x2 BitSize=0x1
                unsigned short BpbIbpbOnTrap:1;// Offset=0x6e0 Size=0x2 BitOffset=0x3 BitSize=0x1
                unsigned short BpbIbpbOnRetpolineExit:1;// Offset=0x6e0 Size=0x2 BitOffset=0x4 BitSize=0x1
                unsigned short BpbFlushRsbOnReturn:1;// Offset=0x6e0 Size=0x2 BitOffset=0x5 BitSize=0x1
                unsigned short BpbFlushRsbOnRetpolineExit:1;// Offset=0x6e0 Size=0x2 BitOffset=0x6 BitSize=0x1
                unsigned short BpbDivideOnReturn:1;// Offset=0x6e0 Size=0x2 BitOffset=0x7 BitSize=0x1
                unsigned short VerwOnNonKvaReturn:1;// Offset=0x6e0 Size=0x2 BitOffset=0x8 BitSize=0x1
                unsigned short FlushBhbOnTrap:1;// Offset=0x6e0 Size=0x2 BitOffset=0x9 BitSize=0x1
                unsigned short Spare:6;// Offset=0x6e0 Size=0x2 BitOffset=0xa BitSize=0x6
            };
        };
        union // Size=0x1 (Id=0)
        {
            unsigned char BpbFeatures;// Offset=0x6e2 Size=0x1
            struct // Size=0x1 (Id=0)
            {
                unsigned char BpbClearOnIdle:1;// Offset=0x6e2 Size=0x1 BitOffset=0x0 BitSize=0x1
                unsigned char BpbEnabled:1;// Offset=0x6e2 Size=0x1 BitOffset=0x1 BitSize=0x1
                unsigned char BpbSmep:1;// Offset=0x6e2 Size=0x1 BitOffset=0x2 BitSize=0x1
                unsigned char BpbKCet:1;// Offset=0x6e2 Size=0x1 BitOffset=0x3 BitSize=0x1
                unsigned char BhbFlushSequence:2;// Offset=0x6e2 Size=0x1 BitOffset=0x4 BitSize=0x2
                unsigned char VerwOnIdle:1;// Offset=0x6e2 Size=0x1 BitOffset=0x6 BitSize=0x1
                unsigned char BpbFeaturesReserved:1;// Offset=0x6e2 Size=0x1 BitOffset=0x7 BitSize=0x1
            };
        };
        unsigned char PrcbPad12e[1];// Offset=0x6e3 Size=0x1
        unsigned short BpbCurrentSpecCtrl;// Offset=0x6e4 Size=0x2
        unsigned short BpbKernelSpecCtrl;// Offset=0x6e6 Size=0x2
        unsigned short BpbNmiSpecCtrl;// Offset=0x6e8 Size=0x2
        unsigned short BpbUserSpecCtrl;// Offset=0x6ea Size=0x2
        short PairRegister;// Offset=0x6ec Size=0x2
        unsigned char PrcbPad12d[2];// Offset=0x6ee Size=0x2
        unsigned long long PrcbPad12c[3];// Offset=0x6d8 Size=0x18
    };
    struct _KSPIN_LOCK_QUEUE LockQueue[17];// Offset=0x6f0 Size=0x110
    struct _PP_LOOKASIDE_LIST PPLookasideList[16];// Offset=0x800 Size=0x100
    struct _GENERAL_LOOKASIDE_POOL PPNxPagedLookasideList[32];// Offset=0x900 Size=0xc00
    struct _GENERAL_LOOKASIDE_POOL PPNPagedLookasideList[32];// Offset=0x1500 Size=0xc00
    struct _GENERAL_LOOKASIDE_POOL PPPagedLookasideList[32];// Offset=0x2100 Size=0xc00
    unsigned long long PrcbPad20;// Offset=0x2d00 Size=0x8
    struct _SINGLE_LIST_ENTRY DeferredReadyListHead;// Offset=0x2d08 Size=0x8
    long MmPageFaultCount;// Offset=0x2d10 Size=0x4
    long MmCopyOnWriteCount;// Offset=0x2d14 Size=0x4
    long MmTransitionCount;// Offset=0x2d18 Size=0x4
    long MmDemandZeroCount;// Offset=0x2d1c Size=0x4
    long MmPageReadCount;// Offset=0x2d20 Size=0x4
    long MmPageReadIoCount;// Offset=0x2d24 Size=0x4
    long MmDirtyPagesWriteCount;// Offset=0x2d28 Size=0x4
    long MmDirtyWriteIoCount;// Offset=0x2d2c Size=0x4
    long MmMappedPagesWriteCount;// Offset=0x2d30 Size=0x4
    long MmMappedWriteIoCount;// Offset=0x2d34 Size=0x4
    unsigned long KeSystemCalls;// Offset=0x2d38 Size=0x4
    unsigned long KeContextSwitches;// Offset=0x2d3c Size=0x4
    unsigned long PrcbPad40;// Offset=0x2d40 Size=0x4
    unsigned long CcFastReadNoWait;// Offset=0x2d44 Size=0x4
    unsigned long CcFastReadWait;// Offset=0x2d48 Size=0x4
    unsigned long CcFastReadNotPossible;// Offset=0x2d4c Size=0x4
    unsigned long CcCopyReadNoWait;// Offset=0x2d50 Size=0x4
    unsigned long CcCopyReadWait;// Offset=0x2d54 Size=0x4
    unsigned long CcCopyReadNoWaitMiss;// Offset=0x2d58 Size=0x4
    long IoReadOperationCount;// Offset=0x2d5c Size=0x4
    long IoWriteOperationCount;// Offset=0x2d60 Size=0x4
    long IoOtherOperationCount;// Offset=0x2d64 Size=0x4
    union _LARGE_INTEGER IoReadTransferCount;// Offset=0x2d68 Size=0x8
    union _LARGE_INTEGER IoWriteTransferCount;// Offset=0x2d70 Size=0x8
    union _LARGE_INTEGER IoOtherTransferCount;// Offset=0x2d78 Size=0x8
    long PacketBarrier;// Offset=0x2d80 Size=0x4
    long TargetCount;// Offset=0x2d84 Size=0x4
    unsigned long IpiFrozen;// Offset=0x2d88 Size=0x4
    unsigned long PrcbPad30;// Offset=0x2d8c Size=0x4
    void * IsrDpcStats;// Offset=0x2d90 Size=0x8
    unsigned long DeviceInterrupts;// Offset=0x2d98 Size=0x4
    long LookasideIrpFloat;// Offset=0x2d9c Size=0x4
    unsigned long InterruptLastCount;// Offset=0x2da0 Size=0x4
    unsigned long InterruptRate;// Offset=0x2da4 Size=0x4
    unsigned long long PrcbPad31;// Offset=0x2da8 Size=0x8
    struct _KPRCB * PairPrcb;// Offset=0x2db0 Size=0x8
    struct _KSTATIC_AFFINITY_BLOCK StaticAffinity;// Offset=0x2db8 Size=0x2a0
    unsigned long long PrcbPad35[5];// Offset=0x3058 Size=0x28
    union _SLIST_HEADER InterruptObjectPool;// Offset=0x3080 Size=0x10
    struct _RTL_HASH_TABLE * DpcRuntimeHistoryHashTable;// Offset=0x3090 Size=0x8
    struct _KDPC * DpcRuntimeHistoryHashTableCleanupDpc;// Offset=0x3098 Size=0x8
    void  ( * CurrentDpcRoutine)(struct _KDPC * ,void * ,void * ,void * );// Offset=0x30a0 Size=0x8
    unsigned long long CurrentDpcRuntimeHistoryCached;// Offset=0x30a8 Size=0x8
    unsigned long long CurrentDpcStartTime;// Offset=0x30b0 Size=0x8
    unsigned long long PrcbPad41[1];// Offset=0x30b8 Size=0x8
    struct _KDPC_DATA DpcData[2];// Offset=0x30c0 Size=0x50
    void * DpcStack;// Offset=0x3110 Size=0x8
    long MaximumDpcQueueDepth;// Offset=0x3118 Size=0x4
    unsigned long DpcRequestRate;// Offset=0x311c Size=0x4
    unsigned long MinimumDpcRate;// Offset=0x3120 Size=0x4
    unsigned long DpcLastCount;// Offset=0x3124 Size=0x4
    unsigned char ThreadDpcEnable;// Offset=0x3128 Size=0x1
    unsigned char QuantumEnd;// Offset=0x3129 Size=0x1
    unsigned char DpcRoutineActive;// Offset=0x312a Size=0x1
    unsigned char IdleSchedule;// Offset=0x312b Size=0x1
    union // Size=0x3130 (Id=0)
    {
        long DpcRequestSummary;// Offset=0x312c Size=0x4
        short DpcRequestSlot[2];// Offset=0x312c Size=0x4
        short NormalDpcState;// Offset=0x312c Size=0x2
        short ThreadDpcState;// Offset=0x312e Size=0x2
        struct // Size=0x4 (Id=0)
        {
            unsigned long DpcNormalProcessingActive:1;// Offset=0x312c Size=0x4 BitOffset=0x0 BitSize=0x1
            unsigned long DpcNormalProcessingRequested:1;// Offset=0x312c Size=0x4 BitOffset=0x1 BitSize=0x1
            unsigned long DpcNormalThreadSignal:1;// Offset=0x312c Size=0x4 BitOffset=0x2 BitSize=0x1
            unsigned long DpcNormalTimerExpiration:1;// Offset=0x312c Size=0x4 BitOffset=0x3 BitSize=0x1
            unsigned long DpcNormalDpcPresent:1;// Offset=0x312c Size=0x4 BitOffset=0x4 BitSize=0x1
            unsigned long DpcNormalLocalInterrupt:1;// Offset=0x312c Size=0x4 BitOffset=0x5 BitSize=0x1
            unsigned long DpcNormalSpare:10;// Offset=0x312c Size=0x4 BitOffset=0x6 BitSize=0xa
            unsigned long DpcThreadActive:1;// Offset=0x312c Size=0x4 BitOffset=0x10 BitSize=0x1
            unsigned long DpcThreadRequested:1;// Offset=0x312c Size=0x4 BitOffset=0x11 BitSize=0x1
            unsigned long DpcThreadSpare:14;// Offset=0x312c Size=0x4 BitOffset=0x12 BitSize=0xe
        };
    };
    unsigned long PrcbPad93;// Offset=0x3130 Size=0x4
    unsigned long LastTick;// Offset=0x3134 Size=0x4
    unsigned long ClockInterrupts;// Offset=0x3138 Size=0x4
    unsigned long ReadyScanTick;// Offset=0x313c Size=0x4
    void * InterruptObject[256];// Offset=0x3140 Size=0x800
    struct _KTIMER_TABLE TimerTable;// Offset=0x3940 Size=0x4218
    unsigned long PrcbPad92[10];// Offset=0x7b58 Size=0x28
    struct _KGATE DpcGate;// Offset=0x7b80 Size=0x18
    void * PrcbPad52;// Offset=0x7b98 Size=0x8
    struct _KDPC CallDpc;// Offset=0x7ba0 Size=0x40
    long ClockKeepAlive;// Offset=0x7be0 Size=0x4
    unsigned char PrcbPad60[2];// Offset=0x7be4 Size=0x2
    union // Size=0x7be8 (Id=0)
    {
        unsigned char NmiActive;// Offset=0x7be6 Size=0x1
        unsigned char MceActive;// Offset=0x7be7 Size=0x1
        unsigned short CombinedNmiMceActive;// Offset=0x7be6 Size=0x2
    };
    long DpcWatchdogPeriod;// Offset=0x7be8 Size=0x4
    long DpcWatchdogCount;// Offset=0x7bec Size=0x4
    long KeSpinLockOrdering;// Offset=0x7bf0 Size=0x4
    unsigned long DpcWatchdogProfileCumulativeDpcThreshold;// Offset=0x7bf4 Size=0x4
    void * CachedPtes;// Offset=0x7bf8 Size=0x8
    struct _LIST_ENTRY WaitListHead;// Offset=0x7c00 Size=0x10
    unsigned long long WaitLock;// Offset=0x7c10 Size=0x8
    unsigned long ReadySummary;// Offset=0x7c18 Size=0x4
    long AffinitizedSelectionMask;// Offset=0x7c1c Size=0x4
    unsigned long QueueIndex;// Offset=0x7c20 Size=0x4
    unsigned long PrcbPad75[2];// Offset=0x7c24 Size=0x8
    unsigned long DpcWatchdogSequenceNumber;// Offset=0x7c2c Size=0x4
    struct _KDPC TimerExpirationDpc;// Offset=0x7c30 Size=0x40
    struct _RTL_RB_TREE ScbQueue;// Offset=0x7c70 Size=0x10
    struct _LIST_ENTRY DispatcherReadyListHead[32];// Offset=0x7c80 Size=0x200
    unsigned long InterruptCount;// Offset=0x7e80 Size=0x4
    unsigned long KernelTime;// Offset=0x7e84 Size=0x4
    unsigned long UserTime;// Offset=0x7e88 Size=0x4
    unsigned long DpcTime;// Offset=0x7e8c Size=0x4
    unsigned long InterruptTime;// Offset=0x7e90 Size=0x4
    unsigned long AdjustDpcThreshold;// Offset=0x7e94 Size=0x4
    unsigned char DebuggerSavedIRQL;// Offset=0x7e98 Size=0x1
    unsigned char GroupSchedulingOverQuota;// Offset=0x7e99 Size=0x1
    unsigned char DeepSleep;// Offset=0x7e9a Size=0x1
    unsigned char PrcbPad80;// Offset=0x7e9b Size=0x1
    unsigned long DpcTimeCount;// Offset=0x7e9c Size=0x4
    unsigned long DpcTimeLimit;// Offset=0x7ea0 Size=0x4
    unsigned long PeriodicCount;// Offset=0x7ea4 Size=0x4
    unsigned long PeriodicBias;// Offset=0x7ea8 Size=0x4
    unsigned long AvailableTime;// Offset=0x7eac Size=0x4
    unsigned long KeExceptionDispatchCount;// Offset=0x7eb0 Size=0x4
    unsigned long ReadyThreadCount;// Offset=0x7eb4 Size=0x4
    unsigned long long ReadyQueueExpectedRunTime;// Offset=0x7eb8 Size=0x8
    unsigned long long StartCycles;// Offset=0x7ec0 Size=0x8
    unsigned long long TaggedCyclesStart;// Offset=0x7ec8 Size=0x8
    unsigned long long TaggedCycles[3];// Offset=0x7ed0 Size=0x18
    unsigned long long AffinitizedCycles;// Offset=0x7ee8 Size=0x8
    unsigned long long ImportantCycles;// Offset=0x7ef0 Size=0x8
    unsigned long long UnimportantCycles;// Offset=0x7ef8 Size=0x8
    unsigned long DpcWatchdogProfileSingleDpcThreshold;// Offset=0x7f00 Size=0x4
    long MmSpinLockOrdering;// Offset=0x7f04 Size=0x4
    void * CachedStack;// Offset=0x7f08 Size=0x8
    unsigned long PageColor;// Offset=0x7f10 Size=0x4
    unsigned long NodeColor;// Offset=0x7f14 Size=0x4
    unsigned long NodeShiftedColor;// Offset=0x7f18 Size=0x4
    unsigned long SecondaryColorMask;// Offset=0x7f1c Size=0x4
    unsigned char PrcbPad81[6];// Offset=0x7f20 Size=0x6
    unsigned char ExceptionStackActive;// Offset=0x7f26 Size=0x1
    unsigned char TbFlushListActive;// Offset=0x7f27 Size=0x1
    void * ExceptionStack;// Offset=0x7f28 Size=0x8
    unsigned long long PrcbPad82[1];// Offset=0x7f30 Size=0x8
    unsigned long long CycleTime;// Offset=0x7f38 Size=0x8
    unsigned long long Cycles[4][2];// Offset=0x7f40 Size=0x40
    unsigned long CcFastMdlReadNoWait;// Offset=0x7f80 Size=0x4
    unsigned long CcFastMdlReadWait;// Offset=0x7f84 Size=0x4
    unsigned long CcFastMdlReadNotPossible;// Offset=0x7f88 Size=0x4
    unsigned long CcMapDataNoWait;// Offset=0x7f8c Size=0x4
    unsigned long CcMapDataWait;// Offset=0x7f90 Size=0x4
    unsigned long CcPinMappedDataCount;// Offset=0x7f94 Size=0x4
    unsigned long CcPinReadNoWait;// Offset=0x7f98 Size=0x4
    unsigned long CcPinReadWait;// Offset=0x7f9c Size=0x4
    unsigned long CcMdlReadNoWait;// Offset=0x7fa0 Size=0x4
    unsigned long CcMdlReadWait;// Offset=0x7fa4 Size=0x4
    unsigned long CcLazyWriteHotSpots;// Offset=0x7fa8 Size=0x4
    unsigned long CcLazyWriteIos;// Offset=0x7fac Size=0x4
    unsigned long CcLazyWritePages;// Offset=0x7fb0 Size=0x4
    unsigned long CcDataFlushes;// Offset=0x7fb4 Size=0x4
    unsigned long CcDataPages;// Offset=0x7fb8 Size=0x4
    unsigned long CcLostDelayedWrites;// Offset=0x7fbc Size=0x4
    unsigned long CcFastReadResourceMiss;// Offset=0x7fc0 Size=0x4
    unsigned long CcCopyReadWaitMiss;// Offset=0x7fc4 Size=0x4
    unsigned long CcFastMdlReadResourceMiss;// Offset=0x7fc8 Size=0x4
    unsigned long CcMapDataNoWaitMiss;// Offset=0x7fcc Size=0x4
    unsigned long CcMapDataWaitMiss;// Offset=0x7fd0 Size=0x4
    unsigned long CcPinReadNoWaitMiss;// Offset=0x7fd4 Size=0x4
    unsigned long CcPinReadWaitMiss;// Offset=0x7fd8 Size=0x4
    unsigned long CcMdlReadNoWaitMiss;// Offset=0x7fdc Size=0x4
    unsigned long CcMdlReadWaitMiss;// Offset=0x7fe0 Size=0x4
    unsigned long CcReadAheadIos;// Offset=0x7fe4 Size=0x4
    long MmCacheTransitionCount;// Offset=0x7fe8 Size=0x4
    long MmCacheReadCount;// Offset=0x7fec Size=0x4
    long MmCacheIoCount;// Offset=0x7ff0 Size=0x4
    unsigned long PrcbPad91;// Offset=0x7ff4 Size=0x4
    void * MmInternal;// Offset=0x7ff8 Size=0x8
    struct _PROCESSOR_POWER_STATE PowerState;// Offset=0x8000 Size=0x200
    void * HyperPte;// Offset=0x8200 Size=0x8
    struct _LIST_ENTRY ScbList;// Offset=0x8208 Size=0x10
    struct _KDPC ForceIdleDpc;// Offset=0x8218 Size=0x40
    struct _KDPC DpcWatchdogDpc;// Offset=0x8258 Size=0x40
    struct _KTIMER DpcWatchdogTimer;// Offset=0x8298 Size=0x40
    struct _CACHE_DESCRIPTOR Cache[5];// Offset=0x82d8 Size=0x3c
    unsigned long CacheCount;// Offset=0x8314 Size=0x4
    unsigned long CachedCommit;// Offset=0x8318 Size=0x4
    unsigned long CachedResidentAvailable;// Offset=0x831c Size=0x4
    void * WheaInfo;// Offset=0x8320 Size=0x8
    void * EtwSupport;// Offset=0x8328 Size=0x8
    void * ExSaPageArray;// Offset=0x8330 Size=0x8
    unsigned long KeAlignmentFixupCount;// Offset=0x8338 Size=0x4
    unsigned long PrcbPad95;// Offset=0x833c Size=0x4
    union _SLIST_HEADER HypercallPageList;// Offset=0x8340 Size=0x10
    unsigned long long * StatisticsPage;// Offset=0x8350 Size=0x8
    unsigned long long GenerationTarget;// Offset=0x8358 Size=0x8
    unsigned long long PrcbPad85[4];// Offset=0x8360 Size=0x20
    void * HypercallCachedPages;// Offset=0x8380 Size=0x8
    void * VirtualApicAssist;// Offset=0x8388 Size=0x8
    struct _KAFFINITY_EX PackageProcessorSet;// Offset=0x8390 Size=0xa8
    unsigned long PackageId;// Offset=0x8438 Size=0x4
    unsigned long PrcbPad86;// Offset=0x843c Size=0x4
    unsigned long long SharedReadyQueueMask;// Offset=0x8440 Size=0x8
    struct _KSHARED_READY_QUEUE * SharedReadyQueue;// Offset=0x8448 Size=0x8
    unsigned long SharedQueueScanOwner;// Offset=0x8450 Size=0x4
    unsigned long ScanSiblingIndex;// Offset=0x8454 Size=0x4
    unsigned long long CoreProcessorSet;// Offset=0x8458 Size=0x8
    unsigned long long ScanSiblingMask;// Offset=0x8460 Size=0x8
    unsigned long long LLCMask;// Offset=0x8468 Size=0x8
    unsigned long long CacheProcessorMask[5];// Offset=0x8470 Size=0x28
    struct _PROCESSOR_PROFILE_CONTROL_AREA * ProcessorProfileControlArea;// Offset=0x8498 Size=0x8
    void * ProfileEventIndexAddress;// Offset=0x84a0 Size=0x8
    void ** DpcWatchdogProfile;// Offset=0x84a8 Size=0x8
    void ** DpcWatchdogProfileCurrentEmptyCapture;// Offset=0x84b0 Size=0x8
    void * SchedulerAssist;// Offset=0x84b8 Size=0x8
    struct _SYNCH_COUNTERS SynchCounters;// Offset=0x84c0 Size=0xb8
    unsigned long long PrcbPad94;// Offset=0x8578 Size=0x8
    struct _FILESYSTEM_DISK_COUNTERS FsCounters;// Offset=0x8580 Size=0x10
    unsigned char VendorString[13];// Offset=0x8590 Size=0xd
    unsigned char PrcbPad100[3];// Offset=0x859d Size=0x3
    unsigned long long FeatureBits;// Offset=0x85a0 Size=0x8
    union _LARGE_INTEGER UpdateSignature;// Offset=0x85a8 Size=0x8
    unsigned long long PteBitCache;// Offset=0x85b0 Size=0x8
    unsigned long PteBitOffset;// Offset=0x85b8 Size=0x4
    unsigned long PrcbPad105;// Offset=0x85bc Size=0x4
    struct _CONTEXT * Context;// Offset=0x85c0 Size=0x8
    unsigned long ContextFlagsInit;// Offset=0x85c8 Size=0x4
    unsigned long PrcbPad115;// Offset=0x85cc Size=0x4
    struct _XSAVE_AREA * ExtendedState;// Offset=0x85d0 Size=0x8
    void * IsrStack;// Offset=0x85d8 Size=0x8
    struct _KENTROPY_TIMING_STATE EntropyTimingState;// Offset=0x85e0 Size=0x150
    unsigned long long PrcbPad110;// Offset=0x8730 Size=0x8
    struct _anonymous_44 StibpPairingTrace;// Offset=0x8738 Size=0x38
    struct _SINGLE_LIST_ENTRY AbSelfIoBoostsList;// Offset=0x8770 Size=0x8
    struct _SINGLE_LIST_ENTRY AbPropagateBoostsList;// Offset=0x8778 Size=0x8
    struct _KDPC AbDpc;// Offset=0x8780 Size=0x40
    struct _IOP_IRP_STACK_PROFILER IoIrpStackProfilerCurrent;// Offset=0x87c0 Size=0x54
    struct _IOP_IRP_STACK_PROFILER IoIrpStackProfilerPrevious;// Offset=0x8814 Size=0x54
    struct _KSECURE_FAULT_INFORMATION SecureFault;// Offset=0x8868 Size=0x10
    unsigned long long PrcbPad120;// Offset=0x8878 Size=0x8
    struct _KSHARED_READY_QUEUE LocalSharedReadyQueue;// Offset=0x8880 Size=0x270
    unsigned long long PrcbPad125[2];// Offset=0x8af0 Size=0x10
    unsigned long TimerExpirationTraceCount;// Offset=0x8b00 Size=0x4
    unsigned long PrcbPad127;// Offset=0x8b04 Size=0x4
    struct _KTIMER_EXPIRATION_TRACE TimerExpirationTrace[16];// Offset=0x8b08 Size=0x100
    unsigned long long PrcbPad128[7];// Offset=0x8c08 Size=0x38
    struct _REQUEST_MAILBOX * Mailbox;// Offset=0x8c40 Size=0x8
    unsigned long long PrcbPad130[7];// Offset=0x8c48 Size=0x38
    struct _MACHINE_CHECK_CONTEXT McheckContext[2];// Offset=0x8c80 Size=0xa0
    unsigned long long PrcbPad134[4];// Offset=0x8d20 Size=0x20
    struct _KLOCK_QUEUE_HANDLE SelfmapLockHandle[4];// Offset=0x8d40 Size=0x60
    unsigned long long PrcbPad134a[4];// Offset=0x8da0 Size=0x20
    unsigned char PrcbPad138[128];// Offset=0x8dc0 Size=0x80
    unsigned char PrcbPad138a[64];// Offset=0x8e40 Size=0x40
    unsigned long long KernelDirectoryTableBase;// Offset=0x8e80 Size=0x8
    unsigned long long RspBaseShadow;// Offset=0x8e88 Size=0x8
    unsigned long long UserRspShadow;// Offset=0x8e90 Size=0x8
    unsigned long ShadowFlags;// Offset=0x8e98 Size=0x4
    unsigned long PrcbPad138b;// Offset=0x8e9c Size=0x4
    unsigned long long PrcbPad138c;// Offset=0x8ea0 Size=0x8
    unsigned short PrcbPad138d;// Offset=0x8ea8 Size=0x2
    unsigned short PrcbPad138e;// Offset=0x8eaa Size=0x2
    unsigned long DbgMceNestingLevel;// Offset=0x8eac Size=0x4
    unsigned long DbgMceFlags;// Offset=0x8eb0 Size=0x4
    unsigned long PrcbPad139b;// Offset=0x8eb4 Size=0x4
    unsigned long long PrcbPad140[505];// Offset=0x8eb8 Size=0xfc8
    unsigned long long PrcbPad140a[8];// Offset=0x9e80 Size=0x40
    unsigned long long PrcbPad141[504];// Offset=0x9ec0 Size=0xfc0
    unsigned char PrcbPad141a[64];// Offset=0xae80 Size=0x40
    struct _REQUEST_MAILBOX RequestMailbox[1];// Offset=0xaec0 Size=0x40
};
