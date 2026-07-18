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

struct _unnamed_633// Size=0x4 (Id=633)
{
    enum _SYSTEM_POWER_STATE EjectPowerState;// Offset=0x0 Size=0x4
};
