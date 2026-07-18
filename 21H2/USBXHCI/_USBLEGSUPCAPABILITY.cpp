union _HC_BIOS_OWNED_SEMAPHORE// Size=0x1 (Id=1004)
{
    unsigned char AsUchar8;// Offset=0x0 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char HcBiosOwnedSemaphore:1;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char Reserved:7;// Offset=0x0 Size=0x1 BitOffset=0x1 BitSize=0x7
    };
};

union _HC_OS_OWNED_SEMAPHORE// Size=0x1 (Id=891)
{
    unsigned char AsUchar8;// Offset=0x0 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char HcOsOwnedSemaphore:1;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char Reserved:7;// Offset=0x0 Size=0x1 BitOffset=0x1 BitSize=0x7
    };
};

union _USBLEGSUP// Size=0x4 (Id=856)
{
    unsigned long AsUlong32;// Offset=0x0 Size=0x4
    unsigned char CapabilityID;// Offset=0x0 Size=0x1
    unsigned char NextCapabilityPointer;// Offset=0x1 Size=0x1
    union _HC_BIOS_OWNED_SEMAPHORE HcBiosOwnedSemaphore;// Offset=0x2 Size=0x1
    union _HC_OS_OWNED_SEMAPHORE HcOsOwnedSemaphore;// Offset=0x3 Size=0x1
};

union _USBLEGCTLSTS// Size=0x4 (Id=743)
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

union _USBLEGSUPCAPABILITY// Size=0x8 (Id=502)
{
    unsigned long AsUlong32[2];// Offset=0x0 Size=0x8
    union _USBLEGSUP UsbLegacySupportCapability;// Offset=0x0 Size=0x4
    union _USBLEGCTLSTS UsbLegacySupportControlStatus;// Offset=0x4 Size=0x4
};
