struct _anonymous_31// Size=0x8 (Id=31)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=32)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _anonymous_31 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _GEN_ADDR// Size=0xc (Id=463)
{
    unsigned char AddressSpaceID;// Offset=0x0 Size=0x1
    unsigned char BitWidth;// Offset=0x1 Size=0x1
    unsigned char BitOffset;// Offset=0x2 Size=0x1
    unsigned char AccessSize;// Offset=0x3 Size=0x1
    union _LARGE_INTEGER Address;// Offset=0x4 Size=0x8
};

struct ACPI_CPC// Size=0xec (Id=571)
{
    unsigned long NumberOfEntries;// Offset=0x0 Size=0x4
    unsigned long Revision;// Offset=0x4 Size=0x4
    struct _GEN_ADDR HighestPerformance;// Offset=0x8 Size=0xc
    struct _GEN_ADDR NominalPerformance;// Offset=0x14 Size=0xc
    struct _GEN_ADDR LowestNonlinearPerformance;// Offset=0x20 Size=0xc
    struct _GEN_ADDR LowestPerformance;// Offset=0x2c Size=0xc
    struct _GEN_ADDR GuaranteedPerformance;// Offset=0x38 Size=0xc
    struct _GEN_ADDR DesiredPerformance;// Offset=0x44 Size=0xc
    struct _GEN_ADDR MinimumPerformance;// Offset=0x50 Size=0xc
    struct _GEN_ADDR MaximumPerformance;// Offset=0x5c Size=0xc
    struct _GEN_ADDR PerformanceReductionTolerance;// Offset=0x68 Size=0xc
    struct _GEN_ADDR TimeWindow;// Offset=0x74 Size=0xc
    struct _GEN_ADDR CounterWraparound;// Offset=0x80 Size=0xc
    struct _GEN_ADDR NominalCounter;// Offset=0x8c Size=0xc
    struct _GEN_ADDR DeliveredCounter;// Offset=0x98 Size=0xc
    struct _GEN_ADDR PerformanceLimited;// Offset=0xa4 Size=0xc
    struct _GEN_ADDR Enable;// Offset=0xb0 Size=0xc
    struct _GEN_ADDR AutonomousEnable;// Offset=0xbc Size=0xc
    struct _GEN_ADDR AutonomousActivityWindow;// Offset=0xc8 Size=0xc
    struct _GEN_ADDR EnergyPerformancePreference;// Offset=0xd4 Size=0xc
    struct _GEN_ADDR ReferencePerformance;// Offset=0xe0 Size=0xc
};
