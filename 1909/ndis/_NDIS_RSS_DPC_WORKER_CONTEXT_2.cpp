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

struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=359)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Revision;// Offset=0x1 Size=0x1
    unsigned short Size;// Offset=0x2 Size=0x2
};

struct _NDIS_RSS_SET_INDIRECTION_ENTRIES// Size=0x14 (Id=1407)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    unsigned long Flags;// Offset=0x4 Size=0x4
    unsigned long RssEntrySize;// Offset=0x8 Size=0x4
    unsigned long RssEntryTableOffset;// Offset=0xc Size=0x4
    unsigned long NumberOfRssEntries;// Offset=0x10 Size=0x4
};

struct _PROCESSOR_NUMBER// Size=0x4 (Id=559)
{
    unsigned short Group;// Offset=0x0 Size=0x2
    unsigned char Number;// Offset=0x2 Size=0x1
    unsigned char Reserved;// Offset=0x3 Size=0x1
};

struct _NDIS_RSS_SET_INDIRECTION_ENTRY// Size=0x18 (Id=917)
{
    unsigned long SwitchId;// Offset=0x0 Size=0x4
    unsigned long VPortId;// Offset=0x4 Size=0x4
    unsigned long Flags;// Offset=0x8 Size=0x4
    unsigned short IndirectionTableIndex;// Offset=0xc Size=0x2
    struct _PROCESSOR_NUMBER TargetProcessorNumber;// Offset=0xe Size=0x4
    int EntryStatus;// Offset=0x14 Size=0x4
};

struct _NDIS_RSS_SET_INDIRECTION_ENTRIES_COMMAND// Size=0xc44 (Id=822)
{
    struct _NDIS_RSS_SET_INDIRECTION_ENTRIES Param;// Offset=0x0 Size=0x14
    struct _NDIS_RSS_SET_INDIRECTION_ENTRY Entry[130];// Offset=0x14 Size=0xc30
};

struct _NDIS_RSS_DPC_WORKER_CONTEXT// Size=0xc88 (Id=749)
{
    struct _KDPC Dpc;// Offset=0x0 Size=0x40
    int Status;// Offset=0x40 Size=0x4
    struct _NDIS_RSS_SET_INDIRECTION_ENTRIES_COMMAND Command;// Offset=0x44 Size=0xc44
    void _NDIS_RSS_DPC_WORKER_CONTEXT(struct _NDIS_RSS_DPC_WORKER_CONTEXT * );
    void _NDIS_RSS_DPC_WORKER_CONTEXT(struct _NDIS_RSS_DPC_WORKER_CONTEXT & );
    struct _NDIS_RSS_DPC_WORKER_CONTEXT & operator=(struct _NDIS_RSS_DPC_WORKER_CONTEXT * );
    struct _NDIS_RSS_DPC_WORKER_CONTEXT & operator=(struct _NDIS_RSS_DPC_WORKER_CONTEXT & );
};
