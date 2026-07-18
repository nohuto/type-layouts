struct _anonymous_378// Size=0x4 (Id=378)
{
    unsigned long PollInterval;// Offset=0x0 Size=0x4
};

struct _anonymous_379// Size=0x18 (Id=379)
{
    unsigned long PollInterval;// Offset=0x0 Size=0x4
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long SwitchToPollingThreshold;// Offset=0x8 Size=0x4
    unsigned long SwitchToPollingWindow;// Offset=0xc Size=0x4
    unsigned long ErrorThreshold;// Offset=0x10 Size=0x4
    unsigned long ErrorThresholdWindow;// Offset=0x14 Size=0x4
};

union _anonymous_380// Size=0x18 (Id=380)
{
    struct _anonymous_378 Polled;// Offset=0x0 Size=0x4
    struct _anonymous_379 Interrupt;// Offset=0x0 Size=0x18
    struct _anonymous_379 LocalInterrupt;// Offset=0x0 Size=0x18
    struct _anonymous_379 Sci;// Offset=0x0 Size=0x18
    struct _anonymous_379 Nmi;// Offset=0x0 Size=0x18
    struct _anonymous_379 Sea;// Offset=0x0 Size=0x18
    struct _anonymous_379 Sei;// Offset=0x0 Size=0x18
    struct _anonymous_379 Gsiv;// Offset=0x0 Size=0x18
};
