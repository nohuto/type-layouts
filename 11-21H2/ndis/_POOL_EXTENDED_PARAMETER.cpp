enum _EX_POOL_PRIORITY
{
    LowPoolPriority=0,
    LowPoolPrioritySpecialPoolOverrun=8,
    LowPoolPrioritySpecialPoolUnderrun=9,
    NormalPoolPriority=16,
    NormalPoolPrioritySpecialPoolOverrun=24,
    NormalPoolPrioritySpecialPoolUnderrun=25,
    HighPoolPriority=32,
    HighPoolPrioritySpecialPoolOverrun=40,
    HighPoolPrioritySpecialPoolUnderrun=41
};

struct _POOL_EXTENDED_PARAMETER// Size=0x10 (Id=217)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long Type:8;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x8
        unsigned long long Optional:1;// Offset=0x0 Size=0x8 BitOffset=0x8 BitSize=0x1
        unsigned long long Reserved:55;// Offset=0x0 Size=0x8 BitOffset=0x9 BitSize=0x37
    };
    union // Size=0x10 (Id=0)
    {
        unsigned long long Reserved2;// Offset=0x8 Size=0x8
        void * Reserved3;// Offset=0x8 Size=0x8
        enum _EX_POOL_PRIORITY Priority;// Offset=0x8 Size=0x4
        struct _POOL_EXTENDED_PARAMS_SECURE_POOL * SecurePoolParams;// Offset=0x8 Size=0x8
        unsigned long PreferredNode;// Offset=0x8 Size=0x4
    };
};
