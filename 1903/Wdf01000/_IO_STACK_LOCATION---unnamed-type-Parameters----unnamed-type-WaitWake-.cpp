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

struct _IO_STACK_LOCATION::<unnamed-type-Parameters>::<unnamed-type-WaitWake>// Size=0x4 (Id=498)
{
    enum _SYSTEM_POWER_STATE PowerState;// Offset=0x0 Size=0x4
};
