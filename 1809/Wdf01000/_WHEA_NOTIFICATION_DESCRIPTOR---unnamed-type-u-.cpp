union _WHEA_NOTIFICATION_DESCRIPTOR::<unnamed-type-u>// Size=0x18 (Id=4534)
{
    struct <unnamed-type-Polled>// Size=0x4 (Id=29816)
    {
        unsigned long PollInterval;// Offset=0x0 Size=0x4
    };
    struct _WHEA_NOTIFICATION_DESCRIPTOR::<unnamed-type-u>::<unnamed-type-Polled> Polled;// Offset=0x0 Size=0x4
    struct <unnamed-type-Interrupt>// Size=0x18 (Id=29819)
    {
        unsigned long PollInterval;// Offset=0x0 Size=0x4
        unsigned long Vector;// Offset=0x4 Size=0x4
        unsigned long SwitchToPollingThreshold;// Offset=0x8 Size=0x4
        unsigned long SwitchToPollingWindow;// Offset=0xc Size=0x4
        unsigned long ErrorThreshold;// Offset=0x10 Size=0x4
        unsigned long ErrorThresholdWindow;// Offset=0x14 Size=0x4
    };
    struct _WHEA_NOTIFICATION_DESCRIPTOR::<unnamed-type-u>::<unnamed-type-Interrupt> Interrupt;// Offset=0x0 Size=0x18
    struct <unnamed-type-LocalInterrupt>// Size=0x18 (Id=29827)
    {
        unsigned long PollInterval;// Offset=0x0 Size=0x4
        unsigned long Vector;// Offset=0x4 Size=0x4
        unsigned long SwitchToPollingThreshold;// Offset=0x8 Size=0x4
        unsigned long SwitchToPollingWindow;// Offset=0xc Size=0x4
        unsigned long ErrorThreshold;// Offset=0x10 Size=0x4
        unsigned long ErrorThresholdWindow;// Offset=0x14 Size=0x4
    };
    struct _WHEA_NOTIFICATION_DESCRIPTOR::<unnamed-type-u>::<unnamed-type-LocalInterrupt> LocalInterrupt;// Offset=0x0 Size=0x18
    struct <unnamed-type-Sci>// Size=0x18 (Id=29835)
    {
        unsigned long PollInterval;// Offset=0x0 Size=0x4
        unsigned long Vector;// Offset=0x4 Size=0x4
        unsigned long SwitchToPollingThreshold;// Offset=0x8 Size=0x4
        unsigned long SwitchToPollingWindow;// Offset=0xc Size=0x4
        unsigned long ErrorThreshold;// Offset=0x10 Size=0x4
        unsigned long ErrorThresholdWindow;// Offset=0x14 Size=0x4
    };
    struct _WHEA_NOTIFICATION_DESCRIPTOR::<unnamed-type-u>::<unnamed-type-Sci> Sci;// Offset=0x0 Size=0x18
    struct <unnamed-type-Nmi>// Size=0x18 (Id=29843)
    {
        unsigned long PollInterval;// Offset=0x0 Size=0x4
        unsigned long Vector;// Offset=0x4 Size=0x4
        unsigned long SwitchToPollingThreshold;// Offset=0x8 Size=0x4
        unsigned long SwitchToPollingWindow;// Offset=0xc Size=0x4
        unsigned long ErrorThreshold;// Offset=0x10 Size=0x4
        unsigned long ErrorThresholdWindow;// Offset=0x14 Size=0x4
    };
    struct _WHEA_NOTIFICATION_DESCRIPTOR::<unnamed-type-u>::<unnamed-type-Nmi> Nmi;// Offset=0x0 Size=0x18
    struct <unnamed-type-Sea>// Size=0x18 (Id=29851)
    {
        unsigned long PollInterval;// Offset=0x0 Size=0x4
        unsigned long Vector;// Offset=0x4 Size=0x4
        unsigned long SwitchToPollingThreshold;// Offset=0x8 Size=0x4
        unsigned long SwitchToPollingWindow;// Offset=0xc Size=0x4
        unsigned long ErrorThreshold;// Offset=0x10 Size=0x4
        unsigned long ErrorThresholdWindow;// Offset=0x14 Size=0x4
    };
    struct _WHEA_NOTIFICATION_DESCRIPTOR::<unnamed-type-u>::<unnamed-type-Sea> Sea;// Offset=0x0 Size=0x18
    struct <unnamed-type-Sei>// Size=0x18 (Id=29859)
    {
        unsigned long PollInterval;// Offset=0x0 Size=0x4
        unsigned long Vector;// Offset=0x4 Size=0x4
        unsigned long SwitchToPollingThreshold;// Offset=0x8 Size=0x4
        unsigned long SwitchToPollingWindow;// Offset=0xc Size=0x4
        unsigned long ErrorThreshold;// Offset=0x10 Size=0x4
        unsigned long ErrorThresholdWindow;// Offset=0x14 Size=0x4
    };
    struct _WHEA_NOTIFICATION_DESCRIPTOR::<unnamed-type-u>::<unnamed-type-Sei> Sei;// Offset=0x0 Size=0x18
    struct <unnamed-type-Gsiv>// Size=0x18 (Id=29867)
    {
        unsigned long PollInterval;// Offset=0x0 Size=0x4
        unsigned long Vector;// Offset=0x4 Size=0x4
        unsigned long SwitchToPollingThreshold;// Offset=0x8 Size=0x4
        unsigned long SwitchToPollingWindow;// Offset=0xc Size=0x4
        unsigned long ErrorThreshold;// Offset=0x10 Size=0x4
        unsigned long ErrorThresholdWindow;// Offset=0x14 Size=0x4
    };
    struct _WHEA_NOTIFICATION_DESCRIPTOR::<unnamed-type-u>::<unnamed-type-Gsiv> Gsiv;// Offset=0x0 Size=0x18
};
