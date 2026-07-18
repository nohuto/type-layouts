struct _unnamed_621// Size=0x4 (Id=621)
{
    unsigned long PollInterval;// Offset=0x0 Size=0x4
};

struct _unnamed_622// Size=0x18 (Id=622)
{
    unsigned long PollInterval;// Offset=0x0 Size=0x4
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long SwitchToPollingThreshold;// Offset=0x8 Size=0x4
    unsigned long SwitchToPollingWindow;// Offset=0xc Size=0x4
    unsigned long ErrorThreshold;// Offset=0x10 Size=0x4
    unsigned long ErrorThresholdWindow;// Offset=0x14 Size=0x4
};

union _unnamed_623// Size=0x18 (Id=623)
{
    struct _unnamed_621 Polled;// Offset=0x0 Size=0x4
    struct _unnamed_622 Interrupt;// Offset=0x0 Size=0x18
    struct _unnamed_622 LocalInterrupt;// Offset=0x0 Size=0x18
    struct _unnamed_622 Sci;// Offset=0x0 Size=0x18
    struct _unnamed_622 Nmi;// Offset=0x0 Size=0x18
    struct _unnamed_622 Sea;// Offset=0x0 Size=0x18
    struct _unnamed_622 Sei;// Offset=0x0 Size=0x18
    struct _unnamed_622 Gsiv;// Offset=0x0 Size=0x18
};
