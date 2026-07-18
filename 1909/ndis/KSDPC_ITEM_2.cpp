struct _SINGLE_LIST_ENTRY// Size=0x8 (Id=30)
{
    struct _SINGLE_LIST_ENTRY * Next;// Offset=0x0 Size=0x8
};

struct _KDPC// Size=0x40 (Id=94)
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
    void _KDPC(struct _KDPC * );
    void _KDPC(struct _KDPC & );
    struct _KDPC & operator=(struct _KDPC * );
    struct _KDPC & operator=(struct _KDPC & );
};

struct KSDPC_ITEM// Size=0x50 (Id=1064)
{
    struct _KDPC Dpc;// Offset=0x0 Size=0x40
    unsigned long ReferenceCount;// Offset=0x40 Size=0x4
    unsigned long long AccessLock;// Offset=0x48 Size=0x8
    void KSDPC_ITEM(struct KSDPC_ITEM * );
    void KSDPC_ITEM(struct KSDPC_ITEM & );
    struct KSDPC_ITEM & operator=(struct KSDPC_ITEM * );
    struct KSDPC_ITEM & operator=(struct KSDPC_ITEM & );
};
