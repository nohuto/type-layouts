struct _LIST_ENTRY// Size=0x10 (Id=35)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _LDRP_CSLIST// Size=0x8 (Id=592)
{
    struct _SINGLE_LIST_ENTRY * Tail;// Offset=0x0 Size=0x8
};

enum _LDR_DDAG_STATE
{
    LdrModulesMerged=-5,
    LdrModulesInitError=-4,
    LdrModulesSnapError=-3,
    LdrModulesUnloaded=-2,
    LdrModulesUnloading=-1,
    LdrModulesPlaceHolder=0,
    LdrModulesMapping=1,
    LdrModulesMapped=2,
    LdrModulesWaitingForDependencies=3,
    LdrModulesSnapping=4,
    LdrModulesSnapped=5,
    LdrModulesCondensed=6,
    LdrModulesReadyToInit=7,
    LdrModulesInitializing=8,
    LdrModulesReadyToRun=9
};

struct _SINGLE_LIST_ENTRY// Size=0x8 (Id=36)
{
    struct _SINGLE_LIST_ENTRY * Next;// Offset=0x0 Size=0x8
};

struct _LDR_DDAG_NODE// Size=0x50 (Id=358)
{
    struct _LIST_ENTRY Modules;// Offset=0x0 Size=0x10
    struct _LDR_SERVICE_TAG_RECORD * ServiceTagList;// Offset=0x10 Size=0x8
    unsigned long LoadCount;// Offset=0x18 Size=0x4
    unsigned long LoadWhileUnloadingCount;// Offset=0x1c Size=0x4
    unsigned long LowestLink;// Offset=0x20 Size=0x4
    struct _LDRP_CSLIST Dependencies;// Offset=0x28 Size=0x8
    struct _LDRP_CSLIST IncomingDependencies;// Offset=0x30 Size=0x8
    enum _LDR_DDAG_STATE State;// Offset=0x38 Size=0x4
    struct _SINGLE_LIST_ENTRY CondenseLink;// Offset=0x40 Size=0x8
    unsigned long PreorderNumber;// Offset=0x48 Size=0x4
};
