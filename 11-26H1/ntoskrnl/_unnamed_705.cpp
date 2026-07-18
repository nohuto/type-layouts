struct _MMVAD_FLAGS// Size=0x4 (Id=1166)
{
    union // Size=0x4 (Id=0)
    {
        struct // Size=0x4 (Id=0)
        {
            unsigned long DeleteInProgress:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
            unsigned long NoChange:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
            unsigned long VadType:3;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x3
            unsigned long Protection:5;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x5
            unsigned long PreferredNode:7;// Offset=0x0 Size=0x4 BitOffset=0xa BitSize=0x7
            unsigned long PageSize:2;// Offset=0x0 Size=0x4 BitOffset=0x11 BitSize=0x2
            unsigned long PrivateMemory:1;// Offset=0x0 Size=0x4 BitOffset=0x13 BitSize=0x1
        };
        unsigned long EntireField;// Offset=0x0 Size=0x4
    };
};

struct _MM_PRIVATE_VAD_FLAGS// Size=0x4 (Id=1196)
{
    union // Size=0x4 (Id=0)
    {
        struct // Size=0x4 (Id=0)
        {
            unsigned long DeleteInProgress:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
            unsigned long NoChange:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
            unsigned long VadType:3;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x3
            unsigned long Protection:5;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x5
            unsigned long PreferredNode:7;// Offset=0x0 Size=0x4 BitOffset=0xa BitSize=0x7
            unsigned long PageSize:2;// Offset=0x0 Size=0x4 BitOffset=0x11 BitSize=0x2
            unsigned long PrivateMemoryAlwaysSet:1;// Offset=0x0 Size=0x4 BitOffset=0x13 BitSize=0x1
            unsigned long WriteWatch:1;// Offset=0x0 Size=0x4 BitOffset=0x14 BitSize=0x1
            unsigned long FixedLargePageSize:1;// Offset=0x0 Size=0x4 BitOffset=0x15 BitSize=0x1
            unsigned long MemCommit:1;// Offset=0x0 Size=0x4 BitOffset=0x16 BitSize=0x1
            unsigned long Enclave:1;// Offset=0x0 Size=0x4 BitOffset=0x17 BitSize=0x1
            unsigned long ShadowStack:1;// Offset=0x0 Size=0x4 BitOffset=0x18 BitSize=0x1
            unsigned long PhysicalMemoryPfnsReferenced:1;// Offset=0x0 Size=0x4 BitOffset=0x19 BitSize=0x1
            unsigned long SecurePages:1;// Offset=0x0 Size=0x4 BitOffset=0x1a BitSize=0x1
            unsigned long Tagged:1;// Offset=0x0 Size=0x4 BitOffset=0x1b BitSize=0x1
        };
        unsigned long EntireField;// Offset=0x0 Size=0x4
    };
};

struct _MM_SHARED_VAD_FLAGS// Size=0x4 (Id=1517)
{
    union // Size=0x4 (Id=0)
    {
        struct // Size=0x4 (Id=0)
        {
            unsigned long DeleteInProgress:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
            unsigned long NoChange:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
            unsigned long VadType:3;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x3
            unsigned long Protection:5;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x5
            unsigned long PreferredNode:7;// Offset=0x0 Size=0x4 BitOffset=0xa BitSize=0x7
            unsigned long PageSize:2;// Offset=0x0 Size=0x4 BitOffset=0x11 BitSize=0x2
            unsigned long PrivateMemoryAlwaysClear:1;// Offset=0x0 Size=0x4 BitOffset=0x13 BitSize=0x1
            unsigned long PrivateFixup:1;// Offset=0x0 Size=0x4 BitOffset=0x14 BitSize=0x1
            unsigned long HotPatchState:2;// Offset=0x0 Size=0x4 BitOffset=0x15 BitSize=0x2
            unsigned long SecurePages:1;// Offset=0x0 Size=0x4 BitOffset=0x17 BitSize=0x1
        };
        unsigned long EntireField;// Offset=0x0 Size=0x4
    };
};

union _unnamed_705// Size=0x4 (Id=705)
{
    unsigned long LongFlags;// Offset=0x0 Size=0x4
    struct _MMVAD_FLAGS VadFlags;// Offset=0x0 Size=0x4
    struct _MM_PRIVATE_VAD_FLAGS PrivateVadFlags;// Offset=0x0 Size=0x4
    struct _MM_SHARED_VAD_FLAGS SharedVadFlags;// Offset=0x0 Size=0x4
    unsigned long VolatileVadLong;// Offset=0x0 Size=0x4
};
