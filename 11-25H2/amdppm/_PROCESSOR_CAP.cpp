enum _PROCESSOR_PRESENCE
{
    ProcessorPresenceNt=0,
    ProcessorPresenceHv=1,
    ProcessorPresenceHidden=2
};

struct _PROCESSOR_CAP// Size=0x18 (Id=730)
{
    unsigned long Version;// Offset=0x0 Size=0x4
    unsigned long ProcessorId;// Offset=0x4 Size=0x4
    unsigned long PlatformCap;// Offset=0x8 Size=0x4
    unsigned long ThermalCap;// Offset=0xc Size=0x4
    unsigned long LimitReasons;// Offset=0x10 Size=0x4
    enum _PROCESSOR_PRESENCE Presence;// Offset=0x14 Size=0x4
};
