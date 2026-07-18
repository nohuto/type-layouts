union _ACPI_UPC_USB_C_PORT_CAPABILITIES// Size=0x4 (Id=810)
{
    unsigned long AsUlong;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long RetimerCount:2;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x2
        unsigned long PcieTunnelingSupported:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long DpAltModeSupported:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long Usb4Supported:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long Tbt3AltModeSupported:1;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1
        unsigned long Reserved:26;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1a
    };
};

struct _ACPI_UPC_PACKAGE// Size=0xc (Id=707)
{
    unsigned char PortIsConnectable;// Offset=0x0 Size=0x1
    unsigned char PortConnectorType;// Offset=0x1 Size=0x1
    union _ACPI_UPC_USB_C_PORT_CAPABILITIES UsbCPortCapabilities;// Offset=0x4 Size=0x4
    unsigned long Reserved1;// Offset=0x8 Size=0x4
};
