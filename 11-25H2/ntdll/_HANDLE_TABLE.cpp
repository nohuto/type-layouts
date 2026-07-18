struct _LIST_ENTRY// Size=0x10 (Id=30)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _EX_PUSH_LOCK// Size=0x8 (Id=112)
{
    union // Size=0x8 (Id=0)
    {
        struct // Size=0x8 (Id=0)
        {
            unsigned long long Locked:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
            unsigned long long Waiting:1;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x1
            unsigned long long Waking:1;// Offset=0x0 Size=0x8 BitOffset=0x2 BitSize=0x1
            unsigned long long MultipleShared:1;// Offset=0x0 Size=0x8 BitOffset=0x3 BitSize=0x1
            unsigned long long Shared:60;// Offset=0x0 Size=0x8 BitOffset=0x4 BitSize=0x3c
        };
        unsigned long long Value;// Offset=0x0 Size=0x8
        void * Ptr;// Offset=0x0 Size=0x8
    };
};

struct _HANDLE_TABLE_FREE_LIST// Size=0x40 (Id=368)
{
    struct _EX_PUSH_LOCK FreeListLock;// Offset=0x0 Size=0x8
    union _HANDLE_TABLE_ENTRY * FirstFreeHandleEntry;// Offset=0x8 Size=0x8
    union _HANDLE_TABLE_ENTRY * LastFreeHandleEntry;// Offset=0x10 Size=0x8
    long HandleCount;// Offset=0x18 Size=0x4
    unsigned long HighWaterMark;// Offset=0x1c Size=0x4
};

struct _HANDLE_TABLE// Size=0x80 (Id=118)
{
    unsigned long NextHandleNeedingPool;// Offset=0x0 Size=0x4
    long ExtraInfoPages;// Offset=0x4 Size=0x4
    unsigned long long TableCode;// Offset=0x8 Size=0x8
    struct _EPROCESS * QuotaProcess;// Offset=0x10 Size=0x8
    struct _LIST_ENTRY HandleTableList;// Offset=0x18 Size=0x10
    unsigned long UniqueProcessId;// Offset=0x28 Size=0x4
    union // Size=0x4 (Id=0)
    {
        unsigned long Flags;// Offset=0x2c Size=0x4
        struct // Size=0x1 (Id=0)
        {
            unsigned char StrictFIFO:1;// Offset=0x2c Size=0x1 BitOffset=0x0 BitSize=0x1
            unsigned char EnableHandleExceptions:1;// Offset=0x2c Size=0x1 BitOffset=0x1 BitSize=0x1
            unsigned char Rundown:1;// Offset=0x2c Size=0x1 BitOffset=0x2 BitSize=0x1
            unsigned char Duplicated:1;// Offset=0x2c Size=0x1 BitOffset=0x3 BitSize=0x1
            unsigned char RaiseUMExceptionOnInvalidHandleClose:1;// Offset=0x2c Size=0x1 BitOffset=0x4 BitSize=0x1
        };
    };
    struct _EX_PUSH_LOCK HandleContentionEvent;// Offset=0x30 Size=0x8
    struct _EX_PUSH_LOCK HandleTableLock;// Offset=0x38 Size=0x8
    union // Size=0x40 (Id=0)
    {
        struct _HANDLE_TABLE_FREE_LIST FreeLists[1];// Offset=0x40 Size=0x40
        unsigned char ActualEntry[32];// Offset=0x40 Size=0x20
    };
    struct _HANDLE_TRACE_DEBUG_INFO * DebugInfo;// Offset=0x60 Size=0x8
};
