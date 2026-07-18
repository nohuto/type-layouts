struct _anonymous_809// Size=0x4 (Id=809)
{
    unsigned long PollInterval;// Offset=0x0 Size=0x4
};

struct _anonymous_810// Size=0x18 (Id=810)
{
    unsigned long PollInterval;// Offset=0x0 Size=0x4
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long SwitchToPollingThreshold;// Offset=0x8 Size=0x4
    unsigned long SwitchToPollingWindow;// Offset=0xc Size=0x4
    unsigned long ErrorThreshold;// Offset=0x10 Size=0x4
    unsigned long ErrorThresholdWindow;// Offset=0x14 Size=0x4
};

union _anonymous_811// Size=0x18 (Id=811)
{
    struct _anonymous_809 Polled;// Offset=0x0 Size=0x4
    struct _anonymous_810 Interrupt;// Offset=0x0 Size=0x18
    struct _anonymous_810 LocalInterrupt;// Offset=0x0 Size=0x18
    struct _anonymous_810 Sci;// Offset=0x0 Size=0x18
    struct _anonymous_810 Nmi;// Offset=0x0 Size=0x18
    struct _anonymous_810 Sea;// Offset=0x0 Size=0x18
    struct _anonymous_810 Sei;// Offset=0x0 Size=0x18
    struct _anonymous_810 Gsiv;// Offset=0x0 Size=0x18
};
