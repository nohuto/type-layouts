struct _unnamed_431// Size=0x4 (Id=431)
{
    unsigned long PollInterval;// Offset=0x0 Size=0x4
};

struct _unnamed_432// Size=0x18 (Id=432)
{
    unsigned long PollInterval;// Offset=0x0 Size=0x4
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long SwitchToPollingThreshold;// Offset=0x8 Size=0x4
    unsigned long SwitchToPollingWindow;// Offset=0xc Size=0x4
    unsigned long ErrorThreshold;// Offset=0x10 Size=0x4
    unsigned long ErrorThresholdWindow;// Offset=0x14 Size=0x4
};

union _unnamed_433// Size=0x18 (Id=433)
{
    struct _unnamed_431 Polled;// Offset=0x0 Size=0x4
    struct _unnamed_432 Interrupt;// Offset=0x0 Size=0x18
    struct _unnamed_432 LocalInterrupt;// Offset=0x0 Size=0x18
    struct _unnamed_432 Sci;// Offset=0x0 Size=0x18
    struct _unnamed_432 Nmi;// Offset=0x0 Size=0x18
    struct _unnamed_432 Sea;// Offset=0x0 Size=0x18
    struct _unnamed_432 Sei;// Offset=0x0 Size=0x18
    struct _unnamed_432 Gsiv;// Offset=0x0 Size=0x18
};
