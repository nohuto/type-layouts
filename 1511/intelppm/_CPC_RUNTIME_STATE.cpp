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

struct _GEN_ADDR// Size=0xc (Id=436)
{
    unsigned char AddressSpaceID;// Offset=0x0 Size=0x1
    unsigned char BitWidth;// Offset=0x1 Size=0x1
    unsigned char BitOffset;// Offset=0x2 Size=0x1
    unsigned char AccessSize;// Offset=0x3 Size=0x1
    union _LARGE_INTEGER Address;// Offset=0x4 Size=0x8
};

struct _DIFFERENTIAL_FEEDBACK_STATE// Size=0x40 (Id=510)
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

struct _SINGLE_LIST_ENTRY// Size=0x8 (Id=21)
{
    struct _SINGLE_LIST_ENTRY * Next;// Offset=0x0 Size=0x8
};

struct _KDPC// Size=0x40 (Id=122)
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

struct _CPC_RUNTIME_STATE// Size=0x138 (Id=395)
{
    unsigned long long HighestPerformance;// Offset=0x0 Size=0x8
    unsigned long long NominalPerformance;// Offset=0x8 Size=0x8
    unsigned long long LowestNonlinearPerformance;// Offset=0x10 Size=0x8
    unsigned long long LowestPerformance;// Offset=0x18 Size=0x8
    unsigned long long ReferencePerformance;// Offset=0x20 Size=0x8
    unsigned long long SelectedPerformance;// Offset=0x28 Size=0x8
    unsigned long long GuaranteedPerformance;// Offset=0x30 Size=0x8
    unsigned long NominalFrequency;// Offset=0x38 Size=0x4
    unsigned long HighestPercent;// Offset=0x3c Size=0x4
    unsigned long LowestNonlinearPercent;// Offset=0x40 Size=0x4
    unsigned long LowestPercent;// Offset=0x44 Size=0x4
    unsigned long GuaranteedPercent;// Offset=0x48 Size=0x4
    unsigned long CachedPercentFrequency;// Offset=0x4c Size=0x4
    unsigned char EnablePresent;// Offset=0x50 Size=0x1
    unsigned char DesiredPresent;// Offset=0x51 Size=0x1
    unsigned char MinimumPresent;// Offset=0x52 Size=0x1
    unsigned char MaximumPresent;// Offset=0x53 Size=0x1
    unsigned char PerformanceReductionTolerancePresent;// Offset=0x54 Size=0x1
    unsigned char GuaranteedPerformancePresent;// Offset=0x55 Size=0x1
    unsigned char PccUsedForRead;// Offset=0x56 Size=0x1
    unsigned char PccUsedForNotify;// Offset=0x57 Size=0x1
    unsigned char PccUsedForWrite;// Offset=0x58 Size=0x1
    unsigned char NativeInterruptEnabled;// Offset=0x59 Size=0x1
    struct ACPI_CPC * Cpc;// Offset=0x60 Size=0x8
    struct _GEN_ADDR SingleRegisterAddress;// Offset=0x68 Size=0xc
    struct _DIFFERENTIAL_FEEDBACK_STATE DeliveredFeedback;// Offset=0x78 Size=0x40
    struct _DIFFERENTIAL_FEEDBACK_STATE HardwareFeedback;// Offset=0xb8 Size=0x40
    struct _KDPC NativeInterruptDpc;// Offset=0xf8 Size=0x40
};
