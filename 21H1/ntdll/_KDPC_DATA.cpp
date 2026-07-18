struct _SINGLE_LIST_ENTRY// Size=0x4 (Id=26)
{
    struct _SINGLE_LIST_ENTRY * Next;// Offset=0x0 Size=0x4
};

struct _KDPC_LIST// Size=0x8 (Id=542)
{
    struct _SINGLE_LIST_ENTRY ListHead;// Offset=0x0 Size=0x4
    struct _SINGLE_LIST_ENTRY * LastEntry;// Offset=0x4 Size=0x4
};

struct _KDPC_DATA// Size=0x18 (Id=291)
{
    struct _KDPC_LIST DpcList;// Offset=0x0 Size=0x8
    unsigned long DpcLock;// Offset=0x8 Size=0x4
    long DpcQueueDepth;// Offset=0xc Size=0x4
    unsigned long DpcCount;// Offset=0x10 Size=0x4
    struct _KDPC * ActiveDpc;// Offset=0x14 Size=0x4
};
