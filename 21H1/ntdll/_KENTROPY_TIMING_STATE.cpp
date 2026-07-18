struct _SINGLE_LIST_ENTRY// Size=0x4 (Id=26)
{
    struct _SINGLE_LIST_ENTRY * Next;// Offset=0x0 Size=0x4
};

struct _KDPC// Size=0x20 (Id=165)
{
    union // Size=0x4 (Id=0)
    {
        unsigned long TargetInfoAsUlong;// Offset=0x0 Size=0x4
        unsigned char Type;// Offset=0x0 Size=0x1
        unsigned char Importance;// Offset=0x1 Size=0x1
        unsigned short Number;// Offset=0x2 Size=0x2
    };
    struct _SINGLE_LIST_ENTRY DpcListEntry;// Offset=0x4 Size=0x4
    unsigned long ProcessorHistory;// Offset=0x8 Size=0x4
    void  ( * DeferredRoutine)(struct _KDPC * ,void * ,void * ,void * );// Offset=0xc Size=0x4
    void * DeferredContext;// Offset=0x10 Size=0x4
    void * SystemArgument1;// Offset=0x14 Size=0x4
    void * SystemArgument2;// Offset=0x18 Size=0x4
    void * DpcData;// Offset=0x1c Size=0x4
};

struct _KENTROPY_TIMING_STATE// Size=0x128 (Id=575)
{
    unsigned long EntropyCount;// Offset=0x0 Size=0x4
    unsigned long Buffer[64];// Offset=0x4 Size=0x100
    struct _KDPC Dpc;// Offset=0x104 Size=0x20
    unsigned long LastDeliveredBuffer;// Offset=0x124 Size=0x4
};
