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

struct _RTL_BITMAP// Size=0x10 (Id=13)
{
    unsigned long SizeOfBitMap;// Offset=0x0 Size=0x4
    unsigned long * Buffer;// Offset=0x8 Size=0x8
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

struct _MI_STANDBY_STATE// Size=0x1a0 (Id=1809)
{
    unsigned long long FirstDecayPage;// Offset=0x0 Size=0x8
    union _SLIST_HEADER PfnDecayFreeSList;// Offset=0x10 Size=0x10
    long DecayPfnLock;// Offset=0x20 Size=0x4
    struct _RTL_BITMAP DecayPfnsToBeFreed;// Offset=0x28 Size=0x10
    unsigned long DecayPfnsToBeFreedBuffer[64];// Offset=0x38 Size=0x100
    struct _MM_PAGE_ACCESS_INFO_HEADER * PfnRepurposeLog;// Offset=0x138 Size=0x8
    struct _KDPC AllocatePfnRepurposeDpc;// Offset=0x140 Size=0x40
    union _SLIST_HEADER PageHeatListSlist;// Offset=0x180 Size=0x10
    long PageHeatListDisableAllocation;// Offset=0x190 Size=0x4
};
