struct _unnamed_901// Size=0x4 (Id=901)
{
    unsigned long PollInterval;// Offset=0x0 Size=0x4
};

struct _unnamed_902// Size=0x18 (Id=902)
{
    unsigned long PollInterval;// Offset=0x0 Size=0x4
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long SwitchToPollingThreshold;// Offset=0x8 Size=0x4
    unsigned long SwitchToPollingWindow;// Offset=0xc Size=0x4
    unsigned long ErrorThreshold;// Offset=0x10 Size=0x4
    unsigned long ErrorThresholdWindow;// Offset=0x14 Size=0x4
};

union _unnamed_903// Size=0x18 (Id=903)
{
    struct _unnamed_901 Polled;// Offset=0x0 Size=0x4
    struct _unnamed_902 Interrupt;// Offset=0x0 Size=0x18
    struct _unnamed_902 LocalInterrupt;// Offset=0x0 Size=0x18
    struct _unnamed_902 Sci;// Offset=0x0 Size=0x18
    struct _unnamed_902 Nmi;// Offset=0x0 Size=0x18
    struct _unnamed_902 Sea;// Offset=0x0 Size=0x18
    struct _unnamed_902 Sei;// Offset=0x0 Size=0x18
    struct _unnamed_902 Gsiv;// Offset=0x0 Size=0x18
};
