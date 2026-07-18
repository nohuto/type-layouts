struct _KDESCRIPTOR// Size=0x10 (Id=381)
{
    unsigned short Pad[3];// Offset=0x0 Size=0x6
    unsigned short Limit;// Offset=0x6 Size=0x2
    void * Base;// Offset=0x8 Size=0x8
};

struct _KSPECIAL_REGISTERS// Size=0xf0 (Id=323)
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

struct _M128A// Size=0x10 (Id=261)
{
    unsigned long long Low;// Offset=0x0 Size=0x8
    long long High;// Offset=0x8 Size=0x8
};

struct _XSAVE_FORMAT// Size=0x200 (Id=332)
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

struct _CONTEXT// Size=0x4d0 (Id=256)
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

struct _KPROCESSOR_STATE// Size=0x5c0 (Id=207)
{
    struct _KSPECIAL_REGISTERS SpecialRegisters;// Offset=0x0 Size=0xf0
    struct _CONTEXT ContextFrame;// Offset=0xf0 Size=0x4d0
};

struct _KPRCB// Size=0xcf00 (Id=507)
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
    unsigned long long CompactionMaskInit;// Offset=0x8710 Size=0x8
    unsigned long PrcbPad84[6];// Offset=0x8718 Size=0x18
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
    union // Size=0x8e30 (Id=0)
    {
        unsigned long ProcessorId;// Offset=0x8e18 Size=0x4
        unsigned long CoreId;// Offset=0x8e1c Size=0x4
        unsigned long ModuleId;// Offset=0x8e20 Size=0x4
        unsigned long DieId;// Offset=0x8e24 Size=0x4
        unsigned long PackageId;// Offset=0x8e28 Size=0x4
        unsigned long ComplexId;// Offset=0x8e2c Size=0x4
        unsigned long TopologyId[6];// Offset=0x8e18 Size=0x18
    };
    unsigned long PrcbPad101[4];// Offset=0x8e30 Size=0x10
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
    struct _unnamed_506 StibpPairingTrace;// Offset=0x9138 Size=0x38
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
    struct _KDPC FreezeForRecoveryDpc;// Offset=0x9ed0 Size=0x40
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
    unsigned long NodeRelativeTopologyIndex[6];// Offset=0xb928 Size=0x18
    struct _KAFFINITY_EX ComplexProcessorSet;// Offset=0xb940 Size=0x108
    unsigned long long PrcbPad139b[32];// Offset=0xba48 Size=0x100
    unsigned long LogicalProcessorsPerComplex;// Offset=0xbb48 Size=0x4
    unsigned long PrcbPad139c;// Offset=0xbb4c Size=0x4
    unsigned long long PrcbPad140[102];// Offset=0xbb50 Size=0x330
    unsigned long long PrcbPad140a[8];// Offset=0xbe80 Size=0x40
    unsigned long long PrcbPad141[512];// Offset=0xbec0 Size=0x1000
    struct _REQUEST_MAILBOX RequestMailbox[1];// Offset=0xcec0 Size=0x40
};
