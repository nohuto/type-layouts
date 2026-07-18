struct _anonymous_751// Size=0x4 (Id=751)
{
    unsigned long PollInterval;// Offset=0x0 Size=0x4
};

struct _anonymous_752// Size=0x18 (Id=752)
{
    unsigned long PollInterval;// Offset=0x0 Size=0x4
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long SwitchToPollingThreshold;// Offset=0x8 Size=0x4
    unsigned long SwitchToPollingWindow;// Offset=0xc Size=0x4
    unsigned long ErrorThreshold;// Offset=0x10 Size=0x4
    unsigned long ErrorThresholdWindow;// Offset=0x14 Size=0x4
};

union _anonymous_753// Size=0x18 (Id=753)
{
    struct _anonymous_751 Polled;// Offset=0x0 Size=0x4
    struct _anonymous_752 Interrupt;// Offset=0x0 Size=0x18
    struct _anonymous_752 LocalInterrupt;// Offset=0x0 Size=0x18
    struct _anonymous_752 Sci;// Offset=0x0 Size=0x18
    struct _anonymous_752 Nmi;// Offset=0x0 Size=0x18
    struct _anonymous_752 Sea;// Offset=0x0 Size=0x18
    struct _anonymous_752 Sei;// Offset=0x0 Size=0x18
    struct _anonymous_752 Gsiv;// Offset=0x0 Size=0x18
};
