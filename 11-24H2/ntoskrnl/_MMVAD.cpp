struct _RTL_BALANCED_NODE// Size=0x18 (Id=116)
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

struct _EX_PUSH_LOCK// Size=0x8 (Id=120)
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

struct _MMVAD_FLAGS// Size=0x4 (Id=1124)
{
    union // Size=0x4 (Id=0)
    {
        struct // Size=0x4 (Id=0)
        {
            unsigned long Lock:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
            unsigned long LockContended:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
            unsigned long DeleteInProgress:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
            unsigned long NoChange:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
            unsigned long VadType:3;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x3
            unsigned long Protection:5;// Offset=0x0 Size=0x4 BitOffset=0x7 BitSize=0x5
            unsigned long PreferredNode:7;// Offset=0x0 Size=0x4 BitOffset=0xc BitSize=0x7
            unsigned long PageSize:2;// Offset=0x0 Size=0x4 BitOffset=0x13 BitSize=0x2
            unsigned long PrivateMemory:1;// Offset=0x0 Size=0x4 BitOffset=0x15 BitSize=0x1
        };
        unsigned long EntireField;// Offset=0x0 Size=0x4
    };
};

struct _MM_PRIVATE_VAD_FLAGS// Size=0x4 (Id=1151)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long Lock:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long LockContended:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long DeleteInProgress:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long NoChange:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long VadType:3;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x3
        unsigned long Protection:5;// Offset=0x0 Size=0x4 BitOffset=0x7 BitSize=0x5
        unsigned long PreferredNode:7;// Offset=0x0 Size=0x4 BitOffset=0xc BitSize=0x7
        unsigned long PageSize:2;// Offset=0x0 Size=0x4 BitOffset=0x13 BitSize=0x2
        unsigned long PrivateMemoryAlwaysSet:1;// Offset=0x0 Size=0x4 BitOffset=0x15 BitSize=0x1
        unsigned long WriteWatch:1;// Offset=0x0 Size=0x4 BitOffset=0x16 BitSize=0x1
        unsigned long FixedLargePageSize:1;// Offset=0x0 Size=0x4 BitOffset=0x17 BitSize=0x1
        unsigned long ZeroFillPagesOptional:1;// Offset=0x0 Size=0x4 BitOffset=0x18 BitSize=0x1
        unsigned long MemCommit:1;// Offset=0x0 Size=0x4 BitOffset=0x19 BitSize=0x1
        unsigned long Graphics:1;// Offset=0x0 Size=0x4 BitOffset=0x1a BitSize=0x1
        unsigned long Enclave:1;// Offset=0x0 Size=0x4 BitOffset=0x1b BitSize=0x1
        unsigned long ShadowStack:1;// Offset=0x0 Size=0x4 BitOffset=0x1c BitSize=0x1
        unsigned long PhysicalMemoryPfnsReferenced:1;// Offset=0x0 Size=0x4 BitOffset=0x1d BitSize=0x1
    };
};

struct _MM_GRAPHICS_VAD_FLAGS// Size=0x4 (Id=1274)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long Lock:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long LockContended:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long DeleteInProgress:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long NoChange:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long VadType:3;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x3
        unsigned long Protection:5;// Offset=0x0 Size=0x4 BitOffset=0x7 BitSize=0x5
        unsigned long PreferredNode:7;// Offset=0x0 Size=0x4 BitOffset=0xc BitSize=0x7
        unsigned long PageSize:2;// Offset=0x0 Size=0x4 BitOffset=0x13 BitSize=0x2
        unsigned long PrivateMemoryAlwaysSet:1;// Offset=0x0 Size=0x4 BitOffset=0x15 BitSize=0x1
        unsigned long WriteWatch:1;// Offset=0x0 Size=0x4 BitOffset=0x16 BitSize=0x1
        unsigned long FixedLargePageSize:1;// Offset=0x0 Size=0x4 BitOffset=0x17 BitSize=0x1
        unsigned long ZeroFillPagesOptional:1;// Offset=0x0 Size=0x4 BitOffset=0x18 BitSize=0x1
        unsigned long MemCommit:1;// Offset=0x0 Size=0x4 BitOffset=0x19 BitSize=0x1
        unsigned long GraphicsAlwaysSet:1;// Offset=0x0 Size=0x4 BitOffset=0x1a BitSize=0x1
        unsigned long GraphicsUseCoherentBus:1;// Offset=0x0 Size=0x4 BitOffset=0x1b BitSize=0x1
        unsigned long GraphicsNoCache:1;// Offset=0x0 Size=0x4 BitOffset=0x1c BitSize=0x1
        unsigned long GraphicsPageProtection:3;// Offset=0x0 Size=0x4 BitOffset=0x1d BitSize=0x3
    };
};

struct _MM_SHARED_VAD_FLAGS// Size=0x4 (Id=1453)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long Lock:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long LockContended:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long DeleteInProgress:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long NoChange:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long VadType:3;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x3
        unsigned long Protection:5;// Offset=0x0 Size=0x4 BitOffset=0x7 BitSize=0x5
        unsigned long PreferredNode:7;// Offset=0x0 Size=0x4 BitOffset=0xc BitSize=0x7
        unsigned long PageSize:2;// Offset=0x0 Size=0x4 BitOffset=0x13 BitSize=0x2
        unsigned long PrivateMemoryAlwaysClear:1;// Offset=0x0 Size=0x4 BitOffset=0x15 BitSize=0x1
        unsigned long PrivateFixup:1;// Offset=0x0 Size=0x4 BitOffset=0x16 BitSize=0x1
        unsigned long HotPatchState:2;// Offset=0x0 Size=0x4 BitOffset=0x17 BitSize=0x2
    };
};

union _unnamed_695// Size=0x4 (Id=695)
{
    unsigned long LongFlags;// Offset=0x0 Size=0x4
    struct _MMVAD_FLAGS VadFlags;// Offset=0x0 Size=0x4
    struct _MM_PRIVATE_VAD_FLAGS PrivateVadFlags;// Offset=0x0 Size=0x4
    struct _MM_GRAPHICS_VAD_FLAGS GraphicsVadFlags;// Offset=0x0 Size=0x4
    struct _MM_SHARED_VAD_FLAGS SharedVadFlags;// Offset=0x0 Size=0x4
    unsigned long VolatileVadLong;// Offset=0x0 Size=0x4
};

union _unnamed_696// Size=0x8 (Id=696)
{
    struct _MI_VAD_EVENT_BLOCK * EventList;// Offset=0x0 Size=0x8
};

struct _MMVAD_SHORT// Size=0x40 (Id=697)
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
    union _unnamed_695 u;// Offset=0x30 Size=0x4
    unsigned long CommitCharge;// Offset=0x34 Size=0x4
    union _unnamed_696 u5;// Offset=0x38 Size=0x8
};

struct _MMVAD_FLAGS2// Size=0x4 (Id=2077)
{
    union // Size=0x4 (Id=0)
    {
        struct // Size=0x4 (Id=0)
        {
            unsigned long Large:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
            unsigned long TrimBehind:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
            unsigned long Inherit:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
            unsigned long NoValidationNeeded:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
            unsigned long PrivateDemandZero:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
            unsigned long ImageMappingExtended:1;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1
            unsigned long Spare:26;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1a
        };
        unsigned long LongFlags;// Offset=0x0 Size=0x4
    };
};

struct _LIST_ENTRY// Size=0x10 (Id=4)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _MI_VAD_SEQUENTIAL_INFO// Size=0x8 (Id=2402)
{
    union // Size=0x8 (Id=0)
    {
        struct // Size=0x8 (Id=0)
        {
            unsigned long long Length:12;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0xc
            unsigned long long Vpn:51;// Offset=0x0 Size=0x8 BitOffset=0xc BitSize=0x33
            unsigned long long MustBeZero:1;// Offset=0x0 Size=0x8 BitOffset=0x3f BitSize=0x1
        };
        unsigned long long EntireField;// Offset=0x0 Size=0x8
    };
};

union _unnamed_2056// Size=0x8 (Id=2056)
{
    struct _MI_VAD_SEQUENTIAL_INFO SequentialVa;// Offset=0x0 Size=0x8
    struct _MMEXTEND_INFO * ExtendedInfo;// Offset=0x0 Size=0x8
};

struct _MMVAD// Size=0x88 (Id=2057)
{
    struct _MMVAD_SHORT Core;// Offset=0x0 Size=0x40
    struct _MMVAD_FLAGS2 VadFlags2;// Offset=0x40 Size=0x4
    struct _SUBSECTION * Subsection;// Offset=0x48 Size=0x8
    struct _MMPTE * FirstPrototypePte;// Offset=0x50 Size=0x8
    struct _MMPTE * LastContiguousPte;// Offset=0x58 Size=0x8
    struct _LIST_ENTRY ViewLinks;// Offset=0x60 Size=0x10
    struct _EPROCESS * VadsProcess;// Offset=0x70 Size=0x8
    union _unnamed_2056 u4;// Offset=0x78 Size=0x8
    struct _FILE_OBJECT * FileObject;// Offset=0x80 Size=0x8
};
