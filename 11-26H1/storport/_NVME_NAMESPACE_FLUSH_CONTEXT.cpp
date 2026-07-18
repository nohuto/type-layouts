struct _LIST_ENTRY// Size=0x10 (Id=5)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

union _unnamed_953// Size=0x4 (Id=953)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long InconsistentNextListState:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long Reserved:31;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1f
    };
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};

struct _NVME_NAMESPACE_FLUSH_CONTEXT// Size=0x50 (Id=954)
{
    struct _NVME_EXTENDED_COMMAND * ExtendedCommand;// Offset=0x0 Size=0x8
    struct _IO_WORKITEM * WorkItem;// Offset=0x8 Size=0x8
    unsigned long long SpinLock;// Offset=0x10 Size=0x8
    struct _IRP * CurrIrp;// Offset=0x18 Size=0x8
    struct _LIST_ENTRY CurrList;// Offset=0x20 Size=0x10
    struct _IRP * NextIrp;// Offset=0x30 Size=0x8
    struct _LIST_ENTRY NextList;// Offset=0x38 Size=0x10
    union _unnamed_953 Flags;// Offset=0x48 Size=0x4
    unsigned long Reserved;// Offset=0x4c Size=0x4
};
