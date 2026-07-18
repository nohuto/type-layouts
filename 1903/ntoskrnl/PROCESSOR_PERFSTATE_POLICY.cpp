union _anonymous_1501// Size=0x1 (Id=1501)
{
    unsigned char AsUCHAR;// Offset=0x0 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char NoDomainAccounting:1;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char IncreasePolicy:2;// Offset=0x0 Size=0x1 BitOffset=0x1 BitSize=0x2
        unsigned char DecreasePolicy:2;// Offset=0x0 Size=0x1 BitOffset=0x3 BitSize=0x2
        unsigned char Reserved:3;// Offset=0x0 Size=0x1 BitOffset=0x5 BitSize=0x3
    };
};

struct PROCESSOR_PERFSTATE_POLICY// Size=0x1c (Id=1502)
{
    unsigned long Revision;// Offset=0x0 Size=0x4
    unsigned char MaxThrottle;// Offset=0x4 Size=0x1
    unsigned char MinThrottle;// Offset=0x5 Size=0x1
    unsigned char BusyAdjThreshold;// Offset=0x6 Size=0x1
    union // Size=0x1 (Id=0)
    {
        unsigned char Spare;// Offset=0x7 Size=0x1
        union _anonymous_1501 Flags;// Offset=0x7 Size=0x1
    };
    unsigned long TimeCheck;// Offset=0x8 Size=0x4
    unsigned long IncreaseTime;// Offset=0xc Size=0x4
    unsigned long DecreaseTime;// Offset=0x10 Size=0x4
    unsigned long IncreasePercent;// Offset=0x14 Size=0x4
    unsigned long DecreasePercent;// Offset=0x18 Size=0x4
};
