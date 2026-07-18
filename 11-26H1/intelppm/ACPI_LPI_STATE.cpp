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

struct _GEN_ADDR// Size=0xc (Id=511)
{
    unsigned char AddressSpaceID;// Offset=0x0 Size=0x1
    unsigned char BitWidth;// Offset=0x1 Size=0x1
    unsigned char BitOffset;// Offset=0x2 Size=0x1
    unsigned char AccessSize;// Offset=0x3 Size=0x1
    union _LARGE_INTEGER Address;// Offset=0x4 Size=0x8
};

struct _UNICODE_STRING// Size=0x10 (Id=19)
{
    unsigned short Length;// Offset=0x0 Size=0x2
    unsigned short MaximumLength;// Offset=0x2 Size=0x2
    wchar_t * Buffer;// Offset=0x8 Size=0x8
};

struct ACPI_LPI_STATE// Size=0x50 (Id=683)
{
    unsigned long MinimumResidency;// Offset=0x0 Size=0x4
    unsigned long WakeupLatency;// Offset=0x4 Size=0x4
    unsigned long Flags;// Offset=0x8 Size=0x4
    union ACPI_LPI_ARCH_FLAGS ArchitectureFlags;// Offset=0xc Size=0x4
    unsigned long ResidencyCounterFrequency;// Offset=0x10 Size=0x4
    unsigned long EnabledParentState;// Offset=0x14 Size=0x4
    struct _GEN_ADDR EntryMethod;// Offset=0x18 Size=0xc
    struct _GEN_ADDR ResidencyCounter;// Offset=0x24 Size=0xc
    struct _GEN_ADDR UsageCounter;// Offset=0x30 Size=0xc
    struct _UNICODE_STRING StateName;// Offset=0x40 Size=0x10
};
