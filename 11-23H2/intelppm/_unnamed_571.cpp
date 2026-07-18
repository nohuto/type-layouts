struct _unnamed_569// Size=0x4 (Id=569)
{
    unsigned long PollInterval;// Offset=0x0 Size=0x4
};

struct _unnamed_570// Size=0x18 (Id=570)
{
    unsigned long PollInterval;// Offset=0x0 Size=0x4
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long SwitchToPollingThreshold;// Offset=0x8 Size=0x4
    unsigned long SwitchToPollingWindow;// Offset=0xc Size=0x4
    unsigned long ErrorThreshold;// Offset=0x10 Size=0x4
    unsigned long ErrorThresholdWindow;// Offset=0x14 Size=0x4
};

union _unnamed_571// Size=0x18 (Id=571)
{
    struct _unnamed_569 Polled;// Offset=0x0 Size=0x4
    struct _unnamed_570 Interrupt;// Offset=0x0 Size=0x18
    struct _unnamed_570 LocalInterrupt;// Offset=0x0 Size=0x18
    struct _unnamed_570 Sci;// Offset=0x0 Size=0x18
    struct _unnamed_570 Nmi;// Offset=0x0 Size=0x18
    struct _unnamed_570 Sea;// Offset=0x0 Size=0x18
    struct _unnamed_570 Sei;// Offset=0x0 Size=0x18
    struct _unnamed_570 Gsiv;// Offset=0x0 Size=0x18
};
