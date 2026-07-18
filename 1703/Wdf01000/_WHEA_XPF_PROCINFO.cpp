struct _GUID// Size=0x10 (Id=117)
{
    unsigned long Data1;// Offset=0x0 Size=0x4
    unsigned short Data2;// Offset=0x4 Size=0x2
    unsigned short Data3;// Offset=0x6 Size=0x2
    unsigned char Data4[8];// Offset=0x8 Size=0x8
};

union _WHEA_XPF_PROCINFO_VALIDBITS// Size=0x8 (Id=3911)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long CheckInfo:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long TargetId:1;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x1
        unsigned long long RequesterId:1;// Offset=0x0 Size=0x8 BitOffset=0x2 BitSize=0x1
        unsigned long long ResponderId:1;// Offset=0x0 Size=0x8 BitOffset=0x3 BitSize=0x1
        unsigned long long InstructionPointer:1;// Offset=0x0 Size=0x8 BitOffset=0x4 BitSize=0x1
        unsigned long long Reserved:59;// Offset=0x0 Size=0x8 BitOffset=0x5 BitSize=0x3b
    };
    unsigned long long ValidBits;// Offset=0x0 Size=0x8
};

union _WHEA_XPF_CACHE_CHECK// Size=0x8 (Id=3005)
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
    unsigned long long XpfCacheCheck;// Offset=0x0 Size=0x8
};

union _WHEA_XPF_TLB_CHECK// Size=0x8 (Id=1832)
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

union _WHEA_XPF_BUS_CHECK// Size=0x8 (Id=3783)
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
        unsigned long long ParticipationValid:1;// Offset=0x0 Size=0x8 BitOffset=0x8 BitSize=0x1
        unsigned long long TimeoutValid:1;// Offset=0x0 Size=0x8 BitOffset=0x9 BitSize=0x1
        unsigned long long AddressSpaceValid:1;// Offset=0x0 Size=0x8 BitOffset=0xa BitSize=0x1
        unsigned long long ReservedValid:5;// Offset=0x0 Size=0x8 BitOffset=0xb BitSize=0x5
        unsigned long long TransactionType:2;// Offset=0x0 Size=0x8 BitOffset=0x10 BitSize=0x2
        unsigned long long Operation:4;// Offset=0x0 Size=0x8 BitOffset=0x12 BitSize=0x4
        unsigned long long Level:3;// Offset=0x0 Size=0x8 BitOffset=0x16 BitSize=0x3
        unsigned long long ProcessorContextCorrupt:1;// Offset=0x0 Size=0x8 BitOffset=0x19 BitSize=0x1
        unsigned long long Uncorrected:1;// Offset=0x0 Size=0x8 BitOffset=0x1a BitSize=0x1
        unsigned long long PreciseIP:1;// Offset=0x0 Size=0x8 BitOffset=0x1b BitSize=0x1
        unsigned long long RestartableIP:1;// Offset=0x0 Size=0x8 BitOffset=0x1c BitSize=0x1
        unsigned long long Overflow:1;// Offset=0x0 Size=0x8 BitOffset=0x1d BitSize=0x1
        unsigned long long Participation:2;// Offset=0x0 Size=0x8 BitOffset=0x1e BitSize=0x2
        unsigned long long Timeout:1;// Offset=0x0 Size=0x8 BitOffset=0x20 BitSize=0x1
        unsigned long long AddressSpace:2;// Offset=0x0 Size=0x8 BitOffset=0x21 BitSize=0x2
        unsigned long long Reserved:29;// Offset=0x0 Size=0x8 BitOffset=0x23 BitSize=0x1d
    };
    unsigned long long XpfBusCheck;// Offset=0x0 Size=0x8
};

union _WHEA_XPF_MS_CHECK// Size=0x8 (Id=2217)
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

struct _WHEA_XPF_PROCINFO// Size=0x40 (Id=4413)
{
    union // Size=0x18 (Id=0)
    {
        struct _GUID CheckInfoId;// Offset=0x0 Size=0x10
        union _WHEA_XPF_PROCINFO_VALIDBITS ValidBits;// Offset=0x10 Size=0x8
        union <unnamed-type-CheckInfo>// Size=0x8 (Id=26339)
        {
            union _WHEA_XPF_CACHE_CHECK CacheCheck;// Offset=0x0 Size=0x8
            union _WHEA_XPF_TLB_CHECK TlbCheck;// Offset=0x0 Size=0x8
            union _WHEA_XPF_BUS_CHECK BusCheck;// Offset=0x0 Size=0x8
            union _WHEA_XPF_MS_CHECK MsCheck;// Offset=0x0 Size=0x8
            unsigned long long AsULONGLONG;// Offset=0x0 Size=0x8
        };
        union _WHEA_XPF_PROCINFO::<unnamed-type-CheckInfo> CheckInfo;// Offset=0x18 Size=0x8
    };
    unsigned long long TargetId;// Offset=0x20 Size=0x8
    unsigned long long RequesterId;// Offset=0x28 Size=0x8
    unsigned long long ResponderId;// Offset=0x30 Size=0x8
    unsigned long long InstructionPointer;// Offset=0x38 Size=0x8
};
