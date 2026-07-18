union _ENERGY_STATE_DURATION// Size=0x8 (Id=345)
{
    unsigned long long Value;// Offset=0x0 Size=0x8
    unsigned long LastChangeTime;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long Duration:31;// Offset=0x4 Size=0x4 BitOffset=0x0 BitSize=0x1f
        unsigned long IsInState:1;// Offset=0x4 Size=0x4 BitOffset=0x1f BitSize=0x1
    };
};

struct _PROCESS_ENERGY_VALUES// Size=0x110 (Id=270)
{
    unsigned long long Cycles[4][2];// Offset=0x0 Size=0x40
    unsigned long long DiskEnergy;// Offset=0x40 Size=0x8
    unsigned long long NetworkTailEnergy;// Offset=0x48 Size=0x8
    unsigned long long MBBTailEnergy;// Offset=0x50 Size=0x8
    unsigned long long NetworkTxRxBytes;// Offset=0x58 Size=0x8
    unsigned long long MBBTxRxBytes;// Offset=0x60 Size=0x8
    union // Size=0x18 (Id=0)
    {
        union _ENERGY_STATE_DURATION Durations[3];// Offset=0x68 Size=0x18
        union _ENERGY_STATE_DURATION ForegroundDuration;// Offset=0x68 Size=0x8
    };
    union _ENERGY_STATE_DURATION DesktopVisibleDuration;// Offset=0x70 Size=0x8
    union _ENERGY_STATE_DURATION PSMForegroundDuration;// Offset=0x78 Size=0x8
    unsigned long CompositionRendered;// Offset=0x80 Size=0x4
    unsigned long CompositionDirtyGenerated;// Offset=0x84 Size=0x4
    unsigned long CompositionDirtyPropagated;// Offset=0x88 Size=0x4
    unsigned long Reserved1;// Offset=0x8c Size=0x4
    unsigned long long AttributedCycles[4][2];// Offset=0x90 Size=0x40
    unsigned long long WorkOnBehalfCycles[4][2];// Offset=0xd0 Size=0x40
};

union _TIMELINE_BITMAP// Size=0x8 (Id=432)
{
    unsigned long long Value;// Offset=0x0 Size=0x8
    unsigned long EndTime;// Offset=0x0 Size=0x4
    unsigned long Bitmap;// Offset=0x4 Size=0x4
};

struct _PROCESS_ENERGY_VALUES_EXTENSION// Size=0xa0 (Id=387)
{
    union // Size=0x70 (Id=0)
    {
        union _TIMELINE_BITMAP Timelines[14];// Offset=0x0 Size=0x70
        union _TIMELINE_BITMAP CpuTimeline;// Offset=0x0 Size=0x8
        union _TIMELINE_BITMAP DiskTimeline;// Offset=0x8 Size=0x8
        union _TIMELINE_BITMAP NetworkTimeline;// Offset=0x10 Size=0x8
        union _TIMELINE_BITMAP MBBTimeline;// Offset=0x18 Size=0x8
        union _TIMELINE_BITMAP ForegroundTimeline;// Offset=0x20 Size=0x8
        union _TIMELINE_BITMAP DesktopVisibleTimeline;// Offset=0x28 Size=0x8
        union _TIMELINE_BITMAP CompositionRenderedTimeline;// Offset=0x30 Size=0x8
        union _TIMELINE_BITMAP CompositionDirtyGeneratedTimeline;// Offset=0x38 Size=0x8
        union _TIMELINE_BITMAP CompositionDirtyPropagatedTimeline;// Offset=0x40 Size=0x8
        union _TIMELINE_BITMAP InputTimeline;// Offset=0x48 Size=0x8
        union _TIMELINE_BITMAP AudioInTimeline;// Offset=0x50 Size=0x8
        union _TIMELINE_BITMAP AudioOutTimeline;// Offset=0x58 Size=0x8
        union _TIMELINE_BITMAP DisplayRequiredTimeline;// Offset=0x60 Size=0x8
        union _TIMELINE_BITMAP KeyboardInputTimeline;// Offset=0x68 Size=0x8
    };
    union // Size=0x28 (Id=0)
    {
        union _ENERGY_STATE_DURATION Durations[5];// Offset=0x70 Size=0x28
        union _ENERGY_STATE_DURATION InputDuration;// Offset=0x70 Size=0x8
    };
    union _ENERGY_STATE_DURATION AudioInDuration;// Offset=0x78 Size=0x8
    union _ENERGY_STATE_DURATION AudioOutDuration;// Offset=0x80 Size=0x8
    union _ENERGY_STATE_DURATION DisplayRequiredDuration;// Offset=0x88 Size=0x8
    union _ENERGY_STATE_DURATION PSMBackgroundDuration;// Offset=0x90 Size=0x8
    unsigned long KeyboardInput;// Offset=0x98 Size=0x4
    unsigned long MouseInput;// Offset=0x9c Size=0x4
};

struct _PROCESS_EXTENDED_ENERGY_VALUES// Size=0x1b0 (Id=196)
{
    struct _PROCESS_ENERGY_VALUES Base;// Offset=0x0 Size=0x110
    struct _PROCESS_ENERGY_VALUES_EXTENSION Extension;// Offset=0x110 Size=0xa0
};
