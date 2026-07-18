struct _anonymous_483// Size=0x4 (Id=483)
{
    unsigned long PollInterval;// Offset=0x0 Size=0x4
};

struct _anonymous_484// Size=0x18 (Id=484)
{
    unsigned long PollInterval;// Offset=0x0 Size=0x4
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long SwitchToPollingThreshold;// Offset=0x8 Size=0x4
    unsigned long SwitchToPollingWindow;// Offset=0xc Size=0x4
    unsigned long ErrorThreshold;// Offset=0x10 Size=0x4
    unsigned long ErrorThresholdWindow;// Offset=0x14 Size=0x4
};

union _anonymous_485// Size=0x18 (Id=485)
{
    struct _anonymous_483 Polled;// Offset=0x0 Size=0x4
    struct _anonymous_484 Interrupt;// Offset=0x0 Size=0x18
    struct _anonymous_484 LocalInterrupt;// Offset=0x0 Size=0x18
    struct _anonymous_484 Sci;// Offset=0x0 Size=0x18
    struct _anonymous_484 Nmi;// Offset=0x0 Size=0x18
    struct _anonymous_484 Sea;// Offset=0x0 Size=0x18
    struct _anonymous_484 Sei;// Offset=0x0 Size=0x18
    struct _anonymous_484 Gsiv;// Offset=0x0 Size=0x18
};
