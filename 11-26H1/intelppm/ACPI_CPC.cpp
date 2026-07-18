struct _unnamed_47// Size=0x8 (Id=47)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=48)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_47 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _GEN_ADDR_EX// Size=0x18 (Id=605)
{
    unsigned char AddressSpaceID;// Offset=0x0 Size=0x1
    unsigned char BitWidth;// Offset=0x1 Size=0x1
    unsigned char BitOffset;// Offset=0x2 Size=0x1
    unsigned char AccessSize;// Offset=0x3 Size=0x1
    union _LARGE_INTEGER Address;// Offset=0x4 Size=0x8
    void * Context;// Offset=0x10 Size=0x8
};

struct ACPI_CPC// Size=0x220 (Id=685)
{
    unsigned long NumberOfEntries;// Offset=0x0 Size=0x4
    unsigned long Revision;// Offset=0x4 Size=0x4
    struct _GEN_ADDR_EX HighestPerformance;// Offset=0x8 Size=0x18
    struct _GEN_ADDR_EX NominalPerformance;// Offset=0x20 Size=0x18
    struct _GEN_ADDR_EX LowestNonlinearPerformance;// Offset=0x38 Size=0x18
    struct _GEN_ADDR_EX LowestPerformance;// Offset=0x50 Size=0x18
    struct _GEN_ADDR_EX GuaranteedPerformance;// Offset=0x68 Size=0x18
    struct _GEN_ADDR_EX DesiredPerformance;// Offset=0x80 Size=0x18
    struct _GEN_ADDR_EX MinimumPerformance;// Offset=0x98 Size=0x18
    struct _GEN_ADDR_EX MaximumPerformance;// Offset=0xb0 Size=0x18
    struct _GEN_ADDR_EX PerformanceReductionTolerance;// Offset=0xc8 Size=0x18
    struct _GEN_ADDR_EX TimeWindow;// Offset=0xe0 Size=0x18
    struct _GEN_ADDR_EX CounterWraparound;// Offset=0xf8 Size=0x18
    struct _GEN_ADDR_EX NominalCounter;// Offset=0x110 Size=0x18
    struct _GEN_ADDR_EX DeliveredCounter;// Offset=0x128 Size=0x18
    struct _GEN_ADDR_EX PerformanceLimited;// Offset=0x140 Size=0x18
    struct _GEN_ADDR_EX Enable;// Offset=0x158 Size=0x18
    struct _GEN_ADDR_EX AutonomousEnable;// Offset=0x170 Size=0x18
    struct _GEN_ADDR_EX AutonomousActivityWindow;// Offset=0x188 Size=0x18
    struct _GEN_ADDR_EX EnergyPerformancePreference;// Offset=0x1a0 Size=0x18
    struct _GEN_ADDR_EX ReferencePerformance;// Offset=0x1b8 Size=0x18
    struct _GEN_ADDR_EX LowestFrequency;// Offset=0x1d0 Size=0x18
    struct _GEN_ADDR_EX NominalFrequency;// Offset=0x1e8 Size=0x18
    struct _GEN_ADDR_EX OSPMNominalPerformance;// Offset=0x200 Size=0x18
    struct _CPC_RESOURCE_PRIORITIES * ResourcePriorities;// Offset=0x218 Size=0x8
};
