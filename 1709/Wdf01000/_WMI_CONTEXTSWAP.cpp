struct _WMI_CONTEXTSWAP// Size=0x18 (Id=2970)
{
    unsigned long NewThreadId;// Offset=0x0 Size=0x4
    unsigned long OldThreadId;// Offset=0x4 Size=0x4
    char NewThreadPriority;// Offset=0x8 Size=0x1
    char OldThreadPriority;// Offset=0x9 Size=0x1
    union // Size=0x1 (Id=0)
    {
        unsigned char PreviousCState;// Offset=0xa Size=0x1
        unsigned char OldThreadRank;// Offset=0xa Size=0x1
    };
    union // Size=0x1 (Id=0)
    {
        char NewThreadPriorityDecrement;// Offset=0xb Size=0x1
        char SpareByte;// Offset=0xb Size=0x1
    };
    unsigned char OldThreadWaitReason;// Offset=0xc Size=0x1
    union // Size=0x1 (Id=0)
    {
        struct // Size=0x1 (Id=0)
        {
            unsigned char OldThreadWaitMode:1;// Offset=0xd Size=0x1 BitOffset=0x0 BitSize=0x1
            unsigned char OldThreadBamQosLevel:3;// Offset=0xd Size=0x1 BitOffset=0x1 BitSize=0x3
            unsigned char NewThreadBamQosLevel:3;// Offset=0xd Size=0x1 BitOffset=0x4 BitSize=0x3
            unsigned char Reserved:1;// Offset=0xd Size=0x1 BitOffset=0x7 BitSize=0x1
        };
        unsigned char Flags;// Offset=0xd Size=0x1
    };
    unsigned char OldThreadState;// Offset=0xe Size=0x1
    unsigned char OldThreadIdealProcessor;// Offset=0xf Size=0x1
    unsigned long NewThreadWaitTime;// Offset=0x10 Size=0x4
    long OldThreadRemainingQuantum;// Offset=0x14 Size=0x4
};
