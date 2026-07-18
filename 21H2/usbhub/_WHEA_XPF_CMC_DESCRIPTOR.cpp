union _WHEA_NOTIFICATION_FLAGS// Size=0x2 (Id=472)
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

struct _anonymous_378// Size=0x4 (Id=378)
{
    unsigned long PollInterval;// Offset=0x0 Size=0x4
};

struct _anonymous_379// Size=0x18 (Id=379)
{
    unsigned long PollInterval;// Offset=0x0 Size=0x4
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long SwitchToPollingThreshold;// Offset=0x8 Size=0x4
    unsigned long SwitchToPollingWindow;// Offset=0xc Size=0x4
    unsigned long ErrorThreshold;// Offset=0x10 Size=0x4
    unsigned long ErrorThresholdWindow;// Offset=0x14 Size=0x4
};

union _anonymous_380// Size=0x18 (Id=380)
{
    struct _anonymous_378 Polled;// Offset=0x0 Size=0x4
    struct _anonymous_379 Interrupt;// Offset=0x0 Size=0x18
    struct _anonymous_379 LocalInterrupt;// Offset=0x0 Size=0x18
    struct _anonymous_379 Sci;// Offset=0x0 Size=0x18
    struct _anonymous_379 Nmi;// Offset=0x0 Size=0x18
    struct _anonymous_379 Sea;// Offset=0x0 Size=0x18
    struct _anonymous_379 Sei;// Offset=0x0 Size=0x18
    struct _anonymous_379 Gsiv;// Offset=0x0 Size=0x18
};

struct _WHEA_NOTIFICATION_DESCRIPTOR// Size=0x1c (Id=381)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Length;// Offset=0x1 Size=0x1
    union _WHEA_NOTIFICATION_FLAGS Flags;// Offset=0x2 Size=0x2
    union _anonymous_380 u;// Offset=0x4 Size=0x18
};

union _XPF_MC_BANK_FLAGS// Size=0x1 (Id=459)
{
    struct // Size=0x1 (Id=0)
    {
        unsigned char ClearOnInitializationRW:1;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char ControlDataRW:1;// Offset=0x0 Size=0x1 BitOffset=0x1 BitSize=0x1
        unsigned char Reserved:6;// Offset=0x0 Size=0x1 BitOffset=0x2 BitSize=0x6
    };
    unsigned char AsUCHAR;// Offset=0x0 Size=0x1
};

struct _WHEA_XPF_MC_BANK_DESCRIPTOR// Size=0x1c (Id=434)
{
    unsigned char BankNumber;// Offset=0x0 Size=0x1
    unsigned char ClearOnInitialization;// Offset=0x1 Size=0x1
    unsigned char StatusDataFormat;// Offset=0x2 Size=0x1
    union _XPF_MC_BANK_FLAGS Flags;// Offset=0x3 Size=0x1
    unsigned long ControlMsr;// Offset=0x4 Size=0x4
    unsigned long StatusMsr;// Offset=0x8 Size=0x4
    unsigned long AddressMsr;// Offset=0xc Size=0x4
    unsigned long MiscMsr;// Offset=0x10 Size=0x4
    unsigned long long ControlData;// Offset=0x14 Size=0x8
};

struct _WHEA_XPF_CMC_DESCRIPTOR// Size=0x3a4 (Id=300)
{
    unsigned short Type;// Offset=0x0 Size=0x2
    unsigned char Enabled;// Offset=0x2 Size=0x1
    unsigned char NumberOfBanks;// Offset=0x3 Size=0x1
    unsigned long Reserved;// Offset=0x4 Size=0x4
    struct _WHEA_NOTIFICATION_DESCRIPTOR Notify;// Offset=0x8 Size=0x1c
    struct _WHEA_XPF_MC_BANK_DESCRIPTOR Banks[32];// Offset=0x24 Size=0x380
};
