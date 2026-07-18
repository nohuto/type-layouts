struct _KDESCRIPTOR// Size=0x10 (Id=1431)
{
    unsigned short Pad[3];// Offset=0x0 Size=0x6
    unsigned short Limit;// Offset=0x6 Size=0x2
    void * Base;// Offset=0x8 Size=0x8
};

struct _KSPECIAL_REGISTERS// Size=0xe0 (Id=1346)
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
};

struct _M128A// Size=0x10 (Id=1091)
{
    unsigned long long Low;// Offset=0x0 Size=0x8
    long long High;// Offset=0x8 Size=0x8
};

struct _XSAVE_FORMAT// Size=0x200 (Id=1244)
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

struct _CONTEXT// Size=0x4d0 (Id=687)
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

struct _KPROCESSOR_STATE// Size=0x5b0 (Id=887)
{
    struct _KSPECIAL_REGISTERS SpecialRegisters;// Offset=0x0 Size=0xe0
    struct _CONTEXT ContextFrame;// Offset=0xe0 Size=0x4d0
};

struct _KSPIN_LOCK_QUEUE// Size=0x10 (Id=61)
{
    struct _KSPIN_LOCK_QUEUE * Next;// Offset=0x0 Size=0x8
    unsigned long long * Lock;// Offset=0x8 Size=0x8
};

struct _PP_LOOKASIDE_LIST// Size=0x10 (Id=82)
{
    struct _GENERAL_LOOKASIDE * P;// Offset=0x0 Size=0x8
    struct _GENERAL_LOOKASIDE * L;// Offset=0x8 Size=0x8
};

struct _unnamed_65// Size=0x10 (Id=65)
{
    struct // Size=0x10 (Id=0)
    {
        unsigned long long Depth:16;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x10
        unsigned long long Sequence:48;// Offset=0x0 Size=0x8 BitOffset=0x10 BitSize=0x30
        unsigned long long Reserved:4;// Offset=0x8 Size=0x8 BitOffset=0x0 BitSize=0x4
        unsigned long long NextEntry:60;// Offset=0x8 Size=0x8 BitOffset=0x4 BitSize=0x3c
    };
};

union _SLIST_HEADER// Size=0x10 (Id=66)
{
    unsigned long long Alignment;// Offset=0x0 Size=0x8
    unsigned long long Region;// Offset=0x8 Size=0x8
    struct _unnamed_65 HeaderX64;// Offset=0x0 Size=0x10
};

struct _SINGLE_LIST_ENTRY// Size=0x8 (Id=47)
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

struct _LIST_ENTRY// Size=0x10 (Id=20)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _GENERAL_LOOKASIDE_POOL// Size=0x60 (Id=731)
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

struct _unnamed_28// Size=0x8 (Id=28)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=29)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_28 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _KDPC_LIST// Size=0x10 (Id=1039)
{
    struct _SINGLE_LIST_ENTRY ListHead;// Offset=0x0 Size=0x8
    struct _SINGLE_LIST_ENTRY * LastEntry;// Offset=0x8 Size=0x8
};

struct _KDPC_DATA// Size=0x28 (Id=524)
{
    struct _KDPC_LIST DpcList;// Offset=0x0 Size=0x10
    unsigned long long DpcLock;// Offset=0x10 Size=0x8
    long DpcQueueDepth;// Offset=0x18 Size=0x4
    unsigned long DpcCount;// Offset=0x1c Size=0x4
    struct _KDPC * ActiveDpc;// Offset=0x20 Size=0x8
};

struct _unnamed_8// Size=0x8 (Id=8)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    unsigned long HighPart;// Offset=0x4 Size=0x4
};

union _ULARGE_INTEGER// Size=0x8 (Id=9)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    unsigned long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_8 u;// Offset=0x0 Size=0x8
    unsigned long long QuadPart;// Offset=0x0 Size=0x8
};

struct _KTIMER_TABLE_ENTRY// Size=0x20 (Id=282)
{
    unsigned long long Lock;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY Entry;// Offset=0x8 Size=0x10
    union _ULARGE_INTEGER Time;// Offset=0x18 Size=0x8
};

struct _KTIMER_TABLE// Size=0x2200 (Id=281)
{
    struct _KTIMER * TimerExpiry[64];// Offset=0x0 Size=0x200
    struct _KTIMER_TABLE_ENTRY TimerEntries[256];// Offset=0x200 Size=0x2000
};

struct _DISPATCHER_HEADER// Size=0x18 (Id=681)
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
        unsigned char Timer2Reserved1;// Offset=0x2 Size=0x1
        unsigned char Timer2Reserved2;// Offset=0x3 Size=0x1
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

struct _KGATE// Size=0x18 (Id=784)
{
    struct _DISPATCHER_HEADER Header;// Offset=0x0 Size=0x18
};

struct _KDPC// Size=0x40 (Id=157)
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

struct _RTL_RB_TREE// Size=0x10 (Id=34)
{
    struct _RTL_BALANCED_NODE * Root;// Offset=0x0 Size=0x8
    struct _RTL_BALANCED_NODE * Min;// Offset=0x8 Size=0x8
};

struct _PROC_IDLE_POLICY// Size=0x6 (Id=1403)
{
    unsigned char PromotePercent;// Offset=0x0 Size=0x1
    unsigned char DemotePercent;// Offset=0x1 Size=0x1
    unsigned char PromotePercentBase;// Offset=0x2 Size=0x1
    unsigned char DemotePercentBase;// Offset=0x3 Size=0x1
    unsigned char AllowScaling;// Offset=0x4 Size=0x1
    unsigned char ForceLightIdle;// Offset=0x5 Size=0x1
};

union _PPM_IDLE_SYNCHRONIZATION_STATE// Size=0x4 (Id=1160)
{
    long AsLong;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        long RefCount:24;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x18
        unsigned long State:8;// Offset=0x0 Size=0x4 BitOffset=0x18 BitSize=0x8
    };
};

struct _PROC_FEEDBACK// Size=0x90 (Id=1084)
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
};

enum _PROC_HYPERVISOR_STATE
{
    ProcHypervisorNone=0,
    ProcHypervisorPresent=1,
    ProcHypervisorPower=2,
    ProcHypervisorHvCounters=3
};

struct _PPM_FFH_THROTTLE_STATE_INFO// Size=0x20 (Id=1098)
{
    unsigned char EnableLogging;// Offset=0x0 Size=0x1
    unsigned long MismatchCount;// Offset=0x4 Size=0x4
    unsigned char Initialized;// Offset=0x8 Size=0x1
    unsigned long long LastValue;// Offset=0x10 Size=0x8
    union _LARGE_INTEGER LastLogTickCount;// Offset=0x18 Size=0x8
};

struct _PROC_IDLE_SNAP// Size=0x10 (Id=1364)
{
    unsigned long long Time;// Offset=0x0 Size=0x8
    unsigned long long Idle;// Offset=0x8 Size=0x8
};

struct _PROCESSOR_POWER_STATE// Size=0x1d0 (Id=1006)
{
    struct _PPM_IDLE_STATES * IdleStates;// Offset=0x0 Size=0x8
    struct _PROC_IDLE_ACCOUNTING * IdleAccounting;// Offset=0x8 Size=0x8
    unsigned long long IdleTimeLast;// Offset=0x10 Size=0x8
    unsigned long long IdleTimeTotal;// Offset=0x18 Size=0x8
    unsigned long long IdleTimeEntry;// Offset=0x20 Size=0x8
    unsigned long long IdleTimeExpiration;// Offset=0x28 Size=0x8
    unsigned char NonInterruptibleTransition;// Offset=0x30 Size=0x1
    unsigned char PepWokenTransition;// Offset=0x31 Size=0x1
    unsigned char EfficiencyClass;// Offset=0x32 Size=0x1
    unsigned char SchedulingClass;// Offset=0x33 Size=0x1
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
    struct _PROC_PERF_CHECK * PerfCheck;// Offset=0x168 Size=0x8
    struct _PROC_PERF_DOMAIN * Domain;// Offset=0x170 Size=0x8
    struct _PROC_PERF_CONSTRAINT * PerfConstraint;// Offset=0x178 Size=0x8
    struct _PPM_CONCURRENCY_ACCOUNTING * Concurrency;// Offset=0x180 Size=0x8
    struct _PROC_PERF_LOAD * Load;// Offset=0x188 Size=0x8
    struct _PROC_PERF_HISTORY * PerfHistory;// Offset=0x190 Size=0x8
    unsigned char GuaranteedPerformancePercent;// Offset=0x198 Size=0x1
    unsigned char HvTargetState;// Offset=0x199 Size=0x1
    unsigned char Parked;// Offset=0x19a Size=0x1
    unsigned long LatestPerformancePercent;// Offset=0x19c Size=0x4
    unsigned long AveragePerformancePercent;// Offset=0x1a0 Size=0x4
    unsigned long LatestAffinitizedPercent;// Offset=0x1a4 Size=0x4
    unsigned long RelativePerformance;// Offset=0x1a8 Size=0x4
    unsigned long Utility;// Offset=0x1ac Size=0x4
    unsigned long AffinitizedUtility;// Offset=0x1b0 Size=0x4
    union // Size=0x8 (Id=0)
    {
        unsigned long long SnapTimeLast;// Offset=0x1b8 Size=0x8
        unsigned long long EnergyConsumed;// Offset=0x1b8 Size=0x8
    };
    unsigned long long ActiveTime;// Offset=0x1c0 Size=0x8
    unsigned long long TotalTime;// Offset=0x1c8 Size=0x8
};

struct _KTIMER// Size=0x40 (Id=1125)
{
    struct _DISPATCHER_HEADER Header;// Offset=0x0 Size=0x18
    union _ULARGE_INTEGER DueTime;// Offset=0x18 Size=0x8
    struct _LIST_ENTRY TimerListEntry;// Offset=0x20 Size=0x10
    struct _KDPC * Dpc;// Offset=0x30 Size=0x8
    unsigned long Processor;// Offset=0x38 Size=0x4
    unsigned long Period;// Offset=0x3c Size=0x4
};

enum _PROCESSOR_CACHE_TYPE
{
    CacheUnified=0,
    CacheInstruction=1,
    CacheData=2,
    CacheTrace=3
};

struct _CACHE_DESCRIPTOR// Size=0xc (Id=858)
{
    unsigned char Level;// Offset=0x0 Size=0x1
    unsigned char Associativity;// Offset=0x1 Size=0x1
    unsigned short LineSize;// Offset=0x2 Size=0x2
    unsigned long Size;// Offset=0x4 Size=0x4
    enum _PROCESSOR_CACHE_TYPE Type;// Offset=0x8 Size=0x4
};

struct _KAFFINITY_EX// Size=0xa8 (Id=56)
{
    unsigned short Count;// Offset=0x0 Size=0x2
    unsigned short Size;// Offset=0x2 Size=0x2
    unsigned long Reserved;// Offset=0x4 Size=0x4
    unsigned long long Bitmap[20];// Offset=0x8 Size=0xa0
};

struct _SYNCH_COUNTERS// Size=0xb8 (Id=268)
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

struct _FILESYSTEM_DISK_COUNTERS// Size=0x10 (Id=273)
{
    unsigned long long FsBytesRead;// Offset=0x0 Size=0x8
    unsigned long long FsBytesWritten;// Offset=0x8 Size=0x8
};

struct _KENTROPY_TIMING_STATE// Size=0x150 (Id=1137)
{
    unsigned long EntropyCount;// Offset=0x0 Size=0x4
    unsigned long Buffer[64];// Offset=0x4 Size=0x100
    struct _KDPC Dpc;// Offset=0x108 Size=0x40
    unsigned long LastDeliveredBuffer;// Offset=0x148 Size=0x4
};

struct _IOP_IRP_STACK_PROFILER// Size=0x54 (Id=1057)
{
    unsigned long Profile[20];// Offset=0x0 Size=0x50
    unsigned long TotalIrps;// Offset=0x50 Size=0x4
};

struct _KSHARED_READY_QUEUE// Size=0x260 (Id=285)
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
};

struct _KTIMER_EXPIRATION_TRACE// Size=0x10 (Id=1079)
{
    unsigned long long InterruptTime;// Offset=0x0 Size=0x8
    union _LARGE_INTEGER PerformanceCounter;// Offset=0x8 Size=0x8
};

struct _KREQUEST_PACKET// Size=0x20 (Id=696)
{
    void * CurrentPacket[3];// Offset=0x0 Size=0x18
    void  ( * WorkerRoutine)(void * ,void * ,void * ,void * );// Offset=0x18 Size=0x8
};

struct _REQUEST_MAILBOX// Size=0x40 (Id=651)
{
    struct _REQUEST_MAILBOX * Next;// Offset=0x0 Size=0x8
    unsigned long long RequestSummary;// Offset=0x8 Size=0x8
    struct _KREQUEST_PACKET RequestPacket;// Offset=0x10 Size=0x20
    long * NodeTargetCountAddr;// Offset=0x30 Size=0x8
    long NodeTargetCount;// Offset=0x38 Size=0x4
};

struct _KPRCB// Size=0x7ec0 (Id=40)
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
    struct _KPROCESSOR_STATE ProcessorState;// Offset=0x40 Size=0x5b0
    char CpuType;// Offset=0x5f0 Size=0x1
    char CpuID;// Offset=0x5f1 Size=0x1
    union // Size=0x2 (Id=0)
    {
        unsigned short CpuStep;// Offset=0x5f2 Size=0x2
        unsigned char CpuStepping;// Offset=0x5f2 Size=0x1
    };
    unsigned char CpuModel;// Offset=0x5f3 Size=0x1
    unsigned long MHz;// Offset=0x5f4 Size=0x4
    unsigned long long HalReserved[8];// Offset=0x5f8 Size=0x40
    unsigned short MinorVersion;// Offset=0x638 Size=0x2
    unsigned short MajorVersion;// Offset=0x63a Size=0x2
    unsigned char BuildType;// Offset=0x63c Size=0x1
    unsigned char CpuVendor;// Offset=0x63d Size=0x1
    unsigned char CoresPerPhysicalProcessor;// Offset=0x63e Size=0x1
    unsigned char LogicalProcessorsPerCore;// Offset=0x63f Size=0x1
    struct _KNODE * ParentNode;// Offset=0x640 Size=0x8
    unsigned long long GroupSetMember;// Offset=0x648 Size=0x8
    unsigned char Group;// Offset=0x650 Size=0x1
    unsigned char GroupIndex;// Offset=0x651 Size=0x1
    unsigned char PrcbPad05[2];// Offset=0x652 Size=0x2
    unsigned long InitialApicId;// Offset=0x654 Size=0x4
    unsigned long ScbOffset;// Offset=0x658 Size=0x4
    unsigned long ApicMask;// Offset=0x65c Size=0x4
    void * AcpiReserved;// Offset=0x660 Size=0x8
    unsigned long CFlushSize;// Offset=0x668 Size=0x4
    unsigned long ProcessorSignature;// Offset=0x66c Size=0x4
    struct _KSPIN_LOCK_QUEUE LockQueue[17];// Offset=0x670 Size=0x110
    struct _PP_LOOKASIDE_LIST PPLookasideList[16];// Offset=0x780 Size=0x100
    struct _GENERAL_LOOKASIDE_POOL PPNxPagedLookasideList[32];// Offset=0x880 Size=0xc00
    struct _GENERAL_LOOKASIDE_POOL PPNPagedLookasideList[32];// Offset=0x1480 Size=0xc00
    struct _GENERAL_LOOKASIDE_POOL PPPagedLookasideList[32];// Offset=0x2080 Size=0xc00
    unsigned long long MsrIa32TsxCtrl;// Offset=0x2c80 Size=0x8
    struct _SINGLE_LIST_ENTRY DeferredReadyListHead;// Offset=0x2c88 Size=0x8
    long MmPageFaultCount;// Offset=0x2c90 Size=0x4
    long MmCopyOnWriteCount;// Offset=0x2c94 Size=0x4
    long MmTransitionCount;// Offset=0x2c98 Size=0x4
    long MmDemandZeroCount;// Offset=0x2c9c Size=0x4
    long MmPageReadCount;// Offset=0x2ca0 Size=0x4
    long MmPageReadIoCount;// Offset=0x2ca4 Size=0x4
    long MmDirtyPagesWriteCount;// Offset=0x2ca8 Size=0x4
    long MmDirtyWriteIoCount;// Offset=0x2cac Size=0x4
    long MmMappedPagesWriteCount;// Offset=0x2cb0 Size=0x4
    long MmMappedWriteIoCount;// Offset=0x2cb4 Size=0x4
    unsigned long KeSystemCalls;// Offset=0x2cb8 Size=0x4
    unsigned long KeContextSwitches;// Offset=0x2cbc Size=0x4
    unsigned short PrcbPad40;// Offset=0x2cc0 Size=0x2
    unsigned long CcFastReadNoWait;// Offset=0x2cc4 Size=0x4
    unsigned long CcFastReadWait;// Offset=0x2cc8 Size=0x4
    unsigned long CcFastReadNotPossible;// Offset=0x2ccc Size=0x4
    unsigned long CcCopyReadNoWait;// Offset=0x2cd0 Size=0x4
    unsigned long CcCopyReadWait;// Offset=0x2cd4 Size=0x4
    unsigned long CcCopyReadNoWaitMiss;// Offset=0x2cd8 Size=0x4
    long IoReadOperationCount;// Offset=0x2cdc Size=0x4
    long IoWriteOperationCount;// Offset=0x2ce0 Size=0x4
    long IoOtherOperationCount;// Offset=0x2ce4 Size=0x4
    union _LARGE_INTEGER IoReadTransferCount;// Offset=0x2ce8 Size=0x8
    union _LARGE_INTEGER IoWriteTransferCount;// Offset=0x2cf0 Size=0x8
    union _LARGE_INTEGER IoOtherTransferCount;// Offset=0x2cf8 Size=0x8
    long PacketBarrier;// Offset=0x2d00 Size=0x4
    long TargetCount;// Offset=0x2d04 Size=0x4
    unsigned long IpiFrozen;// Offset=0x2d08 Size=0x4
    void * IsrDpcStats;// Offset=0x2d10 Size=0x8
    unsigned long DeviceInterrupts;// Offset=0x2d18 Size=0x4
    long LookasideIrpFloat;// Offset=0x2d1c Size=0x4
    unsigned long InterruptLastCount;// Offset=0x2d20 Size=0x4
    unsigned long InterruptRate;// Offset=0x2d24 Size=0x4
    unsigned long long LastNonHrTimerExpiration;// Offset=0x2d28 Size=0x8
    unsigned long long TrappedSecurityDomain;// Offset=0x2d30 Size=0x8
    union // Size=0x2 (Id=0)
    {
        unsigned short BpbState;// Offset=0x2d38 Size=0x2
        struct // Size=0x2 (Id=0)
        {
            unsigned short BpbCpuIdle:1;// Offset=0x2d38 Size=0x2 BitOffset=0x0 BitSize=0x1
            unsigned short BpbFlushRsbOnTrap:1;// Offset=0x2d38 Size=0x2 BitOffset=0x1 BitSize=0x1
            unsigned short BpbIbpbOnReturn:1;// Offset=0x2d38 Size=0x2 BitOffset=0x2 BitSize=0x1
            unsigned short BpbIbpbOnTrap:1;// Offset=0x2d38 Size=0x2 BitOffset=0x3 BitSize=0x1
            unsigned short BpbReserved1:1;// Offset=0x2d38 Size=0x2 BitOffset=0x4 BitSize=0x1
            unsigned short BpbFlushRsbOnReturn:1;// Offset=0x2d38 Size=0x2 BitOffset=0x5 BitSize=0x1
            unsigned short BpbDivideOnReturn:1;// Offset=0x2d38 Size=0x2 BitOffset=0x6 BitSize=0x1
            unsigned short VerwOnNonKvaReturn:1;// Offset=0x2d38 Size=0x2 BitOffset=0x7 BitSize=0x1
            unsigned short FlushBhbOnTrap:1;// Offset=0x2d38 Size=0x2 BitOffset=0x8 BitSize=0x1
            unsigned short Spare:7;// Offset=0x2d38 Size=0x2 BitOffset=0x9 BitSize=0x7
        };
    };
    union // Size=0x1 (Id=0)
    {
        unsigned char BpbFeatures;// Offset=0x2d3a Size=0x1
        struct // Size=0x1 (Id=0)
        {
            unsigned char BpbClearOnIdle:1;// Offset=0x2d3a Size=0x1 BitOffset=0x0 BitSize=0x1
            unsigned char BpbEnabled:1;// Offset=0x2d3a Size=0x1 BitOffset=0x1 BitSize=0x1
            unsigned char BpbSmep:1;// Offset=0x2d3a Size=0x1 BitOffset=0x2 BitSize=0x1
            unsigned char BhbFlushSequence:2;// Offset=0x2d3a Size=0x1 BitOffset=0x3 BitSize=0x2
            unsigned char VerwOnIdle:1;// Offset=0x2d3a Size=0x1 BitOffset=0x5 BitSize=0x1
            unsigned char BpbFeaturesReserved:2;// Offset=0x2d3a Size=0x1 BitOffset=0x6 BitSize=0x2
        };
    };
    unsigned char BpbPad1[1];// Offset=0x2d3b Size=0x1
    unsigned short BpbCurrentSpecCtrl;// Offset=0x2d3c Size=0x2
    unsigned short BpbKernelSpecCtrl;// Offset=0x2d3e Size=0x2
    unsigned short BpbNmiSpecCtrl;// Offset=0x2d40 Size=0x2
    unsigned short BpbUserSpecCtrl;// Offset=0x2d42 Size=0x2
    unsigned char BpbPad[4];// Offset=0x2d44 Size=0x4
    unsigned long PrcbPad41[14];// Offset=0x2d48 Size=0x38
    struct _KDPC_DATA DpcData[2];// Offset=0x2d80 Size=0x50
    void * DpcStack;// Offset=0x2dd0 Size=0x8
    long MaximumDpcQueueDepth;// Offset=0x2dd8 Size=0x4
    unsigned long DpcRequestRate;// Offset=0x2ddc Size=0x4
    unsigned long MinimumDpcRate;// Offset=0x2de0 Size=0x4
    unsigned long DpcLastCount;// Offset=0x2de4 Size=0x4
    unsigned char ThreadDpcEnable;// Offset=0x2de8 Size=0x1
    unsigned char QuantumEnd;// Offset=0x2de9 Size=0x1
    unsigned char DpcRoutineActive;// Offset=0x2dea Size=0x1
    unsigned char IdleSchedule;// Offset=0x2deb Size=0x1
    union // Size=0x2df0 (Id=0)
    {
        long DpcRequestSummary;// Offset=0x2dec Size=0x4
        short DpcRequestSlot[2];// Offset=0x2dec Size=0x4
        short NormalDpcState;// Offset=0x2dec Size=0x2
        short ThreadDpcState;// Offset=0x2dee Size=0x2
        struct // Size=0x4 (Id=0)
        {
            unsigned long DpcNormalProcessingActive:1;// Offset=0x2dec Size=0x4 BitOffset=0x0 BitSize=0x1
            unsigned long DpcNormalProcessingRequested:1;// Offset=0x2dec Size=0x4 BitOffset=0x1 BitSize=0x1
            unsigned long DpcNormalThreadSignal:1;// Offset=0x2dec Size=0x4 BitOffset=0x2 BitSize=0x1
            unsigned long DpcNormalTimerExpiration:1;// Offset=0x2dec Size=0x4 BitOffset=0x3 BitSize=0x1
            unsigned long DpcNormalDpcPresent:1;// Offset=0x2dec Size=0x4 BitOffset=0x4 BitSize=0x1
            unsigned long DpcNormalLocalInterrupt:1;// Offset=0x2dec Size=0x4 BitOffset=0x5 BitSize=0x1
            unsigned long DpcNormalSpare:10;// Offset=0x2dec Size=0x4 BitOffset=0x6 BitSize=0xa
            unsigned long DpcThreadActive:1;// Offset=0x2dec Size=0x4 BitOffset=0x10 BitSize=0x1
            unsigned long DpcThreadRequested:1;// Offset=0x2dec Size=0x4 BitOffset=0x11 BitSize=0x1
            unsigned long DpcThreadSpare:14;// Offset=0x2dec Size=0x4 BitOffset=0x12 BitSize=0xe
        };
    };
    unsigned long LastTimerHand;// Offset=0x2df0 Size=0x4
    unsigned long LastTick;// Offset=0x2df4 Size=0x4
    unsigned long ClockInterrupts;// Offset=0x2df8 Size=0x4
    unsigned long ReadyScanTick;// Offset=0x2dfc Size=0x4
    void * InterruptObject[256];// Offset=0x2e00 Size=0x800
    struct _KTIMER_TABLE TimerTable;// Offset=0x3600 Size=0x2200
    struct _KGATE DpcGate;// Offset=0x5800 Size=0x18
    void * PrcbPad52;// Offset=0x5818 Size=0x8
    struct _KDPC CallDpc;// Offset=0x5820 Size=0x40
    long ClockKeepAlive;// Offset=0x5860 Size=0x4
    unsigned char PrcbPad60[2];// Offset=0x5864 Size=0x2
    unsigned short NmiActive;// Offset=0x5866 Size=0x2
    long DpcWatchdogPeriod;// Offset=0x5868 Size=0x4
    long DpcWatchdogCount;// Offset=0x586c Size=0x4
    long KeSpinLockOrdering;// Offset=0x5870 Size=0x4
    unsigned long DpcWatchdogProfileCumulativeDpcThreshold;// Offset=0x5874 Size=0x4
    void * CachedPtes;// Offset=0x5878 Size=0x8
    struct _LIST_ENTRY WaitListHead;// Offset=0x5880 Size=0x10
    unsigned long long WaitLock;// Offset=0x5890 Size=0x8
    unsigned long ReadySummary;// Offset=0x5898 Size=0x4
    long AffinitizedSelectionMask;// Offset=0x589c Size=0x4
    unsigned long QueueIndex;// Offset=0x58a0 Size=0x4
    unsigned long PrcbPad75[3];// Offset=0x58a4 Size=0xc
    struct _KDPC TimerExpirationDpc;// Offset=0x58b0 Size=0x40
    struct _RTL_RB_TREE ScbQueue;// Offset=0x58f0 Size=0x10
    struct _LIST_ENTRY DispatcherReadyListHead[32];// Offset=0x5900 Size=0x200
    unsigned long InterruptCount;// Offset=0x5b00 Size=0x4
    unsigned long KernelTime;// Offset=0x5b04 Size=0x4
    unsigned long UserTime;// Offset=0x5b08 Size=0x4
    unsigned long DpcTime;// Offset=0x5b0c Size=0x4
    unsigned long InterruptTime;// Offset=0x5b10 Size=0x4
    unsigned long AdjustDpcThreshold;// Offset=0x5b14 Size=0x4
    unsigned char DebuggerSavedIRQL;// Offset=0x5b18 Size=0x1
    unsigned char GroupSchedulingOverQuota;// Offset=0x5b19 Size=0x1
    unsigned char DeepSleep;// Offset=0x5b1a Size=0x1
    unsigned char PrcbPad80[5];// Offset=0x5b1b Size=0x5
    unsigned long DpcTimeCount;// Offset=0x5b20 Size=0x4
    unsigned long DpcTimeLimit;// Offset=0x5b24 Size=0x4
    unsigned long PeriodicCount;// Offset=0x5b28 Size=0x4
    unsigned long PeriodicBias;// Offset=0x5b2c Size=0x4
    unsigned long AvailableTime;// Offset=0x5b30 Size=0x4
    unsigned long KeExceptionDispatchCount;// Offset=0x5b34 Size=0x4
    unsigned long long StartCycles;// Offset=0x5b38 Size=0x8
    unsigned long long TaggedCyclesStart;// Offset=0x5b40 Size=0x8
    unsigned long long TaggedCycles[2];// Offset=0x5b48 Size=0x10
    unsigned long long GenerationTarget;// Offset=0x5b58 Size=0x8
    unsigned long long AffinitizedCycles;// Offset=0x5b60 Size=0x8
    unsigned long PrcbPad81[28];// Offset=0x5b68 Size=0x70
    unsigned long DpcWatchdogProfileSingleDpcThreshold;// Offset=0x5bd8 Size=0x4
    long MmSpinLockOrdering;// Offset=0x5bdc Size=0x4
    unsigned long PageColor;// Offset=0x5be0 Size=0x4
    unsigned long NodeColor;// Offset=0x5be4 Size=0x4
    unsigned long NodeShiftedColor;// Offset=0x5be8 Size=0x4
    unsigned long SecondaryColorMask;// Offset=0x5bec Size=0x4
    unsigned long PrcbPad83;// Offset=0x5bf0 Size=0x4
    unsigned long long CycleTime;// Offset=0x5bf8 Size=0x8
    unsigned long long Cycles[4][2];// Offset=0x5c00 Size=0x40
    unsigned long PrcbPad84[16];// Offset=0x5c40 Size=0x40
    unsigned long CcFastMdlReadNoWait;// Offset=0x5c80 Size=0x4
    unsigned long CcFastMdlReadWait;// Offset=0x5c84 Size=0x4
    unsigned long CcFastMdlReadNotPossible;// Offset=0x5c88 Size=0x4
    unsigned long CcMapDataNoWait;// Offset=0x5c8c Size=0x4
    unsigned long CcMapDataWait;// Offset=0x5c90 Size=0x4
    unsigned long CcPinMappedDataCount;// Offset=0x5c94 Size=0x4
    unsigned long CcPinReadNoWait;// Offset=0x5c98 Size=0x4
    unsigned long CcPinReadWait;// Offset=0x5c9c Size=0x4
    unsigned long CcMdlReadNoWait;// Offset=0x5ca0 Size=0x4
    unsigned long CcMdlReadWait;// Offset=0x5ca4 Size=0x4
    unsigned long CcLazyWriteHotSpots;// Offset=0x5ca8 Size=0x4
    unsigned long CcLazyWriteIos;// Offset=0x5cac Size=0x4
    unsigned long CcLazyWritePages;// Offset=0x5cb0 Size=0x4
    unsigned long CcDataFlushes;// Offset=0x5cb4 Size=0x4
    unsigned long CcDataPages;// Offset=0x5cb8 Size=0x4
    unsigned long CcLostDelayedWrites;// Offset=0x5cbc Size=0x4
    unsigned long CcFastReadResourceMiss;// Offset=0x5cc0 Size=0x4
    unsigned long CcCopyReadWaitMiss;// Offset=0x5cc4 Size=0x4
    unsigned long CcFastMdlReadResourceMiss;// Offset=0x5cc8 Size=0x4
    unsigned long CcMapDataNoWaitMiss;// Offset=0x5ccc Size=0x4
    unsigned long CcMapDataWaitMiss;// Offset=0x5cd0 Size=0x4
    unsigned long CcPinReadNoWaitMiss;// Offset=0x5cd4 Size=0x4
    unsigned long CcPinReadWaitMiss;// Offset=0x5cd8 Size=0x4
    unsigned long CcMdlReadNoWaitMiss;// Offset=0x5cdc Size=0x4
    unsigned long CcMdlReadWaitMiss;// Offset=0x5ce0 Size=0x4
    unsigned long CcReadAheadIos;// Offset=0x5ce4 Size=0x4
    long MmCacheTransitionCount;// Offset=0x5ce8 Size=0x4
    long MmCacheReadCount;// Offset=0x5cec Size=0x4
    long MmCacheIoCount;// Offset=0x5cf0 Size=0x4
    unsigned long PrcbPad91[3];// Offset=0x5cf4 Size=0xc
    struct _PROCESSOR_POWER_STATE PowerState;// Offset=0x5d00 Size=0x1d0
    struct _LIST_ENTRY ScbList;// Offset=0x5ed0 Size=0x10
    unsigned long PrcbPad92[7];// Offset=0x5ee0 Size=0x1c
    unsigned long KeAlignmentFixupCount;// Offset=0x5efc Size=0x4
    struct _KDPC DpcWatchdogDpc;// Offset=0x5f00 Size=0x40
    struct _KTIMER DpcWatchdogTimer;// Offset=0x5f40 Size=0x40
    struct _CACHE_DESCRIPTOR Cache[5];// Offset=0x5f80 Size=0x3c
    unsigned long CacheCount;// Offset=0x5fbc Size=0x4
    unsigned long CachedCommit;// Offset=0x5fc0 Size=0x4
    unsigned long CachedResidentAvailable;// Offset=0x5fc4 Size=0x4
    void * HyperPte;// Offset=0x5fc8 Size=0x8
    void * WheaInfo;// Offset=0x5fd0 Size=0x8
    void * EtwSupport;// Offset=0x5fd8 Size=0x8
    union _SLIST_HEADER InterruptObjectPool;// Offset=0x5fe0 Size=0x10
    union _SLIST_HEADER HypercallPageList;// Offset=0x5ff0 Size=0x10
    void * HypercallCachedPages;// Offset=0x6000 Size=0x8
    void * VirtualApicAssist;// Offset=0x6008 Size=0x8
    unsigned long long * StatisticsPage;// Offset=0x6010 Size=0x8
    struct _KAFFINITY_EX PackageProcessorSet;// Offset=0x6018 Size=0xa8
    unsigned long PackageId;// Offset=0x60c0 Size=0x4
    unsigned long PrcbPad86[31];// Offset=0x60c4 Size=0x7c
    unsigned long long SharedReadyQueueMask;// Offset=0x6140 Size=0x8
    struct _KSHARED_READY_QUEUE * SharedReadyQueue;// Offset=0x6148 Size=0x8
    unsigned long SharedQueueScanOwner;// Offset=0x6150 Size=0x4
    unsigned long ScanSiblingIndex;// Offset=0x6154 Size=0x4
    unsigned long long CoreProcessorSet;// Offset=0x6158 Size=0x8
    unsigned long long ScanSiblingMask;// Offset=0x6160 Size=0x8
    unsigned long long LLCMask;// Offset=0x6168 Size=0x8
    unsigned long long CacheProcessorMask[5];// Offset=0x6170 Size=0x28
    struct _PROCESSOR_PROFILE_CONTROL_AREA * ProcessorProfileControlArea;// Offset=0x6198 Size=0x8
    void * ProfileEventIndexAddress;// Offset=0x61a0 Size=0x8
    void ** DpcWatchdogProfile;// Offset=0x61a8 Size=0x8
    void ** DpcWatchdogProfileCurrentEmptyCapture;// Offset=0x61b0 Size=0x8
    unsigned long long PrcbPad94[9];// Offset=0x61b8 Size=0x48
    struct _SYNCH_COUNTERS SynchCounters;// Offset=0x6200 Size=0xb8
    unsigned long long PteBitCache;// Offset=0x62b8 Size=0x8
    unsigned long PteBitOffset;// Offset=0x62c0 Size=0x4
    struct _FILESYSTEM_DISK_COUNTERS FsCounters;// Offset=0x62c8 Size=0x10
    unsigned char VendorString[13];// Offset=0x62d8 Size=0xd
    unsigned char PrcbPad100[3];// Offset=0x62e5 Size=0x3
    unsigned long long FeatureBits;// Offset=0x62e8 Size=0x8
    unsigned long PrcbPad110;// Offset=0x62f0 Size=0x4
    union _LARGE_INTEGER UpdateSignature;// Offset=0x62f8 Size=0x8
    struct _CONTEXT * Context;// Offset=0x6300 Size=0x8
    unsigned long ContextFlagsInit;// Offset=0x6308 Size=0x4
    struct _XSAVE_AREA * ExtendedState;// Offset=0x6310 Size=0x8
    void * IsrStack;// Offset=0x6318 Size=0x8
    struct _KENTROPY_TIMING_STATE EntropyTimingState;// Offset=0x6320 Size=0x150
    unsigned long long PrcbPad111;// Offset=0x6470 Size=0x8
    unsigned long long PrcbPad112[7];// Offset=0x6478 Size=0x38
    struct _SINGLE_LIST_ENTRY AbSelfIoBoostsList;// Offset=0x64b0 Size=0x8
    struct _SINGLE_LIST_ENTRY AbPropagateBoostsList;// Offset=0x64b8 Size=0x8
    struct _KDPC AbDpc;// Offset=0x64c0 Size=0x40
    struct _IOP_IRP_STACK_PROFILER IoIrpStackProfilerCurrent;// Offset=0x6500 Size=0x54
    struct _IOP_IRP_STACK_PROFILER IoIrpStackProfilerPrevious;// Offset=0x6554 Size=0x54
    struct _KSHARED_READY_QUEUE LocalSharedReadyQueue;// Offset=0x65c0 Size=0x260
    struct _KTIMER_EXPIRATION_TRACE TimerExpirationTrace[16];// Offset=0x6820 Size=0x100
    unsigned long TimerExpirationTraceCount;// Offset=0x6920 Size=0x4
    void * ExSaPageArray;// Offset=0x6928 Size=0x8
    struct _REQUEST_MAILBOX * Mailbox;// Offset=0x6940 Size=0x8
    unsigned long long PrcbPad130[7];// Offset=0x6948 Size=0x38
    unsigned char PrcbPad135[1280];// Offset=0x6980 Size=0x500
    unsigned long long KernelDirectoryTableBase;// Offset=0x6e80 Size=0x8
    unsigned long long RspBaseShadow;// Offset=0x6e88 Size=0x8
    unsigned long long UserRspShadow;// Offset=0x6e90 Size=0x8
    unsigned long ShadowFlags;// Offset=0x6e98 Size=0x4
    unsigned short VerwSelector;// Offset=0x6e9c Size=0x2
    unsigned short PrcbPad139;// Offset=0x6e9e Size=0x2
    unsigned long long PrcbPad140[508];// Offset=0x6ea0 Size=0xfe0
    struct _REQUEST_MAILBOX RequestMailbox[1];// Offset=0x7e80 Size=0x40
};
