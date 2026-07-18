enum _STOR_POFX_PERF_STATE_UNIT
{
    StorPoFxPerfStateUnitOther=0,
    StorPoFxPerfStateUnitFrequency=1,
    StorPoFxPerfStateUnitBandwidth=2,
    StorPoFxPerfStateUnitMilliwatts=3,
    StorPoFxPerfStateUnitMaximum=4
};

enum _STOR_POFX_PERF_STATE_TYPE
{
    StorPoFxPerfStateTypeDiscrete=0,
    StorPoFxPerfStateTypeRange=1,
    StorPoFxPerfStateTypeMaximum=2
};

struct _anonymous_171// Size=0x8 (Id=171)
{
    unsigned long Count;// Offset=0x0 Size=0x4
    unsigned long Offset;// Offset=0x4 Size=0x4
};

struct _anonymous_172// Size=0x10 (Id=172)
{
    unsigned long long Minimum;// Offset=0x0 Size=0x8
    unsigned long long Maximum;// Offset=0x8 Size=0x8
};

union _anonymous_173// Size=0x10 (Id=173)
{
    struct _anonymous_171 Discrete;// Offset=0x0 Size=0x8
    struct _anonymous_172 Range;// Offset=0x0 Size=0x10
};

struct _STOR_POFX_COMPONENT_PERF_SET// Size=0x28 (Id=174)
{
    unsigned long Version;// Offset=0x0 Size=0x4
    unsigned long Size;// Offset=0x4 Size=0x4
    unsigned long long Flags;// Offset=0x8 Size=0x8
    enum _STOR_POFX_PERF_STATE_UNIT PStateUnit;// Offset=0x10 Size=0x4
    enum _STOR_POFX_PERF_STATE_TYPE PStateType;// Offset=0x14 Size=0x4
    union _anonymous_173 PStates;// Offset=0x18 Size=0x10
};
