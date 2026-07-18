struct _unnamed_660// Size=0x4 (Id=660)
{
    unsigned long PollInterval;// Offset=0x0 Size=0x4
};

struct _unnamed_661// Size=0x18 (Id=661)
{
    unsigned long PollInterval;// Offset=0x0 Size=0x4
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long SwitchToPollingThreshold;// Offset=0x8 Size=0x4
    unsigned long SwitchToPollingWindow;// Offset=0xc Size=0x4
    unsigned long ErrorThreshold;// Offset=0x10 Size=0x4
    unsigned long ErrorThresholdWindow;// Offset=0x14 Size=0x4
};

union _unnamed_662// Size=0x18 (Id=662)
{
    struct _unnamed_660 Polled;// Offset=0x0 Size=0x4
    struct _unnamed_661 Interrupt;// Offset=0x0 Size=0x18
    struct _unnamed_661 LocalInterrupt;// Offset=0x0 Size=0x18
    struct _unnamed_661 Sci;// Offset=0x0 Size=0x18
    struct _unnamed_661 Nmi;// Offset=0x0 Size=0x18
    struct _unnamed_661 Sea;// Offset=0x0 Size=0x18
    struct _unnamed_661 Sei;// Offset=0x0 Size=0x18
    struct _unnamed_661 Gsiv;// Offset=0x0 Size=0x18
};
