enum _POP_FX_RELATION_TYPE
{
    PopFxRelationTypeDevice=0,
    PopFxRelationTypeComponent=1,
    PopFxRelationTypeMax=2
};

union _unnamed_1531// Size=0x4 (Id=1531)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long Activating:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long Activated:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long ParentLinkValid:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long ChildLinkValid:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long ShallowestNonBlockingState:2;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x2
        unsigned long Reserved:26;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1a
    };
    unsigned long AsUlong;// Offset=0x0 Size=0x4
};

struct _LIST_ENTRY// Size=0x10 (Id=3)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _POP_FX_RELATION// Size=0x48 (Id=1532)
{
    enum _POP_FX_RELATION_TYPE RelationType;// Offset=0x0 Size=0x4
    unsigned long long RelationLock;// Offset=0x8 Size=0x8
    union _unnamed_1531 Flags;// Offset=0x10 Size=0x4
    struct _POP_FX_COMPONENT * ParentComponent;// Offset=0x18 Size=0x8
    struct _LIST_ENTRY ParentLink;// Offset=0x20 Size=0x10
    unsigned long long * ChildRelationLock;// Offset=0x30 Size=0x8
    struct _LIST_ENTRY ChildLink;// Offset=0x38 Size=0x10
};
