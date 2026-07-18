struct _ACPI_DEBUGGING_DEVICE_IN_USE// Size=0x8 (Id=1610)
{
    unsigned long NameSpacePathLength;// Offset=0x0 Size=0x4
    wchar_t NameSpacePath[1];// Offset=0x4 Size=0x2
};

struct _PCI_DEBUGGING_DEVICE_IN_USE// Size=0xc (Id=4249)
{
    unsigned short Segment;// Offset=0x0 Size=0x2
    unsigned long Bus;// Offset=0x4 Size=0x4
    unsigned long Slot;// Offset=0x8 Size=0x4
};

struct _DEBUGGING_DEVICE_IN_USE// Size=0x14 (Id=1864)
{
    enum KD_NAMESPACE_ENUM NameSpace;// Offset=0x0 Size=0x4
    unsigned long StructureLength;// Offset=0x4 Size=0x4
    union // Size=0x8 (Id=0)
    {
        struct _ACPI_DEBUGGING_DEVICE_IN_USE AcpiDevice;// Offset=0x8 Size=0x8
        struct _PCI_DEBUGGING_DEVICE_IN_USE PciDevice;// Offset=0x8 Size=0xc
    };
};
