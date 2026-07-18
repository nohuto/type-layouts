union _HC_BIOS_OWNED_SEMAPHORE// Size=0x1 (Id=1029)
{
    unsigned char AsUchar8;// Offset=0x0 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char HcBiosOwnedSemaphore:1;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char Reserved:7;// Offset=0x0 Size=0x1 BitOffset=0x1 BitSize=0x7
    };
};

union _HC_OS_OWNED_SEMAPHORE// Size=0x1 (Id=912)
{
    unsigned char AsUchar8;// Offset=0x0 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char HcOsOwnedSemaphore:1;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char Reserved:7;// Offset=0x0 Size=0x1 BitOffset=0x1 BitSize=0x7
    };
};

union _USBLEGSUP// Size=0x4 (Id=882)
{
    unsigned long AsUlong32;// Offset=0x0 Size=0x4
    unsigned char CapabilityID;// Offset=0x0 Size=0x1
    unsigned char NextCapabilityPointer;// Offset=0x1 Size=0x1
    union _HC_BIOS_OWNED_SEMAPHORE HcBiosOwnedSemaphore;// Offset=0x2 Size=0x1
    union _HC_OS_OWNED_SEMAPHORE HcOsOwnedSemaphore;// Offset=0x3 Size=0x1
};
