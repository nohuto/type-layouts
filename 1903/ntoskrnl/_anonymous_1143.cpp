struct _anonymous_1141// Size=0x4 (Id=1141)
{
    unsigned long PollInterval;// Offset=0x0 Size=0x4
};

struct _anonymous_1142// Size=0x18 (Id=1142)
{
    unsigned long PollInterval;// Offset=0x0 Size=0x4
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long SwitchToPollingThreshold;// Offset=0x8 Size=0x4
    unsigned long SwitchToPollingWindow;// Offset=0xc Size=0x4
    unsigned long ErrorThreshold;// Offset=0x10 Size=0x4
    unsigned long ErrorThresholdWindow;// Offset=0x14 Size=0x4
};

union _anonymous_1143// Size=0x18 (Id=1143)
{
    struct _anonymous_1141 Polled;// Offset=0x0 Size=0x4
    struct _anonymous_1142 Interrupt;// Offset=0x0 Size=0x18
    struct _anonymous_1142 LocalInterrupt;// Offset=0x0 Size=0x18
    struct _anonymous_1142 Sci;// Offset=0x0 Size=0x18
    struct _anonymous_1142 Nmi;// Offset=0x0 Size=0x18
    struct _anonymous_1142 Sea;// Offset=0x0 Size=0x18
    struct _anonymous_1142 Sei;// Offset=0x0 Size=0x18
    struct _anonymous_1142 Gsiv;// Offset=0x0 Size=0x18
};
