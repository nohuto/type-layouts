struct _anonymous_17// Size=0x4 (Id=17)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long LongFunction:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long Persistent:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long Private:30;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1e
    };
};

union _anonymous_18// Size=0x4 (Id=18)
{
    unsigned long Flags;// Offset=0x0 Size=0x4
    struct _anonymous_17 s;// Offset=0x0 Size=0x4
};

enum _TP_CALLBACK_PRIORITY
{
    TP_CALLBACK_PRIORITY_HIGH=0,
    TP_CALLBACK_PRIORITY_NORMAL=1,
    TP_CALLBACK_PRIORITY_LOW=2,
    TP_CALLBACK_PRIORITY_INVALID=3,
    TP_CALLBACK_PRIORITY_COUNT=3
};

struct _TP_CALLBACK_ENVIRON_V3// Size=0x48 (Id=20)
{
    unsigned long Version;// Offset=0x0 Size=0x4
    struct _TP_POOL * Pool;// Offset=0x8 Size=0x8
    struct _TP_CLEANUP_GROUP * CleanupGroup;// Offset=0x10 Size=0x8
    void  ( * CleanupGroupCancelCallback)(void * ,void * );// Offset=0x18 Size=0x8
    void * RaceDll;// Offset=0x20 Size=0x8
    struct _ACTIVATION_CONTEXT * ActivationContext;// Offset=0x28 Size=0x8
    void  ( * FinalizationCallback)(struct _TP_CALLBACK_INSTANCE * ,void * );// Offset=0x30 Size=0x8
    union _anonymous_18 u;// Offset=0x38 Size=0x4
    enum _TP_CALLBACK_PRIORITY CallbackPriority;// Offset=0x3c Size=0x4
    unsigned long Size;// Offset=0x40 Size=0x4
};
