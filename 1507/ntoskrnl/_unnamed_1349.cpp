struct _unnamed_1347// Size=0x4 (Id=1347)
{
    unsigned long PollInterval;// Offset=0x0 Size=0x4
};

struct _unnamed_1348// Size=0x18 (Id=1348)
{
    unsigned long PollInterval;// Offset=0x0 Size=0x4
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long SwitchToPollingThreshold;// Offset=0x8 Size=0x4
    unsigned long SwitchToPollingWindow;// Offset=0xc Size=0x4
    unsigned long ErrorThreshold;// Offset=0x10 Size=0x4
    unsigned long ErrorThresholdWindow;// Offset=0x14 Size=0x4
};

union _unnamed_1349// Size=0x18 (Id=1349)
{
    struct _unnamed_1347 Polled;// Offset=0x0 Size=0x4
    struct _unnamed_1348 Interrupt;// Offset=0x0 Size=0x18
    struct _unnamed_1348 LocalInterrupt;// Offset=0x0 Size=0x18
    struct _unnamed_1348 Sci;// Offset=0x0 Size=0x18
    struct _unnamed_1348 Nmi;// Offset=0x0 Size=0x18
};
