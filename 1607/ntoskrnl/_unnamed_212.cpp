struct _SINGLE_LIST_ENTRY// Size=0x8 (Id=47)
{
    struct _SINGLE_LIST_ENTRY * Next;// Offset=0x0 Size=0x8
};

union _unnamed_212// Size=0x8 (Id=212)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long Flink:36;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x24
        unsigned long long NodeFlinkHigh:28;// Offset=0x0 Size=0x8 BitOffset=0x24 BitSize=0x1c
    };
    unsigned long long WsIndex;// Offset=0x0 Size=0x8
    struct _KEVENT * Event;// Offset=0x0 Size=0x8
    void * Next;// Offset=0x0 Size=0x8
    void * VolatileNext;// Offset=0x0 Size=0x8
    struct _KTHREAD * KernelStackOwner;// Offset=0x0 Size=0x8
    struct _SINGLE_LIST_ENTRY NextStackPfn;// Offset=0x0 Size=0x8
};
