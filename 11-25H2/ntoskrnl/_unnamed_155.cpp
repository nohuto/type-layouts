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
