union _USB_EXTENDED_PORT_ATTRIBUTES// Size=0x4 (Id=368)
{
    unsigned long ul;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long NoConnector:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long SharedUsb2:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long MiniA_Connector:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long Oem_Connector:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long DeviceNotRemovable:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long AcpiUpcValid:1;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1
        unsigned long AcpiPldValid:1;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1
        unsigned long Reserved:25;// Offset=0x0 Size=0x4 BitOffset=0x7 BitSize=0x19
    };
};
