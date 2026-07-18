struct _anonymous_461// Size=0x4 (Id=461)
{
    unsigned long PollInterval;// Offset=0x0 Size=0x4
};

struct _anonymous_462// Size=0x18 (Id=462)
{
    unsigned long PollInterval;// Offset=0x0 Size=0x4
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long SwitchToPollingThreshold;// Offset=0x8 Size=0x4
    unsigned long SwitchToPollingWindow;// Offset=0xc Size=0x4
    unsigned long ErrorThreshold;// Offset=0x10 Size=0x4
    unsigned long ErrorThresholdWindow;// Offset=0x14 Size=0x4
};

union _anonymous_463// Size=0x18 (Id=463)
{
    struct _anonymous_461 Polled;// Offset=0x0 Size=0x4
    struct _anonymous_462 Interrupt;// Offset=0x0 Size=0x18
    struct _anonymous_462 LocalInterrupt;// Offset=0x0 Size=0x18
    struct _anonymous_462 Sci;// Offset=0x0 Size=0x18
    struct _anonymous_462 Nmi;// Offset=0x0 Size=0x18
    struct _anonymous_462 Sea;// Offset=0x0 Size=0x18
    struct _anonymous_462 Sei;// Offset=0x0 Size=0x18
    struct _anonymous_462 Gsiv;// Offset=0x0 Size=0x18
};
