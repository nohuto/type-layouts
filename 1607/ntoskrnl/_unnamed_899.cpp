struct _unnamed_897// Size=0x4 (Id=897)
{
    unsigned long PollInterval;// Offset=0x0 Size=0x4
};

struct _unnamed_898// Size=0x18 (Id=898)
{
    unsigned long PollInterval;// Offset=0x0 Size=0x4
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long SwitchToPollingThreshold;// Offset=0x8 Size=0x4
    unsigned long SwitchToPollingWindow;// Offset=0xc Size=0x4
    unsigned long ErrorThreshold;// Offset=0x10 Size=0x4
    unsigned long ErrorThresholdWindow;// Offset=0x14 Size=0x4
};

union _unnamed_899// Size=0x18 (Id=899)
{
    struct _unnamed_897 Polled;// Offset=0x0 Size=0x4
    struct _unnamed_898 Interrupt;// Offset=0x0 Size=0x18
    struct _unnamed_898 LocalInterrupt;// Offset=0x0 Size=0x18
    struct _unnamed_898 Sci;// Offset=0x0 Size=0x18
    struct _unnamed_898 Nmi;// Offset=0x0 Size=0x18
    struct _unnamed_898 Sea;// Offset=0x0 Size=0x18
    struct _unnamed_898 Sei;// Offset=0x0 Size=0x18
    struct _unnamed_898 Gsiv;// Offset=0x0 Size=0x18
};
