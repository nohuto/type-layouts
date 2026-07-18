struct _UNICODE_STRING// Size=0x10 (Id=217)
{
    unsigned short Length;// Offset=0x0 Size=0x2
    unsigned short MaximumLength;// Offset=0x2 Size=0x2
    wchar_t * Buffer;// Offset=0x8 Size=0x8
};

enum _PO_FX_PERF_STATE_UNIT
{
    PoFxPerfStateUnitOther=0,
    PoFxPerfStateUnitFrequency=1,
    PoFxPerfStateUnitBandwidth=2,
    PoFxPerfStateUnitMaximum=3
};

enum _PO_FX_PERF_STATE_TYPE
{
    PoFxPerfStateTypeDiscrete=0,
    PoFxPerfStateTypeRange=1,
    PoFxPerfStateTypeMaximum=2
};

struct _unnamed_1813// Size=0x10 (Id=1813)
{
    unsigned long Count;// Offset=0x0 Size=0x4
    struct _PO_FX_PERF_STATE * States;// Offset=0x8 Size=0x8
};

struct _unnamed_1814// Size=0x10 (Id=1814)
{
    unsigned long long Minimum;// Offset=0x0 Size=0x8
    unsigned long long Maximum;// Offset=0x8 Size=0x8
};

struct _PO_FX_COMPONENT_PERF_SET// Size=0x30 (Id=1815)
{
    struct _UNICODE_STRING Name;// Offset=0x0 Size=0x10
    unsigned long long Flags;// Offset=0x10 Size=0x8
    enum _PO_FX_PERF_STATE_UNIT Unit;// Offset=0x18 Size=0x4
    enum _PO_FX_PERF_STATE_TYPE Type;// Offset=0x1c Size=0x4
    union // Size=0x10 (Id=0)
    {
        struct _unnamed_1813 Discrete;// Offset=0x20 Size=0x10
        struct _unnamed_1814 Range;// Offset=0x20 Size=0x10
    };
};
