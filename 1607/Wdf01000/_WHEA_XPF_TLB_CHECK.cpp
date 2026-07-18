union _WHEA_XPF_TLB_CHECK// Size=0x8 (Id=1806)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long TransactionTypeValid:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long OperationValid:1;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x1
        unsigned long long LevelValid:1;// Offset=0x0 Size=0x8 BitOffset=0x2 BitSize=0x1
        unsigned long long ProcessorContextCorruptValid:1;// Offset=0x0 Size=0x8 BitOffset=0x3 BitSize=0x1
        unsigned long long UncorrectedValid:1;// Offset=0x0 Size=0x8 BitOffset=0x4 BitSize=0x1
        unsigned long long PreciseIPValid:1;// Offset=0x0 Size=0x8 BitOffset=0x5 BitSize=0x1
        unsigned long long RestartableIPValid:1;// Offset=0x0 Size=0x8 BitOffset=0x6 BitSize=0x1
        unsigned long long OverflowValid:1;// Offset=0x0 Size=0x8 BitOffset=0x7 BitSize=0x1
        unsigned long long ReservedValid:8;// Offset=0x0 Size=0x8 BitOffset=0x8 BitSize=0x8
        unsigned long long TransactionType:2;// Offset=0x0 Size=0x8 BitOffset=0x10 BitSize=0x2
        unsigned long long Operation:4;// Offset=0x0 Size=0x8 BitOffset=0x12 BitSize=0x4
        unsigned long long Level:3;// Offset=0x0 Size=0x8 BitOffset=0x16 BitSize=0x3
        unsigned long long ProcessorContextCorrupt:1;// Offset=0x0 Size=0x8 BitOffset=0x19 BitSize=0x1
        unsigned long long Uncorrected:1;// Offset=0x0 Size=0x8 BitOffset=0x1a BitSize=0x1
        unsigned long long PreciseIP:1;// Offset=0x0 Size=0x8 BitOffset=0x1b BitSize=0x1
        unsigned long long RestartableIP:1;// Offset=0x0 Size=0x8 BitOffset=0x1c BitSize=0x1
        unsigned long long Overflow:1;// Offset=0x0 Size=0x8 BitOffset=0x1d BitSize=0x1
        unsigned long long Reserved:34;// Offset=0x0 Size=0x8 BitOffset=0x1e BitSize=0x22
    };
    unsigned long long XpfTLBCheck;// Offset=0x0 Size=0x8
};
