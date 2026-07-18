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
