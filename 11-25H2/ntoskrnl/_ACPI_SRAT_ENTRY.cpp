struct _unnamed_144// Size=0x4 (Id=144)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long Enabled:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long Reserved:31;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1f
    };
};

struct _unnamed_145// Size=0xe (Id=145)
{
    unsigned char ProximityDomainLow;// Offset=0x0 Size=0x1
    unsigned char ApicId;// Offset=0x1 Size=0x1
    struct _unnamed_144 Flags;// Offset=0x2 Size=0x4
    unsigned char SApicEid;// Offset=0x6 Size=0x1
    unsigned char ProximityDomainHigh[3];// Offset=0x7 Size=0x3
    unsigned long ClockDomain;// Offset=0xa Size=0x4
};

struct _unnamed_9// Size=0x8 (Id=9)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=587)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_9 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _unnamed_146// Size=0x4 (Id=146)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long Enabled:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long HotPlug:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long NonVolatile:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long SpecificPurpose:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long Reserved:28;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1c
    };
};

struct _unnamed_147// Size=0x26 (Id=147)
{
    unsigned long ProximityDomain;// Offset=0x0 Size=0x4
    unsigned char Reserved[2];// Offset=0x4 Size=0x2
    union _LARGE_INTEGER Base;// Offset=0x6 Size=0x8
    unsigned long long Length;// Offset=0xe Size=0x8
    unsigned long Reserved2;// Offset=0x16 Size=0x4
    struct _unnamed_146 Flags;// Offset=0x1a Size=0x4
    unsigned char Reserved3[8];// Offset=0x1e Size=0x8
};

struct _unnamed_148// Size=0x16 (Id=148)
{
    unsigned char Reserved[2];// Offset=0x0 Size=0x2
    unsigned long ProximityDomain;// Offset=0x2 Size=0x4
    unsigned long ApicId;// Offset=0x6 Size=0x4
    struct _unnamed_144 Flags;// Offset=0xa Size=0x4
    unsigned long ClockDomain;// Offset=0xe Size=0x4
    unsigned long Reserved2;// Offset=0x12 Size=0x4
};

struct _unnamed_149// Size=0x10 (Id=149)
{
    unsigned long ProximityDomain;// Offset=0x0 Size=0x4
    unsigned long ProcessorUid;// Offset=0x4 Size=0x4
    struct _unnamed_144 Flags;// Offset=0x8 Size=0x4
    unsigned long ClockDomain;// Offset=0xc Size=0x4
};

struct _unnamed_150// Size=0xa (Id=150)
{
    unsigned long ProximityDomain;// Offset=0x0 Size=0x4
    unsigned char Reserved[2];// Offset=0x4 Size=0x2
    unsigned long ITSID;// Offset=0x6 Size=0x4
};

struct _unnamed_151// Size=0x10 (Id=151)
{
    unsigned char ACPI_HID[8];// Offset=0x0 Size=0x8
    unsigned long ACPI_UID;// Offset=0x8 Size=0x4
    unsigned long Reserved;// Offset=0xc Size=0x4
};

struct _unnamed_152// Size=0x10 (Id=152)
{
    unsigned short PCISegment;// Offset=0x0 Size=0x2
    unsigned short PCIBDFNumber;// Offset=0x2 Size=0x2
    unsigned char Reserved[12];// Offset=0x4 Size=0xc
};

union _unnamed_153// Size=0x10 (Id=153)
{
    struct _unnamed_151 ACPI;// Offset=0x0 Size=0x10
    struct _unnamed_152 PCI;// Offset=0x0 Size=0x10
};

struct _unnamed_154// Size=0x4 (Id=154)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long Enabled:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long ArchitecturalTransactions:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long Reserved:30;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1e
    };
};

struct _unnamed_155// Size=0x1e (Id=155)
{
    unsigned char Reserved;// Offset=0x0 Size=0x1
    unsigned char DeviceHandleType;// Offset=0x1 Size=0x1
    unsigned long ProximityDomain;// Offset=0x2 Size=0x4
    union _unnamed_153 DeviceHandle;// Offset=0x6 Size=0x10
    struct _unnamed_154 Flags;// Offset=0x16 Size=0x4
    unsigned long Reserved2;// Offset=0x1a Size=0x4
};

struct _ACPI_SRAT_ENTRY// Size=0x28 (Id=156)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Length;// Offset=0x1 Size=0x1
    union // Size=0x28 (Id=0)
    {
        struct _unnamed_145 ApicAffinity;// Offset=0x2 Size=0xe
        struct _unnamed_147 MemoryAffinity;// Offset=0x2 Size=0x26
        struct _unnamed_148 X2ApicAffinity;// Offset=0x2 Size=0x16
        struct _unnamed_149 GiccAffinity;// Offset=0x2 Size=0x10
        struct _unnamed_150 GicItsAffinity;// Offset=0x2 Size=0xa
        struct _unnamed_155 GenericInitiatorAffinity;// Offset=0x2 Size=0x1e
        struct _unnamed_155 GenericPortAffinity;// Offset=0x2 Size=0x1e
    };
};
