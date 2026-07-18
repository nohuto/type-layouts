struct _unnamed_377// Size=0x4 (Id=377)
{
    unsigned long PollInterval;// Offset=0x0 Size=0x4
};

struct _unnamed_378// Size=0x18 (Id=378)
{
    unsigned long PollInterval;// Offset=0x0 Size=0x4
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long SwitchToPollingThreshold;// Offset=0x8 Size=0x4
    unsigned long SwitchToPollingWindow;// Offset=0xc Size=0x4
    unsigned long ErrorThreshold;// Offset=0x10 Size=0x4
    unsigned long ErrorThresholdWindow;// Offset=0x14 Size=0x4
};

union _unnamed_379// Size=0x18 (Id=379)
{
    struct _unnamed_377 Polled;// Offset=0x0 Size=0x4
    struct _unnamed_378 Interrupt;// Offset=0x0 Size=0x18
    struct _unnamed_378 LocalInterrupt;// Offset=0x0 Size=0x18
    struct _unnamed_378 Sci;// Offset=0x0 Size=0x18
    struct _unnamed_378 Nmi;// Offset=0x0 Size=0x18
    struct _unnamed_378 Sea;// Offset=0x0 Size=0x18
    struct _unnamed_378 Sei;// Offset=0x0 Size=0x18
    struct _unnamed_378 Gsiv;// Offset=0x0 Size=0x18
};
