struct _unnamed_197// Size=0x4 (Id=197)
{
    unsigned long PollInterval;// Offset=0x0 Size=0x4
};

struct _unnamed_198// Size=0x18 (Id=198)
{
    unsigned long PollInterval;// Offset=0x0 Size=0x4
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long SwitchToPollingThreshold;// Offset=0x8 Size=0x4
    unsigned long SwitchToPollingWindow;// Offset=0xc Size=0x4
    unsigned long ErrorThreshold;// Offset=0x10 Size=0x4
    unsigned long ErrorThresholdWindow;// Offset=0x14 Size=0x4
};

union _unnamed_199// Size=0x18 (Id=199)
{
    struct _unnamed_197 Polled;// Offset=0x0 Size=0x4
    struct _unnamed_198 Interrupt;// Offset=0x0 Size=0x18
    struct _unnamed_198 LocalInterrupt;// Offset=0x0 Size=0x18
    struct _unnamed_198 Sci;// Offset=0x0 Size=0x18
    struct _unnamed_198 Nmi;// Offset=0x0 Size=0x18
    struct _unnamed_198 Sea;// Offset=0x0 Size=0x18
    struct _unnamed_198 Sei;// Offset=0x0 Size=0x18
    struct _unnamed_198 Gsiv;// Offset=0x0 Size=0x18
};
