struct _anonymous_190// Size=0x4 (Id=190)
{
    unsigned long PollInterval;// Offset=0x0 Size=0x4
};

struct _anonymous_191// Size=0x18 (Id=191)
{
    unsigned long PollInterval;// Offset=0x0 Size=0x4
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long SwitchToPollingThreshold;// Offset=0x8 Size=0x4
    unsigned long SwitchToPollingWindow;// Offset=0xc Size=0x4
    unsigned long ErrorThreshold;// Offset=0x10 Size=0x4
    unsigned long ErrorThresholdWindow;// Offset=0x14 Size=0x4
};

union _anonymous_192// Size=0x18 (Id=192)
{
    struct _anonymous_190 Polled;// Offset=0x0 Size=0x4
    struct _anonymous_191 Interrupt;// Offset=0x0 Size=0x18
    struct _anonymous_191 LocalInterrupt;// Offset=0x0 Size=0x18
    struct _anonymous_191 Sci;// Offset=0x0 Size=0x18
    struct _anonymous_191 Nmi;// Offset=0x0 Size=0x18
    struct _anonymous_191 Sea;// Offset=0x0 Size=0x18
    struct _anonymous_191 Sei;// Offset=0x0 Size=0x18
    struct _anonymous_191 Gsiv;// Offset=0x0 Size=0x18
};
