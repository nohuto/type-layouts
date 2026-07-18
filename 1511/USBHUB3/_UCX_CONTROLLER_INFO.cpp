struct _UCX_CONTROLLER_PCI_INFORMATION// Size=0x18 (Id=436)
{
    unsigned long VendorId;// Offset=0x0 Size=0x4
    unsigned long DeviceId;// Offset=0x4 Size=0x4
    unsigned short RevisionId;// Offset=0x8 Size=0x2
    unsigned long BusNumber;// Offset=0xc Size=0x4
    unsigned long DeviceNumber;// Offset=0x10 Size=0x4
    unsigned long FunctionNumber;// Offset=0x14 Size=0x4
};

struct _UCX_CONTROLLER_ACPI_INFORMATION// Size=0xf (Id=391)
{
    char VendorId[5];// Offset=0x0 Size=0x5
    char DeviceId[5];// Offset=0x5 Size=0x5
    char RevisionId[5];// Offset=0xa Size=0x5
};

struct _UCX_CONTROLLER_INFO// Size=0x1c (Id=605)
{
    enum UCX_CONTROLLER_PARENT_BUS_TYPE Type;// Offset=0x0 Size=0x4
    union // Size=0x18 (Id=0)
    {
        struct _UCX_CONTROLLER_PCI_INFORMATION Pci;// Offset=0x4 Size=0x18
        struct _UCX_CONTROLLER_ACPI_INFORMATION Acpi;// Offset=0x4 Size=0xf
    };
};
