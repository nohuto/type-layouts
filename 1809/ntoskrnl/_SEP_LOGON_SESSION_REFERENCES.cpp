struct _LUID// Size=0x8 (Id=34)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

struct _UNICODE_STRING// Size=0x10 (Id=217)
{
    unsigned short Length;// Offset=0x0 Size=0x2
    unsigned short MaximumLength;// Offset=0x2 Size=0x2
    wchar_t * Buffer;// Offset=0x8 Size=0x8
};

struct _EX_PUSH_LOCK// Size=0x8 (Id=87)
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

struct _SEP_CACHED_HANDLES_TABLE// Size=0x10 (Id=1320)
{
    struct _EX_PUSH_LOCK Lock;// Offset=0x0 Size=0x8
    struct _RTL_DYNAMIC_HASH_TABLE * HashTable;// Offset=0x8 Size=0x8
};

struct _LIST_ENTRY// Size=0x10 (Id=22)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _EX_RUNDOWN_REF// Size=0x8 (Id=189)
{
    union // Size=0x8 (Id=0)
    {
        unsigned long long Count;// Offset=0x0 Size=0x8
        void * Ptr;// Offset=0x0 Size=0x8
    };
};

struct _OB_HANDLE_REVOCATION_BLOCK// Size=0x20 (Id=785)
{
    struct _LIST_ENTRY RevocationInfos;// Offset=0x0 Size=0x10
    struct _EX_PUSH_LOCK Lock;// Offset=0x10 Size=0x8
    struct _EX_RUNDOWN_REF Rundown;// Offset=0x18 Size=0x8
};

struct _SEP_LOGON_SESSION_REFERENCES// Size=0xc0 (Id=570)
{
    struct _SEP_LOGON_SESSION_REFERENCES * Next;// Offset=0x0 Size=0x8
    struct _LUID LogonId;// Offset=0x8 Size=0x8
    struct _LUID BuddyLogonId;// Offset=0x10 Size=0x8
    long long ReferenceCount;// Offset=0x18 Size=0x8
    unsigned long Flags;// Offset=0x20 Size=0x4
    struct _DEVICE_MAP * pDeviceMap;// Offset=0x28 Size=0x8
    void * Token;// Offset=0x30 Size=0x8
    struct _UNICODE_STRING AccountName;// Offset=0x38 Size=0x10
    struct _UNICODE_STRING AuthorityName;// Offset=0x48 Size=0x10
    struct _SEP_CACHED_HANDLES_TABLE CachedHandlesTable;// Offset=0x58 Size=0x10
    struct _EX_PUSH_LOCK SharedDataLock;// Offset=0x68 Size=0x8
    struct _AUTHZBASEP_CLAIM_ATTRIBUTES_COLLECTION * SharedClaimAttributes;// Offset=0x70 Size=0x8
    struct _SEP_SID_VALUES_BLOCK * SharedSidValues;// Offset=0x78 Size=0x8
    struct _OB_HANDLE_REVOCATION_BLOCK RevocationBlock;// Offset=0x80 Size=0x20
    struct _EJOB * ServerSilo;// Offset=0xa0 Size=0x8
    struct _LUID SiblingAuthId;// Offset=0xa8 Size=0x8
    struct _LIST_ENTRY TokenList;// Offset=0xb0 Size=0x10
};
