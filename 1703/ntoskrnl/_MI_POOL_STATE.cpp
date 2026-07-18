struct _SINGLE_LIST_ENTRY// Size=0x8 (Id=475)
{
    struct _SINGLE_LIST_ENTRY * Next;// Offset=0x0 Size=0x8
};

struct _MI_POOL_FAILURE_REASONS// Size=0x2c (Id=1525)
{
    unsigned long NonPagedNoPtes;// Offset=0x0 Size=0x4
    unsigned long PriorityTooLow;// Offset=0x4 Size=0x4
    unsigned long NonPagedNoPagesAvailable;// Offset=0x8 Size=0x4
    unsigned long PagedNoPtes;// Offset=0xc Size=0x4
    unsigned long SessionPagedNoPtes;// Offset=0x10 Size=0x4
    unsigned long PagedNoPagesAvailable;// Offset=0x14 Size=0x4
    unsigned long SessionPagedNoPagesAvailable;// Offset=0x18 Size=0x4
    unsigned long PagedNoCommit;// Offset=0x1c Size=0x4
    unsigned long SessionPagedNoCommit;// Offset=0x20 Size=0x4
    unsigned long NonPagedNoResidentAvailable;// Offset=0x24 Size=0x4
    unsigned long NonPagedNoCommit;// Offset=0x28 Size=0x4
};

struct _MI_POOL_STATE// Size=0xe8 (Id=1278)
{
    unsigned long long MaximumNonPagedPoolThreshold;// Offset=0x0 Size=0x8
    unsigned long NonPagedPoolSListMaximum[3];// Offset=0x8 Size=0xc
    unsigned long long AllocatedNonPagedPool;// Offset=0x18 Size=0x8
    struct _SINGLE_LIST_ENTRY BadPoolHead;// Offset=0x20 Size=0x8
    unsigned long HighEventSets;// Offset=0x28 Size=0x4
    unsigned char HighEventSetsValid;// Offset=0x2c Size=0x1
    unsigned long PoolFailures[3][3];// Offset=0x30 Size=0x24
    struct _MI_POOL_FAILURE_REASONS PoolFailureReasons;// Offset=0x54 Size=0x2c
    unsigned long long LowPagedPoolThreshold;// Offset=0x80 Size=0x8
    unsigned long long HighPagedPoolThreshold;// Offset=0x88 Size=0x8
    unsigned long PagedPoolSListMaximum;// Offset=0x90 Size=0x4
    unsigned long PreemptiveTrims[4];// Offset=0x94 Size=0x10
    unsigned long long SpecialPagesInUsePeak;// Offset=0xa8 Size=0x8
    unsigned long SpecialPoolRejected[6];// Offset=0xb0 Size=0x18
    unsigned long long SpecialPagesNonPaged;// Offset=0xc8 Size=0x8
    long SpecialPoolPdes;// Offset=0xd0 Size=0x4
    unsigned long SessionSpecialPoolPdesMax;// Offset=0xd4 Size=0x4
    unsigned long long TotalPagedPoolQuota;// Offset=0xd8 Size=0x8
    unsigned long long TotalNonPagedPoolQuota;// Offset=0xe0 Size=0x8
};
