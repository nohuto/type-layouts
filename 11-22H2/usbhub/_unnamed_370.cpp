struct _unnamed_368// Size=0x4 (Id=368)
{
    unsigned long PollInterval;// Offset=0x0 Size=0x4
};

struct _unnamed_369// Size=0x18 (Id=369)
{
    unsigned long PollInterval;// Offset=0x0 Size=0x4
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long SwitchToPollingThreshold;// Offset=0x8 Size=0x4
    unsigned long SwitchToPollingWindow;// Offset=0xc Size=0x4
    unsigned long ErrorThreshold;// Offset=0x10 Size=0x4
    unsigned long ErrorThresholdWindow;// Offset=0x14 Size=0x4
};

union _unnamed_370// Size=0x18 (Id=370)
{
    struct _unnamed_368 Polled;// Offset=0x0 Size=0x4
    struct _unnamed_369 Interrupt;// Offset=0x0 Size=0x18
    struct _unnamed_369 LocalInterrupt;// Offset=0x0 Size=0x18
    struct _unnamed_369 Sci;// Offset=0x0 Size=0x18
    struct _unnamed_369 Nmi;// Offset=0x0 Size=0x18
    struct _unnamed_369 Sea;// Offset=0x0 Size=0x18
    struct _unnamed_369 Sei;// Offset=0x0 Size=0x18
    struct _unnamed_369 Gsiv;// Offset=0x0 Size=0x18
};
