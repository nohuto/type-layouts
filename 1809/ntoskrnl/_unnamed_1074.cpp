struct _unnamed_1072// Size=0x4 (Id=1072)
{
    unsigned long PollInterval;// Offset=0x0 Size=0x4
};

struct _unnamed_1073// Size=0x18 (Id=1073)
{
    unsigned long PollInterval;// Offset=0x0 Size=0x4
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long SwitchToPollingThreshold;// Offset=0x8 Size=0x4
    unsigned long SwitchToPollingWindow;// Offset=0xc Size=0x4
    unsigned long ErrorThreshold;// Offset=0x10 Size=0x4
    unsigned long ErrorThresholdWindow;// Offset=0x14 Size=0x4
};

union _unnamed_1074// Size=0x18 (Id=1074)
{
    struct _unnamed_1072 Polled;// Offset=0x0 Size=0x4
    struct _unnamed_1073 Interrupt;// Offset=0x0 Size=0x18
    struct _unnamed_1073 LocalInterrupt;// Offset=0x0 Size=0x18
    struct _unnamed_1073 Sci;// Offset=0x0 Size=0x18
    struct _unnamed_1073 Nmi;// Offset=0x0 Size=0x18
    struct _unnamed_1073 Sea;// Offset=0x0 Size=0x18
    struct _unnamed_1073 Sei;// Offset=0x0 Size=0x18
    struct _unnamed_1073 Gsiv;// Offset=0x0 Size=0x18
};
