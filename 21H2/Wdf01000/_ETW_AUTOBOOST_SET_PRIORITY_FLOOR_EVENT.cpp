struct _ETW_AUTOBOOST_SET_PRIORITY_FLOOR_EVENT// Size=0x10 (Id=2232)
{
    void * Lock;// Offset=0x0 Size=0x8
    unsigned long ThreadId;// Offset=0x8 Size=0x4
    char NewCpuPriorityFloor;// Offset=0xc Size=0x1
    char OldCpuPriority;// Offset=0xd Size=0x1
    union // Size=0x1 (Id=0)
    {
        struct // Size=0x1 (Id=0)
        {
            char NewIoPriorityFloor:3;// Offset=0xe Size=0x1 BitOffset=0x0 BitSize=0x3
            char OldIoPriority:3;// Offset=0xe Size=0x1 BitOffset=0x3 BitSize=0x3
            char NewIoQoSPriorityFloor:1;// Offset=0xe Size=0x1 BitOffset=0x6 BitSize=0x1
            char OldIoQoSPriority:1;// Offset=0xe Size=0x1 BitOffset=0x7 BitSize=0x1
        };
        char IoPriorities;// Offset=0xe Size=0x1
    };
    union // Size=0x1 (Id=0)
    {
        struct // Size=0x1 (Id=0)
        {
            unsigned char ExecutingDpc:1;// Offset=0xf Size=0x1 BitOffset=0x0 BitSize=0x1
            unsigned char WakeupBoost:1;// Offset=0xf Size=0x1 BitOffset=0x1 BitSize=0x1
            unsigned char BoostedOutstandingIrps:2;// Offset=0xf Size=0x1 BitOffset=0x2 BitSize=0x2
            unsigned char Reserved:4;// Offset=0xf Size=0x1 BitOffset=0x4 BitSize=0x4
        };
        unsigned char Flags;// Offset=0xf Size=0x1
    };
};
