union PCI_MSI_CAPABILITY::_anonymous_1226// Size=0x10 (Id=1226)
{
    struct <unnamed-type-Option32Bit>// Size=0xc (Id=16453)
    {
        unsigned short MessageData;// Offset=0x0 Size=0x2
        unsigned short Reserved;// Offset=0x2 Size=0x2
        unsigned long MaskBits;// Offset=0x4 Size=0x4
        unsigned long PendingBits;// Offset=0x8 Size=0x4
    };
    struct PCI_MSI_CAPABILITY::_anonymous_1227::<unnamed-type-Option32Bit> Option32Bit;// Offset=0x0 Size=0xc
    struct <unnamed-type-Option64Bit>// Size=0x10 (Id=16459)
    {
        unsigned long MessageAddressUpper;// Offset=0x0 Size=0x4
        unsigned short MessageData;// Offset=0x4 Size=0x2
        unsigned short Reserved;// Offset=0x6 Size=0x2
        unsigned long MaskBits;// Offset=0x8 Size=0x4
        unsigned long PendingBits;// Offset=0xc Size=0x4
    };
    struct PCI_MSI_CAPABILITY::_anonymous_1228::<unnamed-type-Option64Bit> Option64Bit;// Offset=0x0 Size=0x10
};
