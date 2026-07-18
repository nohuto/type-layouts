struct _anonymous_551// Size=0x4 (Id=551)
{
    unsigned long PollInterval;// Offset=0x0 Size=0x4
};

struct _anonymous_552// Size=0x18 (Id=552)
{
    unsigned long PollInterval;// Offset=0x0 Size=0x4
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long SwitchToPollingThreshold;// Offset=0x8 Size=0x4
    unsigned long SwitchToPollingWindow;// Offset=0xc Size=0x4
    unsigned long ErrorThreshold;// Offset=0x10 Size=0x4
    unsigned long ErrorThresholdWindow;// Offset=0x14 Size=0x4
};

union _anonymous_553// Size=0x18 (Id=553)
{
    struct _anonymous_551 Polled;// Offset=0x0 Size=0x4
    struct _anonymous_552 Interrupt;// Offset=0x0 Size=0x18
    struct _anonymous_552 LocalInterrupt;// Offset=0x0 Size=0x18
    struct _anonymous_552 Sci;// Offset=0x0 Size=0x18
    struct _anonymous_552 Nmi;// Offset=0x0 Size=0x18
    struct _anonymous_552 Sea;// Offset=0x0 Size=0x18
    struct _anonymous_552 Sei;// Offset=0x0 Size=0x18
    struct _anonymous_552 Gsiv;// Offset=0x0 Size=0x18
};
