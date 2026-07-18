struct _unnamed_512// Size=0x4 (Id=512)
{
    unsigned long PollInterval;// Offset=0x0 Size=0x4
};

struct _unnamed_513// Size=0x18 (Id=513)
{
    unsigned long PollInterval;// Offset=0x0 Size=0x4
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long SwitchToPollingThreshold;// Offset=0x8 Size=0x4
    unsigned long SwitchToPollingWindow;// Offset=0xc Size=0x4
    unsigned long ErrorThreshold;// Offset=0x10 Size=0x4
    unsigned long ErrorThresholdWindow;// Offset=0x14 Size=0x4
};

union _unnamed_514// Size=0x18 (Id=514)
{
    struct _unnamed_512 Polled;// Offset=0x0 Size=0x4
    struct _unnamed_513 Interrupt;// Offset=0x0 Size=0x18
    struct _unnamed_513 LocalInterrupt;// Offset=0x0 Size=0x18
    struct _unnamed_513 Sci;// Offset=0x0 Size=0x18
    struct _unnamed_513 Nmi;// Offset=0x0 Size=0x18
    struct _unnamed_513 Sea;// Offset=0x0 Size=0x18
    struct _unnamed_513 Sei;// Offset=0x0 Size=0x18
    struct _unnamed_513 Gsiv;// Offset=0x0 Size=0x18
};
