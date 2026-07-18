union PCI_MSI_CAPABILITY::_unnamed_1566// Size=0x10 (Id=1566)
{
    struct <unnamed-type-Option32Bit>// Size=0xc (Id=17745)
    {
        unsigned short MessageData;// Offset=0x0 Size=0x2
        unsigned short Reserved;// Offset=0x2 Size=0x2
        unsigned long MaskBits;// Offset=0x4 Size=0x4
        unsigned long PendingBits;// Offset=0x8 Size=0x4
    };
    struct PCI_MSI_CAPABILITY::_unnamed_1567::<unnamed-type-Option32Bit> Option32Bit;// Offset=0x0 Size=0xc
    struct <unnamed-type-Option64Bit>// Size=0x10 (Id=17751)
    {
        unsigned long MessageAddressUpper;// Offset=0x0 Size=0x4
        unsigned short MessageData;// Offset=0x4 Size=0x2
        unsigned short Reserved;// Offset=0x6 Size=0x2
        unsigned long MaskBits;// Offset=0x8 Size=0x4
        unsigned long PendingBits;// Offset=0xc Size=0x4
    };
    struct PCI_MSI_CAPABILITY::_unnamed_1568::<unnamed-type-Option64Bit> Option64Bit;// Offset=0x0 Size=0x10
};
