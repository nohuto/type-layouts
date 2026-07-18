struct _unnamed_958// Size=0x1 (Id=958)
{
    struct // Size=0x1 (Id=0)
    {
        unsigned char PageAlignLargeAllocs:1;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char EnableDelayFree:1;// Offset=0x0 Size=0x1 BitOffset=0x1 BitSize=0x1
    };
};

union _RTL_HP_VS_CONFIG// Size=0x1 (Id=959)
{
    struct _unnamed_958 Flags;// Offset=0x0 Size=0x1
    unsigned char AllFields;// Offset=0x0 Size=0x1
};

struct _HEAP_SUBALLOCATOR_CALLBACKS// Size=0x38 (Id=911)
{
    unsigned long long Allocate;// Offset=0x0 Size=0x8
    unsigned long long Free;// Offset=0x8 Size=0x8
    unsigned long long Commit;// Offset=0x10 Size=0x8
    unsigned long long Decommit;// Offset=0x18 Size=0x8
    unsigned long long ExtendContext;// Offset=0x20 Size=0x8
    unsigned long long TlsCleanup;// Offset=0x28 Size=0x8
    unsigned long long AccessState;// Offset=0x30 Size=0x8
};

struct _HEAP_AFFINITY_MGR// Size=0x10 (Id=913)
{
    char MapInProgress;// Offset=0x0 Size=0x1
    char ContentionCount;// Offset=0x1 Size=0x1
    unsigned char ContentionCountLimit;// Offset=0x2 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char ConservativeAffinity:1;// Offset=0x3 Size=0x1 BitOffset=0x0 BitSize=0x1
    };
    unsigned long long LastContentionTime;// Offset=0x8 Size=0x8
};

struct _HEAP_VS_CONTEXT// Size=0x68 (Id=947)
{
    unsigned short SlotMapRef;// Offset=0x0 Size=0x2
    unsigned char AffinityMask;// Offset=0x2 Size=0x1
    unsigned char LockType;// Offset=0x3 Size=0x1
    union _RTL_HP_VS_CONFIG Config;// Offset=0x4 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char EliminatePointers:1;// Offset=0x5 Size=0x1 BitOffset=0x0 BitSize=0x1
    };
    short MemStatsOffset;// Offset=0x6 Size=0x2
    void * BackendCtx;// Offset=0x8 Size=0x8
    struct _HEAP_SUBALLOCATOR_CALLBACKS Callbacks;// Offset=0x10 Size=0x38
    struct _HEAP_AFFINITY_MGR AffinityMgr;// Offset=0x48 Size=0x10
    unsigned long long TotalCommittedUnits;// Offset=0x58 Size=0x8
    unsigned long long FreeCommittedUnits;// Offset=0x60 Size=0x8
};
