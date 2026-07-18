struct _LIST_ENTRY// Size=0x10 (Id=38)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _KAFFINITY_EX// Size=0x108 (Id=67)
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

struct _PROCESSOR_PACKAGE// Size=0x268 (Id=736)
{
    struct _LIST_ENTRY Link;// Offset=0x0 Size=0x10
    struct _LIST_ENTRY DevExtHead;// Offset=0x10 Size=0x10
    unsigned long Id;// Offset=0x20 Size=0x4
    unsigned long Total;// Offset=0x24 Size=0x4
    unsigned long Count;// Offset=0x28 Size=0x4
    struct _KAFFINITY_EX Affinity;// Offset=0x30 Size=0x108
    struct _PCT_PLATFORM_COUNTER_STATE * PlatformCounterState;// Offset=0x138 Size=0x8
    struct _LIST_ENTRY PhysicalCoreList;// Offset=0x140 Size=0x10
    unsigned char PctFinalized;// Offset=0x150 Size=0x1
    unsigned char SystemAffinityInitialized;// Offset=0x151 Size=0x1
    struct _KAFFINITY_EX SystemAffinity;// Offset=0x158 Size=0x108
    unsigned long long SystemAffinitySequence;// Offset=0x260 Size=0x8
};
