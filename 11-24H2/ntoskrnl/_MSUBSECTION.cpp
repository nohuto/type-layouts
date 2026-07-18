struct _RTL_AVL_TREE// Size=0x8 (Id=117)
{
    struct _RTL_BALANCED_NODE * Root;// Offset=0x0 Size=0x8
};

union _MMSUBSECTION_FLAGS// Size=0x4 (Id=2083)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long SubsectionAccessed:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long Protection:5;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x5
        unsigned long StartingSector4132:10;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0xa
        unsigned long SubsectionStatic:1;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x1
        unsigned long GlobalMemory:1;// Offset=0x0 Size=0x4 BitOffset=0x11 BitSize=0x1
        unsigned long Spare:1;// Offset=0x0 Size=0x4 BitOffset=0x12 BitSize=0x1
        unsigned long OnDereferenceList:1;// Offset=0x0 Size=0x4 BitOffset=0x13 BitSize=0x1
        unsigned long SectorEndOffset:12;// Offset=0x0 Size=0x4 BitOffset=0x14 BitSize=0xc
    };
    unsigned long EntireField;// Offset=0x0 Size=0x4
};

struct _MI_SUBSECTION_ENTRY1// Size=0x4 (Id=1484)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long CrossPartitionReferences:30;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1e
        unsigned long SubsectionMappedLarge:2;// Offset=0x0 Size=0x4 BitOffset=0x1e BitSize=0x2
    };
};

union _unnamed_1262// Size=0x4 (Id=1262)
{
    struct _MI_SUBSECTION_ENTRY1 e1;// Offset=0x0 Size=0x4
    unsigned long EntireField;// Offset=0x0 Size=0x4
};

struct _SUBSECTION// Size=0x38 (Id=1263)
{
    struct _CONTROL_AREA * ControlArea;// Offset=0x0 Size=0x8
    struct _MMPTE * SubsectionBase;// Offset=0x8 Size=0x8
    struct _SUBSECTION * NextSubsection;// Offset=0x10 Size=0x8
    union // Size=0x8 (Id=0)
    {
        struct _RTL_AVL_TREE GlobalPerSessionHead;// Offset=0x18 Size=0x8
        struct _MI_CONTROL_AREA_WAIT_BLOCK * CreationWaitList;// Offset=0x18 Size=0x8
    };
    union _MMSUBSECTION_FLAGS SubsectionFlags;// Offset=0x20 Size=0x4
    unsigned long StartingSector;// Offset=0x24 Size=0x4
    unsigned long NumberOfFullSectors;// Offset=0x28 Size=0x4
    unsigned long PtesInSubsection;// Offset=0x2c Size=0x4
    union _unnamed_1262 u1;// Offset=0x30 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long UnusedPtes:30;// Offset=0x34 Size=0x4 BitOffset=0x0 BitSize=0x1e
        unsigned long ExtentQueryNeeded:1;// Offset=0x34 Size=0x4 BitOffset=0x1e BitSize=0x1
        unsigned long Spare:1;// Offset=0x34 Size=0x4 BitOffset=0x1f BitSize=0x1
    };
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

struct _LIST_ENTRY// Size=0x10 (Id=4)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _unnamed_1578// Size=0x8 (Id=1578)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long AllocationType:3;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x3
        unsigned long long Inserted:1;// Offset=0x0 Size=0x8 BitOffset=0x3 BitSize=0x1
    };
};

struct _unnamed_1579// Size=0x8 (Id=1579)
{
    unsigned long long PrototypePtesFlags;// Offset=0x0 Size=0x8
};

union _unnamed_1580// Size=0x8 (Id=1580)
{
    struct _unnamed_1578 e1;// Offset=0x0 Size=0x8
    struct _unnamed_1579 e2;// Offset=0x0 Size=0x8
};

struct _MI_PROTOTYPE_PTES_NODE// Size=0x20 (Id=1581)
{
    struct _RTL_BALANCED_NODE Node;// Offset=0x0 Size=0x18
    union _unnamed_1580 u1;// Offset=0x18 Size=0x8
};

struct _MSUBSECTION// Size=0x98 (Id=2219)
{
    struct _SUBSECTION Core;// Offset=0x0 Size=0x38
    struct _RTL_BALANCED_NODE SubsectionNode;// Offset=0x38 Size=0x18
    unsigned long long NumberOfMappedViews;// Offset=0x50 Size=0x8
    struct _LIST_ENTRY DereferenceList;// Offset=0x58 Size=0x10
    unsigned long NumberOfPfnReferences;// Offset=0x68 Size=0x4
    unsigned long LargeViews;// Offset=0x6c Size=0x4
    void * SubsectionExtentList;// Offset=0x70 Size=0x8
    struct _MI_PROTOTYPE_PTES_NODE ProtosNode;// Offset=0x78 Size=0x20
};
