struct _unnamed_9// Size=0x8 (Id=9)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=508)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_9 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _SINGLE_LIST_ENTRY// Size=0x8 (Id=937)
{
    struct _SINGLE_LIST_ENTRY * Next;// Offset=0x0 Size=0x8
};

struct _KDPC// Size=0x40 (Id=83)
{
    union // Size=0x4 (Id=0)
    {
        unsigned long TargetInfoAsUlong;// Offset=0x0 Size=0x4
        unsigned char Type;// Offset=0x0 Size=0x1
        unsigned char Importance;// Offset=0x1 Size=0x1
        unsigned short Number;// Offset=0x2 Size=0x2
    };
    struct _SINGLE_LIST_ENTRY DpcListEntry;// Offset=0x8 Size=0x8
    unsigned long long ProcessorHistory;// Offset=0x10 Size=0x8
    void  ( * DeferredRoutine)(struct _KDPC * ,void * ,void * ,void * );// Offset=0x18 Size=0x8
    void * DeferredContext;// Offset=0x20 Size=0x8
    void * SystemArgument1;// Offset=0x28 Size=0x8
    void * SystemArgument2;// Offset=0x30 Size=0x8
    void * DpcData;// Offset=0x38 Size=0x8
};

struct _unnamed_506// Size=0x10 (Id=506)
{
    struct // Size=0x10 (Id=0)
    {
        unsigned long long Depth:16;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x10
        unsigned long long Sequence:48;// Offset=0x0 Size=0x8 BitOffset=0x10 BitSize=0x30
        unsigned long long Reserved:4;// Offset=0x8 Size=0x8 BitOffset=0x0 BitSize=0x4
        unsigned long long NextEntry:60;// Offset=0x8 Size=0x8 BitOffset=0x4 BitSize=0x3c
    };
};

union _SLIST_HEADER// Size=0x10 (Id=507)
{
    unsigned long long Alignment;// Offset=0x0 Size=0x8
    unsigned long long Region;// Offset=0x8 Size=0x8
    struct _unnamed_506 HeaderX64;// Offset=0x0 Size=0x10
};

struct _ETW_STACK_TRACE_BLOCK// Size=0xa0 (Id=1685)
{
    union _LARGE_INTEGER RelatedTimestamp;// Offset=0x0 Size=0x8
    struct _ETHREAD * Thread;// Offset=0x8 Size=0x8
    struct _KDPC StackWalkDpc;// Offset=0x10 Size=0x40
    unsigned long long ApcSpinLock;// Offset=0x50 Size=0x8
    union _SLIST_HEADER ApcFreeListHead;// Offset=0x60 Size=0x10
    union _SLIST_HEADER ApcGlobalListHead;// Offset=0x70 Size=0x10
    long ApcCount;// Offset=0x80 Size=0x4
    unsigned long MinimumApcCount;// Offset=0x84 Size=0x4
    unsigned long MaximumApcCount;// Offset=0x88 Size=0x4
    long Flags;// Offset=0x8c Size=0x4
    long OutstandingApcCount;// Offset=0x90 Size=0x4
    long MaxOutstandingApcCount;// Offset=0x94 Size=0x4
};
