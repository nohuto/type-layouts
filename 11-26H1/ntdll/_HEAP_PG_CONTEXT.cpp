struct _HEAP_SUBALLOCATOR_CALLBACKS// Size=0x38 (Id=252)
{
    unsigned long long Allocate;// Offset=0x0 Size=0x8
    unsigned long long Free;// Offset=0x8 Size=0x8
    unsigned long long Commit;// Offset=0x10 Size=0x8
    unsigned long long Decommit;// Offset=0x18 Size=0x8
    unsigned long long ExtendContext;// Offset=0x20 Size=0x8
    unsigned long long TlsCleanup;// Offset=0x28 Size=0x8
    unsigned long long AccessState;// Offset=0x30 Size=0x8
};

union _RTL_HP_PG_CONFIG// Size=0x1 (Id=491)
{
    struct // Size=0x1 (Id=0)
    {
        unsigned char UnderflowRate:4;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x4
        unsigned char PageAlignLargeAllocs:1;// Offset=0x0 Size=0x1 BitOffset=0x4 BitSize=0x1
    };
    unsigned char AllFields;// Offset=0x0 Size=0x1
};

struct _HEAP_PG_CONTEXT// Size=0x58 (Id=370)
{
    void * BackendCtx;// Offset=0x0 Size=0x8
    struct _HEAP_SUBALLOCATOR_CALLBACKS Callbacks;// Offset=0x8 Size=0x38
    void * HeapForLogging;// Offset=0x40 Size=0x8
    unsigned long long MaxAllocationSize;// Offset=0x48 Size=0x8
    unsigned long UseFillPatternOnly;// Offset=0x50 Size=0x4
    unsigned char FillPatternKey;// Offset=0x54 Size=0x1
    union _RTL_HP_PG_CONFIG Config;// Offset=0x55 Size=0x1
};
