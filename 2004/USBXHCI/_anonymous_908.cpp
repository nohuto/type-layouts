struct _PCI_MSI_MESSAGE_ADDRESS// Size=0x4 (Id=966)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long Reserved:2;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x2
        unsigned long Address:30;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1e
    };
};

union _anonymous_908// Size=0x4 (Id=908)
{
    struct _PCI_MSI_MESSAGE_ADDRESS Register;// Offset=0x0 Size=0x4
    unsigned long Raw;// Offset=0x0 Size=0x4
};
