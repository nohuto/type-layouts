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

union _POOL_EXTENDED_PARAMETER::_unnamed_1424// Size=0x8 (Id=1424)
{
    unsigned long long Reserved2;// Offset=0x0 Size=0x8
    void * Reserved3;// Offset=0x0 Size=0x8
    enum _EX_POOL_PRIORITY Priority;// Offset=0x0 Size=0x4
    struct _POOL_EXTENDED_PARAMS_SECURE_POOL * SecurePoolParams;// Offset=0x0 Size=0x8
    unsigned long PreferredNode;// Offset=0x0 Size=0x4
    void * PrivatePoolHandle;// Offset=0x0 Size=0x8
};
