union _WHEA_XPF_MS_CHECK// Size=0x8 (Id=2014)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long ErrorTypeValid:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long ProcessorContextCorruptValid:1;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x1
        unsigned long long UncorrectedValid:1;// Offset=0x0 Size=0x8 BitOffset=0x2 BitSize=0x1
        unsigned long long PreciseIPValid:1;// Offset=0x0 Size=0x8 BitOffset=0x3 BitSize=0x1
        unsigned long long RestartableIPValid:1;// Offset=0x0 Size=0x8 BitOffset=0x4 BitSize=0x1
        unsigned long long OverflowValid:1;// Offset=0x0 Size=0x8 BitOffset=0x5 BitSize=0x1
        unsigned long long ReservedValue:10;// Offset=0x0 Size=0x8 BitOffset=0x6 BitSize=0xa
        unsigned long long ErrorType:3;// Offset=0x0 Size=0x8 BitOffset=0x10 BitSize=0x3
        unsigned long long ProcessorContextCorrupt:1;// Offset=0x0 Size=0x8 BitOffset=0x13 BitSize=0x1
        unsigned long long Uncorrected:1;// Offset=0x0 Size=0x8 BitOffset=0x14 BitSize=0x1
        unsigned long long PreciseIP:1;// Offset=0x0 Size=0x8 BitOffset=0x15 BitSize=0x1
        unsigned long long RestartableIP:1;// Offset=0x0 Size=0x8 BitOffset=0x16 BitSize=0x1
        unsigned long long Overflow:1;// Offset=0x0 Size=0x8 BitOffset=0x17 BitSize=0x1
        unsigned long long Reserved:40;// Offset=0x0 Size=0x8 BitOffset=0x18 BitSize=0x28
    };
    unsigned long long XpfMsCheck;// Offset=0x0 Size=0x8
};
