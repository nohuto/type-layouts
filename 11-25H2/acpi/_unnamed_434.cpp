struct _unnamed_432// Size=0x4 (Id=432)
{
    unsigned long PollInterval;// Offset=0x0 Size=0x4
};

struct _unnamed_433// Size=0x18 (Id=433)
{
    unsigned long PollInterval;// Offset=0x0 Size=0x4
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long SwitchToPollingThreshold;// Offset=0x8 Size=0x4
    unsigned long SwitchToPollingWindow;// Offset=0xc Size=0x4
    unsigned long ErrorThreshold;// Offset=0x10 Size=0x4
    unsigned long ErrorThresholdWindow;// Offset=0x14 Size=0x4
};

union _unnamed_434// Size=0x18 (Id=434)
{
    struct _unnamed_432 Polled;// Offset=0x0 Size=0x4
    struct _unnamed_433 Interrupt;// Offset=0x0 Size=0x18
    struct _unnamed_433 LocalInterrupt;// Offset=0x0 Size=0x18
    struct _unnamed_433 Sci;// Offset=0x0 Size=0x18
    struct _unnamed_433 Nmi;// Offset=0x0 Size=0x18
    struct _unnamed_433 Sea;// Offset=0x0 Size=0x18
    struct _unnamed_433 Sei;// Offset=0x0 Size=0x18
    struct _unnamed_433 Gsiv;// Offset=0x0 Size=0x18
};
