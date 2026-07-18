struct _anonymous_581// Size=0x4 (Id=581)
{
    unsigned long PollInterval;// Offset=0x0 Size=0x4
};

struct _anonymous_582// Size=0x18 (Id=582)
{
    unsigned long PollInterval;// Offset=0x0 Size=0x4
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long SwitchToPollingThreshold;// Offset=0x8 Size=0x4
    unsigned long SwitchToPollingWindow;// Offset=0xc Size=0x4
    unsigned long ErrorThreshold;// Offset=0x10 Size=0x4
    unsigned long ErrorThresholdWindow;// Offset=0x14 Size=0x4
};

union _anonymous_583// Size=0x18 (Id=583)
{
    struct _anonymous_581 Polled;// Offset=0x0 Size=0x4
    struct _anonymous_582 Interrupt;// Offset=0x0 Size=0x18
    struct _anonymous_582 LocalInterrupt;// Offset=0x0 Size=0x18
    struct _anonymous_582 Sci;// Offset=0x0 Size=0x18
    struct _anonymous_582 Nmi;// Offset=0x0 Size=0x18
    struct _anonymous_582 Sea;// Offset=0x0 Size=0x18
    struct _anonymous_582 Sei;// Offset=0x0 Size=0x18
    struct _anonymous_582 Gsiv;// Offset=0x0 Size=0x18
};
