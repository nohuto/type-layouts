struct _unnamed_407// Size=0x4 (Id=407)
{
    unsigned long PollInterval;// Offset=0x0 Size=0x4
};

struct _unnamed_408// Size=0x18 (Id=408)
{
    unsigned long PollInterval;// Offset=0x0 Size=0x4
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long SwitchToPollingThreshold;// Offset=0x8 Size=0x4
    unsigned long SwitchToPollingWindow;// Offset=0xc Size=0x4
    unsigned long ErrorThreshold;// Offset=0x10 Size=0x4
    unsigned long ErrorThresholdWindow;// Offset=0x14 Size=0x4
};

union _unnamed_409// Size=0x18 (Id=409)
{
    struct _unnamed_407 Polled;// Offset=0x0 Size=0x4
    struct _unnamed_408 Interrupt;// Offset=0x0 Size=0x18
    struct _unnamed_408 LocalInterrupt;// Offset=0x0 Size=0x18
    struct _unnamed_408 Sci;// Offset=0x0 Size=0x18
    struct _unnamed_408 Nmi;// Offset=0x0 Size=0x18
    struct _unnamed_408 Sea;// Offset=0x0 Size=0x18
    struct _unnamed_408 Sei;// Offset=0x0 Size=0x18
    struct _unnamed_408 Gsiv;// Offset=0x0 Size=0x18
};
