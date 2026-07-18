struct _LIST_ENTRY// Size=0x10 (Id=5)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

enum _DLRM_ACTION
{
    ActionNone=0,
    ActionScaleMax=1,
    ActionScaleMin=2,
    ActionScaleDown=3,
    ActionSetPowerModeBalanced=4,
    ActionSetPowerModeLowPower=5,
    ActionSetPowerModeHighPerformance=6,
    ActionUpdateTimeAtCurrentLinkSpeed=7,
    ActionTransitionToIdle=8,
    ActionTransitionToActive=9
};

union _unnamed_713// Size=0x1 (Id=713)
{
    struct // Size=0x1 (Id=0)
    {
        unsigned char FreeAfterProcessing:1;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char Reserved:7;// Offset=0x0 Size=0x1 BitOffset=0x1 BitSize=0x7
    };
    unsigned char AsUChar;// Offset=0x0 Size=0x1
};

struct _DLRM_WORK_ITEM// Size=0x18 (Id=714)
{
    struct _LIST_ENTRY ListEntry;// Offset=0x0 Size=0x10
    enum _DLRM_ACTION Action;// Offset=0x10 Size=0x4
    union _unnamed_713 Flags;// Offset=0x14 Size=0x1
};
