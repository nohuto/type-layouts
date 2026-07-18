struct _anonymous_808// Size=0x4 (Id=808)
{
    unsigned long PollInterval;// Offset=0x0 Size=0x4
};

struct _anonymous_809// Size=0x18 (Id=809)
{
    unsigned long PollInterval;// Offset=0x0 Size=0x4
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long SwitchToPollingThreshold;// Offset=0x8 Size=0x4
    unsigned long SwitchToPollingWindow;// Offset=0xc Size=0x4
    unsigned long ErrorThreshold;// Offset=0x10 Size=0x4
    unsigned long ErrorThresholdWindow;// Offset=0x14 Size=0x4
};

union _anonymous_810// Size=0x18 (Id=810)
{
    struct _anonymous_808 Polled;// Offset=0x0 Size=0x4
    struct _anonymous_809 Interrupt;// Offset=0x0 Size=0x18
    struct _anonymous_809 LocalInterrupt;// Offset=0x0 Size=0x18
    struct _anonymous_809 Sci;// Offset=0x0 Size=0x18
    struct _anonymous_809 Nmi;// Offset=0x0 Size=0x18
    struct _anonymous_809 Sea;// Offset=0x0 Size=0x18
    struct _anonymous_809 Sei;// Offset=0x0 Size=0x18
    struct _anonymous_809 Gsiv;// Offset=0x0 Size=0x18
};
