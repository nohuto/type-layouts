union _WHEA_NOTIFICATION_FLAGS// Size=0x2 (Id=1364)
{
    struct // Size=0x2 (Id=0)
    {
        unsigned short PollIntervalRW:1;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0x1
        unsigned short SwitchToPollingThresholdRW:1;// Offset=0x0 Size=0x2 BitOffset=0x1 BitSize=0x1
        unsigned short SwitchToPollingWindowRW:1;// Offset=0x0 Size=0x2 BitOffset=0x2 BitSize=0x1
        unsigned short ErrorThresholdRW:1;// Offset=0x0 Size=0x2 BitOffset=0x3 BitSize=0x1
        unsigned short ErrorThresholdWindowRW:1;// Offset=0x0 Size=0x2 BitOffset=0x4 BitSize=0x1
        unsigned short Reserved:11;// Offset=0x0 Size=0x2 BitOffset=0x5 BitSize=0xb
    };
    unsigned short AsUSHORT;// Offset=0x0 Size=0x2
};

struct _unnamed_1044// Size=0x4 (Id=1044)
{
    unsigned long PollInterval;// Offset=0x0 Size=0x4
};

struct _unnamed_1045// Size=0x18 (Id=1045)
{
    unsigned long PollInterval;// Offset=0x0 Size=0x4
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long SwitchToPollingThreshold;// Offset=0x8 Size=0x4
    unsigned long SwitchToPollingWindow;// Offset=0xc Size=0x4
    unsigned long ErrorThreshold;// Offset=0x10 Size=0x4
    unsigned long ErrorThresholdWindow;// Offset=0x14 Size=0x4
};

union _unnamed_1046// Size=0x18 (Id=1046)
{
    struct _unnamed_1044 Polled;// Offset=0x0 Size=0x4
    struct _unnamed_1045 Interrupt;// Offset=0x0 Size=0x18
    struct _unnamed_1045 LocalInterrupt;// Offset=0x0 Size=0x18
    struct _unnamed_1045 Sci;// Offset=0x0 Size=0x18
    struct _unnamed_1045 Nmi;// Offset=0x0 Size=0x18
    struct _unnamed_1045 Sea;// Offset=0x0 Size=0x18
    struct _unnamed_1045 Sei;// Offset=0x0 Size=0x18
    struct _unnamed_1045 Gsiv;// Offset=0x0 Size=0x18
};

struct _WHEA_NOTIFICATION_DESCRIPTOR// Size=0x1c (Id=1047)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Length;// Offset=0x1 Size=0x1
    union _WHEA_NOTIFICATION_FLAGS Flags;// Offset=0x2 Size=0x2
    union _unnamed_1046 u;// Offset=0x4 Size=0x18
};
