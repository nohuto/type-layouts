union _TIMELINE_BITMAP// Size=0x8 (Id=425)
{
    unsigned long long Value;// Offset=0x0 Size=0x8
    unsigned long EndTime;// Offset=0x0 Size=0x4
    unsigned long Bitmap;// Offset=0x4 Size=0x4
};

struct _PROCESS_ENERGY_VALUES_EXTENSION// Size=0x48 (Id=382)
{
    union // Size=0x48 (Id=0)
    {
        union _TIMELINE_BITMAP Timelines[9];// Offset=0x0 Size=0x48
        union _TIMELINE_BITMAP CpuTimeline;// Offset=0x0 Size=0x8
        union _TIMELINE_BITMAP DiskTimeline;// Offset=0x8 Size=0x8
        union _TIMELINE_BITMAP NetworkTimeline;// Offset=0x10 Size=0x8
        union _TIMELINE_BITMAP MBBTimeline;// Offset=0x18 Size=0x8
        union _TIMELINE_BITMAP ForegroundTimeline;// Offset=0x20 Size=0x8
        union _TIMELINE_BITMAP DesktopVisibleTimeline;// Offset=0x28 Size=0x8
        union _TIMELINE_BITMAP CompositionRenderedTimeline;// Offset=0x30 Size=0x8
        union _TIMELINE_BITMAP CompositionDirtyGeneratedTimeline;// Offset=0x38 Size=0x8
        union _TIMELINE_BITMAP CompositionDirtyPropagatedTimeline;// Offset=0x40 Size=0x8
    };
};
