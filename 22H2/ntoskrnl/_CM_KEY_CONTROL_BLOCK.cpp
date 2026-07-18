struct _CM_PATH_HASH// Size=0x4 (Id=1030)
{
    unsigned long Hash;// Offset=0x0 Size=0x4
};

struct _CM_KEY_HASH// Size=0x20 (Id=1204)
{
    struct _CM_PATH_HASH ConvKey;// Offset=0x0 Size=0x4
    struct _CM_KEY_HASH * NextHash;// Offset=0x8 Size=0x8
    struct _HHIVE * KeyHive;// Offset=0x10 Size=0x8
    unsigned long KeyCell;// Offset=0x18 Size=0x4
};

struct _EX_PUSH_LOCK// Size=0x8 (Id=122)
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

struct _CHILD_LIST// Size=0x8 (Id=1323)
{
    unsigned long Count;// Offset=0x0 Size=0x4
    unsigned long List;// Offset=0x4 Size=0x4
};

struct _LIST_ENTRY// Size=0x10 (Id=3)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _anonymous_9// Size=0x8 (Id=9)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=414)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _anonymous_9 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _CM_INTENT_LOCK// Size=0x10 (Id=964)
{
    unsigned long OwnerCount;// Offset=0x0 Size=0x4
    struct _CM_KCB_UOW ** OwnerTable;// Offset=0x8 Size=0x8
};

struct _CM_KEY_CONTROL_BLOCK// Size=0x138 (Id=565)
{
    unsigned long long RefCount;// Offset=0x0 Size=0x8
    struct // Size=0x4 (Id=0)
    {
        unsigned long ExtFlags:16;// Offset=0x8 Size=0x4 BitOffset=0x0 BitSize=0x10
        unsigned long Freed:1;// Offset=0x8 Size=0x4 BitOffset=0x10 BitSize=0x1
        unsigned long Discarded:1;// Offset=0x8 Size=0x4 BitOffset=0x11 BitSize=0x1
        unsigned long HiveUnloaded:1;// Offset=0x8 Size=0x4 BitOffset=0x12 BitSize=0x1
        unsigned long Decommissioned:1;// Offset=0x8 Size=0x4 BitOffset=0x13 BitSize=0x1
        unsigned long SpareExtFlag:1;// Offset=0x8 Size=0x4 BitOffset=0x14 BitSize=0x1
        unsigned long TotalLevels:10;// Offset=0x8 Size=0x4 BitOffset=0x15 BitSize=0xa
    };
    union // Size=0x20 (Id=0)
    {
        struct _CM_KEY_HASH KeyHash;// Offset=0x10 Size=0x20
        struct _CM_PATH_HASH ConvKey;// Offset=0x10 Size=0x4
        struct _CM_KEY_HASH * NextHash;// Offset=0x18 Size=0x8
    };
    struct _HHIVE * KeyHive;// Offset=0x20 Size=0x8
    unsigned long KeyCell;// Offset=0x28 Size=0x4
    struct _EX_PUSH_LOCK KcbPushlock;// Offset=0x30 Size=0x8
    union // Size=0x8 (Id=0)
    {
        struct _KTHREAD * Owner;// Offset=0x38 Size=0x8
        long SharedCount;// Offset=0x38 Size=0x4
    };
    struct // Size=0x1 (Id=0)
    {
        unsigned char DelayedDeref:1;// Offset=0x40 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char DelayedClose:1;// Offset=0x40 Size=0x1 BitOffset=0x1 BitSize=0x1
        unsigned char Parking:1;// Offset=0x40 Size=0x1 BitOffset=0x2 BitSize=0x1
    };
    unsigned char LayerSemantics;// Offset=0x41 Size=0x1
    short LayerHeight;// Offset=0x42 Size=0x2
    unsigned long Spare1;// Offset=0x44 Size=0x4
    struct _CM_KEY_CONTROL_BLOCK * ParentKcb;// Offset=0x48 Size=0x8
    struct _CM_NAME_CONTROL_BLOCK * NameBlock;// Offset=0x50 Size=0x8
    struct _CM_KEY_SECURITY_CACHE * CachedSecurity;// Offset=0x58 Size=0x8
    struct _CHILD_LIST ValueList;// Offset=0x60 Size=0x8
    struct _CM_KEY_CONTROL_BLOCK * LinkTarget;// Offset=0x68 Size=0x8
    union // Size=0x74 (Id=0)
    {
        struct _CM_INDEX_HINT_BLOCK * IndexHint;// Offset=0x70 Size=0x8
        unsigned long HashKey;// Offset=0x70 Size=0x4
        unsigned long SubKeyCount;// Offset=0x70 Size=0x4
    };
    union // Size=0x10 (Id=0)
    {
        struct _LIST_ENTRY KeyBodyListHead;// Offset=0x78 Size=0x10
        struct _LIST_ENTRY ClonedListEntry;// Offset=0x78 Size=0x10
    };
    struct _CM_KEY_BODY * KeyBodyArray[4];// Offset=0x88 Size=0x20
    union _LARGE_INTEGER KcbLastWriteTime;// Offset=0xa8 Size=0x8
    unsigned short KcbMaxNameLen;// Offset=0xb0 Size=0x2
    unsigned short KcbMaxValueNameLen;// Offset=0xb2 Size=0x2
    unsigned long KcbMaxValueDataLen;// Offset=0xb4 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long KcbUserFlags:4;// Offset=0xb8 Size=0x4 BitOffset=0x0 BitSize=0x4
        unsigned long KcbVirtControlFlags:4;// Offset=0xb8 Size=0x4 BitOffset=0x4 BitSize=0x4
        unsigned long KcbDebug:8;// Offset=0xb8 Size=0x4 BitOffset=0x8 BitSize=0x8
        unsigned long Flags:16;// Offset=0xb8 Size=0x4 BitOffset=0x10 BitSize=0x10
    };
    unsigned long Spare3;// Offset=0xbc Size=0x4
    struct _CM_KCB_LAYER_INFO * LayerInfo;// Offset=0xc0 Size=0x8
    char * RealKeyName;// Offset=0xc8 Size=0x8
    struct _LIST_ENTRY KCBUoWListHead;// Offset=0xd0 Size=0x10
    union // Size=0x10 (Id=0)
    {
        struct _LIST_ENTRY DelayQueueEntry;// Offset=0xe0 Size=0x10
        unsigned char * Stolen;// Offset=0xe0 Size=0x8
    };
    struct _CM_TRANS * TransKCBOwner;// Offset=0xf0 Size=0x8
    struct _CM_INTENT_LOCK KCBLock;// Offset=0xf8 Size=0x10
    struct _CM_INTENT_LOCK KeyLock;// Offset=0x108 Size=0x10
    struct _CHILD_LIST TransValueCache;// Offset=0x118 Size=0x8
    struct _CM_TRANS * TransValueListOwner;// Offset=0x120 Size=0x8
    union // Size=0x8 (Id=0)
    {
        struct _UNICODE_STRING * FullKCBName;// Offset=0x128 Size=0x8
        struct // Size=0x8 (Id=0)
        {
            unsigned long long FullKCBNameStale:1;// Offset=0x128 Size=0x8 BitOffset=0x0 BitSize=0x1
            unsigned long long Reserved:63;// Offset=0x128 Size=0x8 BitOffset=0x1 BitSize=0x3f
        };
    };
    unsigned long long SequenceNumber;// Offset=0x130 Size=0x8
};
