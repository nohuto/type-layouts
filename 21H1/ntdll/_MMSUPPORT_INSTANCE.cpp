struct _LIST_ENTRY// Size=0x8 (Id=25)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x4
    struct _LIST_ENTRY * Blink;// Offset=0x4 Size=0x4
};

struct _MMSUPPORT_FLAGS// Size=0x4 (Id=552)
{
    union // Size=0x2 (Id=0)
    {
        struct // Size=0x2 (Id=0)
        {
            unsigned char WorkingSetType:3;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x3
            unsigned char Reserved0:3;// Offset=0x0 Size=0x1 BitOffset=0x3 BitSize=0x3
            unsigned char MaximumWorkingSetHard:1;// Offset=0x0 Size=0x1 BitOffset=0x6 BitSize=0x1
            unsigned char MinimumWorkingSetHard:1;// Offset=0x0 Size=0x1 BitOffset=0x7 BitSize=0x1
            unsigned char SessionMaster:1;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x1
            unsigned char TrimmerState:2;// Offset=0x1 Size=0x1 BitOffset=0x1 BitSize=0x2
            unsigned char Reserved:1;// Offset=0x1 Size=0x1 BitOffset=0x3 BitSize=0x1
            unsigned char PageStealers:4;// Offset=0x1 Size=0x1 BitOffset=0x4 BitSize=0x4
        };
        unsigned short u1;// Offset=0x0 Size=0x2
    };
    unsigned char MemoryPriority;// Offset=0x2 Size=0x1
    union // Size=0x1 (Id=0)
    {
        struct // Size=0x1 (Id=0)
        {
            unsigned char WsleDeleted:1;// Offset=0x3 Size=0x1 BitOffset=0x0 BitSize=0x1
            unsigned char SvmEnabled:1;// Offset=0x3 Size=0x1 BitOffset=0x1 BitSize=0x1
            unsigned char ForceAge:1;// Offset=0x3 Size=0x1 BitOffset=0x2 BitSize=0x1
            unsigned char ForceTrim:1;// Offset=0x3 Size=0x1 BitOffset=0x3 BitSize=0x1
            unsigned char NewMaximum:1;// Offset=0x3 Size=0x1 BitOffset=0x4 BitSize=0x1
            unsigned char CommitReleaseState:2;// Offset=0x3 Size=0x1 BitOffset=0x5 BitSize=0x2
        };
        unsigned char u2;// Offset=0x3 Size=0x1
    };
};

struct _MMSUPPORT_INSTANCE// Size=0x64 (Id=478)
{
    unsigned long NextPageColor;// Offset=0x0 Size=0x4
    unsigned long PageFaultCount;// Offset=0x4 Size=0x4
    unsigned long TrimmedPageCount;// Offset=0x8 Size=0x4
    struct _MMWSL_INSTANCE * VmWorkingSetList;// Offset=0xc Size=0x4
    struct _LIST_ENTRY WorkingSetExpansionLinks;// Offset=0x10 Size=0x8
    unsigned long AgeDistribution[8];// Offset=0x18 Size=0x20
    struct _KGATE * ExitOutswapGate;// Offset=0x38 Size=0x4
    unsigned long MinimumWorkingSetSize;// Offset=0x3c Size=0x4
    unsigned long WorkingSetLeafSize;// Offset=0x40 Size=0x4
    unsigned long WorkingSetLeafPrivateSize;// Offset=0x44 Size=0x4
    unsigned long WorkingSetSize;// Offset=0x48 Size=0x4
    unsigned long WorkingSetPrivateSize;// Offset=0x4c Size=0x4
    unsigned long MaximumWorkingSetSize;// Offset=0x50 Size=0x4
    unsigned long PeakWorkingSetSize;// Offset=0x54 Size=0x4
    unsigned long HardFaultCount;// Offset=0x58 Size=0x4
    unsigned short LastTrimStamp;// Offset=0x5c Size=0x2
    unsigned short Unused0;// Offset=0x5e Size=0x2
    struct _MMSUPPORT_FLAGS Flags;// Offset=0x60 Size=0x4
};
