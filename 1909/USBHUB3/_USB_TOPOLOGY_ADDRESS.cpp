struct _USB_TOPOLOGY_ADDRESS// Size=0x20 (Id=630)
{
    unsigned long PciBusNumber;// Offset=0x0 Size=0x4
    unsigned long PciDeviceNumber;// Offset=0x4 Size=0x4
    unsigned long PciFunctionNumber;// Offset=0x8 Size=0x4
    unsigned long Reserved;// Offset=0xc Size=0x4
    unsigned short RootHubPortNumber;// Offset=0x10 Size=0x2
    unsigned short HubPortNumber[5];// Offset=0x12 Size=0xa
    unsigned short Reserved2;// Offset=0x1c Size=0x2
};
