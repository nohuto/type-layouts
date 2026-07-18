struct _LIST_ENTRY// Size=0x10 (Id=4)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _unnamed_9// Size=0x8 (Id=9)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=252)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_9 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _CM_KCB_UOW// Size=0x78 (Id=719)
{
    struct _LIST_ENTRY TransactionListEntry;// Offset=0x0 Size=0x10
    struct _CM_INTENT_LOCK * KCBLock;// Offset=0x10 Size=0x8
    struct _CM_INTENT_LOCK * KeyLock;// Offset=0x18 Size=0x8
    struct _LIST_ENTRY KCBListEntry;// Offset=0x20 Size=0x10
    struct _CM_KEY_CONTROL_BLOCK * KeyControlBlock;// Offset=0x30 Size=0x8
    struct _CM_TRANS * Transaction;// Offset=0x38 Size=0x8
    unsigned long UoWState;// Offset=0x40 Size=0x4
    enum UoWActionType ActionType;// Offset=0x44 Size=0x4
    enum HSTORAGE_TYPE StorageType;// Offset=0x48 Size=0x4
    struct _CM_KCB_UOW * ParentUoW;// Offset=0x50 Size=0x8
    union // Size=0x60 (Id=0)
    {
        struct _CM_KEY_CONTROL_BLOCK * ChildKCB;// Offset=0x58 Size=0x8
        unsigned long VolatileKeyCell;// Offset=0x58 Size=0x4
        unsigned long OldValueCell;// Offset=0x58 Size=0x4
        unsigned long NewValueCell;// Offset=0x5c Size=0x4
        unsigned long UserFlags;// Offset=0x58 Size=0x4
        union _LARGE_INTEGER LastWriteTime;// Offset=0x58 Size=0x8
        struct _CM_KEY_SECURITY_CACHE * TxCachedSecurity;// Offset=0x58 Size=0x8
    };
    unsigned long TxSecurityCell;// Offset=0x60 Size=0x4
    unsigned char UpdateEntireSecurity;// Offset=0x64 Size=0x1
    union // Size=0x70 (Id=0)
    {
        void * PrepareDataPointer;// Offset=0x68 Size=0x8
        struct _CM_UOW_SET_SD_DATA * SecurityData;// Offset=0x68 Size=0x8
        struct _CM_UOW_KEY_STATE_MODIFICATION * ModifyKeysData;// Offset=0x68 Size=0x8
        struct _CM_UOW_SET_VALUE_LIST_DATA * SetValueData;// Offset=0x68 Size=0x8
    };
    union // Size=0x8 (Id=0)
    {
        struct _CM_UOW_SET_VALUE_KEY_DATA * ValueData;// Offset=0x70 Size=0x8
        struct _CMP_DISCARD_AND_REPLACE_KCB_CONTEXT * DiscardReplaceContext;// Offset=0x70 Size=0x8
    };
};
