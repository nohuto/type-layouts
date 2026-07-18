struct _unnamed_500// Size=0x4 (Id=500)
{
    unsigned long PollInterval;// Offset=0x0 Size=0x4
};

struct _unnamed_501// Size=0x18 (Id=501)
{
    unsigned long PollInterval;// Offset=0x0 Size=0x4
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long SwitchToPollingThreshold;// Offset=0x8 Size=0x4
    unsigned long SwitchToPollingWindow;// Offset=0xc Size=0x4
    unsigned long ErrorThreshold;// Offset=0x10 Size=0x4
    unsigned long ErrorThresholdWindow;// Offset=0x14 Size=0x4
};

union _unnamed_502// Size=0x18 (Id=502)
{
    struct _unnamed_500 Polled;// Offset=0x0 Size=0x4
    struct _unnamed_501 Interrupt;// Offset=0x0 Size=0x18
    struct _unnamed_501 LocalInterrupt;// Offset=0x0 Size=0x18
    struct _unnamed_501 Sci;// Offset=0x0 Size=0x18
    struct _unnamed_501 Nmi;// Offset=0x0 Size=0x18
    struct _unnamed_501 Sea;// Offset=0x0 Size=0x18
    struct _unnamed_501 Sei;// Offset=0x0 Size=0x18
    struct _unnamed_501 Gsiv;// Offset=0x0 Size=0x18
};
