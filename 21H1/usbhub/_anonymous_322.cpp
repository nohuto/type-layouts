struct _anonymous_320// Size=0x4 (Id=320)
{
    unsigned long PollInterval;// Offset=0x0 Size=0x4
};

struct _anonymous_321// Size=0x18 (Id=321)
{
    unsigned long PollInterval;// Offset=0x0 Size=0x4
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long SwitchToPollingThreshold;// Offset=0x8 Size=0x4
    unsigned long SwitchToPollingWindow;// Offset=0xc Size=0x4
    unsigned long ErrorThreshold;// Offset=0x10 Size=0x4
    unsigned long ErrorThresholdWindow;// Offset=0x14 Size=0x4
};

union _anonymous_322// Size=0x18 (Id=322)
{
    struct _anonymous_320 Polled;// Offset=0x0 Size=0x4
    struct _anonymous_321 Interrupt;// Offset=0x0 Size=0x18
    struct _anonymous_321 LocalInterrupt;// Offset=0x0 Size=0x18
    struct _anonymous_321 Sci;// Offset=0x0 Size=0x18
    struct _anonymous_321 Nmi;// Offset=0x0 Size=0x18
    struct _anonymous_321 Sea;// Offset=0x0 Size=0x18
    struct _anonymous_321 Sei;// Offset=0x0 Size=0x18
    struct _anonymous_321 Gsiv;// Offset=0x0 Size=0x18
};
