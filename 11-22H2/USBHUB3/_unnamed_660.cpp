struct _unnamed_658// Size=0x4 (Id=658)
{
    unsigned long PollInterval;// Offset=0x0 Size=0x4
};

struct _unnamed_659// Size=0x18 (Id=659)
{
    unsigned long PollInterval;// Offset=0x0 Size=0x4
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long SwitchToPollingThreshold;// Offset=0x8 Size=0x4
    unsigned long SwitchToPollingWindow;// Offset=0xc Size=0x4
    unsigned long ErrorThreshold;// Offset=0x10 Size=0x4
    unsigned long ErrorThresholdWindow;// Offset=0x14 Size=0x4
};

union _unnamed_660// Size=0x18 (Id=660)
{
    struct _unnamed_658 Polled;// Offset=0x0 Size=0x4
    struct _unnamed_659 Interrupt;// Offset=0x0 Size=0x18
    struct _unnamed_659 LocalInterrupt;// Offset=0x0 Size=0x18
    struct _unnamed_659 Sci;// Offset=0x0 Size=0x18
    struct _unnamed_659 Nmi;// Offset=0x0 Size=0x18
    struct _unnamed_659 Sea;// Offset=0x0 Size=0x18
    struct _unnamed_659 Sei;// Offset=0x0 Size=0x18
    struct _unnamed_659 Gsiv;// Offset=0x0 Size=0x18
};
