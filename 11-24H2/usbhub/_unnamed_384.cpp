struct _unnamed_382// Size=0x4 (Id=382)
{
    unsigned long PollInterval;// Offset=0x0 Size=0x4
};

struct _unnamed_383// Size=0x18 (Id=383)
{
    unsigned long PollInterval;// Offset=0x0 Size=0x4
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long SwitchToPollingThreshold;// Offset=0x8 Size=0x4
    unsigned long SwitchToPollingWindow;// Offset=0xc Size=0x4
    unsigned long ErrorThreshold;// Offset=0x10 Size=0x4
    unsigned long ErrorThresholdWindow;// Offset=0x14 Size=0x4
};

union _unnamed_384// Size=0x18 (Id=384)
{
    struct _unnamed_382 Polled;// Offset=0x0 Size=0x4
    struct _unnamed_383 Interrupt;// Offset=0x0 Size=0x18
    struct _unnamed_383 LocalInterrupt;// Offset=0x0 Size=0x18
    struct _unnamed_383 Sci;// Offset=0x0 Size=0x18
    struct _unnamed_383 Nmi;// Offset=0x0 Size=0x18
    struct _unnamed_383 Sea;// Offset=0x0 Size=0x18
    struct _unnamed_383 Sei;// Offset=0x0 Size=0x18
    struct _unnamed_383 Gsiv;// Offset=0x0 Size=0x18
};
