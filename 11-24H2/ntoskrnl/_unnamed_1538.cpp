struct _LIST_ENTRY// Size=0x10 (Id=4)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _KAPC_STATE// Size=0x30 (Id=1622)
{
    struct _LIST_ENTRY ApcListHead[2];// Offset=0x0 Size=0x20
    struct _KPROCESS * Process;// Offset=0x20 Size=0x8
    union // Size=0x1 (Id=0)
    {
        unsigned char InProgressFlags;// Offset=0x28 Size=0x1
        struct // Size=0x1 (Id=0)
        {
            unsigned char KernelApcInProgress:1;// Offset=0x28 Size=0x1 BitOffset=0x0 BitSize=0x1
            unsigned char SpecialApcInProgress:1;// Offset=0x28 Size=0x1 BitOffset=0x1 BitSize=0x1
        };
    };
    unsigned char KernelApcPending;// Offset=0x29 Size=0x1
    union // Size=0x1 (Id=0)
    {
        unsigned char UserApcPendingAll;// Offset=0x2a Size=0x1
        struct // Size=0x1 (Id=0)
        {
            unsigned char SpecialUserApcPending:1;// Offset=0x2a Size=0x1 BitOffset=0x0 BitSize=0x1
            unsigned char UserApcPending:1;// Offset=0x2a Size=0x1 BitOffset=0x1 BitSize=0x1
        };
    };
};

struct _MI_STORE_INPAGE_COMPLETE_FLAGS// Size=0x4 (Id=2458)
{
    union // Size=0x4 (Id=0)
    {
        unsigned long EntireFlags;// Offset=0x0 Size=0x4
        struct // Size=0x4 (Id=0)
        {
            unsigned long StoreFault:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
            unsigned long LowResourceFailure:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
            unsigned long Spare:30;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1e
        };
    };
};

struct _MI_HARD_FAULT_STATE// Size=0x10 (Id=2222)
{
    struct _MMPFN * SwapPfn;// Offset=0x0 Size=0x8
    struct _MI_STORE_INPAGE_COMPLETE_FLAGS StoreFlags;// Offset=0x8 Size=0x4
};

union _unnamed_1538// Size=0x30 (Id=1538)
{
    union // Size=0x30 (Id=0)
    {
        struct _KAPC_STATE ApcState;// Offset=0x0 Size=0x30
        struct _MI_HARD_FAULT_STATE HardFaultState;// Offset=0x0 Size=0x10
    };
};
