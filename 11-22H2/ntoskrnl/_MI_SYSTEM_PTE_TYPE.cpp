struct _RTL_BITMAP_EX// Size=0x10 (Id=1111)
{
    unsigned long long SizeOfBitMap;// Offset=0x0 Size=0x8
    unsigned long long * Buffer;// Offset=0x8 Size=0x8
};

enum _MI_SYSTEM_VA_TYPE
{
    MiVaUnused=0,
    MiVaSessionSpace=1,
    MiVaProcessSpace=2,
    MiVaBootLoaded=3,
    MiVaPfnDatabase=4,
    MiVaNonPagedPool=5,
    MiVaPagedPool=6,
    MiVaSpecialPoolPaged=7,
    MiVaSystemCache=8,
    MiVaSystemPtes=9,
    MiVaHal=10,
    MiVaFormerlySessionGlobalSpace=11,
    MiVaDriverImages=12,
    MiVaSystemPtesLarge=13,
    MiVaKernelStacks=14,
    MiVaSecureNonPagedPool=15,
    MiVaKernelShadowStacks=16,
    MiVaKasan=17,
    MiVaMaximumType=18
};

struct _MI_SYSTEM_PTE_TYPE// Size=0x58 (Id=643)
{
    struct _RTL_BITMAP_EX Bitmap;// Offset=0x0 Size=0x10
    struct _MMPTE * BasePte;// Offset=0x10 Size=0x8
    unsigned long Flags;// Offset=0x18 Size=0x4
    enum _MI_SYSTEM_VA_TYPE VaType;// Offset=0x1c Size=0x4
    unsigned long PteFailures;// Offset=0x20 Size=0x4
    unsigned long long SpinLock;// Offset=0x28 Size=0x8
    unsigned long long TotalSystemPtes;// Offset=0x30 Size=0x8
    unsigned long long Hint;// Offset=0x38 Size=0x8
    unsigned long long LowestBitEverAllocated;// Offset=0x40 Size=0x8
    struct _MI_CACHED_PTES * CachedPtes;// Offset=0x48 Size=0x8
    unsigned long long TotalFreeSystemPtes;// Offset=0x50 Size=0x8
};
