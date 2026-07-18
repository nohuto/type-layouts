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

struct _unnamed_798// Size=0xc (Id=798)
{
    enum _SYSTEM_POWER_STATE SystemPowerState;// Offset=0x0 Size=0x4
    enum _SYSTEM_POWER_STATE PreviousSystemState;// Offset=0x4 Size=0x4
    enum POWER_ACTION SystemPowerAction;// Offset=0x8 Size=0x4
};
