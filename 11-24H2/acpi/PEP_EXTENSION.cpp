struct _LIST_ENTRY// Size=0x10 (Id=35)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _DISPATCHER_HEADER// Size=0x18 (Id=329)
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

struct _KEVENT// Size=0x18 (Id=105)
{
    struct _DISPATCHER_HEADER Header;// Offset=0x0 Size=0x18
};

struct _FAST_MUTEX// Size=0x38 (Id=103)
{
    long Count;// Offset=0x0 Size=0x4
    void * Owner;// Offset=0x8 Size=0x8
    unsigned long Contention;// Offset=0x10 Size=0x4
    struct _KEVENT Event;// Offset=0x18 Size=0x18
    unsigned long OldIrql;// Offset=0x30 Size=0x4
};

enum _PEP_PLATFORM_NOTIFICATION_STATE
{
    NotificationStateNone=0,
    NotificationStateUserIdle=1,
    NotificationStateSleep=2,
    NotificationStateStandby=3,
    NotificationStateMax=4
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

enum _MONITOR_DISPLAY_STATE
{
    PowerMonitorOff=0,
    PowerMonitorOn=1,
    PowerMonitorDim=2
};

enum _USER_ACTIVITY_PRESENCE
{
    PowerUserPresent=0,
    PowerUserNotPresent=1,
    PowerUserInactive=2,
    PowerUserMaximum=3,
    PowerUserInvalid=3
};

struct PEP_EXTENSION// Size=0xd0 (Id=571)
{
    struct EXTENSION_WORKER WorkQueue;// Offset=0x0 Size=0x18
    struct _FAST_MUTEX NotificationLock;// Offset=0x18 Size=0x38
    unsigned char CallbacksRegistered;// Offset=0x50 Size=0x1
    union // Size=0x4 (Id=0)
    {
        unsigned long NotifySupport;// Offset=0x54 Size=0x4
        struct // Size=0x4 (Id=0)
        {
            unsigned long StandbyNotifySupported:1;// Offset=0x54 Size=0x4 BitOffset=0x0 BitSize=0x1
            unsigned long UserIdleNotifySupported:1;// Offset=0x54 Size=0x4 BitOffset=0x1 BitSize=0x1
            unsigned long SleepNotifySupported:1;// Offset=0x54 Size=0x4 BitOffset=0x2 BitSize=0x1
            unsigned long DisplayIntentNotifySupported:1;// Offset=0x54 Size=0x4 BitOffset=0x3 BitSize=0x1
            unsigned long Reserved:28;// Offset=0x54 Size=0x4 BitOffset=0x4 BitSize=0x1c
        };
    };
    enum _PEP_PLATFORM_NOTIFICATION_STATE CurrentPlatformNotificationState;// Offset=0x58 Size=0x4
    enum _PEP_PLATFORM_NOTIFICATION_STATE TargetPlatformNotificationState;// Offset=0x5c Size=0x4
    unsigned char PendingDisplayIntentNotification;// Offset=0x60 Size=0x1
    unsigned char EpmNotifySupport;// Offset=0x61 Size=0x1
    unsigned long EpmVersion;// Offset=0x64 Size=0x4
    enum _PO_EFFECTIVE_POWER_MODE CurrentEffectivePowerMode;// Offset=0x68 Size=0x4
    enum _PO_EFFECTIVE_POWER_MODE TargetEffectivePowerMode;// Offset=0x6c Size=0x4
    struct PO_EPM_HANDLE__ * EpmRegistration;// Offset=0x70 Size=0x8
    unsigned char PendingEpmNotification;// Offset=0x78 Size=0x1
    unsigned char WorkerQueued;// Offset=0x79 Size=0x1
    enum _MONITOR_DISPLAY_STATE ConsoleDisplayState;// Offset=0x7c Size=0x4
    enum _USER_ACTIVITY_PRESENCE GlobalUserPresence;// Offset=0x80 Size=0x4
    void * IrEngagedRegistration;// Offset=0x88 Size=0x8
    void * ConsoleDisplayStateRegistration;// Offset=0x90 Size=0x8
    void * UserPresenceRegistration;// Offset=0x98 Size=0x8
    void * LowPowerEpochRegistration;// Offset=0xa0 Size=0x8
    struct _EX_WNF_SUBSCRIPTION * DisplayIntentRegistration;// Offset=0xa8 Size=0x8
    struct _EX_WNF_SUBSCRIPTION * MsNotificationRegistration;// Offset=0xb0 Size=0x8
    struct _KEVENT StopEvent;// Offset=0xb8 Size=0x18
};
