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
