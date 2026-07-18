struct _PCI_MSI_MESSAGE_ADDRESS// Size=0x4 (Id=825)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long Reserved:2;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x2
        unsigned long Address:30;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1e
    };
};

union _unnamed_778// Size=0x4 (Id=778)
{
    struct _PCI_MSI_MESSAGE_ADDRESS Register;// Offset=0x0 Size=0x4
    unsigned long Raw;// Offset=0x0 Size=0x4
};
