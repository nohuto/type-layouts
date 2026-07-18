enum _PROCESSOR_PRESENCE
{
    ProcessorPresenceNt=0,
    ProcessorPresenceHv=1,
    ProcessorPresenceHidden=2
};

struct _PROCESSOR_PERF_STATES_UPDATE// Size=0xc (Id=538)
{
    unsigned long MaxPerfPercent;// Offset=0x0 Size=0x4
    unsigned long ProcessorId;// Offset=0x4 Size=0x4
    enum _PROCESSOR_PRESENCE Presence;// Offset=0x8 Size=0x4
};
