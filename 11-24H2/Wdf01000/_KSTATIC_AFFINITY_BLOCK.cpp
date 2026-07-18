struct _KAFFINITY_EX// Size=0x108 (Id=1349)
{
    unsigned short Count;// Offset=0x0 Size=0x2
    unsigned short Size;// Offset=0x2 Size=0x2
    unsigned long Reserved;// Offset=0x4 Size=0x4
    union // Size=0x8 (Id=0)
    {
        unsigned long long Bitmap[1];// Offset=0x8 Size=0x8
        unsigned long long StaticBitmap[32];// Offset=0x8 Size=0x100
    };
};

struct _KSTATIC_AFFINITY_BLOCK// Size=0x820 (Id=1421)
{
    union // Size=0x108 (Id=0)
    {
        struct _KAFFINITY_EX KeFlushTbAffinity;// Offset=0x0 Size=0x108
        struct _KAFFINITY_EX KeFlushWbAffinity;// Offset=0x0 Size=0x108
        struct _KAFFINITY_EX KeSlistRollbackAffinity;// Offset=0x0 Size=0x108
        struct _KAFFINITY_EX KeSyncContextAffinity;// Offset=0x0 Size=0x108
        struct _KAFFINITY_EX KeRcuAffinity;// Offset=0x0 Size=0x108
    };
    struct _KAFFINITY_EX KeFlushTbDeepIdleAffinity;// Offset=0x108 Size=0x108
    struct _KAFFINITY_EX KeIpiSendAffinity;// Offset=0x210 Size=0x108
    struct _KAFFINITY_EX KeIpiSendIpiSet;// Offset=0x318 Size=0x108
    unsigned long long Padding[128];// Offset=0x420 Size=0x400
};
