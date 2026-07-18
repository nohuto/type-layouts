union _TIMELINE_BITMAP// Size=0x8 (Id=1760)
{
    unsigned long long Value;// Offset=0x0 Size=0x8
    unsigned long EndTime;// Offset=0x0 Size=0x4
    unsigned long Bitmap;// Offset=0x4 Size=0x4
};

struct _THREAD_ENERGY_VALUES// Size=0xc8 (Id=1153)
{
    unsigned long long Cycles[4][2];// Offset=0x0 Size=0x40
    unsigned long long AttributedCycles[4][2];// Offset=0x40 Size=0x40
    unsigned long long WorkOnBehalfCycles[4][2];// Offset=0x80 Size=0x40
    union _TIMELINE_BITMAP CpuTimeline;// Offset=0xc0 Size=0x8
};
