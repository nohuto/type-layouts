union _unnamed_768// Size=0x4 (Id=768)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long HardwareCoordinated:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long UseBmStatus:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long Reserved:29;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1d
    };
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};

struct MWAIT_CONTEXT// Size=0x18 (Id=769)
{
    union // Size=0x8 (Id=0)
    {
        struct // Size=0x4 (Id=0)
        {
            unsigned long SubCState:4;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x4
            unsigned long TargetCState:4;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x4
        };
        unsigned long Hints;// Offset=0x0 Size=0x4
        struct // Size=0x4 (Id=0)
        {
            unsigned long EnableBreakEvent:1;// Offset=0x4 Size=0x4 BitOffset=0x0 BitSize=0x1
        };
        unsigned long Extensions;// Offset=0x4 Size=0x4
        unsigned long long HintsExtensions;// Offset=0x0 Size=0x8
    };
    unsigned long long MonitorAddress;// Offset=0x8 Size=0x8
    union _unnamed_768 Flags;// Offset=0x10 Size=0x4
};
