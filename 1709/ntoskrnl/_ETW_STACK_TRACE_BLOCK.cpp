struct _unnamed_31// Size=0x8 (Id=31)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=76)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_31 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _SINGLE_LIST_ENTRY// Size=0x8 (Id=491)
{
    struct _SINGLE_LIST_ENTRY * Next;// Offset=0x0 Size=0x8
};

struct _KDPC// Size=0x40 (Id=168)
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

struct _unnamed_69// Size=0x10 (Id=69)
{
    struct // Size=0x10 (Id=0)
    {
        unsigned long long Depth:16;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x10
        unsigned long long Sequence:48;// Offset=0x0 Size=0x8 BitOffset=0x10 BitSize=0x30
        unsigned long long Reserved:4;// Offset=0x8 Size=0x8 BitOffset=0x0 BitSize=0x4
        unsigned long long NextEntry:60;// Offset=0x8 Size=0x8 BitOffset=0x4 BitSize=0x3c
    };
};

union _SLIST_HEADER// Size=0x10 (Id=70)
{
    unsigned long long Alignment;// Offset=0x0 Size=0x8
    unsigned long long Region;// Offset=0x8 Size=0x8
    struct _unnamed_69 HeaderX64;// Offset=0x0 Size=0x10
};

struct _SLIST_ENTRY// Size=0x10 (Id=72)
{
    struct _SLIST_ENTRY * Next;// Offset=0x0 Size=0x8
};

struct _LIST_ENTRY// Size=0x10 (Id=23)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _KAPC// Size=0x58 (Id=893)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char SpareByte0;// Offset=0x1 Size=0x1
    unsigned char Size;// Offset=0x2 Size=0x1
    unsigned char SpareByte1;// Offset=0x3 Size=0x1
    unsigned long SpareLong0;// Offset=0x4 Size=0x4
    struct _KTHREAD * Thread;// Offset=0x8 Size=0x8
    struct _LIST_ENTRY ApcListEntry;// Offset=0x10 Size=0x10
    union // Size=0x38 (Id=0)
    {
        void  ( * KernelRoutine)(struct _KAPC * ,void  ( ** )(void * ,void * ,void * ),void ** ,void ** ,void ** );// Offset=0x20 Size=0x8
        void  ( * RundownRoutine)(struct _KAPC * );// Offset=0x28 Size=0x8
        void  ( * NormalRoutine)(void * ,void * ,void * );// Offset=0x30 Size=0x8
        void * Reserved[3];// Offset=0x20 Size=0x18
    };
    void * NormalContext;// Offset=0x38 Size=0x8
    void * SystemArgument1;// Offset=0x40 Size=0x8
    void * SystemArgument2;// Offset=0x48 Size=0x8
    char ApcStateIndex;// Offset=0x50 Size=0x1
    char ApcMode;// Offset=0x51 Size=0x1
    unsigned char Inserted;// Offset=0x52 Size=0x1
};

struct _ETW_APC_ENTRY// Size=0x60 (Id=1272)
{
    union // Size=0x10 (Id=0)
    {
        struct _SLIST_ENTRY SListEntry;// Offset=0x0 Size=0x10
        struct _KAPC Apc;// Offset=0x0 Size=0x58
    };
};

struct _ETW_STACK_TRACE_BLOCK// Size=0x500 (Id=1090)
{
    long Flags;// Offset=0x0 Size=0x4
    union _LARGE_INTEGER RelatedTimestamp;// Offset=0x8 Size=0x8
    struct _ETHREAD * Thread;// Offset=0x10 Size=0x8
    struct _KDPC StackWalkDpc;// Offset=0x18 Size=0x40
    union _SLIST_HEADER ApcListHead;// Offset=0x60 Size=0x10
    struct _ETW_APC_ENTRY ApcEntry[12];// Offset=0x70 Size=0x480
    long ApcCount;// Offset=0x4f0 Size=0x4
    long MaxApcCount;// Offset=0x4f4 Size=0x4
};
