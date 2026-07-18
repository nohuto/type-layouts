struct _unnamed_562// Size=0x4 (Id=562)
{
    unsigned long PollInterval;// Offset=0x0 Size=0x4
};

struct _unnamed_563// Size=0x18 (Id=563)
{
    unsigned long PollInterval;// Offset=0x0 Size=0x4
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long SwitchToPollingThreshold;// Offset=0x8 Size=0x4
    unsigned long SwitchToPollingWindow;// Offset=0xc Size=0x4
    unsigned long ErrorThreshold;// Offset=0x10 Size=0x4
    unsigned long ErrorThresholdWindow;// Offset=0x14 Size=0x4
};

union _unnamed_564// Size=0x18 (Id=564)
{
    struct _unnamed_562 Polled;// Offset=0x0 Size=0x4
    struct _unnamed_563 Interrupt;// Offset=0x0 Size=0x18
    struct _unnamed_563 LocalInterrupt;// Offset=0x0 Size=0x18
    struct _unnamed_563 Sci;// Offset=0x0 Size=0x18
    struct _unnamed_563 Nmi;// Offset=0x0 Size=0x18
    struct _unnamed_563 Sea;// Offset=0x0 Size=0x18
    struct _unnamed_563 Sei;// Offset=0x0 Size=0x18
    struct _unnamed_563 Gsiv;// Offset=0x0 Size=0x18
};
