struct PCI_MSIX_CAPABILITY::<unnamed-type-MessageControl>// Size=0x2 (Id=1446)
{
    struct // Size=0x2 (Id=0)
    {
        unsigned short TableSize:11;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0xb
        unsigned short Reserved:3;// Offset=0x0 Size=0x2 BitOffset=0xb BitSize=0x3
        unsigned short FunctionMask:1;// Offset=0x0 Size=0x2 BitOffset=0xe BitSize=0x1
        unsigned short MSIXEnable:1;// Offset=0x0 Size=0x2 BitOffset=0xf BitSize=0x1
    };
};
