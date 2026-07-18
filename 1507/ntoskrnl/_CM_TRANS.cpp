struct _LIST_ENTRY// Size=0x10 (Id=20)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _GUID// Size=0x10 (Id=92)
{
    unsigned long Data1;// Offset=0x0 Size=0x4
    unsigned short Data2;// Offset=0x4 Size=0x2
    unsigned short Data3;// Offset=0x6 Size=0x2
    unsigned char Data4[8];// Offset=0x8 Size=0x8
};

struct _CM_TRANS// Size=0xa8 (Id=778)
{
    struct _LIST_ENTRY TransactionListEntry;// Offset=0x0 Size=0x10
    struct _LIST_ENTRY KCBUoWListHead;// Offset=0x10 Size=0x10
    struct _LIST_ENTRY LazyCommitListEntry;// Offset=0x20 Size=0x10
    void * KtmTrans;// Offset=0x30 Size=0x8
    struct _CM_RM * CmRm;// Offset=0x38 Size=0x8
    struct _KENLISTMENT * KtmEnlistmentObject;// Offset=0x40 Size=0x8
    void * KtmEnlistmentHandle;// Offset=0x48 Size=0x8
    struct _GUID KtmUow;// Offset=0x50 Size=0x10
    unsigned long long StartLsn;// Offset=0x60 Size=0x8
    unsigned long TransState;// Offset=0x68 Size=0x4
    unsigned long HiveCount;// Offset=0x6c Size=0x4
    struct _CMHIVE * HiveArray[7];// Offset=0x70 Size=0x38
};
