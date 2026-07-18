union _TIMELINE_BITMAP// Size=0x8 (Id=446)
{
    unsigned long long Value;// Offset=0x0 Size=0x8
    unsigned long EndTime;// Offset=0x0 Size=0x4
    unsigned long Bitmap;// Offset=0x4 Size=0x4
};

union _ENERGY_STATE_DURATION// Size=0x8 (Id=357)
{
    unsigned long long Value;// Offset=0x0 Size=0x8
    unsigned long LastChangeTime;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long Duration:31;// Offset=0x4 Size=0x4 BitOffset=0x0 BitSize=0x1f
        unsigned long IsInState:1;// Offset=0x4 Size=0x4 BitOffset=0x1f BitSize=0x1
    };
};

struct _PROCESS_ENERGY_VALUES_EXTENSION// Size=0xa0 (Id=400)
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
