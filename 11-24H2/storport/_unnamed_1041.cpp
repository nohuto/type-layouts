struct _unnamed_1039// Size=0x4 (Id=1039)
{
    unsigned long PollInterval;// Offset=0x0 Size=0x4
};

struct _unnamed_1040// Size=0x18 (Id=1040)
{
    unsigned long PollInterval;// Offset=0x0 Size=0x4
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long SwitchToPollingThreshold;// Offset=0x8 Size=0x4
    unsigned long SwitchToPollingWindow;// Offset=0xc Size=0x4
    unsigned long ErrorThreshold;// Offset=0x10 Size=0x4
    unsigned long ErrorThresholdWindow;// Offset=0x14 Size=0x4
};

union _unnamed_1041// Size=0x18 (Id=1041)
{
    struct _unnamed_1039 Polled;// Offset=0x0 Size=0x4
    struct _unnamed_1040 Interrupt;// Offset=0x0 Size=0x18
    struct _unnamed_1040 LocalInterrupt;// Offset=0x0 Size=0x18
    struct _unnamed_1040 Sci;// Offset=0x0 Size=0x18
    struct _unnamed_1040 Nmi;// Offset=0x0 Size=0x18
    struct _unnamed_1040 Sea;// Offset=0x0 Size=0x18
    struct _unnamed_1040 Sei;// Offset=0x0 Size=0x18
    struct _unnamed_1040 Gsiv;// Offset=0x0 Size=0x18
};
