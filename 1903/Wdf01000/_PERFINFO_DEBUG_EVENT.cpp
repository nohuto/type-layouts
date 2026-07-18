enum _PERFINFO_DEBUG_EVENT_REASON
{
    PerfInfoDebugEventReceived=1,
    PerfInfoDebugEventContinued=2,
    PerfInfoDebugEventMax=3
};

struct _PERFINFO_DEBUG_EVENT// Size=0xc (Id=3805)
{
    unsigned long ProcessId;// Offset=0x0 Size=0x4
    unsigned long ThreadId;// Offset=0x4 Size=0x4
    enum _PERFINFO_DEBUG_EVENT_REASON Reason;// Offset=0x8 Size=0x4
};
