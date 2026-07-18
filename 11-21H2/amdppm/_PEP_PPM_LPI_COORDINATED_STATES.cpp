union _unnamed_748// Size=0x4 (Id=748)
{
    unsigned long AsUlong;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long Enabled:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long Reserved:31;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1f
    };
};

struct _unnamed_749// Size=0x4 (Id=749)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long CoreContextLost:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long TraceContextLost:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long GICR:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long GICD:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long Reserved:28;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1c
    };
};

union _unnamed_750// Size=0x4 (Id=750)
{
    unsigned long AsUlong;// Offset=0x0 Size=0x4
    struct _unnamed_749 Arm;// Offset=0x0 Size=0x4
};

struct _unnamed_45// Size=0x8 (Id=45)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=46)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_45 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _PEP_PPM_LPI_REGISTER// Size=0x10 (Id=757)
{
    unsigned char AddressSpaceID;// Offset=0x0 Size=0x1
    unsigned char BitWidth;// Offset=0x1 Size=0x1
    unsigned char BitOffset;// Offset=0x2 Size=0x1
    unsigned char AccessSize;// Offset=0x3 Size=0x1
    union _LARGE_INTEGER Address;// Offset=0x8 Size=0x8
};

union _unnamed_751// Size=0x10 (Id=751)
{
    union // Size=0x10 (Id=0)
    {
        struct _PEP_PPM_LPI_REGISTER AsRegister;// Offset=0x0 Size=0x10
        unsigned long long AsInteger;// Offset=0x0 Size=0x8
    };
};

struct _PEP_PPM_COORDINATED_LPI_STATE// Size=0x60 (Id=752)
{
    unsigned long MinResidency;// Offset=0x0 Size=0x4
    unsigned long WakeupLatency;// Offset=0x4 Size=0x4
    union _unnamed_748 Flags;// Offset=0x8 Size=0x4
    union _unnamed_750 ArchContextFlags;// Offset=0xc Size=0x4
    unsigned long ResidencyCounterFrequency;// Offset=0x10 Size=0x4
    unsigned char IntegerEntryMethod;// Offset=0x14 Size=0x1
    union _unnamed_751 EntryMethod;// Offset=0x18 Size=0x10
    struct _PEP_PPM_LPI_REGISTER ResidencyCounter;// Offset=0x28 Size=0x10
    struct _PEP_PPM_LPI_REGISTER UsageCounter;// Offset=0x38 Size=0x10
    wchar_t * StateName;// Offset=0x48 Size=0x8
    unsigned long DependencyCount;// Offset=0x50 Size=0x4
    struct _PEP_PPM_LPI_COORDINATED_DEPENDENCY * Dependencies;// Offset=0x58 Size=0x8
};

struct _PEP_PPM_LPI_COORDINATED_STATES// Size=0x68 (Id=741)
{
    unsigned long Count;// Offset=0x0 Size=0x4
    struct _PEP_PPM_COORDINATED_LPI_STATE LpiStates[1];// Offset=0x8 Size=0x60
};
