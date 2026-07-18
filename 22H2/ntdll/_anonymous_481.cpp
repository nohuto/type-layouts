struct _anonymous_479// Size=0x4 (Id=479)
{
    unsigned long PollInterval;// Offset=0x0 Size=0x4
};

struct _anonymous_480// Size=0x18 (Id=480)
{
    unsigned long PollInterval;// Offset=0x0 Size=0x4
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long SwitchToPollingThreshold;// Offset=0x8 Size=0x4
    unsigned long SwitchToPollingWindow;// Offset=0xc Size=0x4
    unsigned long ErrorThreshold;// Offset=0x10 Size=0x4
    unsigned long ErrorThresholdWindow;// Offset=0x14 Size=0x4
};

union _anonymous_481// Size=0x18 (Id=481)
{
    struct _anonymous_479 Polled;// Offset=0x0 Size=0x4
    struct _anonymous_480 Interrupt;// Offset=0x0 Size=0x18
    struct _anonymous_480 LocalInterrupt;// Offset=0x0 Size=0x18
    struct _anonymous_480 Sci;// Offset=0x0 Size=0x18
    struct _anonymous_480 Nmi;// Offset=0x0 Size=0x18
    struct _anonymous_480 Sea;// Offset=0x0 Size=0x18
    struct _anonymous_480 Sei;// Offset=0x0 Size=0x18
    struct _anonymous_480 Gsiv;// Offset=0x0 Size=0x18
};
