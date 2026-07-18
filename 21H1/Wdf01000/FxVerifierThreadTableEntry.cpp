struct _LIST_ENTRY// Size=0x10 (Id=3400)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct FxVerifierThreadTableEntry// Size=0x28 (Id=1132)
{
    struct _KTHREAD * Thread;// Offset=0x0 Size=0x8
    class FxVerifierLock * PerThreadPassiveLockList;// Offset=0x8 Size=0x8
    class FxVerifierLock * PerThreadDispatchLockList;// Offset=0x10 Size=0x8
    struct _LIST_ENTRY HashChain;// Offset=0x18 Size=0x10
};
