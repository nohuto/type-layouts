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

struct SYSTEM_POWER_LEVEL// Size=0x18 (Id=1719)
{
    unsigned char Enable;// Offset=0x0 Size=0x1
    unsigned char Spare[3];// Offset=0x1 Size=0x3
    unsigned long BatteryLevel;// Offset=0x4 Size=0x4
    struct POWER_ACTION_POLICY PowerPolicy;// Offset=0x8 Size=0xc
    enum _SYSTEM_POWER_STATE MinSystemState;// Offset=0x14 Size=0x4
};
