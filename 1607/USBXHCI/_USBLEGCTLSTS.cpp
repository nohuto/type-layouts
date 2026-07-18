union _USBLEGCTLSTS// Size=0x4 (Id=601)
{
    unsigned long AsUlong32;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long UsbSmiEnable:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long Reserved0:3;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x3
        unsigned long SmiOnHostSystemErrorEnable:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long Reserved1:8;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x8
        unsigned long SmiOnOsOwnershipEnable:1;// Offset=0x0 Size=0x4 BitOffset=0xd BitSize=0x1
        unsigned long SmiOnPciCommandEnable:1;// Offset=0x0 Size=0x4 BitOffset=0xe BitSize=0x1
        unsigned long SmiOnBarEnable:1;// Offset=0x0 Size=0x4 BitOffset=0xf BitSize=0x1
        unsigned long SmiOnEventInterrupt:1;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x1
        unsigned long Reserved2:3;// Offset=0x0 Size=0x4 BitOffset=0x11 BitSize=0x3
        unsigned long SmiOnHostSystemError:1;// Offset=0x0 Size=0x4 BitOffset=0x14 BitSize=0x1
        unsigned long Reserved3:8;// Offset=0x0 Size=0x4 BitOffset=0x15 BitSize=0x8
        unsigned long SmiOnOsOnwershipChange:1;// Offset=0x0 Size=0x4 BitOffset=0x1d BitSize=0x1
        unsigned long SmiOnPciCommand:1;// Offset=0x0 Size=0x4 BitOffset=0x1e BitSize=0x1
        unsigned long SmiOnBar:1;// Offset=0x0 Size=0x4 BitOffset=0x1f BitSize=0x1
    };
};
