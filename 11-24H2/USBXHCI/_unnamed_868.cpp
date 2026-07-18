struct _unnamed_866// Size=0x4 (Id=866)
{
    unsigned long PollInterval;// Offset=0x0 Size=0x4
};

struct _unnamed_867// Size=0x18 (Id=867)
{
    unsigned long PollInterval;// Offset=0x0 Size=0x4
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long SwitchToPollingThreshold;// Offset=0x8 Size=0x4
    unsigned long SwitchToPollingWindow;// Offset=0xc Size=0x4
    unsigned long ErrorThreshold;// Offset=0x10 Size=0x4
    unsigned long ErrorThresholdWindow;// Offset=0x14 Size=0x4
};

union _unnamed_868// Size=0x18 (Id=868)
{
    struct _unnamed_866 Polled;// Offset=0x0 Size=0x4
    struct _unnamed_867 Interrupt;// Offset=0x0 Size=0x18
    struct _unnamed_867 LocalInterrupt;// Offset=0x0 Size=0x18
    struct _unnamed_867 Sci;// Offset=0x0 Size=0x18
    struct _unnamed_867 Nmi;// Offset=0x0 Size=0x18
    struct _unnamed_867 Sea;// Offset=0x0 Size=0x18
    struct _unnamed_867 Sei;// Offset=0x0 Size=0x18
    struct _unnamed_867 Gsiv;// Offset=0x0 Size=0x18
};
