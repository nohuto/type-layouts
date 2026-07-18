enum _PERFINFO_DYNAMIC_TICK_DISABLE_REASON
{
    DynamicTickDisableReasonNone=0,
    DynamicTickDisableReasonBcdOverride=1,
    DynamicTickDisableReasonNoHwSupport=2,
    DynamicTickDisableReasonEmOverride=3,
    DynamicTickDisableReasonMax=4
};

struct _ETW_CLOCK_CONFIGURATION_EVENT// Size=0xc (Id=3870)
{
    unsigned long KnownType;// Offset=0x0 Size=0x4
    unsigned long Capabilities;// Offset=0x4 Size=0x4
    enum _PERFINFO_DYNAMIC_TICK_DISABLE_REASON DisableReason;// Offset=0x8 Size=0x4
};
