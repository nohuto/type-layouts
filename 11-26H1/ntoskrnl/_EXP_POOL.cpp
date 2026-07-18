struct _EXP_POOL_COMMON_HEADER// Size=0x4 (Id=977)
{
    unsigned long Signature;// Offset=0x0 Size=0x4
};

union _EXP_POOL_VOLATILE_FLAGS// Size=0x4 (Id=1994)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long RequirePhase1Init:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long Spare:31;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1f
    };
    unsigned long AllFlags;// Offset=0x0 Size=0x4
};

struct _EX_RUNDOWN_REF// Size=0x8 (Id=271)
{
    union // Size=0x8 (Id=0)
    {
        unsigned long long Count;// Offset=0x0 Size=0x8
        void * Ptr;// Offset=0x0 Size=0x8
    };
};

struct _LIST_ENTRY// Size=0x10 (Id=3)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _UNICODE_STRING// Size=0x10 (Id=6)
{
    unsigned short Length;// Offset=0x0 Size=0x2
    unsigned short MaximumLength;// Offset=0x2 Size=0x2
    wchar_t * Buffer;// Offset=0x8 Size=0x8
};

struct _EXP_POOL_NODE// Size=0x10 (Id=982)
{
    struct _SEGMENT_HEAP * Heap;// Offset=0x0 Size=0x8
    unsigned long StateToken;// Offset=0x8 Size=0x4
};

struct _EXP_POOL// Size=0x60 (Id=978)
{
    struct _EXP_POOL_COMMON_HEADER Header;// Offset=0x0 Size=0x4
    union _EXP_POOL_VOLATILE_FLAGS VolatileFlags;// Offset=0x4 Size=0x4
    struct RTL_HP_ENV_HANDLE EnvHandle;// Offset=0x8 Size=0x10
    struct _EX_RUNDOWN_REF Rundown;// Offset=0x18 Size=0x8
    struct _LIST_ENTRY PoolLink;// Offset=0x20 Size=0x10
    struct _UNICODE_STRING Name;// Offset=0x30 Size=0x10
    unsigned long long ValidRequiredPoolFlags;// Offset=0x40 Size=0x8
    unsigned long UniqueNodeCount;// Offset=0x48 Size=0x4
    struct _EXP_POOL_NODE Node[1];// Offset=0x50 Size=0x10
};
