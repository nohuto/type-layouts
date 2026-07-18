struct _unnamed_1008// Size=0x4 (Id=1008)
{
    unsigned long PollInterval;// Offset=0x0 Size=0x4
};

struct _unnamed_1009// Size=0x18 (Id=1009)
{
    unsigned long PollInterval;// Offset=0x0 Size=0x4
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long SwitchToPollingThreshold;// Offset=0x8 Size=0x4
    unsigned long SwitchToPollingWindow;// Offset=0xc Size=0x4
    unsigned long ErrorThreshold;// Offset=0x10 Size=0x4
    unsigned long ErrorThresholdWindow;// Offset=0x14 Size=0x4
};

union _unnamed_1010// Size=0x18 (Id=1010)
{
    struct _unnamed_1008 Polled;// Offset=0x0 Size=0x4
    struct _unnamed_1009 Interrupt;// Offset=0x0 Size=0x18
    struct _unnamed_1009 LocalInterrupt;// Offset=0x0 Size=0x18
    struct _unnamed_1009 Sci;// Offset=0x0 Size=0x18
    struct _unnamed_1009 Nmi;// Offset=0x0 Size=0x18
    struct _unnamed_1009 Sea;// Offset=0x0 Size=0x18
    struct _unnamed_1009 Sei;// Offset=0x0 Size=0x18
    struct _unnamed_1009 Gsiv;// Offset=0x0 Size=0x18
};
