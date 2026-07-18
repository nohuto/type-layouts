enum _EXP_POOL_CONTEXT_TYPE
{
    ExpPoolContextInvalid=0,
    ExpPoolContextPrivate=1,
    ExpPoolContextSecure=2
};

struct _EXP_POOL_CONTEXT_HEADER// Size=0x8 (Id=948)
{
    unsigned long Signature;// Offset=0x0 Size=0x4
    enum _EXP_POOL_CONTEXT_TYPE ContextType;// Offset=0x4 Size=0x4
};

struct _EX_RUNDOWN_REF// Size=0x8 (Id=269)
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

struct _UNICODE_STRING// Size=0x10 (Id=537)
{
    unsigned short Length;// Offset=0x0 Size=0x2
    unsigned short MaximumLength;// Offset=0x2 Size=0x2
    wchar_t * Buffer;// Offset=0x8 Size=0x8
};

struct _EXP_POOL_CONTEXT// Size=0x58 (Id=947)
{
    struct _EXP_POOL_CONTEXT_HEADER Header;// Offset=0x0 Size=0x8
    struct RTL_HP_ENV_HANDLE EnvHandle;// Offset=0x8 Size=0x10
    struct _EX_RUNDOWN_REF Rundown;// Offset=0x18 Size=0x8
    struct _LIST_ENTRY PoolLink;// Offset=0x20 Size=0x10
    unsigned long long Tag;// Offset=0x30 Size=0x8
    struct _UNICODE_STRING Name;// Offset=0x38 Size=0x10
    unsigned long NodeCount;// Offset=0x48 Size=0x4
    struct _SEGMENT_HEAP * Node[1];// Offset=0x50 Size=0x8
};
