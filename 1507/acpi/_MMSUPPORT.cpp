struct _LIST_ENTRY// Size=0x10 (Id=20)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _MMSUPPORT_FLAGS// Size=0x4 (Id=277)
{
    struct // Size=0x2 (Id=0)
    {
        unsigned char WorkingSetType:3;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x3
        unsigned char ForceCredits:3;// Offset=0x0 Size=0x1 BitOffset=0x3 BitSize=0x3
        unsigned char MaximumWorkingSetHard:1;// Offset=0x0 Size=0x1 BitOffset=0x6 BitSize=0x1
        unsigned char MinimumWorkingSetHard:1;// Offset=0x0 Size=0x1 BitOffset=0x7 BitSize=0x1
        unsigned char SessionMaster:1;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char TrimmerState:2;// Offset=0x1 Size=0x1 BitOffset=0x1 BitSize=0x2
        unsigned char Reserved:1;// Offset=0x1 Size=0x1 BitOffset=0x3 BitSize=0x1
        unsigned char PageStealers:4;// Offset=0x1 Size=0x1 BitOffset=0x4 BitSize=0x4
    };
    unsigned char MemoryPriority;// Offset=0x2 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char WsleDeleted:1;// Offset=0x3 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char VmExiting:1;// Offset=0x3 Size=0x1 BitOffset=0x1 BitSize=0x1
        unsigned char ExpansionFailed:1;// Offset=0x3 Size=0x1 BitOffset=0x2 BitSize=0x1
        unsigned char SvmEnabled:1;// Offset=0x3 Size=0x1 BitOffset=0x3 BitSize=0x1
        unsigned char ForceAge:1;// Offset=0x3 Size=0x1 BitOffset=0x4 BitSize=0x1
        unsigned char NewMaximum:1;// Offset=0x3 Size=0x1 BitOffset=0x5 BitSize=0x1
        unsigned char CommitReleaseState:2;// Offset=0x3 Size=0x1 BitOffset=0x6 BitSize=0x2
    };
};

struct _MMSUPPORT// Size=0x100 (Id=209)
{
    long WorkingSetLock;// Offset=0x0 Size=0x4
    struct _KGATE * ExitOutswapGate;// Offset=0x8 Size=0x8
    void * AccessLog;// Offset=0x10 Size=0x8
    struct _LIST_ENTRY WorkingSetExpansionLinks;// Offset=0x18 Size=0x10
    unsigned long long AgeDistribution[7];// Offset=0x28 Size=0x38
    unsigned long long MinimumWorkingSetSize;// Offset=0x60 Size=0x8
    unsigned long long WorkingSetLeafSize;// Offset=0x68 Size=0x8
    unsigned long long WorkingSetLeafPrivateSize;// Offset=0x70 Size=0x8
    unsigned long long WorkingSetSize;// Offset=0x78 Size=0x8
    unsigned long long WorkingSetPrivateSize;// Offset=0x80 Size=0x8
    unsigned long long MaximumWorkingSetSize;// Offset=0x88 Size=0x8
    unsigned long long ChargedWslePages;// Offset=0x90 Size=0x8
    unsigned long long ActualWslePages;// Offset=0x98 Size=0x8
    unsigned long long WorkingSetSizeOverhead;// Offset=0xa0 Size=0x8
    unsigned long long PeakWorkingSetSize;// Offset=0xa8 Size=0x8
    unsigned long HardFaultCount;// Offset=0xb0 Size=0x4
    unsigned short PartitionId;// Offset=0xb4 Size=0x2
    unsigned short Pad0;// Offset=0xb6 Size=0x2
    struct _MMWSL * VmWorkingSetList;// Offset=0xb8 Size=0x8
    unsigned short NextPageColor;// Offset=0xc0 Size=0x2
    unsigned short LastTrimStamp;// Offset=0xc2 Size=0x2
    unsigned long PageFaultCount;// Offset=0xc4 Size=0x4
    unsigned long long TrimmedPageCount;// Offset=0xc8 Size=0x8
    unsigned long long ForceTrimPages;// Offset=0xd0 Size=0x8
    struct _MMSUPPORT_FLAGS Flags;// Offset=0xd8 Size=0x4
    unsigned long long ReleasedCommitDebt;// Offset=0xe0 Size=0x8
    void * WsSwapSupport;// Offset=0xe8 Size=0x8
    void * CommitReAcquireFailSupport;// Offset=0xf0 Size=0x8
    void * ShadowMapping;// Offset=0xf8 Size=0x8
};
