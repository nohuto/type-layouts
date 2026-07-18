enum _SYSTEM_POWER_STATE
{
    PowerSystemUnspecified=0,
    PowerSystemWorking=1,
    PowerSystemSleeping1=2,
    PowerSystemSleeping2=3,
    PowerSystemSleeping3=4,
    PowerSystemHibernate=5,
    PowerSystemShutdown=6,
    PowerSystemMaximum=7
};

struct _SYSTEM_POWER_POLICY// Size=0xe8 (Id=1348)
{
    unsigned long Revision;// Offset=0x0 Size=0x4
    struct POWER_ACTION_POLICY PowerButton;// Offset=0x4 Size=0xc
    struct POWER_ACTION_POLICY SleepButton;// Offset=0x10 Size=0xc
    struct POWER_ACTION_POLICY LidClose;// Offset=0x1c Size=0xc
    enum _SYSTEM_POWER_STATE LidOpenWake;// Offset=0x28 Size=0x4
    unsigned long Reserved;// Offset=0x2c Size=0x4
    struct POWER_ACTION_POLICY Idle;// Offset=0x30 Size=0xc
    unsigned long IdleTimeout;// Offset=0x3c Size=0x4
    unsigned char IdleSensitivity;// Offset=0x40 Size=0x1
    unsigned char DynamicThrottle;// Offset=0x41 Size=0x1
    unsigned char Spare2[2];// Offset=0x42 Size=0x2
    enum _SYSTEM_POWER_STATE MinSleep;// Offset=0x44 Size=0x4
    enum _SYSTEM_POWER_STATE MaxSleep;// Offset=0x48 Size=0x4
    enum _SYSTEM_POWER_STATE ReducedLatencySleep;// Offset=0x4c Size=0x4
    unsigned long WinLogonFlags;// Offset=0x50 Size=0x4
    unsigned long Spare3;// Offset=0x54 Size=0x4
    unsigned long DozeS4Timeout;// Offset=0x58 Size=0x4
    unsigned long BroadcastCapacityResolution;// Offset=0x5c Size=0x4
    struct SYSTEM_POWER_LEVEL DischargePolicy[4];// Offset=0x60 Size=0x60
    unsigned long VideoTimeout;// Offset=0xc0 Size=0x4
    unsigned char VideoDimDisplay;// Offset=0xc4 Size=0x1
    unsigned long VideoReserved[3];// Offset=0xc8 Size=0xc
    unsigned long SpindownTimeout;// Offset=0xd4 Size=0x4
    unsigned char OptimizeForPower;// Offset=0xd8 Size=0x1
    unsigned char FanThrottleTolerance;// Offset=0xd9 Size=0x1
    unsigned char ForcedThrottle;// Offset=0xda Size=0x1
    unsigned char MinThrottle;// Offset=0xdb Size=0x1
    struct POWER_ACTION_POLICY OverThrottled;// Offset=0xdc Size=0xc
};

struct _POP_POWER_SETTING_VALUES// Size=0x148 (Id=2280)
{
    unsigned long StructureSize;// Offset=0x0 Size=0x4
    struct _SYSTEM_POWER_POLICY PopPolicy;// Offset=0x4 Size=0xe8
    enum SYSTEM_POWER_CONDITION CurrentAcDcPowerState;// Offset=0xec Size=0x4
    unsigned char AwayModeEnabled;// Offset=0xf0 Size=0x1
    unsigned char AwayModeEngaged;// Offset=0xf1 Size=0x1
    unsigned char AwayModePolicyAllowed;// Offset=0xf2 Size=0x1
    long AwayModeIgnoreUserPresent;// Offset=0xf4 Size=0x4
    long AwayModeIgnoreAction;// Offset=0xf8 Size=0x4
    unsigned char DisableFastS4;// Offset=0xfc Size=0x1
    unsigned char DisableStandbyStates;// Offset=0xfd Size=0x1
    unsigned long UnattendSleepTimeout;// Offset=0x100 Size=0x4
    unsigned long DiskIgnoreTime;// Offset=0x104 Size=0x4
    unsigned long DeviceIdlePolicy;// Offset=0x108 Size=0x4
    unsigned long VideoDimTimeout;// Offset=0x10c Size=0x4
    unsigned long VideoNormalBrightness;// Offset=0x110 Size=0x4
    unsigned long VideoDimBrightness;// Offset=0x114 Size=0x4
    unsigned long AlsOffset;// Offset=0x118 Size=0x4
    unsigned long AlsEnabled;// Offset=0x11c Size=0x4
    unsigned long EsBrightness;// Offset=0x120 Size=0x4
    unsigned char SwitchShutdownForced;// Offset=0x124 Size=0x1
    unsigned long SystemCoolingPolicy;// Offset=0x128 Size=0x4
    unsigned char MediaBufferingEngaged;// Offset=0x12c Size=0x1
    unsigned char AudioActivity;// Offset=0x12d Size=0x1
    unsigned char FullscreenVideoPlayback;// Offset=0x12e Size=0x1
    unsigned long EsBatteryThreshold;// Offset=0x130 Size=0x4
    unsigned char EsAggressive;// Offset=0x134 Size=0x1
    unsigned char EsUserAwaySetting;// Offset=0x135 Size=0x1
    unsigned long ConnectivityInStandby;// Offset=0x138 Size=0x4
    unsigned long DisconnectedStandbyMode;// Offset=0x13c Size=0x4
    unsigned long UserPresencePredictionEnabled;// Offset=0x140 Size=0x4
    unsigned char AirplaneModeEnabled;// Offset=0x144 Size=0x1
    unsigned char BluetoothDeviceCharging;// Offset=0x145 Size=0x1
};
