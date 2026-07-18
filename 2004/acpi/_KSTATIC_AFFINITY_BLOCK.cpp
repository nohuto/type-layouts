struct _KAFFINITY_EX// Size=0xa8 (Id=381)
{
    unsigned short Count;// Offset=0x0 Size=0x2
    unsigned short Size;// Offset=0x2 Size=0x2
    unsigned long Reserved;// Offset=0x4 Size=0x4
    unsigned long long Bitmap[20];// Offset=0x8 Size=0xa0
};

struct _KSTATIC_AFFINITY_BLOCK// Size=0x2a0 (Id=225)
{
    union // Size=0xa8 (Id=0)
    {
        struct _KAFFINITY_EX KeFlushTbAffinity;// Offset=0x0 Size=0xa8
        struct _KAFFINITY_EX KeFlushWbAffinity;// Offset=0x0 Size=0xa8
        struct _KAFFINITY_EX KeSyncContextAffinity;// Offset=0x0 Size=0xa8
    };
    struct _KAFFINITY_EX KeFlushTbDeepIdleAffinity;// Offset=0xa8 Size=0xa8
    struct _KAFFINITY_EX KeIpiSendAffinity;// Offset=0x150 Size=0xa8
    struct _KAFFINITY_EX KeIpiSendIpiSet;// Offset=0x1f8 Size=0xa8
};
