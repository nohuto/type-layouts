struct _unnamed_681// Size=0x4 (Id=681)
{
    unsigned long PollInterval;// Offset=0x0 Size=0x4
};

struct _unnamed_682// Size=0x18 (Id=682)
{
    unsigned long PollInterval;// Offset=0x0 Size=0x4
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long SwitchToPollingThreshold;// Offset=0x8 Size=0x4
    unsigned long SwitchToPollingWindow;// Offset=0xc Size=0x4
    unsigned long ErrorThreshold;// Offset=0x10 Size=0x4
    unsigned long ErrorThresholdWindow;// Offset=0x14 Size=0x4
};

union _unnamed_683// Size=0x18 (Id=683)
{
    struct _unnamed_681 Polled;// Offset=0x0 Size=0x4
    struct _unnamed_682 Interrupt;// Offset=0x0 Size=0x18
    struct _unnamed_682 LocalInterrupt;// Offset=0x0 Size=0x18
    struct _unnamed_682 Sci;// Offset=0x0 Size=0x18
    struct _unnamed_682 Nmi;// Offset=0x0 Size=0x18
    struct _unnamed_682 Sea;// Offset=0x0 Size=0x18
    struct _unnamed_682 Sei;// Offset=0x0 Size=0x18
    struct _unnamed_682 Gsiv;// Offset=0x0 Size=0x18
};
