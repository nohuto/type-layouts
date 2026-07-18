struct _RTL_BALANCED_NODE// Size=0x18 (Id=119)
{
    union // Size=0x10 (Id=0)
    {
        struct _RTL_BALANCED_NODE * Children[2];// Offset=0x0 Size=0x10
        struct _RTL_BALANCED_NODE * Left;// Offset=0x0 Size=0x8
        struct _RTL_BALANCED_NODE * Right;// Offset=0x8 Size=0x8
    };
    union // Size=0x1 (Id=0)
    {
        struct // Size=0x1 (Id=0)
        {
            union // Size=0x1 (Id=0)
            {
                unsigned char Red:1;// Offset=0x10 Size=0x1 BitOffset=0x0 BitSize=0x1
                unsigned char Balance:2;// Offset=0x10 Size=0x1 BitOffset=0x0 BitSize=0x2
            };
        };
        unsigned long long ParentValue;// Offset=0x10 Size=0x8
    };
};

struct _EX_PUSH_LOCK// Size=0x8 (Id=122)
{
    union // Size=0x8 (Id=0)
    {
        struct // Size=0x8 (Id=0)
        {
            unsigned long long Locked:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
            unsigned long long Waiting:1;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x1
            unsigned long long Waking:1;// Offset=0x0 Size=0x8 BitOffset=0x2 BitSize=0x1
            unsigned long long MultipleShared:1;// Offset=0x0 Size=0x8 BitOffset=0x3 BitSize=0x1
            unsigned long long Shared:60;// Offset=0x0 Size=0x8 BitOffset=0x4 BitSize=0x3c
        };
        unsigned long long Value;// Offset=0x0 Size=0x8
        void * Ptr;// Offset=0x0 Size=0x8
    };
};

struct _MMVAD_FLAGS// Size=0x4 (Id=926)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long Lock:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long LockContended:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long DeleteInProgress:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long NoChange:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long VadType:3;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x3
        unsigned long Protection:5;// Offset=0x0 Size=0x4 BitOffset=0x7 BitSize=0x5
        unsigned long PreferredNode:6;// Offset=0x0 Size=0x4 BitOffset=0xc BitSize=0x6
        unsigned long PageSize:2;// Offset=0x0 Size=0x4 BitOffset=0x12 BitSize=0x2
        unsigned long PrivateMemory:1;// Offset=0x0 Size=0x4 BitOffset=0x14 BitSize=0x1
    };
};

struct _MM_PRIVATE_VAD_FLAGS// Size=0x4 (Id=947)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long Lock:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long LockContended:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long DeleteInProgress:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long NoChange:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long VadType:3;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x3
        unsigned long Protection:5;// Offset=0x0 Size=0x4 BitOffset=0x7 BitSize=0x5
        unsigned long PreferredNode:6;// Offset=0x0 Size=0x4 BitOffset=0xc BitSize=0x6
        unsigned long PageSize:2;// Offset=0x0 Size=0x4 BitOffset=0x12 BitSize=0x2
        unsigned long PrivateMemoryAlwaysSet:1;// Offset=0x0 Size=0x4 BitOffset=0x14 BitSize=0x1
        unsigned long WriteWatch:1;// Offset=0x0 Size=0x4 BitOffset=0x15 BitSize=0x1
        unsigned long FixedLargePageSize:1;// Offset=0x0 Size=0x4 BitOffset=0x16 BitSize=0x1
        unsigned long ZeroFillPagesOptional:1;// Offset=0x0 Size=0x4 BitOffset=0x17 BitSize=0x1
        unsigned long Graphics:1;// Offset=0x0 Size=0x4 BitOffset=0x18 BitSize=0x1
        unsigned long Enclave:1;// Offset=0x0 Size=0x4 BitOffset=0x19 BitSize=0x1
        unsigned long ShadowStack:1;// Offset=0x0 Size=0x4 BitOffset=0x1a BitSize=0x1
        unsigned long PhysicalMemoryPfnsReferenced:1;// Offset=0x0 Size=0x4 BitOffset=0x1b BitSize=0x1
    };
};

struct _MM_GRAPHICS_VAD_FLAGS// Size=0x4 (Id=1054)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long Lock:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long LockContended:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long DeleteInProgress:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long NoChange:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long VadType:3;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x3
        unsigned long Protection:5;// Offset=0x0 Size=0x4 BitOffset=0x7 BitSize=0x5
        unsigned long PreferredNode:6;// Offset=0x0 Size=0x4 BitOffset=0xc BitSize=0x6
        unsigned long PageSize:2;// Offset=0x0 Size=0x4 BitOffset=0x12 BitSize=0x2
        unsigned long PrivateMemoryAlwaysSet:1;// Offset=0x0 Size=0x4 BitOffset=0x14 BitSize=0x1
        unsigned long WriteWatch:1;// Offset=0x0 Size=0x4 BitOffset=0x15 BitSize=0x1
        unsigned long FixedLargePageSize:1;// Offset=0x0 Size=0x4 BitOffset=0x16 BitSize=0x1
        unsigned long ZeroFillPagesOptional:1;// Offset=0x0 Size=0x4 BitOffset=0x17 BitSize=0x1
        unsigned long GraphicsAlwaysSet:1;// Offset=0x0 Size=0x4 BitOffset=0x18 BitSize=0x1
        unsigned long GraphicsUseCoherentBus:1;// Offset=0x0 Size=0x4 BitOffset=0x19 BitSize=0x1
        unsigned long GraphicsNoCache:1;// Offset=0x0 Size=0x4 BitOffset=0x1a BitSize=0x1
        unsigned long GraphicsPageProtection:3;// Offset=0x0 Size=0x4 BitOffset=0x1b BitSize=0x3
    };
};

struct _MM_SHARED_VAD_FLAGS// Size=0x4 (Id=1195)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long Lock:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long LockContended:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long DeleteInProgress:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long NoChange:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long VadType:3;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x3
        unsigned long Protection:5;// Offset=0x0 Size=0x4 BitOffset=0x7 BitSize=0x5
        unsigned long PreferredNode:6;// Offset=0x0 Size=0x4 BitOffset=0xc BitSize=0x6
        unsigned long PageSize:2;// Offset=0x0 Size=0x4 BitOffset=0x12 BitSize=0x2
        unsigned long PrivateMemoryAlwaysClear:1;// Offset=0x0 Size=0x4 BitOffset=0x14 BitSize=0x1
        unsigned long PrivateFixup:1;// Offset=0x0 Size=0x4 BitOffset=0x15 BitSize=0x1
        unsigned long HotPatchAllowed:1;// Offset=0x0 Size=0x4 BitOffset=0x16 BitSize=0x1
    };
};

union _anonymous_554// Size=0x4 (Id=554)
{
    unsigned long LongFlags;// Offset=0x0 Size=0x4
    struct _MMVAD_FLAGS VadFlags;// Offset=0x0 Size=0x4
    struct _MM_PRIVATE_VAD_FLAGS PrivateVadFlags;// Offset=0x0 Size=0x4
    struct _MM_GRAPHICS_VAD_FLAGS GraphicsVadFlags;// Offset=0x0 Size=0x4
    struct _MM_SHARED_VAD_FLAGS SharedVadFlags;// Offset=0x0 Size=0x4
    unsigned long VolatileVadLong;// Offset=0x0 Size=0x4
};

struct _MMVAD_FLAGS1// Size=0x4 (Id=946)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long CommitCharge:31;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1f
        unsigned long MemCommit:1;// Offset=0x0 Size=0x4 BitOffset=0x1f BitSize=0x1
    };
};

union _anonymous_555// Size=0x4 (Id=555)
{
    unsigned long LongFlags1;// Offset=0x0 Size=0x4
    struct _MMVAD_FLAGS1 VadFlags1;// Offset=0x0 Size=0x4
};

struct _MMVAD_SHORT// Size=0x40 (Id=556)
{
    union // Size=0x10 (Id=0)
    {
        struct _MMVAD_SHORT * NextVad;// Offset=0x0 Size=0x8
        void * ExtraCreateInfo;// Offset=0x8 Size=0x8
        struct _RTL_BALANCED_NODE VadNode;// Offset=0x0 Size=0x18
    };
    unsigned long StartingVpn;// Offset=0x18 Size=0x4
    unsigned long EndingVpn;// Offset=0x1c Size=0x4
    unsigned char StartingVpnHigh;// Offset=0x20 Size=0x1
    unsigned char EndingVpnHigh;// Offset=0x21 Size=0x1
    unsigned char CommitChargeHigh;// Offset=0x22 Size=0x1
    unsigned char SpareNT64VadUChar;// Offset=0x23 Size=0x1
    long ReferenceCount;// Offset=0x24 Size=0x4
    struct _EX_PUSH_LOCK PushLock;// Offset=0x28 Size=0x8
    union _anonymous_554 u;// Offset=0x30 Size=0x4
    union _anonymous_555 u1;// Offset=0x34 Size=0x4
    struct _MI_VAD_EVENT_BLOCK * EventList;// Offset=0x38 Size=0x8
};
