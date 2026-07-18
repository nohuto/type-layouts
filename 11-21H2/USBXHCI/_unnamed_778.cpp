struct _unnamed_776// Size=0x4 (Id=776)
{
    unsigned long PollInterval;// Offset=0x0 Size=0x4
};

struct _unnamed_777// Size=0x18 (Id=777)
{
    unsigned long PollInterval;// Offset=0x0 Size=0x4
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long SwitchToPollingThreshold;// Offset=0x8 Size=0x4
    unsigned long SwitchToPollingWindow;// Offset=0xc Size=0x4
    unsigned long ErrorThreshold;// Offset=0x10 Size=0x4
    unsigned long ErrorThresholdWindow;// Offset=0x14 Size=0x4
};

union _unnamed_778// Size=0x18 (Id=778)
{
    struct _unnamed_776 Polled;// Offset=0x0 Size=0x4
    struct _unnamed_777 Interrupt;// Offset=0x0 Size=0x18
    struct _unnamed_777 LocalInterrupt;// Offset=0x0 Size=0x18
    struct _unnamed_777 Sci;// Offset=0x0 Size=0x18
    struct _unnamed_777 Nmi;// Offset=0x0 Size=0x18
    struct _unnamed_777 Sea;// Offset=0x0 Size=0x18
    struct _unnamed_777 Sei;// Offset=0x0 Size=0x18
    struct _unnamed_777 Gsiv;// Offset=0x0 Size=0x18
};
