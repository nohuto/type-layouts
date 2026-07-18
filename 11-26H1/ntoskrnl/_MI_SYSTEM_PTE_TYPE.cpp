struct _RTL_BITMAP_EX// Size=0x10 (Id=1254)
{
    unsigned long long SizeOfBitMap;// Offset=0x0 Size=0x8
    unsigned long long * Buffer;// Offset=0x8 Size=0x8
};

enum _MI_SYSTEM_VA_TYPE
{
    MiVaUnused=0,
    MiVaProcessSpace=1,
    MiVaBootLoaded=2,
    MiVaPfnDatabase=3,
    MiVaNonPagedPool=4,
    MiVaPagedPool=5,
    MiVaNonCachedMappings=6,
    MiVaSystemCache=7,
    MiVaSystemPtes=8,
    MiVaHal=9,
    MiVaNonCachedMappingsLarge=10,
    MiVaDriverImages=11,
    MiVaSystemPtesLarge=12,
    MiVaKernelStacks=13,
    MiVaSecureNonPagedPool=14,
    MiVaKernelShadowStacks=15,
    MiVaSoftWsles=16,
    MiVaSystemDataViews=17,
    MiVaKernelControlFlowGuard=18,
    MiVaKasan=19,
    MiVaMemoryTagging=20,
    MiVaMaximumType=21
};

struct _MI_SYSTEM_PTE_TYPE// Size=0x60 (Id=694)
{
    struct _RTL_BITMAP_EX Bitmap;// Offset=0x0 Size=0x10
    struct _RTL_BITMAP_EX TrackingBitmap;// Offset=0x10 Size=0x10
    struct _MMPTE * BasePte;// Offset=0x20 Size=0x8
    unsigned long Flags;// Offset=0x28 Size=0x4
    enum _MI_SYSTEM_VA_TYPE VaType;// Offset=0x2c Size=0x4
    unsigned long PteFailures;// Offset=0x30 Size=0x4
    long SpinLock;// Offset=0x34 Size=0x4
    unsigned long long TotalSystemPtes;// Offset=0x38 Size=0x8
    unsigned long long Hint;// Offset=0x40 Size=0x8
    unsigned long long LowestBitEverAllocated;// Offset=0x48 Size=0x8
    struct _MI_CACHED_PTES * CachedPtes;// Offset=0x50 Size=0x8
    unsigned long long TotalFreeSystemPtes;// Offset=0x58 Size=0x8
};
