union _unnamed_712// Size=0x4 (Id=712)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long Gts_2_5:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long Gts_5_0:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long Gts_8_0:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long Gts_16_0:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long Gts_32_0:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long Gts_64_0:1;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1
        unsigned long Reserved:26;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1a
    };
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};

enum _PCI_LINK_SPEED
{
    PciLinkSpeed2_5Gts=0,
    PciLinkSpeed5_0Gts=1,
    PciLinkSpeed8_0Gts=2,
    PciLinkSpeed16_0Gts=3,
    PciLinkSpeed32_0Gts=4,
    PciLinkSpeed64_0Gts=5,
    PciLinkSpeedMax=6
};

struct _PCI_LINK_INFORMATION// Size=0xc (Id=713)
{
    union _unnamed_712 AvailableLinkSpeeds;// Offset=0x0 Size=0x4
    unsigned short LinkWidth;// Offset=0x4 Size=0x2
    enum _PCI_LINK_SPEED CurrentLinkSpeed;// Offset=0x8 Size=0x4
};

union _unnamed_702// Size=0x4 (Id=702)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long Enabled:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long LinkRateChangeInProgress:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long TerminateThread:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long Reserved:29;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1d
    };
    unsigned long AsUlong;// Offset=0x0 Size=0x4
};

struct _unnamed_704// Size=0x28 (Id=704)
{
    long long UpDataBytes;// Offset=0x0 Size=0x8
    long long DownDataBytes;// Offset=0x8 Size=0x8
    unsigned long long ScaleUpStartTimestamp;// Offset=0x10 Size=0x8
    unsigned long long ScaleDownStartTimestamp;// Offset=0x18 Size=0x8
    enum _PCI_LINK_SPEED MaxSupportedLinkSpeed;// Offset=0x20 Size=0x4
    enum _PCI_LINK_SPEED MaxLinkSpeed;// Offset=0x24 Size=0x4
};

enum _PO_EFFECTIVE_POWER_MODE
{
    PoEffectivePowerModeBatterySaver=0,
    PoEffectivePowerModeEnergySaverHighSavings=0,
    PoEffectivePowerModeBetterBattery=1,
    PoEffectivePowerModeEnergySaverStandard=1,
    PoEffectivePowerModeBalanced=2,
    PoEffectivePowerModeHighPerformance=3,
    PoEffectivePowerModeMaxPerformance=4,
    PoEffectivePowerModeGameMode=5,
    PoEffectivePowerModeMixedReality=6
};

enum _DLRM_POWER_MODE
{
    PowerModeUnknown=0,
    PowerModeBalanced=1,
    PowerModeLowPower=2,
    PowerModeHighPerformance=3
};

struct _unnamed_707// Size=0x10 (Id=707)
{
    void * EffectivePowerModeHandle;// Offset=0x0 Size=0x8
    enum _PO_EFFECTIVE_POWER_MODE EffectivePowerMode;// Offset=0x8 Size=0x4
    enum _DLRM_POWER_MODE DLRMPowerMode;// Offset=0xc Size=0x4
};

struct _LIST_ENTRY// Size=0x10 (Id=5)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _DISPATCHER_HEADER// Size=0x18 (Id=919)
{
    union // Size=0x4 (Id=0)
    {
        long Lock;// Offset=0x0 Size=0x4
        long LockNV;// Offset=0x0 Size=0x4
        unsigned char Type;// Offset=0x0 Size=0x1
        unsigned char Signalling;// Offset=0x1 Size=0x1
        unsigned char Size;// Offset=0x2 Size=0x1
        unsigned char Reserved1;// Offset=0x3 Size=0x1
        unsigned char TimerType;// Offset=0x0 Size=0x1
        union // Size=0x1 (Id=0)
        {
            unsigned char TimerControlFlags;// Offset=0x1 Size=0x1
            struct // Size=0x1 (Id=0)
            {
                unsigned char Absolute:1;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x1
                unsigned char Wake:1;// Offset=0x1 Size=0x1 BitOffset=0x1 BitSize=0x1
                unsigned char EncodedTolerableDelay:6;// Offset=0x1 Size=0x1 BitOffset=0x2 BitSize=0x6
            };
        };
        unsigned char Hand;// Offset=0x2 Size=0x1
        unsigned char TimerMiscFlags;// Offset=0x3 Size=0x1
        struct // Size=0x1 (Id=0)
        {
            unsigned char Index:6;// Offset=0x3 Size=0x1 BitOffset=0x0 BitSize=0x6
            unsigned char Inserted:1;// Offset=0x3 Size=0x1 BitOffset=0x6 BitSize=0x1
            unsigned char Expired:1;// Offset=0x3 Size=0x1 BitOffset=0x7 BitSize=0x1
        };
        unsigned char Timer2Type;// Offset=0x0 Size=0x1
        union // Size=0x1 (Id=0)
        {
            unsigned char Timer2Flags;// Offset=0x1 Size=0x1
            struct // Size=0x1 (Id=0)
            {
                unsigned char Timer2Inserted:1;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x1
                unsigned char Timer2Expiring:1;// Offset=0x1 Size=0x1 BitOffset=0x1 BitSize=0x1
                unsigned char Timer2CancelPending:1;// Offset=0x1 Size=0x1 BitOffset=0x2 BitSize=0x1
                unsigned char Timer2SetPending:1;// Offset=0x1 Size=0x1 BitOffset=0x3 BitSize=0x1
                unsigned char Timer2Running:1;// Offset=0x1 Size=0x1 BitOffset=0x4 BitSize=0x1
                unsigned char Timer2Disabled:1;// Offset=0x1 Size=0x1 BitOffset=0x5 BitSize=0x1
                unsigned char Timer2ReservedFlags:2;// Offset=0x1 Size=0x1 BitOffset=0x6 BitSize=0x2
            };
        };
        unsigned char Timer2ComponentId;// Offset=0x2 Size=0x1
        unsigned char Timer2RelativeId;// Offset=0x3 Size=0x1
        unsigned char QueueType;// Offset=0x0 Size=0x1
        union // Size=0x1 (Id=0)
        {
            unsigned char QueueControlFlags;// Offset=0x1 Size=0x1
            struct // Size=0x1 (Id=0)
            {
                unsigned char Abandoned:1;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x1
                unsigned char DisableIncrement:1;// Offset=0x1 Size=0x1 BitOffset=0x1 BitSize=0x1
                unsigned char QueueReservedControlFlags:6;// Offset=0x1 Size=0x1 BitOffset=0x2 BitSize=0x6
            };
        };
        unsigned char QueueSize;// Offset=0x2 Size=0x1
        unsigned char QueueReserved;// Offset=0x3 Size=0x1
        unsigned char ThreadType;// Offset=0x0 Size=0x1
        unsigned char ThreadReserved;// Offset=0x1 Size=0x1
        union // Size=0x1 (Id=0)
        {
            unsigned char ThreadControlFlags;// Offset=0x2 Size=0x1
            struct // Size=0x1 (Id=0)
            {
                unsigned char CycleProfiling:1;// Offset=0x2 Size=0x1 BitOffset=0x0 BitSize=0x1
                unsigned char CounterProfiling:1;// Offset=0x2 Size=0x1 BitOffset=0x1 BitSize=0x1
                unsigned char GroupScheduling:1;// Offset=0x2 Size=0x1 BitOffset=0x2 BitSize=0x1
                unsigned char AffinitySet:1;// Offset=0x2 Size=0x1 BitOffset=0x3 BitSize=0x1
                unsigned char Tagged:1;// Offset=0x2 Size=0x1 BitOffset=0x4 BitSize=0x1
                unsigned char EnergyProfiling:1;// Offset=0x2 Size=0x1 BitOffset=0x5 BitSize=0x1
                unsigned char SchedulerAssist:1;// Offset=0x2 Size=0x1 BitOffset=0x6 BitSize=0x1
                unsigned char ThreadReservedControlFlags:1;// Offset=0x2 Size=0x1 BitOffset=0x7 BitSize=0x1
            };
        };
        unsigned char DebugActive;// Offset=0x3 Size=0x1
        struct // Size=0x1 (Id=0)
        {
            unsigned char ActiveDR7:1;// Offset=0x3 Size=0x1 BitOffset=0x0 BitSize=0x1
            unsigned char Instrumented:1;// Offset=0x3 Size=0x1 BitOffset=0x1 BitSize=0x1
            unsigned char Minimal:1;// Offset=0x3 Size=0x1 BitOffset=0x2 BitSize=0x1
            unsigned char Reserved4:2;// Offset=0x3 Size=0x1 BitOffset=0x3 BitSize=0x2
            unsigned char AltSyscall:1;// Offset=0x3 Size=0x1 BitOffset=0x5 BitSize=0x1
            unsigned char Emulation:1;// Offset=0x3 Size=0x1 BitOffset=0x6 BitSize=0x1
            unsigned char Reserved5:1;// Offset=0x3 Size=0x1 BitOffset=0x7 BitSize=0x1
        };
        unsigned char MutantType;// Offset=0x0 Size=0x1
        unsigned char MutantSize;// Offset=0x1 Size=0x1
        unsigned char DpcActive;// Offset=0x2 Size=0x1
        unsigned char MutantReserved;// Offset=0x3 Size=0x1
    };
    long SignalState;// Offset=0x4 Size=0x4
    struct _LIST_ENTRY WaitListHead;// Offset=0x8 Size=0x10
};

struct _KEVENT// Size=0x18 (Id=21)
{
    struct _DISPATCHER_HEADER Header;// Offset=0x0 Size=0x18
};

struct _DLRM_TELEMETRY// Size=0x78 (Id=1280)
{
    unsigned long long PciGenStartTime;// Offset=0x0 Size=0x8
    unsigned long long PciGenTotalTime[6];// Offset=0x8 Size=0x30
    unsigned long ScaleUpRequestCount;// Offset=0x38 Size=0x4
    unsigned long ScaleDownRequestCount;// Offset=0x3c Size=0x4
    unsigned long LinkRateChangeCountTotal;// Offset=0x40 Size=0x4
    unsigned long long LinkRateChangeTimeTotal;// Offset=0x48 Size=0x8
    unsigned long long LinkRateChangeTimeMax;// Offset=0x50 Size=0x8
    unsigned long long LinkRateChangeTimeMin;// Offset=0x58 Size=0x8
    unsigned long EffectivePowerModeChangeCount;// Offset=0x60 Size=0x4
    unsigned long DripsChangeCount;// Offset=0x64 Size=0x4
    unsigned long LinkConfigInterfaceErrorCount;// Offset=0x68 Size=0x4
    unsigned long ThermalThrottleCount;// Offset=0x6c Size=0x4
    unsigned long UnexpectedLinkSpeedCount;// Offset=0x70 Size=0x4
};

struct _DLRM_CONTEXT// Size=0x120 (Id=708)
{
    struct _PCI_LINK_INFORMATION LinkInfo;// Offset=0x0 Size=0xc
    union _unnamed_702 Flags;// Offset=0xc Size=0x4
    void * Adapter;// Offset=0x10 Size=0x8
    struct _unnamed_704 LinkRateManagement;// Offset=0x18 Size=0x28
    struct _unnamed_707 Power;// Offset=0x40 Size=0x10
    void * ThreadHandle;// Offset=0x50 Size=0x8
    struct _KEVENT DlrmEvent;// Offset=0x58 Size=0x18
    unsigned long long ContextLock;// Offset=0x70 Size=0x8
    struct _LIST_ENTRY WorkItemFreeList;// Offset=0x78 Size=0x10
    unsigned long long WorkItemFreeListLock;// Offset=0x88 Size=0x8
    struct _LIST_ENTRY WorkItemList;// Offset=0x90 Size=0x10
    unsigned long long WorkItemListLock;// Offset=0xa0 Size=0x8
    struct _DLRM_TELEMETRY Telemetry;// Offset=0xa8 Size=0x78
};
