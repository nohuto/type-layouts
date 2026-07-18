struct _RTL_BALANCED_NODE// Size=0x18 (Id=35)
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

struct _EX_PUSH_LOCK// Size=0x8 (Id=81)
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

struct _MMVAD_FLAGS// Size=0x4 (Id=626)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long VadType:3;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x3
        unsigned long Protection:5;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x5
        unsigned long PreferredNode:6;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x6
        unsigned long NoChange:1;// Offset=0x0 Size=0x4 BitOffset=0xe BitSize=0x1
        unsigned long PrivateMemory:1;// Offset=0x0 Size=0x4 BitOffset=0xf BitSize=0x1
        unsigned long PrivateFixup:1;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x1
        unsigned long ManySubsections:1;// Offset=0x0 Size=0x4 BitOffset=0x11 BitSize=0x1
        unsigned long Enclave:1;// Offset=0x0 Size=0x4 BitOffset=0x12 BitSize=0x1
        unsigned long DeleteInProgress:1;// Offset=0x0 Size=0x4 BitOffset=0x13 BitSize=0x1
        unsigned long Spare:12;// Offset=0x0 Size=0x4 BitOffset=0x14 BitSize=0xc
    };
};

union _unnamed_233// Size=0x4 (Id=233)
{
    unsigned long LongFlags;// Offset=0x0 Size=0x4
    struct _MMVAD_FLAGS VadFlags;// Offset=0x0 Size=0x4
};

struct _MMVAD_FLAGS1// Size=0x4 (Id=738)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long CommitCharge:31;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1f
        unsigned long MemCommit:1;// Offset=0x0 Size=0x4 BitOffset=0x1f BitSize=0x1
    };
};

union _unnamed_234// Size=0x4 (Id=234)
{
    unsigned long LongFlags1;// Offset=0x0 Size=0x4
    struct _MMVAD_FLAGS1 VadFlags1;// Offset=0x0 Size=0x4
};

struct _MMVAD_SHORT// Size=0x40 (Id=235)
{
    union // Size=0x18 (Id=0)
    {
        struct _RTL_BALANCED_NODE VadNode;// Offset=0x0 Size=0x18
        struct _MMVAD_SHORT * NextVad;// Offset=0x0 Size=0x8
        unsigned long StartingVpn;// Offset=0x18 Size=0x4
    };
    unsigned long EndingVpn;// Offset=0x1c Size=0x4
    unsigned char StartingVpnHigh;// Offset=0x20 Size=0x1
    unsigned char EndingVpnHigh;// Offset=0x21 Size=0x1
    unsigned char CommitChargeHigh;// Offset=0x22 Size=0x1
    unsigned char SpareNT64VadUChar;// Offset=0x23 Size=0x1
    long ReferenceCount;// Offset=0x24 Size=0x4
    struct _EX_PUSH_LOCK PushLock;// Offset=0x28 Size=0x8
    union _unnamed_233 u;// Offset=0x30 Size=0x4
    union _unnamed_234 u1;// Offset=0x34 Size=0x4
    struct _MI_VAD_EVENT_BLOCK * EventList;// Offset=0x38 Size=0x8
};

struct _MMVAD_FLAGS2// Size=0x4 (Id=1280)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long FileOffset:24;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x18
        unsigned long Large:1;// Offset=0x0 Size=0x4 BitOffset=0x18 BitSize=0x1
        unsigned long TrimBehind:1;// Offset=0x0 Size=0x4 BitOffset=0x19 BitSize=0x1
        unsigned long Inherit:1;// Offset=0x0 Size=0x4 BitOffset=0x1a BitSize=0x1
        unsigned long CopyOnWrite:1;// Offset=0x0 Size=0x4 BitOffset=0x1b BitSize=0x1
        unsigned long NoValidationNeeded:1;// Offset=0x0 Size=0x4 BitOffset=0x1c BitSize=0x1
        unsigned long PrivateDemandZero:1;// Offset=0x0 Size=0x4 BitOffset=0x1d BitSize=0x1
        unsigned long Spare:2;// Offset=0x0 Size=0x4 BitOffset=0x1e BitSize=0x2
    };
};

union _unnamed_1070// Size=0x4 (Id=1070)
{
    unsigned long LongFlags2;// Offset=0x0 Size=0x4
    struct _MMVAD_FLAGS2 VadFlags2;// Offset=0x0 Size=0x4
};

struct _LIST_ENTRY// Size=0x10 (Id=20)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _MI_VAD_SEQUENTIAL_INFO// Size=0x8 (Id=1179)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long Length:12;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0xc
        unsigned long long Vpn:52;// Offset=0x0 Size=0x8 BitOffset=0xc BitSize=0x34
    };
};

union _unnamed_1071// Size=0x8 (Id=1071)
{
    struct _MI_VAD_SEQUENTIAL_INFO SequentialVa;// Offset=0x0 Size=0x8
    struct _MMEXTEND_INFO * ExtendedInfo;// Offset=0x0 Size=0x8
};

struct _MMVAD// Size=0x88 (Id=1072)
{
    struct _MMVAD_SHORT Core;// Offset=0x0 Size=0x40
    union _unnamed_1070 u2;// Offset=0x40 Size=0x4
    struct _SUBSECTION * Subsection;// Offset=0x48 Size=0x8
    struct _MMPTE * FirstPrototypePte;// Offset=0x50 Size=0x8
    struct _MMPTE * LastContiguousPte;// Offset=0x58 Size=0x8
    struct _LIST_ENTRY ViewLinks;// Offset=0x60 Size=0x10
    struct _EPROCESS * VadsProcess;// Offset=0x70 Size=0x8
    union _unnamed_1071 u4;// Offset=0x78 Size=0x8
    struct _FILE_OBJECT * FileObject;// Offset=0x80 Size=0x8
};
