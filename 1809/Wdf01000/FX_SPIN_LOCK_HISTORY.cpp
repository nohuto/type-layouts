struct FX_SPIN_LOCK_HISTORY// Size=0x100 (Id=938)
{
    struct _KTHREAD * OwningThread;// Offset=0x0 Size=0x8
    struct FX_SPIN_LOCK_HISTORY_ENTRY * CurrentHistory;// Offset=0x8 Size=0x8
    struct FX_SPIN_LOCK_HISTORY_ENTRY History[10];// Offset=0x10 Size=0xf0
};
