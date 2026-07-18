union _KPRCBFLAG// Size=0x4 (Id=523)
{
    long PrcbFlags;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long BamQosLevel:8;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x8
        unsigned long PendingQosUpdate:1;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x1
        unsigned long CacheIsolationEnabled:1;// Offset=0x0 Size=0x4 BitOffset=0x9 BitSize=0x1
        unsigned long TracepointActive:1;// Offset=0x0 Size=0x4 BitOffset=0xa BitSize=0x1
        unsigned long LongDpcRunning:1;// Offset=0x0 Size=0x4 BitOffset=0xb BitSize=0x1
        unsigned long PrcbFlagsReserved:20;// Offset=0x0 Size=0x4 BitOffset=0xc BitSize=0x14
    };
};

struct _KDESCRIPTOR// Size=0x10 (Id=841)
{
    unsigned short Pad[3];// Offset=0x0 Size=0x6
    unsigned short Limit;// Offset=0x6 Size=0x2
    void * Base;// Offset=0x8 Size=0x8
};

struct _KSPECIAL_REGISTERS// Size=0xf0 (Id=786)
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

struct _M128A// Size=0x10 (Id=687)
{
    unsigned long long Low;// Offset=0x0 Size=0x8
    long long High;// Offset=0x8 Size=0x8
};

struct _XSAVE_FORMAT// Size=0x200 (Id=759)
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

struct _CONTEXT// Size=0x4d0 (Id=673)
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

struct _KPROCESSOR_STATE// Size=0x5c0 (Id=563)
{
    struct _KSPECIAL_REGISTERS SpecialRegisters;// Offset=0x0 Size=0xf0
    struct _CONTEXT ContextFrame;// Offset=0xf0 Size=0x4d0
};

union _KPRCB_BPB_STATE// Size=0x2 (Id=487)
{
    struct // Size=0x2 (Id=0)
    {
        unsigned short CpuIdle:1;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0x1
        unsigned short FlushRsbOnTrap:1;// Offset=0x0 Size=0x2 BitOffset=0x1 BitSize=0x1
        unsigned short IbpbOnReturn:1;// Offset=0x0 Size=0x2 BitOffset=0x2 BitSize=0x1
        unsigned short IbpbOnTrap:1;// Offset=0x0 Size=0x2 BitOffset=0x3 BitSize=0x1
        unsigned short IbpbOnRetpolineExit:1;// Offset=0x0 Size=0x2 BitOffset=0x4 BitSize=0x1
        unsigned short FlushRsbOnReturn:1;// Offset=0x0 Size=0x2 BitOffset=0x5 BitSize=0x1
        unsigned short FlushRsbOnRetpolineExit:1;// Offset=0x0 Size=0x2 BitOffset=0x6 BitSize=0x1
        unsigned short FlushBhbOnTrap:1;// Offset=0x0 Size=0x2 BitOffset=0x7 BitSize=0x1
        unsigned short DivideOnReturn:1;// Offset=0x0 Size=0x2 BitOffset=0x8 BitSize=0x1
        unsigned short Reserved1:1;// Offset=0x0 Size=0x2 BitOffset=0x9 BitSize=0x1
        unsigned short Spare:6;// Offset=0x0 Size=0x2 BitOffset=0xa BitSize=0x6
    };
    unsigned short AllFlags;// Offset=0x0 Size=0x2
};

union _KPRCB_BPB_FEATURES// Size=0x1 (Id=651)
{
    struct // Size=0x1 (Id=0)
    {
        unsigned char ClearOnIdle:1;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char Enabled:1;// Offset=0x0 Size=0x1 BitOffset=0x1 BitSize=0x1
        unsigned char Smep:1;// Offset=0x0 Size=0x1 BitOffset=0x2 BitSize=0x1
        unsigned char KCet:1;// Offset=0x0 Size=0x1 BitOffset=0x3 BitSize=0x1
        unsigned char BhbFlushSequence:2;// Offset=0x0 Size=0x1 BitOffset=0x4 BitSize=0x2
        unsigned char FeaturesReserved2:1;// Offset=0x0 Size=0x1 BitOffset=0x6 BitSize=0x1
        unsigned char FeaturesReserved:1;// Offset=0x0 Size=0x1 BitOffset=0x7 BitSize=0x1
    };
    unsigned char AllFlags;// Offset=0x0 Size=0x1
};

union _KPRCB_BPB_RETPOLINE_STATE// Size=0x1 (Id=532)
{
    struct // Size=0x1 (Id=0)
    {
        unsigned char RunningNonRetpolineCode:1;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char IndirectCallsSafe:1;// Offset=0x0 Size=0x1 BitOffset=0x1 BitSize=0x1
        unsigned char RetpolineEnabled:1;// Offset=0x0 Size=0x1 BitOffset=0x2 BitSize=0x1
        unsigned char RetpolineStateReserved:5;// Offset=0x0 Size=0x1 BitOffset=0x3 BitSize=0x5
    };
    unsigned char AllFlags;// Offset=0x0 Size=0x1
};

struct _KSPIN_LOCK_QUEUE// Size=0x10 (Id=95)
{
    struct _KSPIN_LOCK_QUEUE * Next;// Offset=0x0 Size=0x8
    unsigned long long * Lock;// Offset=0x8 Size=0x8
};

struct _PP_LOOKASIDE_LIST// Size=0x10 (Id=113)
{
    struct _GENERAL_LOOKASIDE * P;// Offset=0x0 Size=0x8
    struct _GENERAL_LOOKASIDE * L;// Offset=0x8 Size=0x8
};

struct _unnamed_101// Size=0x10 (Id=101)
{
    struct // Size=0x10 (Id=0)
    {
        unsigned long long Depth:16;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x10
        unsigned long long Sequence:48;// Offset=0x0 Size=0x8 BitOffset=0x10 BitSize=0x30
        unsigned long long Reserved:4;// Offset=0x8 Size=0x8 BitOffset=0x0 BitSize=0x4
        unsigned long long NextEntry:60;// Offset=0x8 Size=0x8 BitOffset=0x4 BitSize=0x3c
    };
};

union _SLIST_HEADER// Size=0x10 (Id=102)
{
    unsigned long long Alignment;// Offset=0x0 Size=0x8
    unsigned long long Region;// Offset=0x8 Size=0x8
    struct _unnamed_101 HeaderX64;// Offset=0x0 Size=0x10
};

struct _SINGLE_LIST_ENTRY// Size=0x8 (Id=32)
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

struct _LIST_ENTRY// Size=0x10 (Id=30)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _GENERAL_LOOKASIDE_POOL// Size=0x60 (Id=488)
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

struct _unnamed_39// Size=0x8 (Id=39)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=408)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_39 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _KAFFINITY_EX// Size=0x108 (Id=86)
{
    unsigned short Count;// Offset=0x0 Size=0x2
    unsigned short Size;// Offset=0x2 Size=0x2
    unsigned long Reserved;// Offset=0x4 Size=0x4
    union // Size=0x8 (Id=0)
    {
        unsigned long long Bitmap[1];// Offset=0x8 Size=0x8
        unsigned long long StaticBitmap[32];// Offset=0x8 Size=0x100
    };
};

struct _KSTATIC_AFFINITY_BLOCK// Size=0x820 (Id=362)
{
    union // Size=0x108 (Id=0)
    {
        struct _KAFFINITY_EX KeFlushTbAffinity;// Offset=0x0 Size=0x108
        struct _KAFFINITY_EX KeFlushWbAffinity;// Offset=0x0 Size=0x108
        struct _KAFFINITY_EX KeSlistRollbackAffinity;// Offset=0x0 Size=0x108
        struct _KAFFINITY_EX KeSyncContextAffinity;// Offset=0x0 Size=0x108
        struct _KAFFINITY_EX KeRcuAffinity;// Offset=0x0 Size=0x108
    };
    struct _KAFFINITY_EX KeFlushTbDeepIdleAffinity;// Offset=0x108 Size=0x108
    struct _KAFFINITY_EX KeIpiSendAffinity;// Offset=0x210 Size=0x108
    struct _KAFFINITY_EX KeIpiSendIpiSet;// Offset=0x318 Size=0x108
    unsigned long long Padding[128];// Offset=0x420 Size=0x400
};

struct _KSOFTWARE_INTERRUPT_BATCH// Size=0x210 (Id=500)
{
    unsigned char Level;// Offset=0x0 Size=0x1
    unsigned char TargetType;// Offset=0x1 Size=0x1
    unsigned char ReservedBatchInProgress;// Offset=0x2 Size=0x1
    unsigned char Spare;// Offset=0x3 Size=0x1
    unsigned long SingleTargetIndex;// Offset=0x4 Size=0x4
    struct _KAFFINITY_EX MultipleTargetAffinity;// Offset=0x8 Size=0x108
    unsigned long long Padding[32];// Offset=0x110 Size=0x100
};

struct _KDPC_LIST// Size=0x10 (Id=662)
{
    struct _SINGLE_LIST_ENTRY ListHead;// Offset=0x0 Size=0x8
    struct _SINGLE_LIST_ENTRY * LastEntry;// Offset=0x8 Size=0x8
};

struct _KDPC_DATA// Size=0x30 (Id=369)
{
    struct _KDPC_LIST DpcList;// Offset=0x0 Size=0x10
    unsigned long long DpcLock;// Offset=0x10 Size=0x8
    long DpcQueueDepth;// Offset=0x18 Size=0x4
    unsigned long DpcCount;// Offset=0x1c Size=0x4
    struct _KDPC * ActiveDpc;// Offset=0x20 Size=0x8
    unsigned long LongDpcPresent;// Offset=0x28 Size=0x4
    unsigned long Padding;// Offset=0x2c Size=0x4
};

struct _KE_PRCB_RCU_DATA// Size=0x20 (Id=648)
{
    unsigned long NestingLevel;// Offset=0x0 Size=0x4
    unsigned char DispatchPin;// Offset=0x4 Size=0x1
    unsigned char GracePeriodNeeded;// Offset=0x5 Size=0x1
    unsigned char ExpediteReporting;// Offset=0x6 Size=0x1
    char IdleState;// Offset=0x7 Size=0x1
    unsigned long long GraceSequenceQuiescent;// Offset=0x8 Size=0x8
    unsigned long long GraceSequenceReported;// Offset=0x10 Size=0x8
    struct _LIST_ENTRY * AwaitingCompletion;// Offset=0x18 Size=0x8
};

struct _unnamed_21// Size=0x8 (Id=21)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    unsigned long HighPart;// Offset=0x4 Size=0x4
};

union _ULARGE_INTEGER// Size=0x8 (Id=246)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    unsigned long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_21 u;// Offset=0x0 Size=0x8
    unsigned long long QuadPart;// Offset=0x0 Size=0x8
};

struct _KTIMER_TABLE_ENTRY// Size=0x20 (Id=846)
{
    unsigned long long Lock;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY Entry;// Offset=0x8 Size=0x10
    union _ULARGE_INTEGER Time;// Offset=0x18 Size=0x8
};

struct _KTIMER_TABLE_STATE// Size=0x18 (Id=840)
{
    unsigned long long LastTimerExpiration[2];// Offset=0x0 Size=0x10
    unsigned long LastTimerHand[2];// Offset=0x10 Size=0x8
};

struct _KTIMER_TABLE// Size=0x4218 (Id=771)
{
    struct _KTIMER * TimerExpiry[64];// Offset=0x0 Size=0x200
    struct _KTIMER_TABLE_ENTRY TimerEntries[2][256];// Offset=0x200 Size=0x4000
    struct _KTIMER_TABLE_STATE TableState;// Offset=0x4200 Size=0x18
};

struct _DISPATCHER_HEADER// Size=0x18 (Id=454)
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

struct _KGATE// Size=0x18 (Id=517)
{
    struct _DISPATCHER_HEADER Header;// Offset=0x0 Size=0x18
};

struct _KDPC// Size=0x40 (Id=199)
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

struct _RTL_RB_TREE// Size=0x10 (Id=46)
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

struct _KMCE_RECOVERY_CONTEXT// Size=0x10 (Id=522)
{
    unsigned long Flags;// Offset=0x0 Size=0x4
    unsigned long Reserved;// Offset=0x4 Size=0x4
    union // Size=0x8 (Id=0)
    {
        unsigned long long PhysicalAddress;// Offset=0x8 Size=0x8
        void * Record;// Offset=0x8 Size=0x8
    };
};

struct _PROC_IDLE_POLICY// Size=0x6 (Id=832)
{
    unsigned char PromotePercent;// Offset=0x0 Size=0x1
    unsigned char DemotePercent;// Offset=0x1 Size=0x1
    unsigned char PromotePercentBase;// Offset=0x2 Size=0x1
    unsigned char DemotePercentBase;// Offset=0x3 Size=0x1
    unsigned char AllowScaling;// Offset=0x4 Size=0x1
    unsigned char ForceLightIdle;// Offset=0x5 Size=0x1
};

union _PPM_IDLE_SYNCHRONIZATION_STATE// Size=0x4 (Id=718)
{
    long AsLong;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        long RefCount:24;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x18
        unsigned long State:8;// Offset=0x0 Size=0x4 BitOffset=0x18 BitSize=0x8
    };
};

struct _PROC_FEEDBACK// Size=0x90 (Id=684)
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
    unsigned char CounterReadOptimize;// Offset=0x8a Size=0x1
};

enum _PROC_HYPERVISOR_STATE
{
    ProcHypervisorNone=0,
    ProcHypervisorPresent=1,
    ProcHypervisorPower=2,
    ProcHypervisorHvCounters=3
};

struct _PPM_FFH_THROTTLE_STATE_INFO// Size=0x20 (Id=692)
{
    unsigned char EnableLogging;// Offset=0x0 Size=0x1
    unsigned long MismatchCount;// Offset=0x4 Size=0x4
    unsigned char Initialized;// Offset=0x8 Size=0x1
    unsigned long long LastValue;// Offset=0x10 Size=0x8
    union _LARGE_INTEGER LastLogTickCount;// Offset=0x18 Size=0x8
};

struct _PROC_IDLE_SNAP// Size=0x10 (Id=794)
{
    unsigned long long Time;// Offset=0x0 Size=0x8
    unsigned long long Idle;// Offset=0x8 Size=0x8
};

struct _PROC_PERF_CHECK_CONTEXT// Size=0x48 (Id=715)
{
    struct _PROC_PERF_DOMAIN * Domain;// Offset=0x0 Size=0x8
    struct _PROC_PERF_CONSTRAINT * Constraint;// Offset=0x8 Size=0x8
    struct _PROC_PERF_CHECK * PerfCheck;// Offset=0x10 Size=0x8
    struct _PROC_PERF_LOAD * Load;// Offset=0x18 Size=0x8
    struct _PROC_PERF_HISTORY * PerfHistory;// Offset=0x20 Size=0x8
    unsigned long Utility;// Offset=0x28 Size=0x4
    unsigned long AffinitizedUtility;// Offset=0x2c Size=0x4
    unsigned long MediaUtility;// Offset=0x30 Size=0x4
    unsigned long ImportantUtility;// Offset=0x34 Size=0x4
    unsigned long IdealUtility;// Offset=0x38 Size=0x4
    unsigned short LatestAffinitizedPercent;// Offset=0x3c Size=0x2
    unsigned short AveragePerformancePercent;// Offset=0x3e Size=0x2
    unsigned long RelativePerformance;// Offset=0x40 Size=0x4
    unsigned char NtProcessor;// Offset=0x44 Size=0x1
};

enum _KHETERO_CPU_QOS
{
    KHeteroCpuQosDefault=0,
    KHeteroCpuQosHigh=0,
    KHeteroCpuQosMedium=1,
    KHeteroCpuQosLow=2,
    KHeteroCpuQosMultimedia=3,
    KHeteroCpuQosDeadline=4,
    KHeteroCpuQosEco=5,
    KHeteroCpuQosUtility=6,
    KHeteroCpuQosDynamic=7,
    KHeteroCpuQosMax=7
};

struct _PROCESSOR_POWER_STATE// Size=0x238 (Id=647)
{
    struct _PPM_IDLE_STATES * IdleStates;// Offset=0x0 Size=0x8
    struct _PROC_IDLE_ACCOUNTING * IdleAccounting;// Offset=0x8 Size=0x8
    unsigned long long IdleTimeLast;// Offset=0x10 Size=0x8
    unsigned long long IdleTimeTotal;// Offset=0x18 Size=0x8
    unsigned long long IdleSequenceNumber;// Offset=0x20 Size=0x8
    unsigned long long IdleTimeEntry;// Offset=0x28 Size=0x8
    union // Size=0x8 (Id=0)
    {
        unsigned long long IdleTimeExpiration;// Offset=0x30 Size=0x8
        long long IdleWakeTime;// Offset=0x30 Size=0x8
    };
    unsigned long IdleWakeLatencyLimit;// Offset=0x38 Size=0x4
    unsigned char NonInterruptibleTransition;// Offset=0x3c Size=0x1
    unsigned char PepWokenTransition;// Offset=0x3d Size=0x1
    unsigned char HvTargetState;// Offset=0x3e Size=0x1
    unsigned long TargetIdleState;// Offset=0x40 Size=0x4
    struct _PROC_IDLE_POLICY IdlePolicy;// Offset=0x44 Size=0x6
    union _PPM_IDLE_SYNCHRONIZATION_STATE Synchronization;// Offset=0x4c Size=0x4
    struct _PROC_FEEDBACK PerfFeedback;// Offset=0x50 Size=0x90
    enum _PROC_HYPERVISOR_STATE Hypervisor;// Offset=0xe0 Size=0x4
    unsigned long LastSysTime;// Offset=0xe4 Size=0x4
    unsigned long long WmiDispatchPtr;// Offset=0xe8 Size=0x8
    long WmiInterfaceEnabled;// Offset=0xf0 Size=0x4
    struct _PPM_FFH_THROTTLE_STATE_INFO FFHThrottleStateInfo;// Offset=0xf8 Size=0x20
    struct _KDPC PerfActionDpc;// Offset=0x118 Size=0x40
    long PerfActionMask;// Offset=0x158 Size=0x4
    struct _PROC_IDLE_SNAP HvIdleCheck;// Offset=0x160 Size=0x10
    struct _PROC_PERF_CHECK_CONTEXT CheckContext;// Offset=0x170 Size=0x48
    struct _PPM_CONCURRENCY_ACCOUNTING * Concurrency;// Offset=0x1b8 Size=0x8
    struct _PPM_CONCURRENCY_ACCOUNTING * ClassConcurrency;// Offset=0x1c0 Size=0x8
    unsigned char ArchitecturalEfficiencyClass;// Offset=0x1c8 Size=0x1
    unsigned char PerformanceSchedulingClass;// Offset=0x1c9 Size=0x1
    unsigned char EfficiencySchedulingClass;// Offset=0x1ca Size=0x1
    unsigned char Reserved;// Offset=0x1cb Size=0x1
    unsigned char Parked;// Offset=0x1cc Size=0x1
    unsigned char SoftParked;// Offset=0x1cd Size=0x1
    unsigned char LongPriorQosPeriod;// Offset=0x1ce Size=0x1
    union // Size=0x8 (Id=0)
    {
        unsigned long long SnapTimeLast;// Offset=0x1d0 Size=0x8
        unsigned long long EnergyConsumed;// Offset=0x1d0 Size=0x8
    };
    unsigned long long ActiveTime;// Offset=0x1d8 Size=0x8
    unsigned long long TotalTime;// Offset=0x1e0 Size=0x8
    struct _POP_FX_DEVICE * FxDevice;// Offset=0x1e8 Size=0x8
    unsigned long long LastQosTransitionTime;// Offset=0x1f0 Size=0x8
    unsigned long long QosTransitionHysteresis;// Offset=0x1f8 Size=0x8
    enum _KHETERO_CPU_QOS RequestedQosClass;// Offset=0x200 Size=0x4
    enum _KHETERO_CPU_QOS ResolvedQosClass;// Offset=0x204 Size=0x4
    unsigned short QosEquivalencyMask;// Offset=0x208 Size=0x2
    unsigned short HwFeedbackTableOffset;// Offset=0x20a Size=0x2
    unsigned char HwFeedbackParkHint;// Offset=0x20c Size=0x1
    unsigned char HeteroCoreType;// Offset=0x20d Size=0x1
    unsigned short HwFeedbackTableIndex;// Offset=0x20e Size=0x2
    struct _KHETRO_HWFEEDBACK_TYPE * HwFeedbackClassList;// Offset=0x210 Size=0x8
    struct _PROCESSOR_CYCLES_WORKLOAD_CLASS * EeCyclesWorkloadClassList;// Offset=0x218 Size=0x8
    struct _PROCESSOR_CYCLES_WORKLOAD_CLASS * PerfCyclesWorkloadClassList;// Offset=0x220 Size=0x8
    unsigned char ContainmentGroupType;// Offset=0x228 Size=0x1
    unsigned short FrequencyBucketThresholds[4];// Offset=0x22a Size=0x8
};

enum _PROCESSOR_CACHE_TYPE
{
    CacheUnified=0,
    CacheInstruction=1,
    CacheData=2,
    CacheTrace=3,
    CacheUnknown=4
};

struct _CACHE_DESCRIPTOR// Size=0xc (Id=550)
{
    unsigned char Level;// Offset=0x0 Size=0x1
    unsigned char Associativity;// Offset=0x1 Size=0x1
    unsigned short LineSize;// Offset=0x2 Size=0x2
    unsigned long Size;// Offset=0x4 Size=0x4
    enum _PROCESSOR_CACHE_TYPE Type;// Offset=0x8 Size=0x4
};

struct _SYNCH_COUNTERS// Size=0xb8 (Id=704)
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

struct _FILESYSTEM_DISK_COUNTERS// Size=0x10 (Id=361)
{
    unsigned long long FsBytesRead;// Offset=0x0 Size=0x8
    unsigned long long FsBytesWritten;// Offset=0x8 Size=0x8
};

struct _KENTROPY_TIMING_STATE// Size=0x158 (Id=707)
{
    unsigned long EntropyCount;// Offset=0x0 Size=0x4
    unsigned long Buffer[64];// Offset=0x4 Size=0x100
    struct _KDPC Dpc;// Offset=0x108 Size=0x40
    unsigned long LastDeliveredBuffer;// Offset=0x148 Size=0x4
    void * ReservedRawDataBuffer;// Offset=0x150 Size=0x8
};

struct _unnamed_59// Size=0x38 (Id=59)
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

struct _SYMCRYPT_ENTROPY_ACCUMULATOR_STATE// Size=0x180 (Id=546)
{
    unsigned char buffer[256];// Offset=0x0 Size=0x100
    struct _KDPC Dpc;// Offset=0x100 Size=0x40
    unsigned long long nSamplesAccumulated;// Offset=0x140 Size=0x8
    unsigned long long nHealthTestFailures;// Offset=0x148 Size=0x8
    unsigned char * pCombinedSampleBuffer;// Offset=0x150 Size=0x8
    unsigned long long nRawSamples;// Offset=0x158 Size=0x8
    unsigned int accumulatorId;// Offset=0x160 Size=0x4
    unsigned int nDPCScheduleFailures;// Offset=0x164 Size=0x4
    unsigned char dpcInProgress;// Offset=0x168 Size=0x1
};

struct _IOP_IRP_STACK_PROFILER// Size=0x54 (Id=671)
{
    unsigned long Profile[20];// Offset=0x0 Size=0x50
    unsigned long TotalIrps;// Offset=0x50 Size=0x4
};

struct _KSECURE_FAULT_INFORMATION// Size=0x18 (Id=470)
{
    unsigned long long FaultCode;// Offset=0x0 Size=0x8
    unsigned long long FaultVa;// Offset=0x8 Size=0x8
    unsigned long long FaultPa;// Offset=0x10 Size=0x8
};

struct _KTIMER_EXPIRATION_TRACE// Size=0x10 (Id=682)
{
    unsigned long long InterruptTime;// Offset=0x0 Size=0x8
    union _LARGE_INTEGER PerformanceCounter;// Offset=0x8 Size=0x8
};

enum _KCLOCK_TIMER_ONE_SHOT_STATE
{
    KClockTimerOneShotUnarmed=0,
    KClockTimerOneShotArmed=1,
    KClockTimerOneShotRearmRequired=2,
    KClockTimerOneShotInvalid=3
};

enum _KCLOCK_TIMER_DEADLINE_TYPE
{
    KClockTimerKTimerExpirationNonHr=0,
    KClockTimerKTimerExpirationPseudoHr=1,
    KClockTimerKTimer2ExpirationHr=2,
    KClockTimerKTimersMax=2,
    KClockTimerQuantumEnd=3,
    KClockTimerGroupSchedulingGenerationEnd=4,
    KClockTimerIdlePromotion=5,
    KClockTimerBamQosHysteresisEnd=6,
    KClockTimerMax=7
};

struct _KCLOCK_TIMER_DEADLINE_ENTRY// Size=0x10 (Id=501)
{
    unsigned long long DueTime;// Offset=0x0 Size=0x8
    unsigned long TolerableDelay;// Offset=0x8 Size=0x4
    union // Size=0x1 (Id=0)
    {
        unsigned char TypeFlags;// Offset=0xc Size=0x1
        struct // Size=0x1 (Id=0)
        {
            unsigned char Valid:1;// Offset=0xc Size=0x1 BitOffset=0x0 BitSize=0x1
            unsigned char NoWake:1;// Offset=0xc Size=0x1 BitOffset=0x1 BitSize=0x1
            unsigned char Unused:6;// Offset=0xc Size=0x1 BitOffset=0x2 BitSize=0x6
        };
    };
};

struct _KCLOCK_TICK_TRACE// Size=0x28 (Id=440)
{
    unsigned long long PerformanceCounter;// Offset=0x0 Size=0x8
    unsigned long long PreInterruptTime;// Offset=0x8 Size=0x8
    unsigned long long PostInterruptTime;// Offset=0x10 Size=0x8
    unsigned long long TimeStampCounter;// Offset=0x18 Size=0x8
    unsigned char IsClockOwner;// Offset=0x20 Size=0x1
};

struct _KCLOCK_INCREMENT_TRACE// Size=0x20 (Id=720)
{
    unsigned long ActualIncrement;// Offset=0x0 Size=0x4
    unsigned long RequestedIncrement;// Offset=0x4 Size=0x4
    unsigned long long InterruptTime;// Offset=0x8 Size=0x8
    unsigned long long PerformanceCounter;// Offset=0x10 Size=0x8
    unsigned char OneShot;// Offset=0x18 Size=0x1
};

struct _KCLOCK_TIMER_STATE// Size=0x518 (Id=388)
{
    unsigned long long NextTickDueTime;// Offset=0x0 Size=0x8
    unsigned long TimeIncrement;// Offset=0x8 Size=0x4
    unsigned long LastRequestedTimeIncrement;// Offset=0xc Size=0x4
    enum _KCLOCK_TIMER_ONE_SHOT_STATE OneShotState;// Offset=0x10 Size=0x4
    enum _KCLOCK_TIMER_DEADLINE_TYPE ExpectedWakeReason;// Offset=0x14 Size=0x4
    struct _KCLOCK_TIMER_DEADLINE_ENTRY ClockTimerEntries[7];// Offset=0x18 Size=0x70
    unsigned char ClockActive;// Offset=0x88 Size=0x1
    unsigned char ClockArmedForIdle;// Offset=0x89 Size=0x1
    unsigned long ClockTickTraceIndex;// Offset=0x8c Size=0x4
    unsigned long ClockIncrementTraceIndex;// Offset=0x90 Size=0x4
    struct _KCLOCK_TICK_TRACE ClockTickTraces[16];// Offset=0x98 Size=0x280
    struct _KCLOCK_INCREMENT_TRACE ClockIncrementTraces[16];// Offset=0x318 Size=0x200
};

struct _MACHINE_FRAME// Size=0x28 (Id=831)
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

struct _MACHINE_CHECK_CONTEXT// Size=0x50 (Id=623)
{
    struct _MACHINE_FRAME MachineFrame;// Offset=0x0 Size=0x28
    unsigned long long Rax;// Offset=0x28 Size=0x8
    unsigned long long Rcx;// Offset=0x30 Size=0x8
    unsigned long long Rdx;// Offset=0x38 Size=0x8
    unsigned long long GsBase;// Offset=0x40 Size=0x8
    unsigned long long Cr3;// Offset=0x48 Size=0x8
};

struct _KLOCK_QUEUE_HANDLE// Size=0x18 (Id=601)
{
    struct _KSPIN_LOCK_QUEUE LockQueue;// Offset=0x0 Size=0x10
    unsigned char OldIrql;// Offset=0x10 Size=0x1
};

struct _KCORE_CONTROL_BLOCK// Size=0x30 (Id=547)
{
    unsigned char ProcessorCount;// Offset=0x0 Size=0x1
    unsigned char ScanStartIndex;// Offset=0x1 Size=0x1
    unsigned char Spare[6];// Offset=0x2 Size=0x6
    struct _KPRCB * Prcbs[4];// Offset=0x8 Size=0x20
    struct _KCORE_CONTROL_BLOCK_SHADOW * CoreControlBlockShadow;// Offset=0x28 Size=0x8
};

union _KCCB_SHADOW_PROCESSOR_STATE// Size=0x1 (Id=659)
{
    struct // Size=0x1 (Id=0)
    {
        unsigned char Idle:1;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char Transitioning:1;// Offset=0x0 Size=0x1 BitOffset=0x1 BitSize=0x1
    };
    unsigned char AllState;// Offset=0x0 Size=0x1
};

struct _KCORE_CONTROL_BLOCK_SHADOW// Size=0x40 (Id=590)
{
    unsigned long long Lock;// Offset=0x0 Size=0x8
    unsigned long long CurrentIsolationDomain;// Offset=0x8 Size=0x8
    unsigned long long NextIsolationDomain;// Offset=0x10 Size=0x8
    unsigned char TotalProcessors;// Offset=0x18 Size=0x1
    unsigned char IdleProcessors;// Offset=0x19 Size=0x1
    unsigned char NewDomainProcessors;// Offset=0x1a Size=0x1
    unsigned char Spare;// Offset=0x1b Size=0x1
    union _KCCB_SHADOW_PROCESSOR_STATE ProcessorStates[4];// Offset=0x1c Size=0x4
    unsigned long long InterruptTargets[4];// Offset=0x20 Size=0x20
};

struct _KREQUEST_PACKET// Size=0x20 (Id=471)
{
    void * CurrentPacket[3];// Offset=0x0 Size=0x18
    void  ( * WorkerRoutine)(void * ,void * ,void * ,void * );// Offset=0x18 Size=0x8
};

struct _REQUEST_MAILBOX// Size=0x40 (Id=444)
{
    struct _REQUEST_MAILBOX * Next;// Offset=0x0 Size=0x8
    unsigned long long RequestSummary;// Offset=0x8 Size=0x8
    struct _KREQUEST_PACKET RequestPacket;// Offset=0x10 Size=0x20
    long * SubNodeTargetCountAddr;// Offset=0x30 Size=0x8
    long SubNodeTargetCount;// Offset=0x38 Size=0x4
};

struct _KPRCB// Size=0xcf00 (Id=62)
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
    union _KPRIORITY_STATE * PriorityState;// Offset=0x38 Size=0x8
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
    struct _KPRCB_TRACEPOINT_LOG * TracepointLog;// Offset=0x98 Size=0x8
    unsigned long CoresPerPhysicalProcessor;// Offset=0xa0 Size=0x4
    unsigned long LogicalProcessorsPerCore;// Offset=0xa4 Size=0x4
    unsigned long SelfIpiRequestSummary;// Offset=0xa8 Size=0x4
    unsigned char QpcToTscIncrementShift;// Offset=0xac Size=0x1
    unsigned char PrcbPad03[3];// Offset=0xad Size=0x3
    unsigned long long QpcToTscIncrement;// Offset=0xb0 Size=0x8
    unsigned long long PrcbPad04;// Offset=0xb8 Size=0x8
    struct _KSCHEDULER_SUBNODE * SchedulerSubNode;// Offset=0xc0 Size=0x8
    unsigned long long GroupSetMember;// Offset=0xc8 Size=0x8
    unsigned char Group;// Offset=0xd0 Size=0x1
    unsigned char GroupIndex;// Offset=0xd1 Size=0x1
    unsigned char PrcbPad05[2];// Offset=0xd2 Size=0x2
    unsigned long InitialApicId;// Offset=0xd4 Size=0x4
    unsigned long ScbOffset;// Offset=0xd8 Size=0x4
    unsigned long ApicMask;// Offset=0xdc Size=0x4
    void * AcpiReserved;// Offset=0xe0 Size=0x8
    unsigned long CFlushSize;// Offset=0xe8 Size=0x4
    union // Size=0x4 (Id=0)
    {
        union _KPRCBFLAG PrcbFlags;// Offset=0xec Size=0x4
        unsigned long PrcbFlagsReserved;// Offset=0xec Size=0x4
    };
    unsigned long long PrcbPad11[2];// Offset=0xf0 Size=0x10
    struct _KPROCESSOR_STATE ProcessorState;// Offset=0x100 Size=0x5c0
    struct _XSAVE_AREA_HEADER * ExtendedSupervisorState;// Offset=0x6c0 Size=0x8
    unsigned long ProcessorSignature;// Offset=0x6c8 Size=0x4
    unsigned long ProcessorFlags;// Offset=0x6cc Size=0x4
    union // Size=0x6f0 (Id=0)
    {
        unsigned long long TrappedSecurityDomain;// Offset=0x6d0 Size=0x8
        union _KPRCB_BPB_STATE BpbState;// Offset=0x6d8 Size=0x2
        union _KPRCB_BPB_STATE BpbTrappedBpbState;// Offset=0x6da Size=0x2
        union _KPRCB_BPB_FEATURES BpbFeatures;// Offset=0x6dc Size=0x1
        unsigned char PrcbPad12b;// Offset=0x6dd Size=0x1
        union _KPRCB_BPB_RETPOLINE_STATE BpbRetpolineState;// Offset=0x6de Size=0x1
        unsigned char BpbRetpolineStateOverflow;// Offset=0x6df Size=0x1
        short PairRegister;// Offset=0x6e0 Size=0x2
        unsigned short BpbRetpolineExitSpecCtrl;// Offset=0x6e2 Size=0x2
        unsigned short BpbTrappedRetpolineExitSpecCtrl;// Offset=0x6e4 Size=0x2
        unsigned short BpbCurrentSpecCtrl;// Offset=0x6e6 Size=0x2
        unsigned short BpbKernelSpecCtrl;// Offset=0x6e8 Size=0x2
        unsigned short BpbNmiSpecCtrl;// Offset=0x6ea Size=0x2
        unsigned short BpbUserSpecCtrl;// Offset=0x6ec Size=0x2
        unsigned short PrcbPad12c[1];// Offset=0x6ee Size=0x2
        unsigned long long PrcbPad12a[4];// Offset=0x6d0 Size=0x20
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
    struct _KSTATIC_AFFINITY_BLOCK StaticAffinity;// Offset=0x2db8 Size=0x820
    struct _KSOFTWARE_INTERRUPT_BATCH DeferredDispatchInterrupts;// Offset=0x35d8 Size=0x210
    struct _KI_RESCHEDULE_CONTEXT * StaticRescheduleContext;// Offset=0x37e8 Size=0x8
    struct _KCPU_PARTITION * CpuPartition;// Offset=0x37f0 Size=0x8
    unsigned long long PrcbPad35[1];// Offset=0x37f8 Size=0x8
    union _SLIST_HEADER InterruptObjectPool;// Offset=0x3800 Size=0x10
    struct _RTL_HASH_TABLE * DpcRuntimeHistoryHashTable;// Offset=0x3810 Size=0x8
    struct _KDPC * DpcRuntimeHistoryHashTableCleanupDpc;// Offset=0x3818 Size=0x8
    void  ( * CurrentDpcRoutine)(struct _KDPC * ,void * ,void * ,void * );// Offset=0x3820 Size=0x8
    unsigned long long CurrentDpcRuntimeHistoryCached;// Offset=0x3828 Size=0x8
    unsigned long long CurrentDpcStartTime;// Offset=0x3830 Size=0x8
    struct _KTHREAD * DpcDelegateThread;// Offset=0x3838 Size=0x8
    struct _KDPC_DATA DpcData[2];// Offset=0x3840 Size=0x60
    void * DpcStack;// Offset=0x38a0 Size=0x8
    long MaximumDpcQueueDepth;// Offset=0x38a8 Size=0x4
    unsigned long DpcRequestRate;// Offset=0x38ac Size=0x4
    unsigned long MinimumDpcRate;// Offset=0x38b0 Size=0x4
    unsigned long DpcLastCount;// Offset=0x38b4 Size=0x4
    unsigned char ThreadDpcEnable;// Offset=0x38b8 Size=0x1
    unsigned char QuantumEnd;// Offset=0x38b9 Size=0x1
    unsigned char DpcRoutineActive;// Offset=0x38ba Size=0x1
    unsigned char IdleSchedule;// Offset=0x38bb Size=0x1
    union // Size=0x38c0 (Id=0)
    {
        long DpcRequestSummary;// Offset=0x38bc Size=0x4
        short DpcRequestSlot[2];// Offset=0x38bc Size=0x4
        short NormalDpcState;// Offset=0x38bc Size=0x2
        short ThreadDpcState;// Offset=0x38be Size=0x2
        struct // Size=0x4 (Id=0)
        {
            unsigned long DpcNormalProcessingActive:1;// Offset=0x38bc Size=0x4 BitOffset=0x0 BitSize=0x1
            unsigned long DpcNormalProcessingRequested:1;// Offset=0x38bc Size=0x4 BitOffset=0x1 BitSize=0x1
            unsigned long DpcNormalThreadSignal:1;// Offset=0x38bc Size=0x4 BitOffset=0x2 BitSize=0x1
            unsigned long DpcNormalTimerExpiration:1;// Offset=0x38bc Size=0x4 BitOffset=0x3 BitSize=0x1
            unsigned long DpcNormalDpcPresent:1;// Offset=0x38bc Size=0x4 BitOffset=0x4 BitSize=0x1
            unsigned long DpcNormalLocalInterrupt:1;// Offset=0x38bc Size=0x4 BitOffset=0x5 BitSize=0x1
            unsigned long DpcNormalPriorityAntiStarvation:1;// Offset=0x38bc Size=0x4 BitOffset=0x6 BitSize=0x1
            unsigned long DpcNormalSwapToDpcDelegate:1;// Offset=0x38bc Size=0x4 BitOffset=0x7 BitSize=0x1
            unsigned long DpcNormalSpare:8;// Offset=0x38bc Size=0x4 BitOffset=0x8 BitSize=0x8
            unsigned long DpcThreadActive:1;// Offset=0x38bc Size=0x4 BitOffset=0x10 BitSize=0x1
            unsigned long DpcThreadRequested:1;// Offset=0x38bc Size=0x4 BitOffset=0x11 BitSize=0x1
            unsigned long DpcThreadSpare:14;// Offset=0x38bc Size=0x4 BitOffset=0x12 BitSize=0xe
        };
    };
    unsigned long LastTick;// Offset=0x38c0 Size=0x4
    unsigned long ClockInterrupts;// Offset=0x38c4 Size=0x4
    unsigned long ReadyScanTick;// Offset=0x38c8 Size=0x4
    unsigned long SingleDpcSoftTimeLimitTicks;// Offset=0x38cc Size=0x4
    struct _KSINGLE_DPC_SOFT_TIMEOUT_EVENT_INFO * SingleDpcSoftTimeoutEventInfo;// Offset=0x38d0 Size=0x8
    unsigned long CumulativeDpcSoftTimeLimitTicks;// Offset=0x38d8 Size=0x4
    unsigned long DpcWatchdogProfileBufferSize;// Offset=0x38dc Size=0x4
    struct _KE_PRCB_RCU_DATA RcuData;// Offset=0x38e0 Size=0x20
    void * InterruptObject[256];// Offset=0x3900 Size=0x800
    struct _KTIMER_TABLE TimerTable;// Offset=0x4100 Size=0x4218
    void * DpcLog;// Offset=0x8318 Size=0x8
    unsigned long DpcLogIndex;// Offset=0x8320 Size=0x4
    unsigned long DpcLogBufferSize;// Offset=0x8324 Size=0x4
    unsigned long PrcbPad92[6];// Offset=0x8328 Size=0x18
    struct _KGATE DpcGate;// Offset=0x8340 Size=0x18
    void * PrcbPad52;// Offset=0x8358 Size=0x8
    struct _KDPC CallDpc;// Offset=0x8360 Size=0x40
    long ClockKeepAlive;// Offset=0x83a0 Size=0x4
    unsigned char PrcbPad60[2];// Offset=0x83a4 Size=0x2
    union // Size=0x83a8 (Id=0)
    {
        unsigned char NmiActive;// Offset=0x83a6 Size=0x1
        unsigned char MceActive;// Offset=0x83a7 Size=0x1
        unsigned short CombinedNmiMceActive;// Offset=0x83a6 Size=0x2
    };
    long DpcWatchdogPeriodTicks;// Offset=0x83a8 Size=0x4
    long DpcWatchdogCount;// Offset=0x83ac Size=0x4
    long KeSpinLockOrdering;// Offset=0x83b0 Size=0x4
    unsigned long DpcWatchdogProfileCumulativeDpcThresholdTicks;// Offset=0x83b4 Size=0x4
    void * CachedPtes;// Offset=0x83b8 Size=0x8
    struct _LIST_ENTRY WaitListHead;// Offset=0x83c0 Size=0x10
    unsigned long long WaitLock;// Offset=0x83d0 Size=0x8
    unsigned long ReadySummary;// Offset=0x83d8 Size=0x4
    long AffinitizedSelectionMask;// Offset=0x83dc Size=0x4
    unsigned long QueueIndex;// Offset=0x83e0 Size=0x4
    unsigned long NormalPriorityQueueIndex;// Offset=0x83e4 Size=0x4
    unsigned long NormalPriorityReadyScanTick;// Offset=0x83e8 Size=0x4
    unsigned long DpcWatchdogSequenceNumber;// Offset=0x83ec Size=0x4
    struct _KDPC TimerExpirationDpc;// Offset=0x83f0 Size=0x40
    struct _RTL_RB_TREE ScbQueue;// Offset=0x8430 Size=0x10
    struct _LIST_ENTRY DispatcherReadyListHead[32];// Offset=0x8440 Size=0x200
    unsigned long InterruptCount;// Offset=0x8640 Size=0x4
    unsigned long KernelTime;// Offset=0x8644 Size=0x4
    unsigned long UserTime;// Offset=0x8648 Size=0x4
    unsigned long DpcTime;// Offset=0x864c Size=0x4
    unsigned long InterruptTime;// Offset=0x8650 Size=0x4
    unsigned long AdjustDpcThreshold;// Offset=0x8654 Size=0x4
    unsigned char DebuggerSavedIRQL;// Offset=0x8658 Size=0x1
    unsigned char GroupSchedulingOverQuota;// Offset=0x8659 Size=0x1
    unsigned char DeepSleep;// Offset=0x865a Size=0x1
    unsigned char PrcbPad80;// Offset=0x865b Size=0x1
    unsigned long DpcTimeCount;// Offset=0x865c Size=0x4
    unsigned long DpcTimeLimitTicks;// Offset=0x8660 Size=0x4
    unsigned long PeriodicCount;// Offset=0x8664 Size=0x4
    unsigned long PeriodicBias;// Offset=0x8668 Size=0x4
    unsigned long AvailableTime;// Offset=0x866c Size=0x4
    unsigned long KeExceptionDispatchCount;// Offset=0x8670 Size=0x4
    unsigned long ReadyThreadCount;// Offset=0x8674 Size=0x4
    unsigned long long ReadyQueueExpectedRunTime;// Offset=0x8678 Size=0x8
    unsigned long long StartCycles;// Offset=0x8680 Size=0x8
    unsigned long long TaggedCycles[4];// Offset=0x8688 Size=0x20
    unsigned long long AffinitizedCycles;// Offset=0x86a8 Size=0x8
    unsigned long long * CyclesByThreadType;// Offset=0x86b0 Size=0x8
    unsigned long CpuCycleScalingFactor;// Offset=0x86b8 Size=0x4
    unsigned short PerformanceScoreByClass[8];// Offset=0x86bc Size=0x10
    unsigned short EfficiencyScoreByClass[8];// Offset=0x86cc Size=0x10
    unsigned char CycleAccumulationInitialized;// Offset=0x86dc Size=0x1
    unsigned char PrcbPad83[3];// Offset=0x86dd Size=0x3
    struct _KMCE_RECOVERY_CONTEXT MceRecoveryContext;// Offset=0x86e0 Size=0x10
    struct _KFORCE_PARK_DUTY_CYCLE_DATA * ForceParkDutyCycleData;// Offset=0x86f0 Size=0x8
    unsigned long long StartCyclesQpc;// Offset=0x86f8 Size=0x8
    unsigned long long CycleTimeQpc;// Offset=0x8700 Size=0x8
    unsigned long long NumberOfSecureFaults;// Offset=0x8708 Size=0x8
    unsigned long PrcbPad84[8];// Offset=0x8710 Size=0x20
    void * CachedStacks[2];// Offset=0x8730 Size=0x10
    unsigned long DpcWatchdogProfileSingleDpcThresholdTicks;// Offset=0x8740 Size=0x4
    long PrcbPad82[3];// Offset=0x8744 Size=0xc
    unsigned long PageColor;// Offset=0x8750 Size=0x4
    unsigned long NodeColor;// Offset=0x8754 Size=0x4
    unsigned long PrcbPad87[2];// Offset=0x8758 Size=0x8
    unsigned char PrcbPad81[5];// Offset=0x8760 Size=0x5
    unsigned char SystemWorkKickInProgress;// Offset=0x8765 Size=0x1
    unsigned char ExceptionStackActive;// Offset=0x8766 Size=0x1
    unsigned char TbFlushListActive;// Offset=0x8767 Size=0x1
    void * ExceptionStack;// Offset=0x8768 Size=0x8
    long long MmSpinLockOrdering;// Offset=0x8770 Size=0x8
    unsigned long long CycleTime;// Offset=0x8778 Size=0x8
    unsigned long long Cycles[4][2];// Offset=0x8780 Size=0x40
    unsigned long CcFastMdlReadNoWait;// Offset=0x87c0 Size=0x4
    unsigned long CcFastMdlReadWait;// Offset=0x87c4 Size=0x4
    unsigned long CcFastMdlReadNotPossible;// Offset=0x87c8 Size=0x4
    unsigned long CcMapDataNoWait;// Offset=0x87cc Size=0x4
    unsigned long CcMapDataWait;// Offset=0x87d0 Size=0x4
    unsigned long CcPinMappedDataCount;// Offset=0x87d4 Size=0x4
    unsigned long CcPinReadNoWait;// Offset=0x87d8 Size=0x4
    unsigned long CcPinReadWait;// Offset=0x87dc Size=0x4
    unsigned long CcMdlReadNoWait;// Offset=0x87e0 Size=0x4
    unsigned long CcMdlReadWait;// Offset=0x87e4 Size=0x4
    unsigned long CcLazyWriteHotSpots;// Offset=0x87e8 Size=0x4
    unsigned long CcLazyWriteIos;// Offset=0x87ec Size=0x4
    unsigned long CcLazyWritePages;// Offset=0x87f0 Size=0x4
    unsigned long CcDataFlushes;// Offset=0x87f4 Size=0x4
    unsigned long CcDataPages;// Offset=0x87f8 Size=0x4
    unsigned long CcLostDelayedWrites;// Offset=0x87fc Size=0x4
    unsigned long CcFastReadResourceMiss;// Offset=0x8800 Size=0x4
    unsigned long CcCopyReadWaitMiss;// Offset=0x8804 Size=0x4
    unsigned long CcFastMdlReadResourceMiss;// Offset=0x8808 Size=0x4
    unsigned long CcMapDataNoWaitMiss;// Offset=0x880c Size=0x4
    unsigned long CcMapDataWaitMiss;// Offset=0x8810 Size=0x4
    unsigned long CcPinReadNoWaitMiss;// Offset=0x8814 Size=0x4
    unsigned long CcPinReadWaitMiss;// Offset=0x8818 Size=0x4
    unsigned long CcMdlReadNoWaitMiss;// Offset=0x881c Size=0x4
    unsigned long CcMdlReadWaitMiss;// Offset=0x8820 Size=0x4
    unsigned long CcReadAheadIos;// Offset=0x8824 Size=0x4
    long MmCacheTransitionCount;// Offset=0x8828 Size=0x4
    long MmCacheReadCount;// Offset=0x882c Size=0x4
    long MmCacheIoCount;// Offset=0x8830 Size=0x4
    unsigned long PrcbPad91;// Offset=0x8834 Size=0x4
    void * MmInternal;// Offset=0x8838 Size=0x8
    struct _PROCESSOR_POWER_STATE PowerState;// Offset=0x8840 Size=0x238
    unsigned long long PrcbPad96[1];// Offset=0x8a78 Size=0x8
    void * PrcbPad90;// Offset=0x8a80 Size=0x8
    struct _LIST_ENTRY ScbList;// Offset=0x8a88 Size=0x10
    struct _KDPC ForceIdleDpc;// Offset=0x8a98 Size=0x40
    struct _KDPC DpcWatchdogDpc;// Offset=0x8ad8 Size=0x40
    unsigned long long PrcbPad98[7];// Offset=0x8b18 Size=0x38
    void * VmInternal;// Offset=0x8b50 Size=0x8
    struct _CACHE_DESCRIPTOR Cache[5];// Offset=0x8b58 Size=0x3c
    unsigned long CacheCount;// Offset=0x8b94 Size=0x4
    unsigned long CachedCommit;// Offset=0x8b98 Size=0x4
    unsigned long CachedResidentAvailable;// Offset=0x8b9c Size=0x4
    void * WheaInfo;// Offset=0x8ba0 Size=0x8
    void * EtwSupport;// Offset=0x8ba8 Size=0x8
    void * ExSaPageArray;// Offset=0x8bb0 Size=0x8
    unsigned long KeAlignmentFixupCount;// Offset=0x8bb8 Size=0x4
    unsigned long PrcbPad95;// Offset=0x8bbc Size=0x4
    union _SLIST_HEADER HypercallPageList;// Offset=0x8bc0 Size=0x10
    unsigned long long * StatisticsPage;// Offset=0x8bd0 Size=0x8
    unsigned long long GenerationTarget;// Offset=0x8bd8 Size=0x8
    union _LARGE_INTEGER VirtualApicAssistPage;// Offset=0x8be0 Size=0x8
    unsigned long long PrcbPad85[3];// Offset=0x8be8 Size=0x18
    void * HypercallCachedPages;// Offset=0x8c00 Size=0x8
    void * VirtualApicAssist;// Offset=0x8c08 Size=0x8
    struct _KAFFINITY_EX PackageProcessorSet;// Offset=0x8c10 Size=0x108
    unsigned long long PrcbPad86[32];// Offset=0x8d18 Size=0x100
    union // Size=0x8e2c (Id=0)
    {
        unsigned long ProcessorId;// Offset=0x8e18 Size=0x4
        unsigned long CoreId;// Offset=0x8e1c Size=0x4
        unsigned long ModuleId;// Offset=0x8e20 Size=0x4
        unsigned long DieId;// Offset=0x8e24 Size=0x4
        unsigned long PackageId;// Offset=0x8e28 Size=0x4
        unsigned long TopologyId[5];// Offset=0x8e18 Size=0x14
    };
    unsigned long NodeRelativeTopologyIndex[5];// Offset=0x8e2c Size=0x14
    unsigned long long SharedReadyQueueMask;// Offset=0x8e40 Size=0x8
    struct _KSHARED_READY_QUEUE * SharedReadyQueue;// Offset=0x8e48 Size=0x8
    unsigned long SharedQueueScanOwner;// Offset=0x8e50 Size=0x4
    unsigned long ScanSiblingIndex;// Offset=0x8e54 Size=0x4
    struct _KCORE_CONTROL_BLOCK * CoreControlBlock;// Offset=0x8e58 Size=0x8
    unsigned long long CoreProcessorSet;// Offset=0x8e60 Size=0x8
    unsigned long long ScanSiblingMask;// Offset=0x8e68 Size=0x8
    unsigned long long LLCMask;// Offset=0x8e70 Size=0x8
    unsigned long long GroupModuleProcessorSet;// Offset=0x8e78 Size=0x8
    struct _KTHREAD * SmtIsolationThread;// Offset=0x8e80 Size=0x8
    unsigned long long PrcbPad97[2];// Offset=0x8e88 Size=0x10
    struct _PROCESSOR_PROFILE_CONTROL_AREA * ProcessorProfileControlArea;// Offset=0x8e98 Size=0x8
    void * ProfileEventIndexAddress;// Offset=0x8ea0 Size=0x8
    void ** DpcWatchdogProfile;// Offset=0x8ea8 Size=0x8
    void ** DpcWatchdogProfileCurrentEmptyCapture;// Offset=0x8eb0 Size=0x8
    void * SchedulerAssist;// Offset=0x8eb8 Size=0x8
    struct _SYNCH_COUNTERS SynchCounters;// Offset=0x8ec0 Size=0xb8
    unsigned long long PrcbPad94;// Offset=0x8f78 Size=0x8
    struct _FILESYSTEM_DISK_COUNTERS FsCounters;// Offset=0x8f80 Size=0x10
    unsigned char VendorString[13];// Offset=0x8f90 Size=0xd
    unsigned char PrcbPad100[3];// Offset=0x8f9d Size=0x3
    unsigned long long FeatureBits;// Offset=0x8fa0 Size=0x8
    union _LARGE_INTEGER UpdateSignature;// Offset=0x8fa8 Size=0x8
    unsigned long long PteBitCache;// Offset=0x8fb0 Size=0x8
    unsigned long PteBitOffset;// Offset=0x8fb8 Size=0x4
    unsigned long PrcbPad105;// Offset=0x8fbc Size=0x4
    struct _CONTEXT * Context;// Offset=0x8fc0 Size=0x8
    unsigned long ContextFlagsInit;// Offset=0x8fc8 Size=0x4
    unsigned long PrcbPad115;// Offset=0x8fcc Size=0x4
    struct _XSAVE_AREA * ExtendedState;// Offset=0x8fd0 Size=0x8
    void * IsrStack;// Offset=0x8fd8 Size=0x8
    struct _KENTROPY_TIMING_STATE EntropyTimingState;// Offset=0x8fe0 Size=0x158
    struct _unnamed_59 StibpPairingTrace;// Offset=0x9138 Size=0x38
    struct _SINGLE_LIST_ENTRY AbSelfIoBoostsList;// Offset=0x9170 Size=0x8
    struct _SINGLE_LIST_ENTRY AbPropagateBoostsList;// Offset=0x9178 Size=0x8
    struct _KDPC AbDpc;// Offset=0x9180 Size=0x40
    struct _SYMCRYPT_ENTROPY_ACCUMULATOR_STATE SymCryptEntropyAccumulatorState;// Offset=0x91c0 Size=0x180
    struct _IOP_IRP_STACK_PROFILER IoIrpStackProfilerCurrent;// Offset=0x9340 Size=0x54
    struct _IOP_IRP_STACK_PROFILER IoIrpStackProfilerPrevious;// Offset=0x9394 Size=0x54
    struct _KSECURE_FAULT_INFORMATION SecureFault;// Offset=0x93e8 Size=0x18
    struct _KSHARED_READY_QUEUE * LocalSharedReadyQueue;// Offset=0x9400 Size=0x8
    struct _KI_COOPERATIVE_IDLE_SEARCH_CONTEXT * LocalSearchContexts[2];// Offset=0x9408 Size=0x10
    struct _KI_COOPERATIVE_IDLE_SEARCH_CONTEXT * SearchContexts[2];// Offset=0x9418 Size=0x10
    struct _KI_COOPERATIVE_IDLE_SEARCH_GENERATION * SearchGenerations[2];// Offset=0x9428 Size=0x10
    unsigned long long PrcbPad125[1];// Offset=0x9438 Size=0x8
    unsigned long TimerExpirationTraceCount;// Offset=0x9440 Size=0x4
    unsigned long PrcbPad127;// Offset=0x9444 Size=0x4
    struct _KTIMER_EXPIRATION_TRACE TimerExpirationTrace[16];// Offset=0x9448 Size=0x100
    unsigned long long PrcbPad128[7];// Offset=0x9548 Size=0x38
    struct _KCLOCK_TIMER_STATE ClockTimerState;// Offset=0x9580 Size=0x518
    struct _KTRAP_FRAME * IpiFrame;// Offset=0x9a98 Size=0x8
    unsigned char PrcbPad129[32];// Offset=0x9aa0 Size=0x20
    struct _REQUEST_MAILBOX * Mailbox;// Offset=0x9ac0 Size=0x8
    unsigned long long PrcbPad130[7];// Offset=0x9ac8 Size=0x38
    struct _MACHINE_CHECK_CONTEXT McheckContext[2];// Offset=0x9b00 Size=0xa0
    unsigned long long TransitionShadowStack;// Offset=0x9ba0 Size=0x8
    unsigned long long KernelShadowStackInitial;// Offset=0x9ba8 Size=0x8
    unsigned long long * IstShadowStacksTable;// Offset=0x9bb0 Size=0x8
    void * HiberSwapShadowStacks[5];// Offset=0x9bb8 Size=0x28
    void * HiberSwapShadowStackBases[5];// Offset=0x9be0 Size=0x28
    void * MmFaultCompletionInfo;// Offset=0x9c08 Size=0x8
    unsigned long long PrcbPad132[6];// Offset=0x9c10 Size=0x30
    struct _KLOCK_QUEUE_HANDLE SelfmapLockHandle[4];// Offset=0x9c40 Size=0x60
    unsigned long long PrcbPad134b[4];// Offset=0x9ca0 Size=0x20
    struct _KAFFINITY_EX DieProcessorSet;// Offset=0x9cc0 Size=0x108
    unsigned long long PrcbPad135[32];// Offset=0x9dc8 Size=0x100
    unsigned long CoresPerPhysicalDie;// Offset=0x9ec8 Size=0x4
    unsigned long LogicalProcessorsPerModule;// Offset=0x9ecc Size=0x4
    unsigned char PrcbPad137[64];// Offset=0x9ed0 Size=0x40
    struct _KAFFINITY_EX ModuleProcessorSet;// Offset=0x9f10 Size=0x108
    unsigned long long PrcbPad136[32];// Offset=0xa018 Size=0x100
    struct _KCORE_CONTROL_BLOCK LocalCoreControlBlock;// Offset=0xa118 Size=0x30
    unsigned long long PrcbPad137a;// Offset=0xa148 Size=0x8
    struct _KDPC KstackFreeDpc;// Offset=0xa150 Size=0x40
    struct _KDPC SlistRollbackDpc;// Offset=0xa190 Size=0x40
    union _SLIST_HEADER KstackFreeList;// Offset=0xa1d0 Size=0x10
    unsigned long IsrStackNesting;// Offset=0xa1e0 Size=0x4
    unsigned char PrcbPad138[3228];// Offset=0xa1e4 Size=0xc9c
    unsigned long long KernelDirectoryTableBase;// Offset=0xae80 Size=0x8
    unsigned long long RspBaseShadow;// Offset=0xae88 Size=0x8
    unsigned long long UserRspShadow;// Offset=0xae90 Size=0x8
    unsigned long ShadowFlags;// Offset=0xae98 Size=0x4
    unsigned long PrcbPad138b;// Offset=0xae9c Size=0x4
    unsigned long long PrcbPad138c;// Offset=0xaea0 Size=0x8
    unsigned short PrcbPad138d;// Offset=0xaea8 Size=0x2
    unsigned short VerwSelector;// Offset=0xaeaa Size=0x2
    unsigned long DbgMceNestingLevel;// Offset=0xaeac Size=0x4
    unsigned long DbgMceFlags;// Offset=0xaeb0 Size=0x4
    unsigned long CoreControlBlockIndex;// Offset=0xaeb4 Size=0x4
    struct _KCORE_CONTROL_BLOCK_SHADOW * CoreControlBlockShadow;// Offset=0xaeb8 Size=0x8
    struct _KCORE_CONTROL_BLOCK_SHADOW LocalCoreControlBlockShadow;// Offset=0xaec0 Size=0x40
    struct _KAFFINITY_EX CacheProcessorSet[5];// Offset=0xaf00 Size=0x528
    unsigned long long PrcbPad139[160];// Offset=0xb428 Size=0x500
    unsigned long long PrcbPad140[171];// Offset=0xb928 Size=0x558
    unsigned long long PrcbPad140a[8];// Offset=0xbe80 Size=0x40
    unsigned long long PrcbPad141[512];// Offset=0xbec0 Size=0x1000
    struct _REQUEST_MAILBOX RequestMailbox[1];// Offset=0xcec0 Size=0x40
};
