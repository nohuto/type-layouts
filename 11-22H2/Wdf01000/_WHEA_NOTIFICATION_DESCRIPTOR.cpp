union _WHEA_NOTIFICATION_FLAGS// Size=0x2 (Id=621)
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

struct _WHEA_NOTIFICATION_DESCRIPTOR// Size=0x1c (Id=2104)
{
    union // Size=0x4 (Id=0)
    {
        unsigned char Type;// Offset=0x0 Size=0x1
        unsigned char Length;// Offset=0x1 Size=0x1
        union _WHEA_NOTIFICATION_FLAGS Flags;// Offset=0x2 Size=0x2
        union <unnamed-type-u>// Size=0x18 (Id=25159)
        {
            struct <unnamed-type-Polled>// Size=0x4 (Id=25160)
            {
                unsigned long PollInterval;// Offset=0x0 Size=0x4
            };
            struct _WHEA_NOTIFICATION_DESCRIPTOR::<unnamed-type-u>::<unnamed-type-Polled> Polled;// Offset=0x0 Size=0x4
            struct <unnamed-type-Interrupt>// Size=0x18 (Id=25163)
            {
                unsigned long PollInterval;// Offset=0x0 Size=0x4
                unsigned long Vector;// Offset=0x4 Size=0x4
                unsigned long SwitchToPollingThreshold;// Offset=0x8 Size=0x4
                unsigned long SwitchToPollingWindow;// Offset=0xc Size=0x4
                unsigned long ErrorThreshold;// Offset=0x10 Size=0x4
                unsigned long ErrorThresholdWindow;// Offset=0x14 Size=0x4
            };
            struct _WHEA_NOTIFICATION_DESCRIPTOR::<unnamed-type-u>::<unnamed-type-Interrupt> Interrupt;// Offset=0x0 Size=0x18
            struct <unnamed-type-LocalInterrupt>// Size=0x18 (Id=25171)
            {
                unsigned long PollInterval;// Offset=0x0 Size=0x4
                unsigned long Vector;// Offset=0x4 Size=0x4
                unsigned long SwitchToPollingThreshold;// Offset=0x8 Size=0x4
                unsigned long SwitchToPollingWindow;// Offset=0xc Size=0x4
                unsigned long ErrorThreshold;// Offset=0x10 Size=0x4
                unsigned long ErrorThresholdWindow;// Offset=0x14 Size=0x4
            };
            struct _WHEA_NOTIFICATION_DESCRIPTOR::<unnamed-type-u>::<unnamed-type-LocalInterrupt> LocalInterrupt;// Offset=0x0 Size=0x18
            struct <unnamed-type-Sci>// Size=0x18 (Id=25179)
            {
                unsigned long PollInterval;// Offset=0x0 Size=0x4
                unsigned long Vector;// Offset=0x4 Size=0x4
                unsigned long SwitchToPollingThreshold;// Offset=0x8 Size=0x4
                unsigned long SwitchToPollingWindow;// Offset=0xc Size=0x4
                unsigned long ErrorThreshold;// Offset=0x10 Size=0x4
                unsigned long ErrorThresholdWindow;// Offset=0x14 Size=0x4
            };
            struct _WHEA_NOTIFICATION_DESCRIPTOR::<unnamed-type-u>::<unnamed-type-Sci> Sci;// Offset=0x0 Size=0x18
            struct <unnamed-type-Nmi>// Size=0x18 (Id=25187)
            {
                unsigned long PollInterval;// Offset=0x0 Size=0x4
                unsigned long Vector;// Offset=0x4 Size=0x4
                unsigned long SwitchToPollingThreshold;// Offset=0x8 Size=0x4
                unsigned long SwitchToPollingWindow;// Offset=0xc Size=0x4
                unsigned long ErrorThreshold;// Offset=0x10 Size=0x4
                unsigned long ErrorThresholdWindow;// Offset=0x14 Size=0x4
            };
            struct _WHEA_NOTIFICATION_DESCRIPTOR::<unnamed-type-u>::<unnamed-type-Nmi> Nmi;// Offset=0x0 Size=0x18
            struct <unnamed-type-Sea>// Size=0x18 (Id=25195)
            {
                unsigned long PollInterval;// Offset=0x0 Size=0x4
                unsigned long Vector;// Offset=0x4 Size=0x4
                unsigned long SwitchToPollingThreshold;// Offset=0x8 Size=0x4
                unsigned long SwitchToPollingWindow;// Offset=0xc Size=0x4
                unsigned long ErrorThreshold;// Offset=0x10 Size=0x4
                unsigned long ErrorThresholdWindow;// Offset=0x14 Size=0x4
            };
            struct _WHEA_NOTIFICATION_DESCRIPTOR::<unnamed-type-u>::<unnamed-type-Sea> Sea;// Offset=0x0 Size=0x18
            struct <unnamed-type-Sei>// Size=0x18 (Id=25203)
            {
                unsigned long PollInterval;// Offset=0x0 Size=0x4
                unsigned long Vector;// Offset=0x4 Size=0x4
                unsigned long SwitchToPollingThreshold;// Offset=0x8 Size=0x4
                unsigned long SwitchToPollingWindow;// Offset=0xc Size=0x4
                unsigned long ErrorThreshold;// Offset=0x10 Size=0x4
                unsigned long ErrorThresholdWindow;// Offset=0x14 Size=0x4
            };
            struct _WHEA_NOTIFICATION_DESCRIPTOR::<unnamed-type-u>::<unnamed-type-Sei> Sei;// Offset=0x0 Size=0x18
            struct <unnamed-type-Gsiv>// Size=0x18 (Id=25211)
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
    };
    union _WHEA_NOTIFICATION_DESCRIPTOR::<unnamed-type-u> u;// Offset=0x4 Size=0x18
};
