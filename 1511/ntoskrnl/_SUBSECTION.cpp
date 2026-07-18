struct _RTL_AVL_TREE// Size=0x8 (Id=36)
{
    struct _RTL_BALANCED_NODE * Root;// Offset=0x0 Size=0x8
};

struct _MMSUBSECTION_FLAGS// Size=0x4 (Id=554)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned short SubsectionAccessed:1;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0x1
        unsigned short Protection:5;// Offset=0x0 Size=0x2 BitOffset=0x1 BitSize=0x5
        unsigned short StartingSector4132:10;// Offset=0x0 Size=0x2 BitOffset=0x6 BitSize=0xa
        unsigned short SubsectionStatic:1;// Offset=0x2 Size=0x2 BitOffset=0x0 BitSize=0x1
        unsigned short GlobalMemory:1;// Offset=0x2 Size=0x2 BitOffset=0x1 BitSize=0x1
        unsigned short SubsectionMappedDirect:1;// Offset=0x2 Size=0x2 BitOffset=0x2 BitSize=0x1
        unsigned short OnDereferenceList:1;// Offset=0x2 Size=0x2 BitOffset=0x3 BitSize=0x1
        unsigned short SectorEndOffset:12;// Offset=0x2 Size=0x2 BitOffset=0x4 BitSize=0xc
    };
};

union _unnamed_1222// Size=0x4 (Id=1222)
{
    unsigned long LongFlags;// Offset=0x0 Size=0x4
    struct _MMSUBSECTION_FLAGS SubsectionFlags;// Offset=0x0 Size=0x4
};

union _unnamed_1223// Size=0x4 (Id=1223)
{
    unsigned long NumberOfChildViews;// Offset=0x0 Size=0x4
};

struct _unnamed_1224// Size=0x4 (Id=1224)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long AlignmentNoAccessPtes:31;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1f
        unsigned long DirtyPages:1;// Offset=0x0 Size=0x4 BitOffset=0x1f BitSize=0x1
    };
};

struct _SUBSECTION// Size=0x38 (Id=1225)
{
    struct _CONTROL_AREA * ControlArea;// Offset=0x0 Size=0x8
    struct _MMPTE * SubsectionBase;// Offset=0x8 Size=0x8
    struct _SUBSECTION * NextSubsection;// Offset=0x10 Size=0x8
    union // Size=0x20 (Id=0)
    {
        struct _RTL_AVL_TREE GlobalPerSessionHead;// Offset=0x18 Size=0x8
        struct _MI_SUBSECTION_WAIT_BLOCK * CreationWaitList;// Offset=0x18 Size=0x8
        struct _MI_PER_SESSION_PROTOS * SessionDriverProtos;// Offset=0x18 Size=0x8
    };
    union _unnamed_1222 u;// Offset=0x20 Size=0x4
    unsigned long StartingSector;// Offset=0x24 Size=0x4
    unsigned long NumberOfFullSectors;// Offset=0x28 Size=0x4
    unsigned long PtesInSubsection;// Offset=0x2c Size=0x4
    union _unnamed_1223 u1;// Offset=0x30 Size=0x4
    union // Size=0x4 (Id=0)
    {
        struct // Size=0x4 (Id=0)
        {
            unsigned long UnusedPtes:31;// Offset=0x34 Size=0x4 BitOffset=0x0 BitSize=0x1f
            unsigned long DirtyPages:1;// Offset=0x34 Size=0x4 BitOffset=0x1f BitSize=0x1
        };
        struct _unnamed_1224 u2;// Offset=0x34 Size=0x4
    };
};
