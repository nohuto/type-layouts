struct _unnamed_574// Size=0x4 (Id=574)
{
    unsigned long PollInterval;// Offset=0x0 Size=0x4
};

struct _unnamed_575// Size=0x18 (Id=575)
{
    unsigned long PollInterval;// Offset=0x0 Size=0x4
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long SwitchToPollingThreshold;// Offset=0x8 Size=0x4
    unsigned long SwitchToPollingWindow;// Offset=0xc Size=0x4
    unsigned long ErrorThreshold;// Offset=0x10 Size=0x4
    unsigned long ErrorThresholdWindow;// Offset=0x14 Size=0x4
};

union _unnamed_576// Size=0x18 (Id=576)
{
    struct _unnamed_574 Polled;// Offset=0x0 Size=0x4
    struct _unnamed_575 Interrupt;// Offset=0x0 Size=0x18
    struct _unnamed_575 LocalInterrupt;// Offset=0x0 Size=0x18
    struct _unnamed_575 Sci;// Offset=0x0 Size=0x18
    struct _unnamed_575 Nmi;// Offset=0x0 Size=0x18
    struct _unnamed_575 Sea;// Offset=0x0 Size=0x18
    struct _unnamed_575 Sei;// Offset=0x0 Size=0x18
    struct _unnamed_575 Gsiv;// Offset=0x0 Size=0x18
};
