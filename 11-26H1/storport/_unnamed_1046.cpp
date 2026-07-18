struct _unnamed_1044// Size=0x4 (Id=1044)
{
    unsigned long PollInterval;// Offset=0x0 Size=0x4
};

struct _unnamed_1045// Size=0x18 (Id=1045)
{
    unsigned long PollInterval;// Offset=0x0 Size=0x4
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long SwitchToPollingThreshold;// Offset=0x8 Size=0x4
    unsigned long SwitchToPollingWindow;// Offset=0xc Size=0x4
    unsigned long ErrorThreshold;// Offset=0x10 Size=0x4
    unsigned long ErrorThresholdWindow;// Offset=0x14 Size=0x4
};

union _unnamed_1046// Size=0x18 (Id=1046)
{
    struct _unnamed_1044 Polled;// Offset=0x0 Size=0x4
    struct _unnamed_1045 Interrupt;// Offset=0x0 Size=0x18
    struct _unnamed_1045 LocalInterrupt;// Offset=0x0 Size=0x18
    struct _unnamed_1045 Sci;// Offset=0x0 Size=0x18
    struct _unnamed_1045 Nmi;// Offset=0x0 Size=0x18
    struct _unnamed_1045 Sea;// Offset=0x0 Size=0x18
    struct _unnamed_1045 Sei;// Offset=0x0 Size=0x18
    struct _unnamed_1045 Gsiv;// Offset=0x0 Size=0x18
};
