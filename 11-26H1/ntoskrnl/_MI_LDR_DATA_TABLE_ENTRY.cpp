struct _LIST_ENTRY// Size=0x10 (Id=3)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _UNICODE_STRING// Size=0x10 (Id=6)
{
    unsigned short Length;// Offset=0x0 Size=0x2
    unsigned short MaximumLength;// Offset=0x2 Size=0x2
    wchar_t * Buffer;// Offset=0x8 Size=0x8
};

union _unnamed_1241// Size=0x2 (Id=1241)
{
    struct // Size=0x2 (Id=0)
    {
        unsigned short SignatureLevel:4;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0x4
        unsigned short SignatureType:3;// Offset=0x0 Size=0x2 BitOffset=0x4 BitSize=0x3
        unsigned short Frozen:2;// Offset=0x0 Size=0x2 BitOffset=0x7 BitSize=0x2
        unsigned short HotPatch:1;// Offset=0x0 Size=0x2 BitOffset=0x9 BitSize=0x1
        unsigned short Unused:6;// Offset=0x0 Size=0x2 BitOffset=0xa BitSize=0x6
    };
    unsigned short EntireField;// Offset=0x0 Size=0x2
};

struct _KLDR_DATA_TABLE_ENTRY// Size=0xa0 (Id=1242)
{
    struct _LIST_ENTRY InLoadOrderLinks;// Offset=0x0 Size=0x10
    void * ExceptionTable;// Offset=0x10 Size=0x8
    unsigned long ExceptionTableSize;// Offset=0x18 Size=0x4
    void * GpValue;// Offset=0x20 Size=0x8
    struct _NON_PAGED_DEBUG_INFO * NonPagedDebugInfo;// Offset=0x28 Size=0x8
    void * DllBase;// Offset=0x30 Size=0x8
    void * EntryPoint;// Offset=0x38 Size=0x8
    unsigned long SizeOfImage;// Offset=0x40 Size=0x4
    struct _UNICODE_STRING FullDllName;// Offset=0x48 Size=0x10
    struct _UNICODE_STRING BaseDllName;// Offset=0x58 Size=0x10
    unsigned long Flags;// Offset=0x68 Size=0x4
    unsigned short LoadCount;// Offset=0x6c Size=0x2
    union _unnamed_1241 u1;// Offset=0x6e Size=0x2
    void * SectionPointer;// Offset=0x70 Size=0x8
    unsigned long CheckSum;// Offset=0x78 Size=0x4
    unsigned long CoverageSectionSize;// Offset=0x7c Size=0x4
    void * CoverageSection;// Offset=0x80 Size=0x8
    void * LoadedImports;// Offset=0x88 Size=0x8
    union // Size=0x8 (Id=0)
    {
        void * Spare;// Offset=0x90 Size=0x8
        struct _KLDR_DATA_TABLE_ENTRY * NtDataTableEntry;// Offset=0x90 Size=0x8
    };
    unsigned long SizeOfImageNotRounded;// Offset=0x98 Size=0x4
    unsigned long TimeDateStamp;// Offset=0x9c Size=0x4
};

union _MI_LDR_DATA_TABLE_ENTRY_FLAGS// Size=0x4 (Id=711)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long FullSize:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long LoadFinished:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long AliasedImage:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long EntireImageLocked:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long PageFileBacked:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long PageFileBackedImports:1;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1
        unsigned long PageFileBackedInProgress:1;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1
        unsigned long IsPatch:1;// Offset=0x0 Size=0x4 BitOffset=0x7 BitSize=0x1
        unsigned long BeingCreated:1;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x1
        unsigned long BeingDeleted:1;// Offset=0x0 Size=0x4 BitOffset=0x9 BitSize=0x1
        unsigned long InsertedInPsLoadedList:1;// Offset=0x0 Size=0x4 BitOffset=0xa BitSize=0x1
        unsigned long SubsectionCharged:1;// Offset=0x0 Size=0x4 BitOffset=0xb BitSize=0x1
        unsigned long NoHotPatch:1;// Offset=0x0 Size=0x4 BitOffset=0xc BitSize=0x1
        unsigned long ChargedSystemCommit:1;// Offset=0x0 Size=0x4 BitOffset=0xd BitSize=0x1
        unsigned long NotifiedVerifier:1;// Offset=0x0 Size=0x4 BitOffset=0xe BitSize=0x1
        unsigned long NotifiedShimEngine:1;// Offset=0x0 Size=0x4 BitOffset=0xf BitSize=0x1
        unsigned long NotifiedKasan:1;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x1
        unsigned long ScpAndRetpolinePerformed:1;// Offset=0x0 Size=0x4 BitOffset=0x11 BitSize=0x1
        unsigned long ReferencedControlArea:1;// Offset=0x0 Size=0x4 BitOffset=0x12 BitSize=0x1
        unsigned long ResolvingBootImports:1;// Offset=0x0 Size=0x4 BitOffset=0x13 BitSize=0x1
        unsigned long ImageProtectionChanged:1;// Offset=0x0 Size=0x4 BitOffset=0x14 BitSize=0x1
        unsigned long Spare:10;// Offset=0x0 Size=0x4 BitOffset=0x15 BitSize=0xa
    };
    unsigned long EntireField;// Offset=0x0 Size=0x4
};

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

struct _unnamed_708// Size=0x18 (Id=708)
{
    struct _LIST_ENTRY HotPatchList;// Offset=0x0 Size=0x10
    unsigned long Spare;// Offset=0x10 Size=0x4
};

struct _unnamed_709// Size=0x18 (Id=709)
{
    struct _LIST_ENTRY HotPatchListEntry;// Offset=0x0 Size=0x10
    unsigned long SequenceNumber;// Offset=0x10 Size=0x4
};

struct _MI_LDR_DATA_TABLE_ENTRY// Size=0x130 (Id=710)
{
    struct _KLDR_DATA_TABLE_ENTRY Ldr;// Offset=0x0 Size=0xa0
    struct _LIST_ENTRY ViewLinks;// Offset=0xa0 Size=0x10
    union // Size=0x8 (Id=0)
    {
        void * Address;// Offset=0xb0 Size=0x8
        struct // Size=0x8 (Id=0)
        {
            unsigned long long Type:2;// Offset=0xb0 Size=0x8 BitOffset=0x0 BitSize=0x2
        };
    };
    union _MI_LDR_DATA_TABLE_ENTRY_FLAGS Flags;// Offset=0xb8 Size=0x4
    unsigned long long ProtoPages;// Offset=0xc0 Size=0x8
    struct _MI_SECTION_LOCK_RANGES * SectionLocks;// Offset=0xc8 Size=0x8
    struct _RTL_BALANCED_NODE ImageNode;// Offset=0xd0 Size=0x18
    struct _EX_PUSH_LOCK ImageLock;// Offset=0xe8 Size=0x8
    struct _ETHREAD * LockOwnerThread;// Offset=0xf0 Size=0x8
    struct _KLDR_DATA_TABLE_ENTRY * HotPatchPeer;// Offset=0xf8 Size=0x8
    union // Size=0x18 (Id=0)
    {
        struct _unnamed_708 Base;// Offset=0x100 Size=0x18
        struct _unnamed_709 Patch;// Offset=0x100 Size=0x18
    };
    struct _MI_RETPOLINE_RELOCATION_INFORMATION * RetpolineInfo;// Offset=0x118 Size=0x8
    struct _IMAGE_SECTION_HEADER * FirstSection;// Offset=0x120 Size=0x8
    unsigned long SectionCount;// Offset=0x128 Size=0x4
};
