struct _unnamed_599// Size=0x4 (Id=599)
{
    unsigned long PollInterval;// Offset=0x0 Size=0x4
};

struct _unnamed_600// Size=0x18 (Id=600)
{
    unsigned long PollInterval;// Offset=0x0 Size=0x4
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long SwitchToPollingThreshold;// Offset=0x8 Size=0x4
    unsigned long SwitchToPollingWindow;// Offset=0xc Size=0x4
    unsigned long ErrorThreshold;// Offset=0x10 Size=0x4
    unsigned long ErrorThresholdWindow;// Offset=0x14 Size=0x4
};

union _unnamed_601// Size=0x18 (Id=601)
{
    struct _unnamed_599 Polled;// Offset=0x0 Size=0x4
    struct _unnamed_600 Interrupt;// Offset=0x0 Size=0x18
    struct _unnamed_600 LocalInterrupt;// Offset=0x0 Size=0x18
    struct _unnamed_600 Sci;// Offset=0x0 Size=0x18
    struct _unnamed_600 Nmi;// Offset=0x0 Size=0x18
    struct _unnamed_600 Sea;// Offset=0x0 Size=0x18
    struct _unnamed_600 Sei;// Offset=0x0 Size=0x18
    struct _unnamed_600 Gsiv;// Offset=0x0 Size=0x18
};
