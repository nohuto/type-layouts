struct _unnamed_325// Size=0x4 (Id=325)
{
    unsigned long PollInterval;// Offset=0x0 Size=0x4
};

struct _unnamed_326// Size=0x18 (Id=326)
{
    unsigned long PollInterval;// Offset=0x0 Size=0x4
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long SwitchToPollingThreshold;// Offset=0x8 Size=0x4
    unsigned long SwitchToPollingWindow;// Offset=0xc Size=0x4
    unsigned long ErrorThreshold;// Offset=0x10 Size=0x4
    unsigned long ErrorThresholdWindow;// Offset=0x14 Size=0x4
};

union _unnamed_327// Size=0x18 (Id=327)
{
    struct _unnamed_325 Polled;// Offset=0x0 Size=0x4
    struct _unnamed_326 Interrupt;// Offset=0x0 Size=0x18
    struct _unnamed_326 LocalInterrupt;// Offset=0x0 Size=0x18
    struct _unnamed_326 Sci;// Offset=0x0 Size=0x18
    struct _unnamed_326 Nmi;// Offset=0x0 Size=0x18
    struct _unnamed_326 Sea;// Offset=0x0 Size=0x18
    struct _unnamed_326 Sei;// Offset=0x0 Size=0x18
    struct _unnamed_326 Gsiv;// Offset=0x0 Size=0x18
};
