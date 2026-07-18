struct _unnamed_31// Size=0x8 (Id=31)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=62)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_31 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _GEN_ADDR// Size=0xc (Id=461)
{
    unsigned char AddressSpaceID;// Offset=0x0 Size=0x1
    unsigned char BitWidth;// Offset=0x1 Size=0x1
    unsigned char BitOffset;// Offset=0x2 Size=0x1
    unsigned char AccessSize;// Offset=0x3 Size=0x1
    union _LARGE_INTEGER Address;// Offset=0x4 Size=0x8
};

struct _DIFFERENTIAL_FEEDBACK_STATE// Size=0x40 (Id=535)
{
    unsigned long long LastActualCount;// Offset=0x0 Size=0x8
    unsigned long long LastReferenceCount;// Offset=0x8 Size=0x8
    unsigned long long CumulativeActualCount;// Offset=0x10 Size=0x8
    unsigned long long CumulativeReferenceCount;// Offset=0x18 Size=0x8
    unsigned long long ActualMask;// Offset=0x20 Size=0x8
    unsigned long long ReferenceMask;// Offset=0x28 Size=0x8
    void  ( * FeedbackRoutine)(void * ,unsigned char ,unsigned long long * ,unsigned long long * );// Offset=0x30 Size=0x8
    void * Context;// Offset=0x38 Size=0x8
};

struct _SINGLE_LIST_ENTRY// Size=0x8 (Id=24)
{
    struct _SINGLE_LIST_ENTRY * Next;// Offset=0x0 Size=0x8
};

struct _KDPC// Size=0x40 (Id=128)
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

struct _CPC_RUNTIME_STATE// Size=0x170 (Id=428)
{
    struct _FDO_DATA * DevExt;// Offset=0x0 Size=0x8
    unsigned long long HighestPerformance;// Offset=0x8 Size=0x8
    unsigned long long NominalPerformance;// Offset=0x10 Size=0x8
    unsigned long long LowestNonlinearPerformance;// Offset=0x18 Size=0x8
    unsigned long long LowestPerformance;// Offset=0x20 Size=0x8
    unsigned long long ReferencePerformance;// Offset=0x28 Size=0x8
    unsigned long long SelectedPerformance;// Offset=0x30 Size=0x8
    unsigned long long GuaranteedPerformance;// Offset=0x38 Size=0x8
    unsigned long NominalFrequency;// Offset=0x40 Size=0x4
    unsigned long HighestPercent;// Offset=0x44 Size=0x4
    unsigned long HighestObservedHighestPercent;// Offset=0x48 Size=0x4
    unsigned long LowestNonlinearPercent;// Offset=0x4c Size=0x4
    unsigned long LowestPercent;// Offset=0x50 Size=0x4
    unsigned long GuaranteedPercent;// Offset=0x54 Size=0x4
    unsigned long CachedPercentFrequency;// Offset=0x58 Size=0x4
    unsigned char EnablePresent;// Offset=0x5c Size=0x1
    unsigned char DesiredPresent;// Offset=0x5d Size=0x1
    unsigned char MinimumPresent;// Offset=0x5e Size=0x1
    unsigned char MaximumPresent;// Offset=0x5f Size=0x1
    unsigned char EppPresent;// Offset=0x60 Size=0x1
    unsigned char ActivityWindowPresent;// Offset=0x61 Size=0x1
    unsigned char PerformanceReductionTolerancePresent;// Offset=0x62 Size=0x1
    unsigned char GuaranteedPerformancePresent;// Offset=0x63 Size=0x1
    unsigned char PccUsedForRead;// Offset=0x64 Size=0x1
    unsigned char PccUsedForGuaranteedNotify;// Offset=0x65 Size=0x1
    unsigned char PccUsedForHighestNotify;// Offset=0x66 Size=0x1
    unsigned char PccUsedForWrite;// Offset=0x67 Size=0x1
    unsigned char NativeInterruptEnabled;// Offset=0x68 Size=0x1
    unsigned char SingleRegisterInitialized;// Offset=0x69 Size=0x1
    unsigned char PackageRegisterInitialized;// Offset=0x6a Size=0x1
    struct ACPI_CPC * Cpc;// Offset=0x70 Size=0x8
    struct _GEN_ADDR SingleRegisterAddress;// Offset=0x78 Size=0xc
    unsigned long long CachedRegisterValue;// Offset=0x88 Size=0x8
    unsigned long long SingleRegisterMask;// Offset=0x90 Size=0x8
    unsigned long long CachedPackageValue;// Offset=0x98 Size=0x8
    struct _DIFFERENTIAL_FEEDBACK_STATE DeliveredFeedback;// Offset=0xa0 Size=0x40
    struct _DIFFERENTIAL_FEEDBACK_STATE HardwareFeedback;// Offset=0xe0 Size=0x40
    struct _KDPC NativeInterruptDpc;// Offset=0x120 Size=0x40
    struct _IO_WORKITEM * NativeInterruptWorker;// Offset=0x160 Size=0x8
    long NativeInterruptWork;// Offset=0x168 Size=0x4
};
