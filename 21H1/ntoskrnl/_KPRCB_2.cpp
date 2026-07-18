struct _KDESCRIPTOR// Size=0x10 (Id=307)
{
    unsigned short Pad[3];// Offset=0x0 Size=0x6
    unsigned short Limit;// Offset=0x6 Size=0x2
    void * Base;// Offset=0x8 Size=0x8
};

struct _KSPECIAL_REGISTERS// Size=0xf0 (Id=273)
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

struct _M128A// Size=0x10 (Id=236)
{
    unsigned long long Low;// Offset=0x0 Size=0x8
    long long High;// Offset=0x8 Size=0x8
};

struct _XSAVE_FORMAT// Size=0x200 (Id=278)
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

struct _CONTEXT// Size=0x4d0 (Id=231)
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

struct _KPROCESSOR_STATE// Size=0x5c0 (Id=185)
{
    struct _KSPECIAL_REGISTERS SpecialRegisters;// Offset=0x0 Size=0xf0
    struct _CONTEXT ContextFrame;// Offset=0xf0 Size=0x4d0
};

struct _KPRCB// Size=0xaf00 (Id=387)
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
    unsigned char CoresPerPhysicalProcessor;// Offset=0x8e Size=0x1
    unsigned char LogicalProcessorsPerCore;// Offset=0x8f Size=0x1
    unsigned long long TscFrequency;// Offset=0x90 Size=0x8
    unsigned long long PrcbPad04[5];// Offset=0x98 Size=0x28
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
    union // Size=0x100 (Id=0)
    {
        unsigned long long TrappedSecurityDomain;// Offset=0xf0 Size=0x8
        union // Size=0x1 (Id=0)
        {
            unsigned char BpbState;// Offset=0xf8 Size=0x1
            struct // Size=0x1 (Id=0)
            {
                unsigned char BpbCpuIdle:1;// Offset=0xf8 Size=0x1 BitOffset=0x0 BitSize=0x1
                unsigned char BpbFlushRsbOnTrap:1;// Offset=0xf8 Size=0x1 BitOffset=0x1 BitSize=0x1
                unsigned char BpbIbpbOnReturn:1;// Offset=0xf8 Size=0x1 BitOffset=0x2 BitSize=0x1
                unsigned char BpbIbpbOnTrap:1;// Offset=0xf8 Size=0x1 BitOffset=0x3 BitSize=0x1
                unsigned char BpbIbpbOnRetpolineExit:1;// Offset=0xf8 Size=0x1 BitOffset=0x4 BitSize=0x1
                unsigned char BpbStateReserved:3;// Offset=0xf8 Size=0x1 BitOffset=0x5 BitSize=0x3
            };
        };
        union // Size=0x1 (Id=0)
        {
            unsigned char BpbFeatures;// Offset=0xf9 Size=0x1
            struct // Size=0x1 (Id=0)
            {
                unsigned char BpbClearOnIdle:1;// Offset=0xf9 Size=0x1 BitOffset=0x0 BitSize=0x1
                unsigned char BpbEnabled:1;// Offset=0xf9 Size=0x1 BitOffset=0x1 BitSize=0x1
                unsigned char BpbSmep:1;// Offset=0xf9 Size=0x1 BitOffset=0x2 BitSize=0x1
                unsigned char BpbFeaturesReserved:5;// Offset=0xf9 Size=0x1 BitOffset=0x3 BitSize=0x5
            };
        };
        unsigned char BpbCurrentSpecCtrl;// Offset=0xfa Size=0x1
        unsigned char BpbKernelSpecCtrl;// Offset=0xfb Size=0x1
        unsigned char BpbNmiSpecCtrl;// Offset=0xfc Size=0x1
        unsigned char BpbUserSpecCtrl;// Offset=0xfd Size=0x1
        short PairRegister;// Offset=0xfe Size=0x2
        unsigned long long PrcbPad11[2];// Offset=0xf0 Size=0x10
    };
    struct _KPROCESSOR_STATE ProcessorState;// Offset=0x100 Size=0x5c0
    struct _XSAVE_AREA_HEADER * ExtendedSupervisorState;// Offset=0x6c0 Size=0x8
    unsigned long ProcessorSignature;// Offset=0x6c8 Size=0x4
    unsigned long ProcessorFlags;// Offset=0x6cc Size=0x4
    union // Size=0x6d8 (Id=0)
    {
        unsigned char BpbRetpolineExitSpecCtrl;// Offset=0x6d0 Size=0x1
        unsigned char BpbTrappedRetpolineExitSpecCtrl;// Offset=0x6d1 Size=0x1
        union // Size=0x1 (Id=0)
        {
            unsigned char BpbTrappedBpbState;// Offset=0x6d2 Size=0x1
            struct // Size=0x1 (Id=0)
            {
                unsigned char BpbTrappedCpuIdle:1;// Offset=0x6d2 Size=0x1 BitOffset=0x0 BitSize=0x1
                unsigned char BpbTrappedFlushRsbOnTrap:1;// Offset=0x6d2 Size=0x1 BitOffset=0x1 BitSize=0x1
                unsigned char BpbTrappedIbpbOnReturn:1;// Offset=0x6d2 Size=0x1 BitOffset=0x2 BitSize=0x1
                unsigned char BpbTrappedIbpbOnTrap:1;// Offset=0x6d2 Size=0x1 BitOffset=0x3 BitSize=0x1
                unsigned char BpbTrappedIbpbOnRetpolineExit:1;// Offset=0x6d2 Size=0x1 BitOffset=0x4 BitSize=0x1
                unsigned char BpbtrappedBpbStateReserved:3;// Offset=0x6d2 Size=0x1 BitOffset=0x5 BitSize=0x3
            };
        };
        union // Size=0x1 (Id=0)
        {
            unsigned char BpbRetpolineState;// Offset=0x6d3 Size=0x1
            struct // Size=0x1 (Id=0)
            {
                unsigned char BpbRunningNonRetpolineCode:1;// Offset=0x6d3 Size=0x1 BitOffset=0x0 BitSize=0x1
                unsigned char BpbIndirectCallsSafe:1;// Offset=0x6d3 Size=0x1 BitOffset=0x1 BitSize=0x1
                unsigned char BpbRetpolineEnabled:1;// Offset=0x6d3 Size=0x1 BitOffset=0x2 BitSize=0x1
                unsigned char BpbRetpolineStateReserved:5;// Offset=0x6d3 Size=0x1 BitOffset=0x3 BitSize=0x5
            };
        };
        unsigned long PrcbPad12b;// Offset=0x6d4 Size=0x4
        unsigned long long PrcbPad12a;// Offset=0x6d0 Size=0x8
    };
    unsigned long long PrcbPad12[3];// Offset=0x6d8 Size=0x18
    struct _KSPIN_LOCK_QUEUE LockQueue[17];// Offset=0x6f0 Size=0x110
    struct _PP_LOOKASIDE_LIST PPLookasideList[16];// Offset=0x800 Size=0x100
    struct _GENERAL_LOOKASIDE_POOL PPNxPagedLookasideList[32];// Offset=0x900 Size=0xc00
    struct _GENERAL_LOOKASIDE_POOL PPNPagedLookasideList[32];// Offset=0x1500 Size=0xc00
    struct _GENERAL_LOOKASIDE_POOL PPPagedLookasideList[32];// Offset=0x2100 Size=0xc00
    unsigned long long MsrIa32TsxCtrl;// Offset=0x2d00 Size=0x8
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
    struct _anonymous_386 StibpPairingTrace;// Offset=0x8738 Size=0x38
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
    unsigned short VerwSelector;// Offset=0x8eaa Size=0x2
    unsigned long DbgMceNestingLevel;// Offset=0x8eac Size=0x4
    unsigned long DbgMceFlags;// Offset=0x8eb0 Size=0x4
    unsigned long PrcbPad139b;// Offset=0x8eb4 Size=0x4
    unsigned long long PrcbPad140[505];// Offset=0x8eb8 Size=0xfc8
    unsigned long long PrcbPad140a[8];// Offset=0x9e80 Size=0x40
    unsigned long long PrcbPad141[504];// Offset=0x9ec0 Size=0xfc0
    unsigned char PrcbPad141a[64];// Offset=0xae80 Size=0x40
    struct _REQUEST_MAILBOX RequestMailbox[1];// Offset=0xaec0 Size=0x40
};
