struct _WMI_SPINLOCK// Size=0x38 (Id=2813)
{
    void * SpinLockAddress;// Offset=0x0 Size=0x8
    void * CallerAddress;// Offset=0x8 Size=0x8
    unsigned long long AcquireTime;// Offset=0x10 Size=0x8
    unsigned long long ReleaseTime;// Offset=0x18 Size=0x8
    unsigned long WaitTimeInCycles;// Offset=0x20 Size=0x4
    unsigned long SpinCount;// Offset=0x24 Size=0x4
    unsigned long ThreadId;// Offset=0x28 Size=0x4
    unsigned long InterruptCount;// Offset=0x2c Size=0x4
    unsigned char Irql;// Offset=0x30 Size=0x1
    unsigned char AcquireDepth;// Offset=0x31 Size=0x1
    union // Size=0x1 (Id=0)
    {
        struct // Size=0x1 (Id=0)
        {
            unsigned char AcquireMode:6;// Offset=0x32 Size=0x1 BitOffset=0x0 BitSize=0x6
            unsigned char ExecuteDpc:1;// Offset=0x32 Size=0x1 BitOffset=0x6 BitSize=0x1
            unsigned char ExecuteIsr:1;// Offset=0x32 Size=0x1 BitOffset=0x7 BitSize=0x1
        };
        unsigned char Flags;// Offset=0x32 Size=0x1
    };
    unsigned char Reserved[5];// Offset=0x33 Size=0x5
};
