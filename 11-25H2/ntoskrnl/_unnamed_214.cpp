struct _unnamed_212// Size=0x4 (Id=212)
{
    unsigned long PollInterval;// Offset=0x0 Size=0x4
};

struct _unnamed_213// Size=0x18 (Id=213)
{
    unsigned long PollInterval;// Offset=0x0 Size=0x4
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long SwitchToPollingThreshold;// Offset=0x8 Size=0x4
    unsigned long SwitchToPollingWindow;// Offset=0xc Size=0x4
    unsigned long ErrorThreshold;// Offset=0x10 Size=0x4
    unsigned long ErrorThresholdWindow;// Offset=0x14 Size=0x4
};

union _unnamed_214// Size=0x18 (Id=214)
{
    struct _unnamed_212 Polled;// Offset=0x0 Size=0x4
    struct _unnamed_213 Interrupt;// Offset=0x0 Size=0x18
    struct _unnamed_213 LocalInterrupt;// Offset=0x0 Size=0x18
    struct _unnamed_213 Sci;// Offset=0x0 Size=0x18
    struct _unnamed_213 Nmi;// Offset=0x0 Size=0x18
    struct _unnamed_213 Sea;// Offset=0x0 Size=0x18
    struct _unnamed_213 Sei;// Offset=0x0 Size=0x18
    struct _unnamed_213 Gsiv;// Offset=0x0 Size=0x18
};
