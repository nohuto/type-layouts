struct _unnamed_855// Size=0x4 (Id=855)
{
    unsigned long PollInterval;// Offset=0x0 Size=0x4
};

struct _unnamed_856// Size=0x18 (Id=856)
{
    unsigned long PollInterval;// Offset=0x0 Size=0x4
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long SwitchToPollingThreshold;// Offset=0x8 Size=0x4
    unsigned long SwitchToPollingWindow;// Offset=0xc Size=0x4
    unsigned long ErrorThreshold;// Offset=0x10 Size=0x4
    unsigned long ErrorThresholdWindow;// Offset=0x14 Size=0x4
};

union _unnamed_857// Size=0x18 (Id=857)
{
    struct _unnamed_855 Polled;// Offset=0x0 Size=0x4
    struct _unnamed_856 Interrupt;// Offset=0x0 Size=0x18
    struct _unnamed_856 LocalInterrupt;// Offset=0x0 Size=0x18
    struct _unnamed_856 Sci;// Offset=0x0 Size=0x18
    struct _unnamed_856 Nmi;// Offset=0x0 Size=0x18
    struct _unnamed_856 Sea;// Offset=0x0 Size=0x18
    struct _unnamed_856 Sei;// Offset=0x0 Size=0x18
    struct _unnamed_856 Gsiv;// Offset=0x0 Size=0x18
};
