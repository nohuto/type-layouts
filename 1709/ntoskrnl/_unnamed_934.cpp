struct _unnamed_932// Size=0x4 (Id=932)
{
    unsigned long PollInterval;// Offset=0x0 Size=0x4
};

struct _unnamed_933// Size=0x18 (Id=933)
{
    unsigned long PollInterval;// Offset=0x0 Size=0x4
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long SwitchToPollingThreshold;// Offset=0x8 Size=0x4
    unsigned long SwitchToPollingWindow;// Offset=0xc Size=0x4
    unsigned long ErrorThreshold;// Offset=0x10 Size=0x4
    unsigned long ErrorThresholdWindow;// Offset=0x14 Size=0x4
};

union _unnamed_934// Size=0x18 (Id=934)
{
    struct _unnamed_932 Polled;// Offset=0x0 Size=0x4
    struct _unnamed_933 Interrupt;// Offset=0x0 Size=0x18
    struct _unnamed_933 LocalInterrupt;// Offset=0x0 Size=0x18
    struct _unnamed_933 Sci;// Offset=0x0 Size=0x18
    struct _unnamed_933 Nmi;// Offset=0x0 Size=0x18
    struct _unnamed_933 Sea;// Offset=0x0 Size=0x18
    struct _unnamed_933 Sei;// Offset=0x0 Size=0x18
    struct _unnamed_933 Gsiv;// Offset=0x0 Size=0x18
};
